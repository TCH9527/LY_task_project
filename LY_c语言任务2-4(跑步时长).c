#include<stdio.h>
#include<time.h>
int main()
{char cmd,CMD;
 clock_t start,end;
 double time;
 printf("请按回车键开始计时，按其他键退出程序");
 cmd=getchar();
 if(cmd!='\n'){printf("程序关闭"); return 0;}
 start=clock();
 printf("按回车键停止计时。\n");
 CMD=getchar();
 if(CMD=='\n'){end=clock();}
 time=(double)(end-start)/CLOCKS_PER_SEC/60;
 printf("时长：%.3f分钟",time);
 return 0; 
 } 
