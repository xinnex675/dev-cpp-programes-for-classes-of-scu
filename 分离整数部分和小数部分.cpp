#include<stdio.h> 
int main()
{   
    float a =11572875 ,b = 5752;
	float c = a / b;
	float d=c;
	while(c>1.0)
	{
		c=c-1.0;
	}
	float num = d-c;
	float temp = a-num*b;
	printf("%.1f / %.1f = %.2f......%.1f",a,b,num,temp);
	return 0;
}
 
