#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>//strlen�˿⺯�������ڴ�ͷ�ļ���
#include<Windows.h>//Sleep�˿⺯�������ڴ�ͷ�ļ���
#include<stdlib.h>//cls�˿⺯�������ڴ�ͷ�ļ���

int main()
{
	int n = 0;//����һ����������ʾ��������Ĵ���
	char password[20] = {0};//����һ������password��Ԫ�ظ���Ϊ20���Դ���������������
	for (n = 0; n < 3; n++)
	{
		printf("���������룺> ");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯�� strcmp
		{
			printf("����������ȷ\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (n == 3)
		printf("�����������ʹ����ϣ������˳�\n");
	return 0;
}
//int main()
//{
//	int xx = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(yȷ��/n����ȷ��):>");
//	xx = getchar();
//	if (xx == 'y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else 
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}����getcharʵ����������

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)
//	{
//		if (ch > '0' || ch < '9')
//		putchar(ch);
//	}
//	return 0;
//}ֻ����0-9���������������

//int main()
//{
//    int age = 20;
//	if (age < 18)
//		printf("δ����\n");
//	else(age > 18);
//	printf("����\n");
//	return 0;
//}if����ж�����

//int main()
//{
//	int num = 0;
//	for (num = 1;num <= 100;num++)
//	{
//		printf("%d  ", num);
//	}
//	return 0;
//}forѭ�����򻯣���ʼ�����жϣ�����

//int main()
//{
//	int o = 0;
//	int O = 0;
//	for (o = 0;o < 2;o++)
//	{
//		for(O = 0;O < 2;O++)
//		{
//			printf("�Ұ��� ");
//		}
//	}
//	return 0;
//}���ⲿѭ�������ڲ�ѭ������ʾ����0ִ�У��ⲿÿִ��1���ڲ�ִ��2��

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
//}�������һ�����Ľ׳ˣ�o��ֵѭ��

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
//}���1-3�׳˵��ܺ�

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
//}�򻯰����1-4�Ľ׳�

//int main()
//{
//	int all[] = { 1,2,3,4,5,6,7,8,10,};//����һ������all����10��Ԫ��
//	int n = 11;//����һ������n�����ڼ���n���±�
//	int u = sizeof(all) / sizeof(all[0]);//����Ԫ�ظ���=����Ԫ�ش�С/����Ԫ�ش�С
//	int lift = 0;//liftΪ�������±꣬right�������±�
//	int right = u - 1;//�������������±�right��lift����Ԫ���±�=��Ԫ�ظ���-1,�����һ���±�Ϊ0��
//	while (lift<=right)//������ұߵ��±����ߵ��±��Ͳ����������
//	{
//		int num = (lift + right) / 2;//num�������±��ƽ��ֵ���ж�n
//		if (all[num] > n)//all[num]��ʾ�ҵ�num�±�ָ����Ԫ��
//		{
//			right = num - 1;//���±�ƽ��ֵ����n��ʱ��num-1
//		}
//		else if(all[num] < n)
//		{
//			lift = num + 1;//���±�ƽ��ֵС��n��ʱ��num+1
//		}
//		else
//		{
//			printf("n�±�Ϊ��%d ", num);
//			break;
//		}
//
//	}
//	if (lift > right)
//	{
//		printf("������������ԡ�");
//	}
//
//	return 0;
//}

//int main()
//{
//	char like1[] = "zoey is stupid";//˫���������һ���ַ���Ԫ�ظ����ᱻǰ��[]����
//	char like2[] = "              ";
//	int left = 0;
//	int right = strlen(like1) - 1;//�Ƚ��鷳�ķ���������Ԫ�ظ���������Ԫ�ظ���-2�õ����±��ֵ����Ϊ�ַ�����\0��β
//	//strlen�������ַ������ȣ�������\0
//  while (left <= right)
//	{
//		like2[left] = like1[left];
//		like2[right] = like1[right];
//		printf("%s\n", like2);
//		Sleep(1000);//1000Ϊ1000����
//		system("cls");//systemִ��ϵͳ����ĺ�����cls�����Ļ
//		left++;
//		right--;
//
//	}
// printf("%s\n", like2);
//	return 0;
//}

//int main()
//{
//	int num[] = { 1,2,3,4,5,6,7,8,9 };//����һ������num�ڰ���9��Ԫ��
//	int sz = (sizeof num / sizeof num[0]);//�˴����������num�ڰ�����Ԫ�ظ���
//	int i = 10;//����һ��Ԫ�أ�ʹ��forѭ������i���±�
//	int o = 0;//����һ��ѭ������
//	for ( o = 0; o < sz; o++)
//	{
//		if (i == num[o])
//		{
//			printf("i���±�Ϊ��%d", o);
//			break;//ʹ��break����ѭ������ӡi�±�֮�����
//		}
//	}
//	if (o == sz)
//	{
//		printf("�޴�����Ԫ��");
//	}
//	return 0;
//}//ʹ��forѭ������һ���������±�