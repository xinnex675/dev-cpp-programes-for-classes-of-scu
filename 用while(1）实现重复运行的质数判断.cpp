#include<stdio.h> 

int main()
{   while (1){
    int x;
    printf("������һ����������");
    scanf("%d",&x);
    int i =2;
    int num;
    int sum;
    for(i=2 ;i < x;i++)
	{
	   num = x%i;
	   if (num==0)
		{
		    printf("%d ��������\n",x);
		    break;
		}
	   else if (num != 0)
		{
		    sum=num;
		}
	}
	if(num!=0)
	{
	    printf("%d ������\n",x);
	}}
	return 0;
}
 
