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
	printf("求三个数中的最大值\n");
	printf("请输入：");
	scanf("%d%d%d", &input1, &input2, &input3);
	max=Max(input1, input2,input3);
	printf("%d\n", max);
}*///求三个数中的最大值
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//again:
//	system("shutdown -s -t 60");
//	printf("您的电脑即将在一分钟内关机，请输董建斌是猪取消\n");
//    scanf("%s", &input);
//	if (strcmp(input, "董建斌是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		if (strcmp(input, "你是猪") == 0)
//		{
//			printf("不遵守游戏规则，5秒后自动关机");
//			system("shutdown -s -t 5");
//		 }
//		else
//		{
//			goto again;
//		}
//	}
//}//关机程序
//简易计算器编写
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
//	printf("简易计算器：\n");
//again:
//	printf("请输入不同数字进入不同模式：1、加法模式 2、减法模式 3、乘法模式 4、除法模式 5、退出计算器\n");
//	printf("请输入：");
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
//	default: printf("请输入正确数字\n");
//		goto again;
//		break;
//	}
//		return 0;
//	}

