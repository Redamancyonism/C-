#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

//int main()
//{
//	printf("Hi world\nHello,world!\n");//main函数只有一个
//	return 0;
//}

//int main()
//{
	// %d-打印整形
	// %c-打印字符
	// %f-打印小数
	// %p-以地址的形式打印
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
//	printf("结果为%d\n", sum);
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
// 2022/07/10学习
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
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	    printf("你真棒\n");
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
//	printf("加入我\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
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
//		printf("价格为%d\n", sum);
//	}
//	else
//	{
//		if (input <=10)
//		{
//			x = input - 5;
//			sum = 5 * 5 + x * 4;
//			printf("价格为%d\n", sum);
//		}
//		else
//		{
//			x = input - 10;
//			sum = 5 * 5 + 5 * 6 + x * 3;
//			printf("价格为%d\n", sum);
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
////函数方式
//	int max = Max(a, b);
//	printf("%d\n", max);
////宏方式
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//    int a = 10;//4个字节
//	int* p = &a;//取地址
//	printf("%p\n",p);
//	printf("%p\n", &a);
//	*p = 20;//*---解引用操作符
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
//	char name[20];//C语言程序设计
//	short price;//价格为55
//};
//int main()
//{
////	int choose = 0;
//	//利用结构体类型创建一个该类型的结构体变量
//	struct Book b1 =
//	{
//		"C语言程序设计",55
//	};
////	struct Book b2 =
////	{
////		"人间词话",20
////	};
////	struct Book b3 =
////	{
////		"我的意思",30
////	};
////	struct Book* pb = &choose;
////	printf("%s\n", pb->name);
////	printf("%d\n", pb->price);
//	//struct Book b1 = { "C语言程序设计",55 };
//	strcpy(b1.name, "C++");
//	printf("书名:%s\n", b1.name);
//	//printf("价格:%d元\n", b1.price);
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("你要好好学习吗1/2\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("不错\n");
//	}
//	else if (input == 2)
//		printf("种地去吧");
//	else
//		printf("养猪咯");
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
//2022/07/13日练习作业：
//1.判断一个数是否为奇数.
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int x = input % 2;
//		if (1==x)
//		{
//			printf("%d是奇数\n", input);
//		}
//		else
//		{
//			printf("%d不是奇数\n",input);
//		}
//	return 0;
//}
//2,输出1-100之间的奇数.(for的方式)
//int main()
//{
//	int i;
//	for ( i = 0; i <= 100; i++)
//	{
//		if (1 == i % 2)
//		{
//			printf("奇数=%d\n", i);
//		}
//	}
//	return 0;
//}
//变式训练 (while的方式)
//int main()
//{
//	int i = 0;
//	while (i<=100)
//	{
//		if (1 == i % 2)
//		{
//			printf("奇数为%d\n", i);
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
//	default://default 处理非法状况.
//		printf("傻B请不要乱输入(1-7)\n");
//		break;
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)//实现分支,case 后加冒号  [:] 
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
			//break;//终止当前循环，并跳出当前循环或语句.
//		}
//	case 4:
//		m++;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d", m, n);
//	return 0;
//}

//屏幕上打印出1-10
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		i++;
//		if (5 == i)
//			continue;//终止循环中的continue之后的代码，并跳到开头循环开始执行.
//		printf("%d ",i);
//	}
//	return 0;
//}
//continue用于终止本次循环（while）中的作用.

//int main()
//{
//	int ch = 0;
////Ctrl + Z获取EOF
////EOF - end of file -> -1结束
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//getchar的作用是获取字符.
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
//	printf("请输入密码:>");
//	scanf("%s", password); // 输入密码，并存放在password中.
//    //缓冲区还剩一个\n
//	//读取一下'\n'
//	while ((ch = getchar()) != '\n');
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
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

//2022/07/14学习!
//int main()
//{
//	int i;
//	for (i = 1; i <= 10; i++)
//    //1.建议for语句的循环控制变量的取值采取"前闭后开区间"写法. 
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
//		//1.for循环的初始化，调整，判断都可以省略
//		//但是:
//		//for循环的判断部分如果被省略，那判断条件就是：恒为正.
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

//do while()循环
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

//2022/07/14练习作业.
//1.计算n的阶乘.
//int main()
//{
//	int n;
//	int N = 1;
//	int i = 1;
//	printf("输入你需要的阶乘数字:>\n");
//	scanf("%d", &n);
//	while (i<=n)
//	{
//		N = i * N;
//		i++;
//	}
//	printf("阶乘结果为%d\n", N);
//	return 0;
//}

//变式训练 for方法
//int main()
//{
//	int i;
//	int N=1;
//	int n;
//	printf("输入你要的阶乘数字:>\n");
//	scanf("%d", &n);
//	for ( i = 1; i <= n; i++)
//	{
//		N = i * N;
//	}
//	printf("阶乘结果为:%d",N);
//	return 0;
//}

//2.计算1!+2!+3!+......+10!
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
//	printf("结果为%d", sum);
//	return 0;
//}

//简单的方法(变式训练)
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
//	printf("结果为%d", sum);
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
//			printf("找到了，下标为:%d\n", i);
//			break;
//		}
//	}
//	if (i ==sz)
//	{
//		printf("找不到啊\n");
//	}
//	return 0;
//}

//折中法寻找元素
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元数个数
//	int left = 0;//左下标
//	int right = sz-1;//右下标
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
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到啊");
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
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的函数-cls-清空屏幕
//		left++;
//		right--;
//
//	}
//	printf("%s", arr1);
//	return 0;
//}

//模拟登陆密码错误超过3次退出!
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	int n;
//	for ( i = 0; i < 3; i++)
//	{
//		printf("请输入你的密码:>");
//		scanf("%s", password);
//		if (strcmp(password,"123456")==0)//==不能比较2个字符串是否相等,应该使用库函数-strcmp
//		{
//			printf("登陆成功");
//			break;
//		}
//		else
//		{
//			n = 2 - i;
//			printf("密码错误!\n");
//			printf("剩余次数:%d\n", n);
//		}
//	}
//	if (3==i)
//	{
//		printf("3次登陆均错误,程序退出!");
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

//作业练习:
//1.写代码将三个数从大到小输出.
//int main()
//{
//	int a;
//	int b;
//	int c;
//	printf("输入你的三个值a,b,c:>");
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

//输出1-100之间3的倍数
//int main()
//{
//	int i;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (0==i%3)
//		{
//			printf("3的倍数为:%d\n", i);
//
//		}
//	}
//	return 0;
//}

//求出2个数的最大公约数.
//int main()
//{
//	int a;
//	int b;
//	int i;
//	printf("输入你的2个数字:>");
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
//过于复杂

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r;
//	printf("输入你的2个数字:>");
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//3.打印1000年到2000年之间的闰年.
//int main()
//{
//	int i;
//	int count = 0;
//	for ( i = 1000; i <= 2000; i++)
//	{
//		if (0==i%4 && 0!=i%100)
//		{
//			printf("闰年为:%d\n", i);
//			count++;
//		}
//		else if (i%400==0)
//		{
//			printf("闰年为:%d\n", i);
//			count++;
//		}
//	}
//	printf("总共为%d个\n", count);
//	return 0;
//}

//变式训练
//int main()
//{
//	int i;
//	int count = 0;
//	for ( i = 1000; i <= 2000; i++)
//	{
//		if (((0==i%4)&&(0 != i%100)) || (0==i%400))
//		{
//			printf("闰年为:%d\n", i);
//			count++;
//		}
//	}
//	printf("总共为%d个\n",count);
//	return 0;
//}

//3.打印1-100之间的素数.
//(最差的方法)
//int main()
//{
//	int i;
//	int count = 0;
//	for ( i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数.
//		//素数判断的方法
//		//1.试除法
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
//			printf("素数为:%d\n", i);
//		}
//	}
//	printf("总共有%d个素数\n", count);
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
//		if (j>sqrt(i))//sqrt -开平方的数学库函数
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

//数9的个数
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

//2022/07/15日作业
//1.计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值打印出结果
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
//	printf("结果为:%lf\n", sum);
//	return 0;
//}

//简洁版
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

//输出10个数中的最大值.
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

//乘法口诀表
//int main()
//{
//	int i;
//	for ( i = 1; i <=9; i++)
//	{
//		int k;
//		for ( k = 1; k <= i; k++)
//		{
//			printf("%d x %d = %-2d ",k,i,i*k);//2d -右对齐不够空格补齐 -2d左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}


//猜数字;
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
//	//生成随机数
//	int ret;
//	int a = 0;
//	ret = rand()%100+1;//生成1-100之间的数字
//	//printf("%d\n", ret);查看生成的数字
//	while(1)
//	{
//		printf("请输入你猜的数字:>\n");
//		scanf("%d", &a);
//	    if (a<ret)
//		{
//			printf("猜小了,再试一次!\n");
//		}
//		else if(a>ret)
//		{
//			printf("猜大了,再试一次!\n");
//		}
//		else
//		{
//			printf("猜对啦,真焯!\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//用时间戳设置随机数的生成起点
////time_t time(time_t *timer)
////当前计算机的时间-计算机的起始时间(1970.1.1:0:0:0)
////time_t
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏退出!");
//			break;
//		default:
//			printf("非法的字符，请输入1或者0!\n");
//		    break;
//		}
//	} while (input);
//	return 0;
//}

//自动关机
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//again:
//	printf("你的电脑将在120s后关机\n如果想要取消请在下方输入 我是帅哥 \n请输入:>");
//	scanf("%s", input);
//	if (strcmp(input,"我是帅哥") == 0)//比较2个字符串
//	{	
//		system("shutdown -a");
//		printf("取消关机!");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	//strcpy - string copy - 字符串拷贝
//	//string -
//	char arr1[] = "23333";
//	char arr2[20] = "*********";
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

//memset 内存设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//写出一个函数可以找最大值
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
//	printf("最大值为%d\n", max);
//	return 0;
//}

//写一个函数可以交换2个整形的内容
//void exchange1(int x, int y)//有问题算法
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
//	//int* pa = &a;//pa指针变量
//	//*pa = 20;//解引用操作
//	//printf("%d\n", a);
//	return 0;
//}

//判断一个数是否为素数
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

//判断闰年
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

//二分查找
//在一个有序数组中查找具体的某个数
//如果找到了返回下标，未找到返回-1
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
////                      本质上arr是一个指针   
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字");
//
//	}
//	else
//	{
//		printf("找到了，下标为%d\n", ret);
//	}
//	return 0;
//}

//每调用一个函数使得num加一
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

//函数的嵌套调用和链式访问.
//void line()
//{
//	printf("哈哈\n");
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
//	printf("请输入你需要打印的次数:>");
//	scanf("%d", &num);
//	line_many(num);
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//函数声明
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数调用
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
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("%d\n",len);
//	return 0;
//}

//n的阶乘
//for循环
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int i = 0;
//	printf("输入n的值;>");
//	scanf("%d", &n);
//	for ( i = 1; i <=n ; i++)
//	{
//		sum = sum * i;
//	}
//	printf("结果为%d\n", sum);
//	return 0;
//}

//函数调用n阶乘
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
//	printf("结果为%d\n", ret);
//	return 0;
//}

//函数递归调用n阶乘
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
//	printf("结果为%d\n", ret);
//	return 0;
//}

//求第n个斐波那契数列
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//测试第3个斐波那契数的计算次数
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

//循环的方式
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

//数组
//int main()
//{
//	//创建一个数组-存放整形-10个
//	//int arr[10]={1,2,3};//不完全初始化,剩下的元素默认初始化为0
//	//char arr2[5]={'a','b'};
//	//int n = 5;
//	//char ch[n];//error
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof 计算arr4所占的空间
//
//
//	printf("%d\n", strlen(arr4));
//	//strlen 求字符串长度 - '\0'之前的字符个数
//	return 0;
//}
//1.strlen和sizeof 没有什么关联

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
//	int arr[3][4] = { {1,2,3 }, {4, 5 }};//行可以省略 列不能省略
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
//		int flag = 1;//假设这一次要排序的数据已经有序
//		//每一趟冒泡排序
//		for ( j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
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
//	//对arr进行排序，排成升序
//	//arr是数组，对arr进行传参实际上传的是数组arr首元素的地址
//	bubble_sort(arr,sz);//冒泡排序函数
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);//首元素地址
//	printf("%p\n", &arr[0]);//首元素地址
//	printf("%p\n", &arr);//整个数组的地址
//	return 0;
//}

//操作符
//int main()
//{
//	double a = 5 / 2.0;
//	printf("%lf\n", a);
//	return 0;
//}

//移位操作符
//int main()
//{
//	int a = 16;
//	//右移操作符
//	//移动的是二进制位
//	//
//	int b = a >> 1;
//	//1.算术右移
//	// 右边丢弃，左边补原符号位
//	//2.逻辑右移
//	//右边丢弃，左边补零
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	//整数的二进制表示有:原码、反码、补码
//	//存储到内存的是补码
//	//10000000000000000000000000001 - 原码
//	//11111111111111111111111111110 - 反码
//	//11111111111111111111111111111 - 补码
//	printf("%d\n", b);
//	return 0;
//}
//警告
//int num = 10;
//num>>-1;//error 未定义运算，无法这样做
//只能作用于整数
int main()
{
	int a = 3;
	int b = 5;
	printf("before =%d %d\n", a, b);
	//加减法可能会溢出
	/*
	a = a + b;
	b = a - b;
	a = a - b;*/
	printf("after =%d %d\n", a, b);
	return 0;
}