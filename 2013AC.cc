// AC

//#define LOCAL
#include <iostream>

#include <fstream>

using namespace std;
int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	while (cin >> n)
	{
		int sum = 1;
		for (int i = 1; i < n; i++)
		{
			sum = (sum + 1) * 2;
		}
		cout << sum << endl;
	}
	return 0;
}