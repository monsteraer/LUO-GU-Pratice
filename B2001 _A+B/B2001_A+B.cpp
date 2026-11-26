/*Cpp中最常用的整数类型：int
													long								(-2)e9 -2e9
													long long						(-9)e18-9e18
													unsigned long long		0-1.8e19
注意隐蔽爆炸：int a=1e5,b=1e5;
			wrong		long  longc=a*b;
							cpp中是先算等号右边的再赋值给左边，所以在左边时是int类型已经溢出了
							true long long  c=(long long)a*b;强制类型转换，先把a转为longlong
													*/
#include <iostream>
using namespace std;
int main()
{
    long long a = 0, b = 0;
	cin >> a>> b;
	long long c = a + b;
	cout << c << endl;
	return 0;
}

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
