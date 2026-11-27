//暴力枚举
#include<iostream>
using namespace std;
const int MAXN = 10005;			//注意数组用变量定义时有两种：1.不能用普通变量eg：  int x=10000 ;           int A[x];	只能const int x=10000;		int A[x]
int tree[MAXN];																				//					因为数组的长度在编译时就得确定下来，普通变量是程序跑起来之后才知道的
int main()																							//     2.动态数组new（长度运行时才确定的时候用）int x=100005;		int *A=new int [x];用完记得释放
{																										//	delete[ ] tree;
	int l, m;
	cin >> l >> m;
	for (int i = 0; i <= l; i++)			//将有树的位置设为1.被砍掉的位置设为0；
	{                                              //即使有重复的区域也重复赋值为0不影响；
		tree[i] = 1;
	}
	int ans = 0;
	for (int i = 1; i <= m; i++)
	{
		if (tree[i] == 1) ans++;
	}
	cout << ans << endl;
	return 0;
}