#include<stdio.h>
#include<math.h> 
int main()
{
	
	float a,b,c,s,area;
	printf("�������������߳�:");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a)
	{
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area=%5.2f\n",area);
	}
	else
	printf("������һ��������");
	return 0;
}
