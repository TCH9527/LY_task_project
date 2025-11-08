#include<stdio.h>
int main()
{int price=0;   //设置每次收入的金额 
 int PRICE=0;   //设置总收入的金额 
 printf("请输入您的新收入：");   //引导Max输入 
 scanf("%d",&price);   //读取每次收入（输入）的金额
 PRICE=price  ; 
 
 while(PRICE<200)    //设置循环，当没赚够时继续输入 
      {printf("请输入您的新收入:");
	   scanf("%d",&price);
	   PRICE+=price; }   //将每次收入加入总收入 
	   
 printf("恭喜，你已赚够%d元",PRICE);
 return 0;	    
	
}
