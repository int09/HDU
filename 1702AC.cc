// AC
// ����һ����ͨ��ģ���⣬�Ѷȼ���û�У��տ�ʼ����һ�ε�ʱ��ֱ�ӽ�����
// IN��OUT�����������ҽ�����IN�����int���͵�num������OUTҲ������
// �����������num������ΪOUT���³���

#define LOCAL
#include <iostream>
#include <fstream>
#include <queue>
#include <algorithm>
#include <utility>
#include <string>
#include <stack>

// define two commands
#define	FIFO	"FIFO"
#define	FILO	"FILO"

#define	IN		"IN"
#define	OUT	"OUT"
using namespace std;

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
#endif
	int index;
	cin >> index;
	for (int n = 0; n < index; ++n)
	{
		//		cout << "n case: " << n << endl;
		int ncmd = 0;
		string command;
		cin >> ncmd >> command;
		if (command.compare(FIFO) == 0) {
			// FIFO -> queue
			queue<int> que;
			int num;
			// Subcommands
			string subcmd;

			while (ncmd--) {
				cin >> subcmd;
				if (subcmd.compare(IN) == 0) {
					cin >> num;
					que.push(num);
				}
				else if (subcmd.compare(OUT) == 0) {
					if (que.empty())
						cout << "None" << endl;
					else {
						cout << que.front() << endl;
						que.pop();
					}
				}
			}

		}
		else if (command.compare(FILO) == 0) {
			stack<int> stk;
			int num;
			string subcmd;

			while (ncmd--) {
				cin >> subcmd;
				if (subcmd.compare(IN) == 0) {
					cin >> num;
					stk.push(num);
				}
				else if (subcmd.compare(OUT) == 0) {
					if (stk.empty())
						cout << "None" << endl;
					else {
						cout << stk.top() << endl;
						stk.pop();
					}
				}
			}

		}
	}
	return 0;
}
