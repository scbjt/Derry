
//10.18
//#include<stdio.h>
//int main()
//{
	//const-常属性 
    //2.const修饰的常变量 
	/*const int num=4;
	printf("%d\n",num);
	num=8;
	printf("%d\n",num);*/
	//const int n=10;//n是变量，但又有常属性，所以我们说n是常变量 
	//int arr[n]={0};
	//return 0;	
//}



//#include<stdio.h>
//3.define定义的标识符常量 
//#define MAX 10
//int main()
//{
//	int arr[MAX];
//	printf("%d\n",MAX);
//	return 0;
	
//}

//4.枚举常量
//一一列举
//枚举关键字
//enum 
//#include<stdio.h>
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
	//enum Sex s = FEMALE;
	//printf("%d\n",MALE);
	//printf("%d\n",FEMALE);
	//printf("%d\n",SECRET);
		
	//char arr1[] = "abc";//数组
	//char arr2[] = {'a','b','c',};//'\0'是结束标志不算字符 
	//printf("%d\n",strlen(arr1));//strlen-sting lengh-计算字符串长度的
	//printf("%d\n",strlen(arr2)); 
	//printf("%s\n",arr1);
	//printf("%s\n",arr2);
	
	
	//printf("abc\n");
	
	//printf("c:\\test\\32\\test.c");
	//\t-水平制表符 
	//printf("(are you ok\?\?)\n");
	//printf("%c\n",'\'');
	//printf("%s\n","\"");
	
	//#include<string.h>
	//printf("%d\n",strlen("c:\test\32\test.c"));
	//32是俩个8进制数字
	//32(26)作为8进制代表的那个十进制数字，作为ASC||码值，对应的字符
	/*
	printf("%c\n",'\132');
	printf("%c\n",'\x61');
	*/
	//int input=0;
	//printf("加入比特\n");
	//printf("你要好好学习吗?(1/0)>:");
	//scanf("%d",&input);
	//if(input==1)
	//printf("好offer\n");
	//else
	//printf("卖红薯\n");
	
	
	//int line=0;
	//printf("加入比特\n");
	//while(line<20000)
	//{
	//	printf("敲一行代码:%d\n",line);
	//	line++; 
	// } 
	//if(line>=20000)
	//    printf("好offer");
		
	
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//printf("%d\n",arr[4]);//下标的方式访问元素 
	//int i=0;
	//while(i<10)
	//{
	//	printf("%d ",arr[i]);
		//i++;
	 //} 
	
	//int a=5/2;
	//int a=5%2;
	//printf("%d\n",a);	
	
	//int a=1;
	//int b=a<<2;向左移二进制位 
	//printf("%d\n",b);
	//printf("%d\n",a);
	
	//int a=0;
	//printf("%d\n",a);
	//printf("%d\n",!a);
	//0为假
	//非0为真 
	
	//sizeof计算变量或类型所占空间的大小，单位是字节 
	//int arr[10]={0};
	//int sz=0;
	//printf("%d\n",sizeof(arr));
	//sz=sizeof(arr)/sizeof(arr[0]);
	//printf("sz=%d\n",sz);
//10.19
    //字符串的结束标志:'\0‘
	//"abcdef"; 
	// '\0'-转义字符-0 
	//0-数字0 
	//'0'-48
	//'a' 'b' 'c' '0' '1' '2'
	//EOF-end of file - 文件结束标志-1 
	
//#include<stdio.h>
//int main()
//{
//	int a,b;
//	printf("请输入两个整数"); 
//	scanf("%d%d",&a,&b);
//	if(a>b)
//	printf("较大值为%d\n",a);
//	else
//	printf("较大值为%d\n",b);
//	return 0;
//	}	
	
//#include<stdio.h>
//int main()
//{
//	int max(int x,int y);
//	printf("请输入两个整数:");
//	int a,b,c;
//	scanf("%d%d",&a,&b);
//	c=max(a,b);
//	printf("max=%d\n",c);
//	return 0;
//}
//int max(int x,int y)
//{
//	if(x>y)
//	return x;
//	else
//	return y;
	
//}
//10.23
//	int arr[]={1,2,3,4,5,6};
//	printf("%d\n",sizeof(a));	
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof a );
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(arr)/sizeof(arr[0]));
  //  return 0; 
//}


//#include<stdio.h>
////int main()
///{
//	int a=0;//4个字节32bit位 
//	int b=~a;//b是有符号的整形 
	//-按二进制取反  
	//0(正数）0000000000000000000000000000000
	//1(负数）1111111111111111111111111111111
	//只要是整数，内存中存储的都是二进制的补码
	//正数--原码，反码，补码
	//负数在内存中存储单位时候，存储的是二进制的补码
	//原码             反码                 补码 
	//直接按照正负     |原码的符号位不变  | 反码+1 
	//写出的二进制序列 |其他位取反得到 
	//-2
	//10000000000000000000000000000010-原码 
	//11111111111111111111111111111101-反码
	//11111111111111111111111111111110-补码 
	
	
	//11111111111111111111111111111111
	//11111111111111111111111111111110
	//10000000000000000000000000000001
///	printf("%d\n",b);//使用的，打印的是这个数的源码
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
	//int a=10;
	//int b=a++;//后置++，先使用，再++,10 11
	//int b=++a;//前置++，先++，再使用 ,11 11
	//int b=a--;//后置--，先使用，再--,9,10 
	// int b=--a;//前置--，先--，再使用，9，9 
	//printf("a=%d b=%d\n",a,b);
    //return 0;
//}

//#include<stdio.h>
///int main()
//{
//	int a=(int)3.14;//double--int
//	return 0;
//}

//关系操作符 
//>=
//!=(不等于)
//==(等于)
 
//#include<stdio.h>
//int main()
//{
	//真  -  非0
	//假  -  0
	//&&  -  逻辑与
	//||  -  逻辑或 
//	int a=3;
//	int b=5;
	//int c=a&&b;
//	int c=a||b; 
//	printf("c=%d\n",c);
//	return 0;
		
//}

//#include<stdio.h>
//int main()
//{
//	int a=100;
//	int b=200;
//	int max=0;
	
//	max=(a>b?a:b);//exp1?exp2:exp3;三目操作符 条件操作符 
	//if(a>b)
	//max=a;
	//else
	//max=b;
	//printf("max=%d\n",max);
	//return 0;
//}

//#include<stdio.h>
//int Add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//}
//int main()
//{
	//int arr[10]={0};
	//arr[4];//[]-下标引用操作符
//	int a=10;
//	int b=20;
///	int sum=Add(a,b); //()-函数调用操作符 
//	return 0;
//}

//#include<stdio.h>
//static 修饰局部变量
//局部生命周期变长
//static修饰全局变量 
//改变乐变量的作用域-让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没法再使用了
//static 修饰函数 
//也是改变了函数的作用域-不准确
//static修饰函数改变了函数的链接属性
//外部连接属性-内部连接属性
 
//声明外部函数 
//viod test()
//{
//	static int a=1;//a是一个静态的局部变量 
//	a++;
//	printf("a=%d\n",a);
	
//}
//extern int Add(int,int);
//int main()
//{
//	int a =10;
//	int b =20;
//	int sum=Add(a,b);
 //   printf("sum=%d\n",sum);	 
	
	//extern-声明外部符号的
	//int i=0;
	//while(i<5)
	//{
	//	test();
	//	i++;
	//}
	
	//typedef-类型定义-类型重定义
	//typedef unsigned int u_int;
	//unsigned int num=20;
	//u_int num2=20;	
	//register int a=10;//建议把a定义成寄存器变量                //局部变量-自动变量
	//int a=10;
	//a=-2;
	//int定义的变量是有符号的
	//signed int;
	//unsigned int num=1;
	//struct-结构体关键字
	//union-联合体/共用体
	//void-无/空 
//	return 0;
//}

//计算机 存储数据 
//寄存器 
//高速缓存            CPU-中央处理器 
//内存
//硬盘 

//#include<stdio.h>
//#define定义标识符常量 
//#define Max 100
//#define定义可以定义宏
//函数的实现 
//int Max(int x,int y)
//{
//	if(x>y)
//	return x;
//	else
//	return y;
////}
//宏的定义
///#define MAX(X,Y)(X>Y?X:Y) 
//int main()
//{
	//int a=Max;
//	int a=10;
//	int b=20;
	//函数 
//	int max=Max(a,b);
//	printf("%d\n",max);
	//宏的方式 
//	max=MAX(a,b);
	//max=(a>b?a:b);
	
//	printf("max=%d\n",max); 
//	return 0;
//}


//include<stdio.h>
//int main()
//{
	//int a=10;//四个字节
//	int* p=&a;//取地址
//	printf("%p\n",&a);
//	printf("%p\n",p);
//	*p=20;;//解引用操作符 
//	printf("a=%d\n",a);
	//有一种变量是用来存放地址的-指针变量 
	//printf("%p\n",&a);
//	 return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch ='w';
//	char*pc =&ch;
//	printf("%d\n",sizeof(pc));
	//*pc='a';
	//printf("%c\n",ch);
//	return 0;	
//}
//指针大小在32位平台是四个字节，64位平台是八个字节
//10.24
//#include<stdio.h>
//int main()
//{
//	printf("%d\n",sizeof(char*));
//	printf("%d\n",sizeof(short*));
//	printf("%d\n",sizeof(int*));
//	printf("%d\n",sizeof(double*)); 
	//double d=3.14;
	//double*pd=&d;
	//printf("%d\n",sizeof(pd));
	//*pd=5.5;
	//printf("%lf",d);
	//printf("%lf",*pd);
	
	//int a=10;//申请了四个字节的空间
	//printf("%p\n",&a); 
	//int*p=&a;//p是一个变量-指针变量 
	//printf("%p\n",p);
	//*p=20;//*-解引用操作符/间接引用操作符
	//printf("a = %d\n",a); 
//	return 0;
//}
//结构体-复杂对象-我们自己创造出来的类型 
#include<stdio.h>
//创造一个结构体类型 
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
}; 
#include<string.h>
int main()
{
	//利用结构体类型-创建一个该类型的结构体变量 
	struct Book b1 = {"C语言程序设计",55};
	strcpy(b1.name,"C++");//strcpy-string copy-字符串拷贝-库函数-string.h 
	printf("%s\n",b1.name);
    //struct Book*pb=&b1;
	//利用pb打印出书名和价格
	//.   结构体变量.成员
	//箭头  结构体指针指向成员 
	//printf("%s\n",(*pb).name);
	//printf("%d\n",(*pb).price); 
	//printf("书名:%s\n",b1.name);
	//printf("价格:%d\n",b1.price);
	//b1.price=15;
//	printf("修改后的价格:%d\n",b1.price);	
	return 0;
}


















































	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	











