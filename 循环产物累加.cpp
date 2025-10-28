#include<stdio.h> 

int main()
{   
    int a=10;
    int sum =0;
	while (a>=1)
	{
	   int num =a*a;
	   sum =sum + num;
	   a-- ;
	}
	printf("%d",sum);
	return 0;
}
 
