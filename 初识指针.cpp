#include<stdio.h>
int main()
{   int b = 1739;
    int * cn= &b;
    char ch = 'a';
    char* ps = &ch ;
    printf("%p\n",ps); 
    printf("%p\n",cn);
	printf("%c\n",*ps); //�õ�ַ��ӡ�ַ�ֵ 
	printf("%d\n",*cn);  //��ӡ����ֵ 
	printf("%d\n",sizeof(int*));//̽��ָ�������С(64λ��Ϊ8�ֽ�) 
	printf("%d\n",sizeof(float*));
	printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(double*));
	printf("%d\n",sizeof(char*)); 
	return 0; 
}
