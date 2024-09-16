#include <stdio.h>
#include <string.h>

int main() {
	int n, i = 0;
	int price[5] ;
	int num[5] ;
	char ch[10] ;
        char end[5]={'E','N','D',0};
	
	while (strcmp(ch,end)!=0) {
		scanf("%s",ch);
		if (strcmp(ch,end)==0) {
			continue;   
	                }
			else 
		       { n = (int)ch[i+1]; }
		scanf("%d", &n);
		scanf("%d", &price[n -1]);
		scanf("%d", &num[n - 1]);
		i++;
	       }


printf("begin,(finish click END)(back click BACK)\n");
n=0;
int amount;
int sum=0;
int time=0;

char back[5]={'B','A','C','K',0};
char ord[5];
begin:

while(strcmp(ord,end)!=0){
    printf("please choose\n ");
    
scanf("%s",ord);		
	if (strcmp(ord,back)==0&&time<3){
		num[n-1]+=amount ;	
		sum=sum-price[n-1]*amount;
		time++;
		printf("succeed\n");
	}else if (strcmp(ord,back)==0&&time>2){
		printf("sorry,times have over\n");
	}else if(strcmp(ord,end)==0){
		continue;
	}else{  scanf("%d %d",&n,&amount);
			num[n-1]-=amount;
			
		if(num[n-1]<0){
			num[n-1]+=amount;
			printf("The goods are not enough\n");   
		}else{
				sum+=price[n-1]*amount;
			}
		}
    }

printf("please pay for your bill,%dyuan\n",sum);

int pay1=0,pay2;
int change;
    while(pay1<sum){
        scanf("%d",&pay2);
        if (pay2!=1&&pay2!=2&&pay2!=5)
		{  printf("wrong\n");
		}else{
		pay1+=pay2;}
        if (pay1-sum<0)
		{  printf(" continue\n");  }
		}
       change=pay1-sum;
        printf("change,%dyuan\nif continue,click 1,else click 2\n",change);
       int b;
       scanf("%d",&b);
       if (b==1)
       {   sum=0;
           ord[0]='0';
	   time=0;
           goto begin;
       }

return 0;
}
