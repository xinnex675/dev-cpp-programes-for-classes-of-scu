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
    printf("请输入你的名字：") ;
    scanf("%s",name);  
	printf("%s同学您好\n",name);
	float num1,num2,num3,num4,num5 =0;
	printf("请以此输入你的语文，数学，英语，物理，赋分科目成绩（用空格隔开）：");
	scanf("%f %f %f %f %f",&num1,&num2,&num3,&num4,&num5);
	float sum = test(num1,num2,num3,num4,num5);
	printf("你的总分是：%.1f\n",sum);
	if (sum<710 && sum>690){
		printf("非常优秀，清北水平");
	   
	}
	else if (sum<690&&sum>665){
		printf("优秀，c9恭候您的到来");
	   
	}
	else if (sum<665&&sum>620){
		printf("不错，985水平，过年亲友的谈资");
	    
	}
	else if (sum<620&&sum>590){
		printf("良好，211是稳了");
	   
	}
	else if (sum<590&&sum>540){
		printf("可以了，一本是多少人的梦想（鼓掌）");
	    
	}
	else if (sum<540&&sum>500){
		printf("好好自学，争取考研");
	   
	}
	else if (sum<500&&sum>0){
		printf("找个厂上班吧");
	   
	}
	else if (sum<750&&sum>710){
		printf("666,你来考高考太屈才了");
	    
	}
	else
    {
		printf("奖杯的，黑客来的，我可得大调查一下你了，答得对有奖励，答不对有惩罚\n");
		printf ("按任意键开始答题\n"); 
		_getch(); 
		char answer;
    
  
        printf("===== 选择题 =====\n");
        printf("你玩原神吗？\n");
        printf("1. 你冲Q币吗\n");
        printf("2. 我是山里灵活的狗\n");
        printf("3. 酷狗屋檐了\n");
        printf("4. 吓我一跳我释放忍术\n");
        printf("请输入答案(1/2/3/4)：");
        scanf("%s", &answer);
    
       
	
        switch (answer)
	 {
            case '1':{
			                    for(int i =1 ; i<=100;i++ )
                            {
	                            printf("冲！！！");
                            } 
					break;
					 }
                
            case '2':{
	                            for(int i =1 ; i<=100;i++ )
                           {
	                            printf("汪汪汪！！！"); 
                           }
                break;
			         }
            case '3':{
				
	                            for(int i =1 ; i<=100;i++ )
                           {
	                             printf("区区酷狗，虽远必诛（怒）！！！");
                           }
					break;
                     }
            case '4':{
	                           for(int i =1 ; i<=100;i++ )
                           {
	                           printf("握握手！！！");   
                           } 
					break;
			         }
              
            default:
			        {
               
	                            for(int i =1 ; i<=100;i++ )
                           {
	                            printf("原神，启动！！！");
							
                           }
		             break;
         	        }
	}  
} }
//不得不说，第一次自己写这么长的基础代码还是有难度的，写了一晚上一运行发现几十行报错天都塌了
//其实要说教训的话也没有什么，主要是保持头脑清醒，不要犯太多低级错误，比如一些很基础的用法，其他纠错交给ai就行了
//排版非常重要！！！不然用了几个括号都要忘
//不过可惜的是我把彩色部分删掉了，之后添上来可能会更好一点，不过大概率我再也不会动这个了吧（笑）
//今晚是真上瘾了一直学到了十点,真的不是我想卷。。。（戳手）
//累归累，完成了还是很开心的，并且今晚的练习让我有了复刻小时候看的生存游戏的构想，可能不会去实现，不过真完成了会很酷吧
//2025年10月21日
//图书馆水挺好喝的


