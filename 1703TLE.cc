// TLE

#define LOCAL
#include <iostream>
#include <fstream>
#include <queue>
#include <algorithm>
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
		int count = 0;
		priority_queue<int, vector<int>, greater<int> > pq;
		// Initialize the priority_queue
		for (int i = 0; i < N; ++i)
			pq.push(1);
		int min1, min2, sum;
		while (pq.top() < N)
		{
			min1 = pq.top();
			pq.pop();
			min2 = pq.top();
			pq.pop();
			sum = min1 + min2;
			min1 = sum;
			min2 = sum;
			pq.push(sum);
			pq.push(sum);
			count++;
			//			cout << "Now top" << pq.top() << endl;
			//			cout << "Now size" << pq.size() << endl;
		}
		while (!pq.empty())
		{
			//			cout << "Now pq" << pq.top() << endl;
			pq.pop();
		}

		cout << count * 5 << endl;
		cin >> N;
	}
	return 0;
}
