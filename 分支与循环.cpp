#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//int main()
//{
//	int age = 00;
//	if (age == 99)
//		printf("xf\n");
//	else(age == 00);
//		printf("myc\n");
//	return 0;
//}if�ж����

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	   if (b == 2)
//	   printf("gogogo\n");
//	else
//		printf("stop\n");
//	return 0;
//}������

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i%7 == 0)
//		    printf("%d ",i);
//		i++;
//	}
//	return 0;
//}100����7�ı���

//int main()
//{
//	int a = 1;
//	while (a<=1000)
//	{
//		if (a % 10 == 2)
//			printf("a:%d\n ", a);
//		a++;
//	}
//
//	return 0;
//}1000����2��β������

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())!= EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}�˴����ʾ�������г���CTRL Z��ʱ�������ֹ

//int main()
//{
//
//	long long arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}������arr��ռ�ռ���ֽڴ�С

//int Open(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int open = 0;
//	open = Open(a, b);
//	printf("open = %d\n", open);
//	return 0;
//}���ú���a��b�ȴ�

//#define MAX(x,y) (x+y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}����define���庯��a��b�Ӽ�

//int main()
//{
//	int color = 0;
//	scanf("%d", &color);
//	switch (color)
//	{
//	case 1:
//		printf("red\n");
//			break;
//	case 2:
//		printf("yellow\n");
//			break;
//	case 3:
//		printf("green\n");
//			break;
//	}
//	return 0;
//}���֧���

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//		printf("��Ϣ��\n");
//		break;
//	default://�������ѡ��δѡ���򱨴�ѡ��
//		printf("����\n");
//		break;
//	}
//	return 0;
//}���֧ѭ�����