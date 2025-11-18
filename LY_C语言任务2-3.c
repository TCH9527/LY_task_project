#include<stdio.h>

int calculate(char kind,int weight);

int main()
{int price;
 char kind;
 int weight;
 printf("请选择你的商品类型\n");
 scanf(" %c",&kind);
 printf("输入售卖的重量\n"); 
 scanf("%d",&weight);
 price+=calculate(kind,weight);
 
 while(price<1000)
 {printf("你今天已经获得%d金币了\n",price);
 printf("请选择你的商品类型\n");
 scanf(" %c",&kind);
 printf("输入售卖的数量\n");
 scanf("%d",&weight);
 price+=calculate(kind,weight);
 }
 printf("恭喜，你今天已获得%d个金币，可以休息一下啦\n",price);
}

int calculate(char kind,int weight)
{int price;
  switch(kind) 
  {case 'W': 
   case 'w':
      price=weight*5;break;
   case 'O':
   case 'o':
      price=weight*10;break;
   case 'T':
   case 't':
      price=weight*7;break;
   case 'C':
   case 'c':
      price=weight*8;break;
   default:
   printf("请输入正确的商品类型\n");        
  }
 return price;
};
