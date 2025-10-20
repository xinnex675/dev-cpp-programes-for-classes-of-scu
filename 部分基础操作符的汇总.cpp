 #include<iostream>

int main()
{   
    float a =7.0 / 2.0 ;//两端有一方为小数才能输出小数 
	a += 3 ;//赋值操作符的用法 
	printf("%.1f\n",a); //%.nf表示打印出n位小数 
	float b =7 % 2 ;//取模两端必须为整数 
	b -= 3;
	printf("%.1f\n",b); 
    int  f = 0; //0表示假 不可执行 
        if (!f == 7);//反逻辑 ,同时用关系操作符判断 
	   {
		   printf("man!!!\n");
	   }
	
	    printf("%d\n",sizeof(a)) ;//计算字节 
	    int arr[10]={1747};
	    printf("%d\n",sizeof(arr)) ;//计算数组大小 ，整形数组无\0 
	    printf("%d\n",sizeof(arr)/sizeof(arr[0])) ;//计算数组元素个数 ，此时[0]的方框是下标引用操作符，作用是引用第零项 
	
	    int m = 10;
	    int n = m++;//后置++，即先使用后加1 
	    printf("%d\n",n);
	    printf("%d\n",m) ;
	
	    int mmm = (int)10.111;//强制类型转换 
	    int nnn = ++ mmm;//前置则先+1再使用 ,--同理 
	    printf("%d\n",nnn); 
	    printf("%d\n",mmm);
	    int  ff =7; 
	    int  dd = 6; 
        if (ff && dd); //逻辑操作符，&&表并且，“||”表或者 
	   {
		   printf("man!!!\n");
	   }
		int aq =10;
		int bq =20;
		int r = aq>bq ? aq : bq; //条件操作符或三目操作符，无括号 
		printf("%d\n",r);//此处即求两者较大值 
		//逗号表达式即从左向右依次运行，最后结果即最后一个表达式结果 
		//()可用于函数调用操作符 ，用于调用函数 
		
		return 0;
 } 
