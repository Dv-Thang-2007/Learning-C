#include <stdio.h>

int main(){
    int a,b,max,min,tmpa,tmpb;
    printf("nhap vao 2 so a va b: ");
    scanf("%d %d",&a,&b);
    if (a>b) max=a;
    else max=b;
    printf("\ncac uoc chung cua 2 so %d va %d la:",a,b);
    for (int i = 1; i <= max; i++){
        if (a%i==0&&b%i==0){
            printf("%d ",i);
        }
        
    }
    printf("\nboi chung cua 2 so %d va %d la:",a,b);
    if (a>b){
        min=a;
    }else{
        min=b;
    }
    while (1){
        if (min%a==0&&min%b==0){
            printf("%d",min);
            break;
        }
        min++;
    }
    return 0;
}