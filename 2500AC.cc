// AC

#include <iostream>
using namespace std;
void print(int x)
{
	for (int k = 0; k < 3 * x; ++k) {
		for (int j = 0; j < x; ++j)
			cout << "HDU";
		cout << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int num;
		cin >> num;
		print(num);
	}
	return 0;
}