#include <stdio.h>
//bai 1 tao ham so sanh 3 so
int ss3so(){
    int a,b,c,max,min;
    printf("nhap a:");
    scanf("%d",&a);
    printf("nhap b:");
    scanf("%d",&b);
    printf("nhap c:");
    scanf("%d",&c);
    if (a>b){
        max=a;
        min=b;
    }else{
        min=a;
        max=b;
    }
    if (max>c){
        if (min>c){
            min=c;
        }
    }else{
        max=c;
    }
    printf("so lon nhat trong 3 so la: %d\n",max);
    printf("so nho nhat trong 3 so la: %d\n",min);
}
//bai 2 xay dung ham tinh nam nhuan
int xetnn(){
    int sonam;
    printf("nhap so nam can xet nam nhuan:");
    scanf("%d",&sonam);
    if (sonam%400==0||(sonam%4==0&&sonam%100!=0)){
        printf("%d la nam nhuan\n",sonam);
    }else{
        printf("%d khong la nam nhuan\n",sonam);
    }
}
//bai 3 xay dung ham hoan vi
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int x,y;
    ss3so();
    xetnn();
    printf("nhap x y:");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("x la :%d\ny la :%d",x,y);
    return 0;
}