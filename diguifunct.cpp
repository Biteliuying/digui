#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int digui(int n);
int main()
{
	printf("digui\n");
	int result= digui(6);
	printf("6!=%d\n", result);
}
//void digui()
//{
//	printf("didididi");
//	digui();//无限递归循环；要有出口，有结束条件
//}
int digui(int n)
{
	int result;
	if (n == 1)
	{
		return 1;
	}
	else
	{
		result = digui(n - 1) * n;
		//(n-1)先用，在将计算结果赋值；
		// result表示将数据暂时保存；
		//第一次调用结果为5*6；然后进入digui（5），这行数据被暂时保存。
		//第二次调用结果为4*5，然后进入digui（4），这行数据被保存。
		//第三次调用结果为3*4，然后进入digui（3），这行数据被保存。
		//第四次调用结果为2*3，然后进入digui（2），这行数据被保存。
		//第五次调用结果为1*2，然后进入digui（1），这行数据被保存。
		//此时digui(1)的条件成立，终于可以执行return 1；此时return 第一次执行。
		//第一次return 1，返回的是1，返回到digui（2）中。
		//此时result=1*2；返回至digui（3）中，result=1*2*3*4。
		//返回至digui(4)中，result=1*2*3*4*5。
		//返回至digui（5)中，result=1*2*3*4*5*6。
	}
	return result;
}