#include<stdio.h> 
int main()
{  
    int num1 ,num2 =0;
    printf("请输入两个整数：") ; 
	scanf("%d %d",&num1,&num2);
    if (num1 > num2)
	{printf("%d更大",num1); 
	}
	else if ( num1 < num2 )
	{printf("%d更大",num2); 
	}
	else{
		printf("一样大"); 
	}
	return 0;
}
