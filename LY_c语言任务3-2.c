#include<stdio.h> 
int main()
{int num;//设置自然数位置 
 int a;//设置数字位置 
 int T=0;//设置出现次数位置 
 printf("输入一串自然数，再输入一个0~9数字，我会数这个数字在自然数中出现的次数\n"); 
 printf("先输入一串自然数\n");
 scanf("%d",&num);
 printf("再输入一个数字\n");
 scanf("%d",&a);
 if(a<0||a>9){printf("请输入正确的数字");return 0;}
 do
  {if(num-num/10*10==a){T++;}
   else if(num-num/10!=0){T+=0;}
   num/=10; 
  } while(num!=0);
  printf("%d在自然数中出现了%d次",a,T);
  return 0;	
}
