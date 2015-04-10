// AC 
// 这题没看懂，看了别人的解题报告才看明白，最大的比例减去最小的比例
// 乘以人数要大于等于1，把这个差值达到一个人时候就是最小的人数了。
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
