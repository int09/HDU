// AC

#include<iostream>
using namespace std;
int main()
{

	int n;
	while (cin >> n && n != 0)
	{
		int cur = 0, floor, total = 0;
		int fs = n;
		while (n--) {
			cin >> floor;
			if (cur < floor) {
				total += (floor - cur) * 6;
			}
			else if (cur >= floor) {
				total += (cur - floor) * 4;
			}
			cur = floor;
		}
		total += fs * 5;
		cout << total << endl;
	}
	return 0;
}