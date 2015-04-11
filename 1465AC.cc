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
	long long arr[25];
	arr[1] = 0;
	arr[2] = 1;
	for (int i = 3; i < 25; ++i)
	{
		arr[i] = (i - 1) * (arr[i - 1] + arr[i - 2]);
	}
	int n;
	while (cin >> n)
	{
		cout << arr[n] << endl;
	}
	return 0;
}