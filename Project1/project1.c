#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 7;
	int b = 8;
	int* p = &a;
	printf("%d\n", sizeof(p));
	return 0;
}

/*int Max(int x, int y,int z)
{
	if (x > y)
	{
		if (x > z)
		{
			return x;
		}
		else
		{
			return z;
		}
	}
	else
	{
		if (y > z)
		{
			return y;
		}
		else
		{
			return z;
		}
		
	}
}
int main()
{
	int input1;
	int input2;
	int input3;
	int max;
	printf("���������е����ֵ\n");
	printf("�����룺");
	scanf("%d%d%d", &input1, &input2, &input3);
	max=Max(input1, input2,input3);
	printf("%d\n", max);
}*///���������е����ֵ
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//again:
//	system("shutdown -s -t 60");
//	printf("���ĵ��Լ�����һ�����ڹػ������䶭��������ȡ��\n");
//    scanf("%s", &input);
//	if (strcmp(input, "����������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		if (strcmp(input, "������") == 0)
//		{
//			printf("��������Ϸ����5����Զ��ػ�");
//			system("shutdown -s -t 5");
//		 }
//		else
//		{
//			goto again;
//		}
//	}
//}//�ػ�����
//���׼�������д
//float Add(float x, float y)
//{
//	x += y;
//	return x;
//}
//float Jia(float x, float y)
//{
//	x -= y;
//	return x;
//}
//float CHENG(float x, float y)
//{
//	x *= y;
//	return x;
//}
//float CHU(float x, float y)
//{
//	x /= y;
//	return x;
//}
//int main()
//	{
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	int d = 0;
//	printf("���׼�������\n");
//again:
//	printf("�����벻ͬ���ֽ��벻ͬģʽ��1���ӷ�ģʽ 2������ģʽ 3���˷�ģʽ 4������ģʽ 5���˳�������\n");
//	printf("�����룺");
//	scanf("%d", &d);
//    switch (d)
//	{
//	case 1: scanf("%f%f", &a, &b);
//		c = Add(a, b); printf("%f\n", c); goto again; break;
//	case 2: scanf("%f%f", &a, &b);
//		c = Jia(a, b); printf("%f\n", c); goto again; break;
//	case 3: scanf("%f%f", &a, &b);
//	    c = CHENG(a, b); printf("%f\n", c); goto again; break;
//	case 4: scanf("%f%f", &a, &b); 
//		c = CHU(a, b); printf("%f\n", c); goto again; break;
//	case 5:break;
//	default: printf("��������ȷ����\n");
//		goto again;
//		break;
//	}
//		return 0;
//	}

