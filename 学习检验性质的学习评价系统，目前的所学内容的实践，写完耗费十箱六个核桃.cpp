#include<iostream>
#include<cstdio> 
#include<conio.h>
float test(float a ,float b,float c,float d,float e)
{   float sum = 0;
    sum = a+b+c+d+e;
    return sum;
}
int main()
{   
    char name[20];
    printf("������������֣�") ;
    scanf("%s",name);  
	printf("%sͬѧ����\n",name);
	float num1,num2,num3,num4,num5 =0;
	printf("���Դ�����������ģ���ѧ��Ӣ��������ֿ�Ŀ�ɼ����ÿո��������");
	scanf("%f %f %f %f %f",&num1,&num2,&num3,&num4,&num5);
	float sum = test(num1,num2,num3,num4,num5);
	printf("����ܷ��ǣ�%.1f\n",sum);
	if (sum<710 && sum>690){
		printf("�ǳ����㣬�山ˮƽ");
	   
	}
	else if (sum<690&&sum>665){
		printf("���㣬c9�������ĵ���");
	   
	}
	else if (sum<665&&sum>620){
		printf("����985ˮƽ���������ѵ�̸��");
	    
	}
	else if (sum<620&&sum>590){
		printf("���ã�211������");
	   
	}
	else if (sum<590&&sum>540){
		printf("�����ˣ�һ���Ƕ����˵����루���ƣ�");
	    
	}
	else if (sum<540&&sum>500){
		printf("�ú���ѧ����ȡ����");
	   
	}
	else if (sum<500&&sum>0){
		printf("�Ҹ����ϰ��");
	   
	}
	else if (sum<750&&sum>710){
		printf("666,�������߿�̫������");
	    
	}
	else
    {
		printf("�����ģ��ڿ����ģ��ҿɵô����һ�����ˣ���ö��н������𲻶��гͷ�\n");
		printf ("���������ʼ����\n"); 
		_getch(); 
		char answer;
    
  
        printf("===== ѡ���� =====\n");
        printf("����ԭ����\n");
        printf("1. ���Q����\n");
        printf("2. ����ɽ�����Ĺ�\n");
        printf("3. �ṷ������\n");
        printf("4. ����һ�����ͷ�����\n");
        printf("�������(1/2/3/4)��");
        scanf("%s", &answer);
    
       
	
        switch (answer)
	 {
            case '1':{
			                    for(int i =1 ; i<=100;i++ )
                            {
	                            printf("�壡����");
                            } 
					break;
					 }
                
            case '2':{
	                            for(int i =1 ; i<=100;i++ )
                           {
	                            printf("������������"); 
                           }
                break;
			         }
            case '3':{
				
	                            for(int i =1 ; i<=100;i++ )
                           {
	                             printf("�����ṷ����Զ���ŭ��������");
                           }
					break;
                     }
            case '4':{
	                           for(int i =1 ; i<=100;i++ )
                           {
	                           printf("�����֣�����");   
                           } 
					break;
			         }
              
            default:
			        {
               
	                            for(int i =1 ; i<=100;i++ )
                           {
	                            printf("ԭ������������");
							
                           }
		             break;
         	        }
	}  
} }
