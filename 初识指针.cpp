#include<stdio.h>
int main()
{   int b = 1739;
    int * cn= &b;
    char ch = 'a';
    char* ps = &ch ;
    printf("%p\n",ps); 
    printf("%p\n",cn);
	printf("%c\n",*ps); //用地址打印字符值 
	printf("%d\n",*cn);  //打印数字值 
	printf("%d\n",sizeof(int*));//探究指针变量大小(64位均为8字节) 
	printf("%d\n",sizeof(float*));
	printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(double*));
	printf("%d\n",sizeof(char*)); 
	return 0; 
}
