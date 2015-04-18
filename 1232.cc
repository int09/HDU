// ���鼯����Ŀ���һ�û�����յ����鼯�ľ��裬������֪������ô������
// �Լ����Ĳ�������������ԭ��û��
// TODO������������ȫ�˽Ⲣ�鼯��ʹ�ú�ԭ��
#define LOCAL

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

#define MAX_N 1005
int _par[MAX_N];				// ����
int _rank[MAX_N];				// ���ĸ߶�

// ��ʼ��n��Ԫ��
void init(int n)
{
	for (int i = 0; i < n; i++)
	{
		_par[i] = i;
		_rank[i] = 0;
	}
}

// ��ѯ���ĸ�
int find(int x)
{
	if (_par[x] == x)
		return x;
	else
		return _par[x] = find(_par[x]);
}

// �ϲ�x��y�����ļ���
void unite(int x, int y)
{
	x = find(x);
	y = find(y);
	if (x == y)	return;

	if (_rank[x] < _rank[y]) {
		_par[x] = y;
	}
	else {
		_par[y] = x;
		if (_rank[x] == _rank[y])
			_rank[x]++;
	}
}

// �ж�x��y�Ƿ�����ͬһ������
bool same(int x, int y)
{
	return find(x) == find(y);
}
int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
#endif
	int N, M;
	while (cin >> N >> M && N) {
		for (int i = 0; i < N; ++i)
			_par[i] = i;
		init(N);
		while (M--)
		{
			int x, y;
			cin >> x >> y;
			unite(x, y);
		}
		int num = -1;
		for (int j = 1; j <= N; ++j)
			if (_par[j] == j)
				num++;
		cout << num << endl;
	}
	return 0;
}