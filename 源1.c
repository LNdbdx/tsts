#define _CRT_SECURE_NO_WARNINGS 1
//ȡ��VSƽ̨�ṩ�İ�ȫ���� �ô�����Ծ��п�ƽ̨��
//ö�ٳ��� enum
//#define�����ʶ������
#define MAX(X,Y) (X>Y?X:Y)
//����� �����д��ʽ
#include<stdio.h>//std-��׼
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
	static int a = 1;//static���ξֲ��������������ڱ䳤
	//�ı������������ ʹ�ñ��������ڴ�Դ�ļ���ʹ��
	//���κ����ı亯�����������ԣ��ⲿ�������ԡ��ڲ���������
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
	int guess = 0;//��ȡֵ
	int ret = 0;
	 ret = rand()%10+1;
	 //���������   ��Ҫ��srand�������
	 while (1)
	 {
		 printf("������֣�");
		 scanf("%d", &guess);
		 if (guess > ret)
		 {
			 printf("�´���\n");
		 }
		 else if (guess < ret)
		 {
			 printf("��С��\n");
		 }
		 else
		 {
			 printf("������\n\a");
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
//������
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
  int main()//������ �������
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
		printf("�ϴ�ֵΪ��%d", a);
	}
	else 
		printf("�ϴ�ֵΪ��%d", b);*/
	//�Ƚ������ϴ�ֵ
	/*int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}*/
	/*extern int g_val;
	////extern �����ⲿ����
	printf("g_val=%d\n", g_val);*/
	//�����ⲿ����
	/*int a = 20;
	int b = 30;
	int max = 0;
	 max = MAX(a, b);
	 printf("max=%d\n", max);*/
	//�������
	/*int a = 10;//4���ֽ�
	//int* p = &a;
	//printf("%p\n", &a);
	//printf("%p\n", p);
	//*p = 20;
	////*_�����ò�����,*p�൱�ڰ�a��ֵ����int a�� int a=20
	printf("a=%d\n",a );*/
	/*struct Book b1 = { "C���Գ������",55 };
	printf("����:%s\n", b1.name);
	printf("�۸�:%d\n", b1.price);*/
	/*for (int b = 0;b <= 100; b++)
	{
		int c = b % 2;
		if (c > 0)
		{
			printf("%d\n", b);
		}
	}*/
	//���1-100֮�������
	/*int a = 0;
	scanf("%d", &a);
	int n = a % 2;
	if (n>0)
	{
		printf("����\n");
	}
	else
		printf("ż��\n");
	*/
	//�ж��Ƿ�Ϊ����
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
		EOF�ļ�������־
	{
		putchar(ch);
	}*/
	/*int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("���������룺>");
	scanf("%s", password);
	while((ch=getchar())!='\n');
	{
		;
	}
	printf("��ȷ��(Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}*/
	//�������� ��ȷ��  
	/*int i = 0;
		for (int i = 1;i <= 10; i++)
		{
			if (i == 5)
				continue;
			����contineֱ������contine�������
			printf("%d", i);
		}*/
	//contine�÷�
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
    //����1-N�Ľ׳����
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
			printf("�±�Ϊ%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}*/
    //���ֲ���
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
		��Ϣһ�루���Ժ���Ϊ��λ��
		system("cls");
		ִ�������cls �����Ļ
		left++;
		right--;
	}*/
   //�������м俿£�滻
   /* strcmp(1,2)
		�⺯��*/
  //�⺯��strcmp�����Ƚ��������Ƿ����
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
   //��������������С��
   /* int a = 0;
	int t=0;
	for (a = 1;a < 100;a++)
	{  
		t = a % 3;
		if (t==0 ) {
			printf("%d\n", a);
		}
		
	}*/
  //1-100 3�ı���
    /*int a = 0;
	int b = 0;
	int t = 0;
	scanf("%d%d", &a, &b);
	if (a % b == 0) {
		printf("���Լ��Ϊ%d\n", b);
	}
	else 
	{
		t = a % b;
		if (a % t == 0)
		{
			printf("���Լ��Ϊ%d\n", t);
		}
		else
		{
			printf("���Լ��Ϊ1");
		}

	}*/
  //�����Լ��
   /* int a = 0;
	for (a = 1000;a <= 2000;a++)
	{
		if (a % 4 == 0 && a % 100 != 0)
		{
			
			printf("%d������\n", a);
			
		}
		if (a % 400 == 0)
		{
			printf("%d������\n", a);
		}

	}*/
  //1000-2000����
   /*int count=0;
   int a = 0;
   for (a = 100;a <= 200;a++)
   {  
	   int i = 0;
	   for (i = 2;i < sqrt(i);i++)
	   sqrt�⺯����ƽ��
	   {
		   if (a % i == 0)
		   {
			   break;
		   }
	   }
	   if (a >sqrt(i))
	   {   
		   count++;
		   printf("%d������ ", a);
	   }
	   
   }
   printf("\ncount =%d\n", count);*/
  //�ж����� ����sqrt�⺯��
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
  //С��ҵ
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
  //100���ڳ���9�Ĵ��� 
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
  //100������ż������ӵĺ�
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
  //���������ֵ
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
  //99�˷���
   /*int input = 0;
   srand((unsigned int)time(NULL));
   ʱ���:��ǰ�������ʱ��-�������ʼֵ��1970.1.1.0��0��0��=��xxxx)��
	time_t��������һ��������
    do
    {
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			������Ϸ����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);*/
  //��������Ϸ����   �������� rand()��������� ��srand���ó�ʼֵ  time����ʱ�亯��
	/*char input[20] = { 0 };
	system("shutdown -s -t 60");
	ִ��ϵͳ����
again:
	printf("��ע�� ���Խ���60���ػ� ���ȡ�� �����룺��˧��\n�����룺");
	scanf("%s", input);
	if (strcmp(input, "��˧��") == 0)
		�Ƚ������ַ���-strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}*/
  //�ػ�����        ���ú�����system��������ϵͳ����  strcmp()�Ƚ��ַ���  goto()��ת
  /* char arr1[] = "bit";
   char arr2[20] = "########";
   strcpy(arr2, arr1);
   printf("%s\n", arr2);
  
*/
  //strcpy-string copy �ַ�������
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
	
  //����
int N;
scanf("%d", &N);
printN(N);

	

		return 0;
}
