// AC 
// ����û���������˱��˵Ľ��ⱨ��ſ����ף����ı�����ȥ��С�ı���
// ��������Ҫ���ڵ���1���������ֵ�ﵽһ����ʱ�������С�������ˡ�
#define LOCAL
#include <iostream>
#include <fstream>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
#endif
	int n;
	double p, q;
	cin >> n;
	while (n--)
	{
		int i = 0;
		cin >> p >> q;
		while (true)
		{
			if ((int)(p * (++i) / 100) < (int)(q * i / 100))
				break;
		}
		cout << i << endl;
	}
	return 0;
}
