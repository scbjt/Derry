
//10.18
//#include<stdio.h>
//int main()
//{
	//const-������ 
    //2.const���εĳ����� 
	/*const int num=4;
	printf("%d\n",num);
	num=8;
	printf("%d\n",num);*/
	//const int n=10;//n�Ǳ����������г����ԣ���������˵n�ǳ����� 
	//int arr[n]={0};
	//return 0;	
//}



//#include<stdio.h>
//3.define����ı�ʶ������ 
//#define MAX 10
//int main()
//{
//	int arr[MAX];
//	printf("%d\n",MAX);
//	return 0;
	
//}

//4.ö�ٳ���
//һһ�о�
//ö�ٹؼ���
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
		
	//char arr1[] = "abc";//����
	//char arr2[] = {'a','b','c',};//'\0'�ǽ�����־�����ַ� 
	//printf("%d\n",strlen(arr1));//strlen-sting lengh-�����ַ������ȵ�
	//printf("%d\n",strlen(arr2)); 
	//printf("%s\n",arr1);
	//printf("%s\n",arr2);
	
	
	//printf("abc\n");
	
	//printf("c:\\test\\32\\test.c");
	//\t-ˮƽ�Ʊ�� 
	//printf("(are you ok\?\?)\n");
	//printf("%c\n",'\'');
	//printf("%s\n","\"");
	
	//#include<string.h>
	//printf("%d\n",strlen("c:\test\32\test.c"));
	//32������8��������
	//32(26)��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASC||��ֵ����Ӧ���ַ�
	/*
	printf("%c\n",'\132');
	printf("%c\n",'\x61');
	*/
	//int input=0;
	//printf("�������\n");
	//printf("��Ҫ�ú�ѧϰ��?(1/0)>:");
	//scanf("%d",&input);
	//if(input==1)
	//printf("��offer\n");
	//else
	//printf("������\n");
	
	
	//int line=0;
	//printf("�������\n");
	//while(line<20000)
	//{
	//	printf("��һ�д���:%d\n",line);
	//	line++; 
	// } 
	//if(line>=20000)
	//    printf("��offer");
		
	
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//printf("%d\n",arr[4]);//�±�ķ�ʽ����Ԫ�� 
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
	//int b=a<<2;�����ƶ�����λ 
	//printf("%d\n",b);
	//printf("%d\n",a);
	
	//int a=0;
	//printf("%d\n",a);
	//printf("%d\n",!a);
	//0Ϊ��
	//��0Ϊ�� 
	
	//sizeof���������������ռ�ռ�Ĵ�С����λ���ֽ� 
	//int arr[10]={0};
	//int sz=0;
	//printf("%d\n",sizeof(arr));
	//sz=sizeof(arr)/sizeof(arr[0]);
	//printf("sz=%d\n",sz);
//10.19
    //�ַ����Ľ�����־:'\0��
	//"abcdef"; 
	// '\0'-ת���ַ�-0 
	//0-����0 
	//'0'-48
	//'a' 'b' 'c' '0' '1' '2'
	//EOF-end of file - �ļ�������־-1 
	
//#include<stdio.h>
//int main()
//{
//	int a,b;
//	printf("��������������"); 
//	scanf("%d%d",&a,&b);
//	if(a>b)
//	printf("�ϴ�ֵΪ%d\n",a);
//	else
//	printf("�ϴ�ֵΪ%d\n",b);
//	return 0;
//	}	
	
//#include<stdio.h>
//int main()
//{
//	int max(int x,int y);
//	printf("��������������:");
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
//	int a=0;//4���ֽ�32bitλ 
//	int b=~a;//b���з��ŵ����� 
	//-��������ȡ��  
	//0(������0000000000000000000000000000000
	//1(������1111111111111111111111111111111
	//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
	//����--ԭ�룬���룬����
	//�������ڴ��д洢��λʱ�򣬴洢���Ƕ����ƵĲ���
	//ԭ��             ����                 ���� 
	//ֱ�Ӱ�������     |ԭ��ķ���λ����  | ����+1 
	//д���Ķ��������� |����λȡ���õ� 
	//-2
	//10000000000000000000000000000010-ԭ�� 
	//11111111111111111111111111111101-����
	//11111111111111111111111111111110-���� 
	
	
	//11111111111111111111111111111111
	//11111111111111111111111111111110
	//10000000000000000000000000000001
///	printf("%d\n",b);//ʹ�õģ���ӡ�����������Դ��
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
	//int a=10;
	//int b=a++;//����++����ʹ�ã���++,10 11
	//int b=++a;//ǰ��++����++����ʹ�� ,11 11
	//int b=a--;//����--����ʹ�ã���--,9,10 
	// int b=--a;//ǰ��--����--����ʹ�ã�9��9 
	//printf("a=%d b=%d\n",a,b);
    //return 0;
//}

//#include<stdio.h>
///int main()
//{
//	int a=(int)3.14;//double--int
//	return 0;
//}

//��ϵ������ 
//>=
//!=(������)
//==(����)
 
//#include<stdio.h>
//int main()
//{
	//��  -  ��0
	//��  -  0
	//&&  -  �߼���
	//||  -  �߼��� 
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
	
//	max=(a>b?a:b);//exp1?exp2:exp3;��Ŀ������ ���������� 
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
	//arr[4];//[]-�±����ò�����
//	int a=10;
//	int b=20;
///	int sum=Add(a,b); //()-�������ò����� 
//	return 0;
//}

//#include<stdio.h>
//static ���ξֲ�����
//�ֲ��������ڱ䳤
//static����ȫ�ֱ��� 
//�ı��ֱ�����������-�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ���û����ʹ����
//static ���κ��� 
//Ҳ�Ǹı��˺�����������-��׼ȷ
//static���κ����ı��˺�������������
//�ⲿ��������-�ڲ���������
 
//�����ⲿ���� 
//viod test()
//{
//	static int a=1;//a��һ����̬�ľֲ����� 
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
	
	//extern-�����ⲿ���ŵ�
	//int i=0;
	//while(i<5)
	//{
	//	test();
	//	i++;
	//}
	
	//typedef-���Ͷ���-�����ض���
	//typedef unsigned int u_int;
	//unsigned int num=20;
	//u_int num2=20;	
	//register int a=10;//�����a����ɼĴ�������                //�ֲ�����-�Զ�����
	//int a=10;
	//a=-2;
	//int����ı������з��ŵ�
	//signed int;
	//unsigned int num=1;
	//struct-�ṹ��ؼ���
	//union-������/������
	//void-��/�� 
//	return 0;
//}

//����� �洢���� 
//�Ĵ��� 
//���ٻ���            CPU-���봦���� 
//�ڴ�
//Ӳ�� 

//#include<stdio.h>
//#define�����ʶ������ 
//#define Max 100
//#define������Զ����
//������ʵ�� 
//int Max(int x,int y)
//{
//	if(x>y)
//	return x;
//	else
//	return y;
////}
//��Ķ���
///#define MAX(X,Y)(X>Y?X:Y) 
//int main()
//{
	//int a=Max;
//	int a=10;
//	int b=20;
	//���� 
//	int max=Max(a,b);
//	printf("%d\n",max);
	//��ķ�ʽ 
//	max=MAX(a,b);
	//max=(a>b?a:b);
	
//	printf("max=%d\n",max); 
//	return 0;
//}


//include<stdio.h>
//int main()
//{
	//int a=10;//�ĸ��ֽ�
//	int* p=&a;//ȡ��ַ
//	printf("%p\n",&a);
//	printf("%p\n",p);
//	*p=20;;//�����ò����� 
//	printf("a=%d\n",a);
	//��һ�ֱ�����������ŵ�ַ��-ָ����� 
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
//ָ���С��32λƽ̨���ĸ��ֽڣ�64λƽ̨�ǰ˸��ֽ�
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
	
	//int a=10;//�������ĸ��ֽڵĿռ�
	//printf("%p\n",&a); 
	//int*p=&a;//p��һ������-ָ����� 
	//printf("%p\n",p);
	//*p=20;//*-�����ò�����/������ò�����
	//printf("a = %d\n",a); 
//	return 0;
//}
//�ṹ��-���Ӷ���-�����Լ�������������� 
#include<stdio.h>
//����һ���ṹ������ 
struct Book
{
	char name[20];//C���Գ������
	short price;//55
}; 
#include<string.h>
int main()
{
	//���ýṹ������-����һ�������͵Ľṹ����� 
	struct Book b1 = {"C���Գ������",55};
	strcpy(b1.name,"C++");//strcpy-string copy-�ַ�������-�⺯��-string.h 
	printf("%s\n",b1.name);
    //struct Book*pb=&b1;
	//����pb��ӡ�������ͼ۸�
	//.   �ṹ�����.��Ա
	//��ͷ  �ṹ��ָ��ָ���Ա 
	//printf("%s\n",(*pb).name);
	//printf("%d\n",(*pb).price); 
	//printf("����:%s\n",b1.name);
	//printf("�۸�:%d\n",b1.price);
	//b1.price=15;
//	printf("�޸ĺ�ļ۸�:%d\n",b1.price);	
	return 0;
}


















































	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	











