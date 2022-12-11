#define _CRT_SECURE_NO_WARNINGS 1
//取消VS平台提供的安全代码 让代码可以具有跨平台性
//枚举常量 enum
//#define定义标识符常量
#define MAX(X,Y) (X>Y?X:Y)
//定义宏 宏的书写格式
#include<stdio.h>//std-标准
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int Add(int x, int y)
{
	int z = x + y;
	return z;
}
enum color
{
	red,
	yellow,
	blue
};
void test() {
	static int a = 1;//static修饰局部变量的生命周期变长
	//改变变量的作用域 使该变量自能在此源文件中使用
	//修饰函数改变函数的链接属性，外部链接属性→内部链接属性
		a++;
	printf("a=%d\n", a);
}
void menu() 
{
	printf("*************************\n");
	printf("*****1.play   0.exit*****\n");
	printf("*************************\n");
}
void game()
{
	int guess = 0;//获取值
	int ret = 0;
	 ret = rand()%10+1;
	 //生成随机数   需要用srand设置起点
	 while (1)
	 {
		 printf("请猜数字：");
		 scanf("%d", &guess);
		 if (guess > ret)
		 {
			 printf("猜大了\n");
		 }
		 else if (guess < ret)
		 {
			 printf("猜小了\n");
		 }
		 else
		 {
			 printf("猜中了\n\a");
			 break;
		 }
	}

}
void printN(int N){
	if (N) {
		printN(N-1);
		printf("%d\n", N);
	}
	
}
//猜数字
struct Book
{
	char name[20];
	short price;
};
int sum(int a)
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return(a + b + c);
}
  int main()//主函数 程序入口
{
	/*int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("%d\n", sizeof(int));*/
	/*int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	if (a > b) {
		printf("较大值为：%d", a);
	}
	else 
		printf("较大值为：%d", b);*/
	//比较两数较大值
	/*int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}*/
	/*extern int g_val;
	////extern 声名外部变量
	printf("g_val=%d\n", g_val);*/
	//连接外部变量
	/*int a = 20;
	int b = 30;
	int max = 0;
	 max = MAX(a, b);
	 printf("max=%d\n", max);*/
	//宏的运用
	/*int a = 10;//4个字节
	//int* p = &a;
	//printf("%p\n", &a);
	//printf("%p\n", p);
	//*p = 20;
	////*_解引用操作符,*p相当于把a的值放入int a中 int a=20
	printf("a=%d\n",a );*/
	/*struct Book b1 = { "C语言程序设计",55 };
	printf("书名:%s\n", b1.name);
	printf("价格:%d\n", b1.price);*/
	/*for (int b = 0;b <= 100; b++)
	{
		int c = b % 2;
		if (c > 0)
		{
			printf("%d\n", b);
		}
	}*/
	//输出1-100之间的奇数
	/*int a = 0;
	scanf("%d", &a);
	int n = a % 2;
	if (n>0)
	{
		printf("奇数\n");
	}
	else
		printf("偶数\n");
	*/
	//判断是否为奇数
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
		EOF文件结束标志
	{
		putchar(ch);
	}*/
	/*int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码：>");
	scanf("%s", password);
	while((ch=getchar())!='\n');
	{
		;
	}
	printf("请确认(Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}*/
	//输入密码 并确认  
	/*int i = 0;
		for (int i = 1;i <= 10; i++)
		{
			if (i == 5)
				continue;
			遇到contine直接跳过contine后面语句
			printf("%d", i);
		}*/
	//contine用法
	/*int x = 1;
	int y = 0;
	int ret = 1;
	int sum = 0;
	scanf("%d", &y);
	for (int x = 1;x <= y;x++)
	{
		ret = ret * x;
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);*/
    //计算1-N的阶乘相加
   /* int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	int k = 18;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("下标为%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}*/
    //二分查找
    /*char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right) 
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		休息一秒（里以毫秒为单位）
		system("cls");
		执行命令函数cls 清空屏幕
		left++;
		right--;
	}*/
   //两侧向中间靠拢替换
   /* strcmp(1,2)
		库函数*/
  //库函数strcmp用来比较两个数是否相等
     /*int a = 0;
	 int b = 0;
	 int c = 0;
	 scanf("%d%d%d", &a, &b, &c);
	 if (a > b)
	 {
		 if (b > c)
		 {
			 printf("%d %d %d\n", a, b, c);
		 }
		 else
		 {
			 int t = b;
			 b = c;
			 c = t;
			 printf("%d %d %d\n", a, b, c);
		 }
	}
	 else
	 {
		 if (a > c)
		 {
			 printf("%d %d %d\n", b, a, c);
		 }
		 else
		 {
			 int t = a;
			 a = c;
			 c = t;
			 printf("%d %d %d\n", a, b, c);
		 }
	 }*/
   //输入三个数按大小排
   /* int a = 0;
	int t=0;
	for (a = 1;a < 100;a++)
	{  
		t = a % 3;
		if (t==0 ) {
			printf("%d\n", a);
		}
		
	}*/
  //1-100 3的倍数
    /*int a = 0;
	int b = 0;
	int t = 0;
	scanf("%d%d", &a, &b);
	if (a % b == 0) {
		printf("最大公约数为%d\n", b);
	}
	else 
	{
		t = a % b;
		if (a % t == 0)
		{
			printf("最大公约数为%d\n", t);
		}
		else
		{
			printf("最大公约数为1");
		}

	}*/
  //求最大公约数
   /* int a = 0;
	for (a = 1000;a <= 2000;a++)
	{
		if (a % 4 == 0 && a % 100 != 0)
		{
			
			printf("%d是闰年\n", a);
			
		}
		if (a % 400 == 0)
		{
			printf("%d是闰年\n", a);
		}

	}*/
  //1000-2000闰年
   /*int count=0;
   int a = 0;
   for (a = 100;a <= 200;a++)
   {  
	   int i = 0;
	   for (i = 2;i < sqrt(i);i++)
	   sqrt库函数开平方
	   {
		   if (a % i == 0)
		   {
			   break;
		   }
	   }
	   if (a >sqrt(i))
	   {   
		   count++;
		   printf("%d是素数 ", a);
	   }
	   
   }
   printf("\ncount =%d\n", count);*/
  //判断素数 利用sqrt库函数
   /*int a = 0;
   int b = 0;
   for (a = 1, b = 1;a <= 100;a++)
   {
	   if (b >= 20)break;
	   if (b % 3 == 1)
	   {
		   b = b + 3;
		   continue;
	   }
	   b = b - 5;

	  
   }
   printf("%d\n", a);*/
  //小作业
   /*int a = 0;
   int t = 0;
   int b = 0;
   int count = 0;
   for (a = 1;a <= 100;a++)
   {
	   if (a % 10 == 9 )

	   {
		   count++;
	   }
	   if (a / 10 == 9)
	   {
		   count++;
	   }


    }
    printf("%d\n", count);*/
  //100以内出现9的次数 
    /*int a = 0;
	float sum1 = 0;
	float sum2 = 0;
	float t = 0;
	for (a = 1;a <= 100;a++)
	{
		if (a % 2 == 0) 
		{
			sum1 = sum1 + 1.0/a;
			t = -sum1;
		}
		else
		{
			sum2 = sum2 +1.0/ a;
			
		}


	}
	printf("%f\n", (t + sum2));*/
  //100以内奇偶分数相加的和
  /* int arr[] = { 1,2,3,4,5,6,7,8,9,-10 };
   int max = arr[0];
   int i = 0;
   int sz = sizeof(arr) / sizeof(arr[0]);
   for (i = 0;i <sz;i++)
   { 
	   if (arr[i] > max) {

		   max = arr[i];

	   }
	 
   }
   printf("%d\n", max);*/
  //求整数最大值
  /*  int a = 0;
	
	
	for (a = 1;a <= 9;a++)
	{
		int b = 1;
		for (b = 1;b <= a;b++)
		{
			
			printf("%d*%d=%-2d ", a, b,a*b);
	     }
		printf("\n");
		
	}*/
  //99乘法表
   /*int input = 0;
   srand((unsigned int)time(NULL));
   时间戳:当前计算机的时间-计算机起始值（1970.1.1.0：0：0）=（xxxx)秒
	time_t本质上是一个长整形
    do
    {
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			调用游戏函数
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);*/
  //猜数字游戏主体   所用命令 rand()生成随机数 用srand设置初始值  time（）时间函数
	/*char input[20] = { 0 };
	system("shutdown -s -t 60");
	执行系统命令
again:
	printf("请注意 电脑将在60秒后关机 如果取消 请输入：大帅哥\n请输入：");
	scanf("%s", input);
	if (strcmp(input, "大帅哥") == 0)
		比较两个字符串-strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}*/
  //关机程序        所用函数：system（）调用系统命令  strcmp()比较字符串  goto()跳转
  /* char arr1[] = "bit";
   char arr2[20] = "########";
   strcpy(arr2, arr1);
   printf("%s\n", arr2);
  
*/
  //strcpy-string copy 字符串拷贝
	/*double x, y, a;
	for (y = 1.5; y > -1.5; y -= 0.1)
	{
		for (x = -1.5; x < 1.5; x += 0.05)
		{
			a = x * x + y * y - 1;
			if (a * a * a - x * x * y * y * y <= 0)
			{
				printf("+");
				Sleep(1);
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("\n");*/
	
  //爱心
int N;
scanf("%d", &N);
printN(N);

	

		return 0;
}
