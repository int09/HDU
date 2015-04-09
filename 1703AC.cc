// 做的时候没有推出来，搞的很复杂，想到了图论，后来想想不是，想出了一个算法：每次
// 从堆中找到前两个最小的数，然后相加并分别给他们赋值，直到堆中最小值大于N，那么
// 算法就结束了，输出count。结果最开始出现了仿函数greater不识别的情况，加上了一个
// 头文件functional，解决然后就TLE了。
// 接着找解题报告，出现了这么一个算法，通过递推得到。
// 是一种减治法：一共有N个人，第一个人和N-1个人中的任何一个通信，然后让N-1个人通
// 过最少的次数传递信息，最后再和这第一个人通信，这样每增加一个人增加2次通信成本。

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
