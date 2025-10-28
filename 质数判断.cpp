#include<stdio.h> 

int main()
{   while (1){    
    int x;
    printf("请输入一个正整数：");
    scanf("%d",&x);
    int i =2;
    int num;
    for(i=2 ;i < x;i++)
	{
	   num = x%i;
	   if (num==0)
		{
		    printf("%d 不是质数\n",x);
		    break;//遇到可以整除确定不是，直接结束
		}
	   else if (num != 0)
		{
		     ;//不进行处理直接下一步
		}
	}
	if(num!=0) //将质数的结果提出来，避免过程中多次输出
	{
	    printf("%d 是质数\n",x);//最后将所有数判断完都不等于0时便是质数
	}}
	return 0;
}
 
//用到while（1）反复运行程序

