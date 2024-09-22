#include <stdio.h>

int main(){
    int pass;
    int num;
    char kind[10]={'0',};
    double price;

scanf("%s %d %lf %d",kind,&pass,&price,&num);

printf("%d: ",num);

for(int i=0;i<num;i++){
    printf("%s",kind);
}
    printf(" %.1f\n",price);
}