// ����ʱ��û���Ƴ�������ĺܸ��ӣ��뵽��ͼ�ۣ��������벻�ǣ������һ���㷨��ÿ��
// �Ӷ����ҵ�ǰ������С������Ȼ����Ӳ��ֱ�����Ǹ�ֵ��ֱ��������Сֵ����N����ô
// �㷨�ͽ����ˣ����count������ʼ�����˷º���greater��ʶ��������������һ��
// ͷ�ļ�functional�����Ȼ���TLE�ˡ�
// �����ҽ��ⱨ�棬��������ôһ���㷨��ͨ�����Ƶõ���
// ��һ�ּ��η���һ����N���ˣ���һ���˺�N-1�����е��κ�һ��ͨ�ţ�Ȼ����N-1����ͨ
// �����ٵĴ���������Ϣ������ٺ����һ����ͨ�ţ�����ÿ����һ��������2��ͨ�ųɱ���

#define LOCAL
#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
#endif

	int N;
	cin >> N;
	while (N != 0)
	{
		if (N == 1)
			cout << 0 << endl;
		else if (N == 2)
			cout << 5 << endl;
		else if (N == 3)
			cout << 15 << endl;
		else
			cout << (N * 2 - 4) * 5 << endl;
		cin >> N;
	}
	return 0;
}
