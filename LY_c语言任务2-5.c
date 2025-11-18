#include<stdio.h>
int main()
{double C,F; 
 printf("输入您的华氏温度，我会将其转化为摄氏温度\n输入：");
 scanf("%lf",&F) ;
 C=(F-32)*5/9; 
 printf("输出：%.2lf",C) ;
 return 0; 
} 
