#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int luachon;
    //Menu chuc nang
    do{
        printf("Welcome to DOVANTHANG_PS49638_Lab3.\n");
        printf("___________________________________\n");
        printf("nhap 1 de tinh hoc luc.\n");
        printf("nhap 2 de giai pt bac nhat.\n");
        printf("nhap 3 de giai pt bac hai.\n");
        printf("nhap 4 de tinh tien dien tieu thu hang thang.\n");
        printf("nhap 0 de thoat chuong trinh.\n");
        printf("===================================\n");
        printf("lua chon chuc nang cua ban la:....\n");
        scanf("%d", &luachon);
        //xet lua chon 
        switch (luachon){
        //tinh hoc luc
        case 1:{
            float dtb;
            printf("Nhap diem trung binh:\n");
            scanf("%f", &dtb);
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
            break;
        }
        //tinh pt bac 1
        case 2:{
            float a,b,c,x;
            printf("phuong trinh bat nhat co dang ax + b = 0.\n");
            printf("nhap a va b: \n");
            scanf("%f%f",&a,&b);
            if (a == 0){
                if (b == 0){
                    printf("pt vo so nghiem.");
                }
                else{
                    printf("pt vo nghiem.");
                }
            }
            else{
                x = (-b) / a;
                printf("pt co nghiem la x= %.2f", x);
            }
            break;
        }
        //tinh pt bac 2
        case 3:{
            float a, b, c, x, delta=0,x1,x2;
            printf("pt co dang: ax2 + bx + c = 0\n");
            printf("nhap a b c: \n");
            scanf("%f%f%f",&a,&b,&c);
            if (a == 0){
                if (b == 0){
                    if (c == 0){
                        printf("pt vo so nghiem.");
                    }
                    else
                    {
                        printf("pt vo nghiem.");
                    }
                }
                else{
                    x = (-c) / b;
                    printf("pt co nghiem x=%.2f", x);
                }
            }
            else{
                delta = b*b-4*a*c;
                printf("delta = %.2f\n", delta);
                if (delta < 0){
                    printf("pt vo nghiem");
                }
                else if (delta == 0){
                    x=(-b)/(2*a);
                    printf("pt co nghiem kep x = %.2f",x);
                }
                else{
                    x1 = (-b + sqrt(delta)) / (2 * a);
                    x2 = (-b - sqrt(delta)) / (2 * a);
                    printf("pt co 2 nghiem phan biet la: x1=%.2f\n x2=%.2f",x1,x2);
                }
            }
            break;
        }
        //tinh tien dien
        case 4:{
            float sodien,tiendien=0;
            printf("nhap vao so dien tieu thu hang thang (kWh): \n");
            scanf("%f", &sodien);
            //tinh tien dien theo gia dien bac thang moi nhat
            if (sodien <= 50){
                if (sodien > 0){
                    if (sodien <= 50) {
                        tiendien=sodien*1984;
                    } else if (sodien<=100) {
                        tiendien=50*1984;
                        tiendien+=(sodien-50)*2050;
                    } else if (sodien <= 200){
                        tiendien=0*1984;
                        tiendien+=50*2050;
                        tiendien+=(sodien-100)*2380;
                    } else if (sodien <= 300){
                        tiendien=50*1984;
                        tiendien+=50*2050;
                        tiendien+=100*2380;
                        tiendien+=(sodien-200)*2998;
                    }
            printf("======================================\n");
            printf("tien dien :%.0fVND\n", tiendien);
                }
                break;
            }
        }
        //thoat chuong trinh
        case 0:{
            printf("thoat chuong trinh\n");
            exit(0);
        }
        default:
            printf("lua chon cua ban khong hop le!!\n");
            printf("vui long chon lai\n");
            break;
        }
    } while (luachon!=0);
    return 0;
}