#include <stdio.h>

int main(){
    double price[5];
    int num[5];
    int n;
    char kind[6]={'0'};
    int i=0;
   

    while(i<5){
    scanf("%s",kind);
    scanf("%d",&n);
    scanf("%lf",&price[n-1]);
    scanf("%d",&num[n-1]);
    i++;
  
}
for(int m=0; m<5;m++)
{
  printf("%d %.1f %d\n",m+1,price[m],num[m]);
}

printf("begin,(finish click -1 -1)(back click -2 -2)\n");
n=0;
int amount;
double sum=0;
int t=0,m=0,time=0;
    double pri=0;

begin:

while(n!=-1){
    printf("please choose(channel amount)\n ");
    
scanf("%d %d",&n,&amount);
if (n==-2&&time<4)
{
 num[t]+=m ;
 
 sum=sum-pri;
 time++;
 printf("succeed\n");
}else if (time>3)
{
printf("sorry,times have over\n");
}else if (n>5)
{
    printf("This number does not exist\n");
}else{    
    m=amount;
    t=n-1;
    num[n-1]-=amount;
    
    if(num[n-1]<0){
        num[n-1]+=amount;
        printf("The goods are not enough\n");   
    }else{
        pri=price[n-1]*amount;
        sum+=pri;
    }
}
}



printf("please pay for your bill,%.1fyuan\n",sum);

int pay1=0,pay2;
    double change;
    while(pay1<sum){
        scanf("%d",&pay2);
        pay1+=pay2;
        printf(" continue\n");
    }
       change=pay1-sum;
       
        printf("change%.1fyuan\nif continue,click 1,else click 2\n",change);
       int b;
       scanf("%d",&b);
       if (b==1)
       {
           n = 0;
           sum=0;
      goto begin;
       }




return 0;

}