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
//	digui();//���޵ݹ�ѭ����Ҫ�г��ڣ��н�������
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
		//(n-1)���ã��ڽ���������ֵ��
		// result��ʾ��������ʱ���棻
		//��һ�ε��ý��Ϊ5*6��Ȼ�����digui��5�����������ݱ���ʱ���档
		//�ڶ��ε��ý��Ϊ4*5��Ȼ�����digui��4�����������ݱ����档
		//�����ε��ý��Ϊ3*4��Ȼ�����digui��3�����������ݱ����档
		//���Ĵε��ý��Ϊ2*3��Ȼ�����digui��2�����������ݱ����档
		//����ε��ý��Ϊ1*2��Ȼ�����digui��1�����������ݱ����档
		//��ʱdigui(1)���������������ڿ���ִ��return 1����ʱreturn ��һ��ִ�С�
		//��һ��return 1�����ص���1�����ص�digui��2���С�
		//��ʱresult=1*2��������digui��3���У�result=1*2*3*4��
		//������digui(4)�У�result=1*2*3*4*5��
		//������digui��5)�У�result=1*2*3*4*5*6��
	}
	return result;
}