#include<stdio.h> 
int main()
{  
    int num =0;
    scanf("请输入一个三位数%d",&num);
    printf("%d%d%d",num%10,(num%100)/10,num/100) ;
	return 0;
}

