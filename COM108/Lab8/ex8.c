#include <stdio.h>
struct sinhvien{
    char masv[10];
    char ten[50];
    float toan,ly,hoa;
}sv1,sv2;
void tinhhocluc(){
    printf("nhap diem toan: ");
    scanf("%f",&sv1.toan);
    printf("nhap diem ly: ");
    scanf("%f",&sv1.ly);
    printf("nhap diem hoa: ");
    scanf("%f",&sv1.hoa);
    float dtb =(sv1.toan+sv1.ly+sv1.hoa)/3;
    printf("tb = %.2f\n",dtb);
    if (dtb >= 9){
        printf("Hoc luc xuat sac");
    }
    else if (dtb >= 8){
        printf("Hoc luc gioi");
    }
    else if (dtb >= 6.5){
        printf("Hoc luc kha");
    }
    else if (dtb >= 5){
        printf("Hoc luc trung binh");
    }
    else{
        printf("Hoc luc yeu");
    }
}
int main(){
    tinhhocluc();
}