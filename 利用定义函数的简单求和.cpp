 #include<iostream>


int add(int x, int y) 
{
	return (x+y);
}
int main()
{   
    int n1=0;
    int n2 =0;
    scanf("%d %d",&n1 ,&n2);
    int sun = add(n1 ,n2);
    printf("%d\n", sun);
    return 0;
 } 
