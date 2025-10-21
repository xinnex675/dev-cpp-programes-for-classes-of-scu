#include<stdio.h> 
int main()
{  
    int num =0;
    printf("请输入一个三位数：") ; 
	scanf("%d",&num);
    printf("颠倒结果是：%d%d%d",num%10,(num%100)/10,num/100) ;
	return 0;
}
