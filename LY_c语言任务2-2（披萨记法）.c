#include<stdio.h>
int main()
{char cmd,CMD;   //设置判断字符位置 
 int paz,ingredient;
 int PRICE=0;   //设置金额位置 
 printf("输入N计算新订单.\n"); 
 printf("输入Q结束程序.\n"); 
 
 while (1)
 {printf("请输入指令(N/Q):");
  scanf("%c",&cmd);
  if (cmd=='Q'){printf("程序关闭");  return 0;}
  else if(cmd=='N'){break;}
 }
 
  printf("输入披萨数量:");
  scanf("%d",&paz);	
  printf("输入配料数量：");
  scanf("%d",&ingredient);
 while (1)
 {printf("是否需要外送(Y/N)");
  scanf("%c",&CMD);
  if(CMD=='Y'){PRICE+=5;break;}       
  else if(CMD=='N'){PRICE+=0;break;}}
  
  PRICE+=paz*20+ingredient*2;
  printf("订单价格为%d元",PRICE);
  
  return 0;
}
