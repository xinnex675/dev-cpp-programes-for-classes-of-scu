#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);//输入组数 
    int a , b ;
    int count=0;// 声明大循环的值count 
    int result[T][1000]={0};//每组结果的限定（我看ai这么写的，意思貌似是在最大次数是T，1000的范围内） 
	int result_len[T]={0};//记录每组结果个数（以便之后判断要不要输出-1） 
	while (count<T)
	{   
	    scanf("%d %d",&a,&b);//统一输入 
		int num1,num2,num3;
		int found =0;//初始为0，表示未找到水仙数 
		for(int i=a;i<=b;i++)
		{   int n=i;
		    if (n<=100||n>=999)
			{
				continue;
			}//限定范围为三位数 
		    num1=n/100;
		    num2=(n/10)%10;
		    num3=n%10;//提取出每位数字是什么 
		    if (n==(num1*num1*num1)+(num2*num2*num2)+(num3*num3*num3))
		  {
			result[count][result_len[count]++]= n;//二维数组，储存水仙数（每一组用count1、2、3表示） 
			found =1;//判定成功，准备输出 
		  }
	    }
	    if (!found)result[count][result_len[count]++]=-1;//反逻辑，判定不出水仙数时储存-1 
	    count++;//循环继续 
   }   
   for(int i=0;i <T;i++)
   {			
       for(int j =0;j< result_len[i];j++)//提取数组中的数据 
      {
        if (j == result_len[i] - 1)//判断最后一个以避免行尾空格？？？？ 
            printf("%d " ,result[i][j]);
        else
            printf("%d ",result[i][j]);
	  }
	printf("\n");//每组换行 
   }
	return 0; 
}
//哇，这题是给我做的吗，没ai帮助真的太复杂了，直到判断水仙数那步都是我自己做的
//tnnd，后面重复输入实在是不行了，
//ai还是强啊，我自己完全不行，哎~
//从5点到8点，饭都吃不上了
//我觉得我没有编程的能力。。。至少没这个脑子（哭笑）
//这下终于知道计算机为什么说要数学好了 
