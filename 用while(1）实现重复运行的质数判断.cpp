#include<stdio.h> 

int main()
{   while (1){
    int x;
    printf("请输入一个正整数：");
    scanf("%d",&x);
    int i =2;
    int num;
    int sum;
    for(i=2 ;i < x;i++)
	{
	   num = x%i;
	   if (num==0)
		{
		    printf("%d 不是质数\n",x);
		    break;
		}
	   else if (num != 0)
		{
		    sum=num;
		}
	}
	if(num!=0)
	{
	    printf("%d 是质数\n",x);
	}}
	return 0;
}
 
