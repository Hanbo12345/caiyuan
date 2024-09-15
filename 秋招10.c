#include <stdio.h>
#include <string.h>

int main() {
	int n, i = 0;
	int price[5] ;
	int num[5] ;
	char ch[10] ;
        char end[5]={'E','N','D',0};
	
	while (strcmp(ch,end)!=0) {
		scanf("%S",ch);
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
int t=0,m=0,time=0;
int pri=0;


char back[5]={'B','A','C','K',0};
char ord[5];
begin:

while(strcmp(ord,end)!=0){
    printf("please choose\n ");
    
scanf("%s",ord);		
	if (strcmp(ord,back)==0&&time<3){
		num[t]+=m ;	
		sum=sum-pri;
		time++;
		printf("succeed\n");
	}else if (strcmp(ord,back)==0&&time>2){
		printf("sorry,times have over\n");
	}else if(strcmp(ord,end)==0){
		continue;
	}else{  scanf("%d %d",&n,&amount);
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

printf("please pay for your bill,%dyuan\n",sum);

int pay1=0,pay2;
int change;
    while(pay1<sum){
        scanf("%d",&pay2);
        pay1+=pay2;
        if (pay1-sum<0)
		{  printf(" continue\n");  }
		}
       change=pay1-sum;
        printf("change,%dyuan\nif continue,click 1,else click 2\n",change);
       int b;
       scanf("%d",&b);
       if (b==1)
       {   n = 0;
           sum=0;
           ord[0]='0';
           goto begin;
       }

return 0;
}
