#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);//�������� 
    int a , b ;
    int count=0;// ������ѭ����ֵcount 
    int result[T][1000]={0};//ÿ�������޶����ҿ�ai��ôд�ģ���˼ò��������������T��1000�ķ�Χ�ڣ� 
	int result_len[T]={0};//��¼ÿ�����������Ա�֮���ж�Ҫ��Ҫ���-1�� 
	while (count<T)
	{   
	    scanf("%d %d",&a,&b);//ͳһ���� 
		int num1,num2,num3;
		int found =0;//��ʼΪ0����ʾδ�ҵ�ˮ���� 
		for(int i=a;i<=b;i++)
		{   int n=i;
		    if (n<=100||n>=999)
			{
				continue;
			}//�޶���ΧΪ��λ�� 
		    num1=n/100;
		    num2=(n/10)%10;
		    num3=n%10;//��ȡ��ÿλ������ʲô 
		    if (n==(num1*num1*num1)+(num2*num2*num2)+(num3*num3*num3))
		  {
			result[count][result_len[count]++]= n;//��ά���飬����ˮ������ÿһ����count1��2��3��ʾ�� 
			found =1;//�ж��ɹ���׼����� 
		  }
	    }
	    if (!found)result[count][result_len[count]++]=-1;//���߼����ж�����ˮ����ʱ����-1 
	    count++;//ѭ������ 
   }   
   for(int i=0;i <T;i++)
   {			
       for(int j =0;j< result_len[i];j++)//��ȡ�����е����� 
      {
        if (j == result_len[i] - 1)//�ж����һ���Ա�����β�ո񣿣����� 
            printf("%d " ,result[i][j]);
        else
            printf("%d ",result[i][j]);
	  }
	printf("\n");//ÿ�黻�� 
   }
	return 0; 
}
//�ۣ������Ǹ���������ûai�������̫�����ˣ�ֱ���ж�ˮ�����ǲ��������Լ�����
//tnnd�������ظ�����ʵ���ǲ����ˣ�
//ai����ǿ�������Լ���ȫ���У���~
//��5�㵽8�㣬�����Բ�����
//�Ҿ�����û�б�̵���������������û������ӣ���Ц��
//��������֪�������Ϊʲô˵Ҫ��ѧ���� 
