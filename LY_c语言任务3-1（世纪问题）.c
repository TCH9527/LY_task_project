#include<stdio.h>
int main()
{int YEAR;
 int CENTURY;
 printf("输入年份我会告诉你对应的世纪\n");
 printf("YEAR=");
 scanf("%d",&YEAR);
 if(YEAR%100!=0) 
	{CENTURY=YEAR/100+1;}
 else if(YEAR%100==0)
    {CENTURY=YEAR/100;}	
 printf("这个年份是%d世纪",CENTURY);
 return 0;
} 
