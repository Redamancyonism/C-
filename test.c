#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

//int main()
//{
//	printf("Hi world\nHello,world!\n");//main����ֻ��һ��
//	return 0;
//}

//int main()
//{
	// %d-��ӡ����
	// %c-��ӡ�ַ�
	// %f-��ӡС��
	// %p-�Ե�ַ����ʽ��ӡ
	//char ch = 'A';
	//printf("%c\n", ch);
	//int age = 20;
	//printf("%d\n", age);
	//float num = 3.14;
	//	printf("%f\n", num);
//	printf("%d\n", sizeof(chart));
//		return 0;
//}

//int main()
//{
	//printf("char:%d\n", sizeof(char));
	//printf("long:%d\n", sizeof(long));
	//printf("long long:%d\n", sizeof(long long));
	//printf("short:%d\n", sizeof(short));
	//printf("int:%d\n", sizeof(int));
	//printf("double:%d\n", sizeof(double));
	//printf("float:%d\n", sizeof(float));
//	double weight = 99.2;
//	printf("%f\n", weight);
//	return 0;
//}
//int a = 20;
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d",&num1, &num2);
//	sum = num1 + num2;
//	printf("���Ϊ%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int n = 10;
//	int arr[10] = {0};
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	int x=042,y=067,z;
//	z = (x >> 2) & (y << 3);
//	printf("%d\n", z);
//	return 0;
//}
// 2022/07/10ѧϰ
//int main()
//{
//	//printf("%d\n",strlen("c:\test\32\test.c"));
//	printf("%c\n", '\132');
//		return 0;
//}
//}
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	    printf("�����\n");
//		return 0;
//}
//int Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);
//	sum = Add(a, b);
//	sum = Add(2, 3);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 5 % 2;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a <<= 1;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	sz = sizeof(arr)/sizeof(arr[0]);
//	printf("sz =%d\n",sz);
//	return 0;
//}
//int num = 10;
//int main()
//{
//	int num = 1;
//	printf("num =%d\n", num);
//	return 0;
//}


//   7/11
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
////	scanf("%d%d", &num1,&num2);
//	max = Max(num1, num2);
//	printf("%d\n", max);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = --a;
//	printf("a = %d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int sum = 0;
//	int x = 0;
//	int y = 0;
//	scanf("%d", &input);
//	if (input <= 5)
//	{
//		sum = input * 5;
//		printf("�۸�Ϊ%d\n", sum);
//	}
//	else
//	{
//		if (input <=10)
//		{
//			x = input - 5;
//			sum = 5 * 5 + x * 4;
//			printf("�۸�Ϊ%d\n", sum);
//		}
//		else
//		{
//			x = input - 10;
//			sum = 5 * 5 + 5 * 6 + x * 3;
//			printf("�۸�Ϊ%d\n", sum);
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf_s("%d%d", &a, &b);
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//			i++;
//	}
//	return 0;
//}
//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}
//extern int Add(int, int);

//int main()
//{
//	int a = 20;
//	int b = 10;
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int Max(int x, int y)
//{
//	if (x>y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
////������ʽ
//	int max = Max(a, b);
//	printf("%d\n", max);
////�귽ʽ
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//    int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��ַ
//	printf("%p\n",p);
//	printf("%p\n", &a);
//	*p = 20;//*---�����ò�����
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));
//	//*pc = 'a';
//	//printf("%c\n", ch);
//	return 0;
//}
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5;i++)
//	{
//		printf("%d,", sum(a));
//	}
//}
//int main()
//{
//	int a = 10;
//	int* c = &a;
//	*c = 20;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	double s = 3.14;
//	double* ps = &s;
//	printf("%d\n", sizeof(ps));
//	return 0;
//}
//struct Book
//{
//	char name[20];//C���Գ������
//	short price;//�۸�Ϊ55
//};
//int main()
//{
////	int choose = 0;
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1 =
//	{
//		"C���Գ������",55
//	};
////	struct Book b2 =
////	{
////		"�˼�ʻ�",20
////	};
////	struct Book b3 =
////	{
////		"�ҵ���˼",30
////	};
////	struct Book* pb = &choose;
////	printf("%s\n", pb->name);
////	printf("%d\n", pb->price);
//	//struct Book b1 = { "C���Գ������",55 };
//	strcpy(b1.name, "C++");
//	printf("����:%s\n", b1.name);
//	//printf("�۸�:%dԪ\n", b1.price);
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("��Ҫ�ú�ѧϰ��1/2\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("����\n");
//	}
//	else if (input == 2)
//		printf("�ֵ�ȥ��");
//	else
//		printf("����");
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 0;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	    else
//		    printf("haha\n");
//	return 0;
//}
//int main()
//{
//	int num = 4;
//	if (5 == num)
//	{
//		printf("hh");
//	}
//	return 0;
//}
//2022/07/13����ϰ��ҵ��
//1.�ж�һ�����Ƿ�Ϊ����.
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int x = input % 2;
//		if (1==x)
//		{
//			printf("%d������\n", input);
//		}
//		else
//		{
//			printf("%d��������\n",input);
//		}
//	return 0;
//}
//2,���1-100֮�������.(for�ķ�ʽ)
//int main()
//{
//	int i;
//	for ( i = 0; i <= 100; i++)
//	{
//		if (1 == i % 2)
//		{
//			printf("����=%d\n", i);
//		}
//	}
//	return 0;
//}
//��ʽѵ�� (while�ķ�ʽ)
//int main()
//{
//	int i = 0;
//	while (i<=100)
//	{
//		if (1 == i % 2)
//		{
//			printf("����Ϊ%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int day;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	default://default ����Ƿ�״��.
//		printf("ɵB�벻Ҫ������(1-7)\n");
//		break;
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)//ʵ�ַ�֧,case ���ð��  [:] 
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//		default:
			//break;//��ֹ��ǰѭ������������ǰѭ�������.
//		}
//	case 4:
//		m++;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d", m, n);
//	return 0;
//}

//��Ļ�ϴ�ӡ��1-10
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		i++;
//		if (5 == i)
//			continue;//��ֹѭ���е�continue֮��Ĵ��룬��������ͷѭ����ʼִ��.
//		printf("%d ",i);
//	}
//	return 0;
//}
//continue������ֹ����ѭ����while���е�����.

//int main()
//{
//	int ch = 0;
////Ctrl + Z��ȡEOF
////EOF - end of file -> -1����
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//getchar�������ǻ�ȡ�ַ�.
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int ch;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password); // �������룬�������password��.
//    //��������ʣһ��\n
//	//��ȡһ��'\n'
//	while ((ch = getchar()) != '\n');
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch;
//	while ((ch=getchar())!=EOF)
//	{
//		if (ch<'0'||ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}

//2022/07/14ѧϰ!
//int main()
//{
//	int i;
//	for (i = 1; i <= 10; i++)
//    //1.����for����ѭ�����Ʊ�����ȡֵ��ȡ"ǰ�պ�����"д��. 
//	{
//		if (5 == i)
//			continue; 
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)
//		//1.forѭ���ĳ�ʼ�����������ж϶�����ʡ��
//		//����:
//		//forѭ�����жϲ��������ʡ�ԣ����ж��������ǣ���Ϊ��.
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for ( i = 0,k=0; k=0; i++,k++)
//	{
//		k++;
//	}
//	return 0;
//}

//do while()ѭ��
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//			i++;
//	} while (i<=10);
//	return 0;
//}

//2022/07/14��ϰ��ҵ.
//1.����n�Ľ׳�.
//int main()
//{
//	int n;
//	int N = 1;
//	int i = 1;
//	printf("��������Ҫ�Ľ׳�����:>\n");
//	scanf("%d", &n);
//	while (i<=n)
//	{
//		N = i * N;
//		i++;
//	}
//	printf("�׳˽��Ϊ%d\n", N);
//	return 0;
//}

//��ʽѵ�� for����
//int main()
//{
//	int i;
//	int N=1;
//	int n;
//	printf("������Ҫ�Ľ׳�����:>\n");
//	scanf("%d", &n);
//	for ( i = 1; i <= n; i++)
//	{
//		N = i * N;
//	}
//	printf("�׳˽��Ϊ:%d",N);
//	return 0;
//}

//2.����1!+2!+3!+......+10!
//int main()
//{
//	int i=0;
//	int n = 0;
//	int sum = 0;
//	int ret=1;
//	for ( n = 1; n<=3; n++)
//	{
//		ret = 1;
//		for ( i = 1; i <=n; i++)
//		{
//			ret = i * ret;
//		}
//		sum = sum + ret;
//	}
//	printf("���Ϊ%d", sum);
//	return 0;
//}

//�򵥵ķ���(��ʽѵ��)
//int main()
//{
//	int n = 1;
//	int i;
//	int sum = 0;
//	for ( i = 1; i <= 4; i++)
//	{
//		n = n * i;
//		sum = sum + n;
//	}
//	printf("���Ϊ%d", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±�Ϊ:%d\n", i);
//			break;
//		}
//	}
//	if (i ==sz)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}

//���з�Ѱ��Ԫ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ������
//	int left = 0;//���±�
//	int right = sz-1;//���±�
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ�����");
//	}
//	return 0;
//}

#include <Windows.h>
#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ����ĺ���-cls-�����Ļ
//		left++;
//		right--;
//
//	}
//	printf("%s", arr1);
//	return 0;
//}

//ģ���½������󳬹�3���˳�!
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	int n;
//	for ( i = 0; i < 3; i++)
//	{
//		printf("�������������:>");
//		scanf("%s", password);
//		if (strcmp(password,"123456")==0)//==���ܱȽ�2���ַ����Ƿ����,Ӧ��ʹ�ÿ⺯��-strcmp
//		{
//			printf("��½�ɹ�");
//			break;
//		}
//		else
//		{
//			n = 2 - i;
//			printf("�������!\n");
//			printf("ʣ�����:%d\n", n);
//		}
//	}
//	if (3==i)
//	{
//		printf("3�ε�½������,�����˳�!");
//	}
//	return 0;
//}

//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:b = 30;
//	case 2:b = 20;
//	case 3:b = 16;
//	default:b = 0;
//		break;
//	}
//	return b;
//}

//��ҵ��ϰ:
//1.д���뽫�������Ӵ�С���.
//int main()
//{
//	int a;
//	int b;
//	int c;
//	printf("�����������ֵa,b,c:>");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//���1-100֮��3�ı���
//int main()
//{
//	int i;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (0==i%3)
//		{
//			printf("3�ı���Ϊ:%d\n", i);
//
//		}
//	}
//	return 0;
//}

//���2���������Լ��.
//int main()
//{
//	int a;
//	int b;
//	int i;
//	printf("�������2������:>");
//	scanf("%d%d", &a, &b);
//	if (a>b)
//	{
//		for (i = 0; i >=0; i++)
//		{
//			int tmp = a % b;
//			if (0==a%b)
//			{
//				printf("%d", b);
//				break;
//			}
//			a = b;
//			b = tmp;
//		}
//	}
//	else
//	{
//		for (i = 0; i >= 0; i++)
//		{
//			int tmp = b % a;
//			if (0 == b % a)
//			{
//				printf("%d", a);
//				break;
//			}
//			b = a;
//			a = tmp;
//		}
//	}
//	return 0;
//}
//���ڸ���

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r;
//	printf("�������2������:>");
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//3.��ӡ1000�굽2000��֮�������.
//int main()
//{
//	int i;
//	int count = 0;
//	for ( i = 1000; i <= 2000; i++)
//	{
//		if (0==i%4 && 0!=i%100)
//		{
//			printf("����Ϊ:%d\n", i);
//			count++;
//		}
//		else if (i%400==0)
//		{
//			printf("����Ϊ:%d\n", i);
//			count++;
//		}
//	}
//	printf("�ܹ�Ϊ%d��\n", count);
//	return 0;
//}

//��ʽѵ��
//int main()
//{
//	int i;
//	int count = 0;
//	for ( i = 1000; i <= 2000; i++)
//	{
//		if (((0==i%4)&&(0 != i%100)) || (0==i%400))
//		{
//			printf("����Ϊ:%d\n", i);
//			count++;
//		}
//	}
//	printf("�ܹ�Ϊ%d��\n",count);
//	return 0;
//}

//3.��ӡ1-100֮�������.
//(���ķ���)
//int main()
//{
//	int i;
//	int count = 0;
//	for ( i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����.
//		//�����жϵķ���
//		//1.�Գ���
//		//13
//		int k;
//		for ( k = 2; k < i; k++)
//		{
//			if (0==i%k)
//			{
//				break;
//			}
//		}
//		if (k ==i)
//		{
//			count++;
//			printf("����Ϊ:%d\n", i);
//		}
//	}
//	printf("�ܹ���%d������\n", count);
//	return 0;
//}

//int main()
//{
//	int i;
//	int count = 0;
//	for ( i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for ( j = 2; j <=sqrt(i); j++)
//		{
//			if (0 == i%j)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))//sqrt -��ƽ������ѧ�⺯��
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount= %d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for ( a = 1,b=1; a <= 100; a++)
//	{
//		if (b>=20)
//		{
//			break;
//		}
//		if (b %3==1)
//		{
//			b=b+3;
//				continue;
//		}
//		b=b-5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//��9�ĸ���
//int main()
//{
//	int i;
//	int count = 0;
//	for ( i = 1; i <= 100; i++)
//	{
//		if ((9 == i % 10) ||(9==i/10))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if ((9 == i % 10) && (9 == i / 10))
//		{
//			count++;
//		}
//	}
//	printf("\ncount = %d",count);
//	return 0;
//}

//2022/07/15����ҵ
//1.����1/1-1/2+1/3-1/4+1/5......+1/99-1/100��ֵ��ӡ�����
//int main()
//{
//	int i;
//	double sum = 0;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (1==i%2)
//		{
//			sum += 1.0/i;
//		}
//		else
//		{
//			sum -= 1.0 / i;
//		}
//	}
//	printf("���Ϊ:%lf\n", sum);
//	return 0;
//}

//����
//int main()
//{
//	int i;
//	double sum = 0;
//	int flag = 1;
//	for ( i = 1; i <=100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//���10�����е����ֵ.
//int main()
//{
//	int arr[] = { -11,-1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max= %d\n", max);
//	return 0;
//}

//�˷��ھ���
//int main()
//{
//	int i;
//	for ( i = 1; i <=9; i++)
//	{
//		int k;
//		for ( k = 1; k <= i; k++)
//		{
//			printf("%d x %d = %-2d ",k,i,i*k);//2d -�Ҷ��벻���ո��� -2d�����
//		}
//		printf("\n");
//	}
//	return 0;
//}


//������;
//void menu()
//{
//	printf("***********************\n");
//	printf("*** 1.Play   0.Exit ***\n");
//	printf("***********************\n");
//}
//
////RAND_MAX-32767
//void game()
//{
//	//���������
//	int ret;
//	int a = 0;
//	ret = rand()%100+1;//����1-100֮�������
//	//printf("%d\n", ret);�鿴���ɵ�����
//	while(1)
//	{
//		printf("��������µ�����:>\n");
//		scanf("%d", &a);
//	    if (a<ret)
//		{
//			printf("��С��,����һ��!\n");
//		}
//		else if(a>ret)
//		{
//			printf("�´���,����һ��!\n");
//		}
//		else
//		{
//			printf("�¶���,����!\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//��ʱ���������������������
////time_t time(time_t *timer)
////��ǰ�������ʱ��-���������ʼʱ��(1970.1.1:0:0:0)
////time_t
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("��Ϸ�˳�!");
//			break;
//		default:
//			printf("�Ƿ����ַ���������1����0!\n");
//		    break;
//		}
//	} while (input);
//	return 0;
//}

//�Զ��ػ�
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//again:
//	printf("��ĵ��Խ���120s��ػ�\n�����Ҫȡ�������·����� ����˧�� \n������:>");
//	scanf("%s", input);
//	if (strcmp(input,"����˧��") == 0)//�Ƚ�2���ַ���
//	{	
//		system("shutdown -a");
//		printf("ȡ���ػ�!");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	//strcpy - string copy - �ַ�������
//	//string -
//	char arr1[] = "23333";
//	char arr2[20] = "*********";
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

//memset �ڴ�����
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//д��һ���������������ֵ
//int get_max(int x, int y)
//{
//	if (x>y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a,b);
//	max = get_max(200, 300);
//	printf("���ֵΪ%d\n", max);
//	return 0;
//}

//дһ���������Խ���2�����ε�����
//void exchange1(int x, int y)//�������㷨
//{
//	int tmp = y;
//	y = x;
//	x = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a =%d b =%d\n", a, b);
//	exchange(a, b);
//	printf("a =%d b =%d\n", x, y);
//	return 0;
//}

//void Swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pb;
//	*pb = *pa;
//	*pa = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a =%d b =%d\n", a, b);
//	Swap(&a, &b);
//	printf("a =%d b =%d\n", a, b);
//	//int* pa = &a;//paָ�����
//	//*pa = 20;//�����ò���
//	//printf("%d\n", a);
//	return 0;
//}

//�ж�һ�����Ƿ�Ϊ����
//int is_prime(int n)
//{
//	int j = 0;
//	for (  j = 2; j <= sqrt(n); j++)
//	{
//		if (0 ==n%j)
//		{
//			return 0;
//		}
//
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <=200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//�ж�����
//int is_leap_year(int n)
//{
//	if ((0 == n % 4 &&n%100!=0) ||(0 == n % 400))
//		return 1;
//	else
//		return 0;
//
//}
//int main()
//{
//	int year = 0;
//	for ( year = 1000; year <= 2022; year++)
//	{
//		if (is_leap_year(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}

//���ֲ���
//��һ�����������в��Ҿ����ĳ����
//����ҵ��˷����±꣬δ�ҵ�����-1
//int binary_search(int arr[], int k,int sz)
//{
//	int right = sz - 1;
//	int left = 0;
//	while (left<=right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
////                      ������arr��һ��ָ��   
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������");
//
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ%d\n", ret);
//	}
//	return 0;
//}

//ÿ����һ������ʹ��num��һ
//void Add1(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add1(&num);
//	printf("num = %d\n",num);
//	Add1(&num);
//	printf("num = %d\n",num);
//	Add1(&num);
//	printf("num = %d\n",num);
//	return 0;
//}

//������Ƕ�׵��ú���ʽ����.
//void line()
//{
//	printf("����\n");
//}
//void line_many(int many)
//{
//	int i = 1;
//	for (; i <= many; i++)
//	{
//		line();
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("����������Ҫ��ӡ�Ĵ���:>");
//	scanf("%d", &num);
//	line_many(num);
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//��������
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = Add_(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//void print(int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int main()
//{
//	char arr[] = "bit";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(++str);
//	else
//	{
//		return 0;
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n",len);
//	return 0;
//}

//n�Ľ׳�
//forѭ��
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int i = 0;
//	printf("����n��ֵ;>");
//	scanf("%d", &n);
//	for ( i = 1; i <=n ; i++)
//	{
//		sum = sum * i;
//	}
//	printf("���Ϊ%d\n", sum);
//	return 0;
//}

//��������n�׳�
//int Facl(int n)
//{
//	int y = 1;
//	int i = 0;
//	for ( i = 1; i <= n; i++)
//	{
//		y *= i;
//	}
//	return y;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Facl(n);
//	printf("���Ϊ%d\n", ret);
//	return 0;
//}

//�����ݹ����n�׳�
//int Fac2(int n)
//{
//	if (n<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac2(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("���Ϊ%d\n", ret);
//	return 0;
//}

//���n��쳲���������
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//���Ե�3��쳲��������ļ������
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}

//ѭ���ķ�ʽ
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret =%d\n", ret);
//	//printf("count =%d\n", count);
//	return 0;
//}

//����
//int main()
//{
//	//����һ������-�������-10��
//	//int arr[10]={1,2,3};//����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//char arr2[5]={'a','b'};
//	//int n = 5;
//	//char ch[n];//error
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof ����arr4��ռ�Ŀռ�
//
//
//	printf("%d\n", strlen(arr4));
//	//strlen ���ַ������� - '\0'֮ǰ���ַ�����
//	return 0;
//}
//1.strlen��sizeof û��ʲô����

//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	for ( i = 0; i <(int)strlen(arr); i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3 }, {4, 5 }};//�п���ʡ�� �в���ʡ��
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3 }, {4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz -1; i++)
//	{
//		int j = 0;
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		for ( j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr���������ų�����
//	//arr�����飬��arr���д���ʵ���ϴ���������arr��Ԫ�صĵ�ַ
//	bubble_sort(arr,sz);//ð��������
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);//��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]);//��Ԫ�ص�ַ
//	printf("%p\n", &arr);//��������ĵ�ַ
//	return 0;
//}

//������
//int main()
//{
//	double a = 5 / 2.0;
//	printf("%lf\n", a);
//	return 0;
//}

//��λ������
//int main()
//{
//	int a = 16;
//	//���Ʋ�����
//	//�ƶ����Ƕ�����λ
//	//
//	int b = a >> 1;
//	//1.��������
//	// �ұ߶�������߲�ԭ����λ
//	//2.�߼�����
//	//�ұ߶�������߲���
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	//�����Ķ����Ʊ�ʾ��:ԭ�롢���롢����
//	//�洢���ڴ���ǲ���
//	//10000000000000000000000000001 - ԭ��
//	//11111111111111111111111111110 - ����
//	//11111111111111111111111111111 - ����
//	printf("%d\n", b);
//	return 0;
//}
//����
//int num = 10;
//num>>-1;//error δ�������㣬�޷�������
//ֻ������������
int main()
{
	int a = 3;
	int b = 5;
	printf("before =%d %d\n", a, b);
	//�Ӽ������ܻ����
	/*
	a = a + b;
	b = a - b;
	a = a - b;*/
	printf("after =%d %d\n", a, b);
	return 0;
}