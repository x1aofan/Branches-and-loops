#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>//strlen此库函数包含在此头文件内
#include<Windows.h>//Sleep此库函数包含在此头文件内
#include<stdlib.h>//cls此库函数包含在此头文件内

int main()
{
	int n = 0;//创建一个变量，表示输入密码的次数
	char password[20] = {0};//创建一个数组password，元素个数为20个以此来存放输入的密码
	for (n = 0; n < 3; n++)
	{
		printf("请输入密码：> ");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//==不能用来比较两个字符串是否相等，应该使用一个库函数 strcmp
		{
			printf("密码输入正确\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (n == 3)
		printf("密码输入次数使用完毕，即将退出\n");
	return 0;
}
//int main()
//{
//	int xx = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(y确认/n放弃确认):>");
//	xx = getchar();
//	if (xx == 'y')
//	{
//		printf("确认成功\n");
//	}
//	else 
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}运用getchar实现输入密码

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)
//	{
//		if (ch > '0' || ch < '9')
//		putchar(ch);
//	}
//	return 0;
//}只接收0-9的数字与组成数组

//int main()
//{
//    int age = 20;
//	if (age < 18)
//		printf("未成年\n");
//	else(age > 18);
//	printf("成年\n");
//	return 0;
//}if语句判断年龄

//int main()
//{
//	int num = 0;
//	for (num = 1;num <= 100;num++)
//	{
//		printf("%d  ", num);
//	}
//	return 0;
//}for循环语句简化：初始化，判断，调整

//int main()
//{
//	int o = 0;
//	int O = 0;
//	for (o = 0;o < 2;o++)
//	{
//		for(O = 0;O < 2;O++)
//		{
//			printf("我爱你 ");
//		}
//	}
//	return 0;
//}在外部循环加上内部循环，此示例从0执行，外部每执行1次内部执行2次

//int main()
//{
//	int i = 0;
//	int o = 0;
//	int num = 1;
//	scanf("%d", &o);
//	for (i=1; i<o;i++)
//	{
//		num *= i;
//	}
//	printf("num = %d\n", num);
//	return 0;
//}这里计算一个数的阶乘，o赋值循环

//int main()
//{
//	int a = 0;
//    int b = 0;
//	int num = 1;
//	int num2 = 0;
//	for (b = 1;b <= 4;b++)
//	{
//		num = 1;
//		for (a = 1;a <= b;a++)
//		{
//			num *= a;
//		}
//		num2 += num;
//	}
//		printf("%d\n", num2);
//	return 0;
//}算出1-3阶乘的总和

//int main()
//{
//	int a = 0;
//	int num = 1;
//	int num2 = 0;
//	for (a = 1;a <= 3;a++)
//	{
//		num *= a;
//		num2 += num;
//	}
//	printf("%d ",num2);
//	return 0;
//}简化版算出1-4的阶乘

//int main()
//{
//	int all[] = { 1,2,3,4,5,6,7,8,10,};//创建一个数组all里有10个元素
//	int n = 11;//创建一个变量n，后期计算n的下标
//	int u = sizeof(all) / sizeof(all[0]);//计算元素个数=数组元素大小/单个元素大小
//	int lift = 0;//lift为定义左下标，right定义右下标
//	int right = u - 1;//创建两个变量下标right，lift。总元素下标=总元素个数-1,数组第一个下标为0。
//	while (lift<=right)//如果最右边的下标比左边的下标大就不会进入此入口
//	{
//		int num = (lift + right) / 2;//num求左右下标的平均值，判断n
//		if (all[num] > n)//all[num]表示找到num下标指定的元素
//		{
//			right = num - 1;//当下标平均值大于n的时候，num-1
//		}
//		else if(all[num] < n)
//		{
//			lift = num + 1;//当下标平均值小于n的时候，num+1
//		}
//		else
//		{
//			printf("n下标为：%d ", num);
//			break;
//		}
//
//	}
//	if (lift > right)
//	{
//		printf("此项错误，请重试。");
//	}
//
//	return 0;
//}

//int main()
//{
//	char like1[] = "zoey is stupid";//双引号引起的一串字符，元素个数会被前面[]计算
//	char like2[] = "              ";
//	int left = 0;
//	int right = strlen(like1) - 1;//比较麻烦的方法是拿总元素个数除单个元素个数-2得到右下标的值，因为字符串以\0结尾
//	//strlen函数求字符串长度，不包含\0
//  while (left <= right)
//	{
//		like2[left] = like1[left];
//		like2[right] = like1[right];
//		printf("%s\n", like2);
//		Sleep(1000);//1000为1000毫秒
//		system("cls");//system执行系统命令的函数，cls清空屏幕
//		left++;
//		right--;
//
//	}
// printf("%s\n", like2);
//	return 0;
//}

//int main()
//{
//	int num[] = { 1,2,3,4,5,6,7,8,9 };//创建一个数组num内包含9个元素
//	int sz = (sizeof num / sizeof num[0]);//此代码计算数组num内包含的元素个数
//	int i = 10;//定义一个元素，使用for循环查找i的下标
//	int o = 0;//创建一个循环变量
//	for ( o = 0; o < sz; o++)
//	{
//		if (i == num[o])
//		{
//			printf("i的下标为：%d", o);
//			break;//使用break跳出循环不打印i下标之后的数
//		}
//	}
//	if (o == sz)
//	{
//		printf("无此数组元素");
//	}
//	return 0;
//}//使用for循环计算一个变量的下标