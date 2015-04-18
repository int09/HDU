// 并查集的题目，我还没有掌握到并查集的精髓，仅仅是知道有这么个东西
// 以及它的操作，而真正的原理还没懂
// TODO：查阅资料完全了解并查集的使用和原理。
#define LOCAL

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

#define MAX_N 1005
int _par[MAX_N];				// 父亲
int _rank[MAX_N];				// 树的高度

// 初始化n个元素
void init(int n)
{
	for (int i = 0; i < n; i++)
	{
		_par[i] = i;
		_rank[i] = 0;
	}
}

// 查询树的根
int find(int x)
{
	if (_par[x] == x)
		return x;
	else
		return _par[x] = find(_par[x]);
}

// 合并x和y所属的集合
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

// 判断x和y是否属于同一个集合
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