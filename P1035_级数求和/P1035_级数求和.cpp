//已知循环次数用for循环
//已知循环结束条件用while循环
#include <iostream>
using namespace std;
int main()
{
	int k = 0;
	cin >> k;
	double sum = 0.0;
	int n = 0;				
	while (sum < =k)
	{
		n++;
		sum += 1.0 / n;
	}
	cout << n << endl;
	return 0;
}
