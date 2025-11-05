#include <stdio.h>
int main(){  
  double DAY=0;
  int week=0;
  int day=0;
  
	printf("请输入天数:");
	scanf("%lf",&DAY);
	
    while (DAY-(int)DAY==0 and DAY>0)
	{ week=(int)DAY/7;
	day=(int)DAY%7;
	
	printf("%d周%d天。\n",week,day);
	printf("可再次输入");
	scanf("%lf",&DAY); 
	}
	
	printf("错误");
	return 0;
}
