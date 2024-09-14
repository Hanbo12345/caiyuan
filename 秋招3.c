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

printf("begin,click -1\n");
n=0;
int amount;
double sum=0;

begin:

while(n!=-1){
    printf("please choose\n ");
    int t=0;
scanf("%d %d",&n,&amount);

t=num[n-1];
num[n-1]-=amount;

if (n>5)
{
   printf("This number does not exist\n");

}else if(num[n-1]<0){
    printf("The goods are not enough\n");
    
}else{
    sum+=amount*price[n-1];
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
       int m;
       scanf("%d",&m);
       if (m==1)
       {
           n = 0;
           sum=0;
      goto begin;
       }




return 0;

}