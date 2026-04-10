#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>
#include <limits.h>
void chucnang1(){
    int n, i, flag = 1;
    printf("Nhap so nguyen n:\n");
    scanf("%d", &n);
    if (n <= 1) {
        flag = 0;
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
    }
    if (flag)
        printf("%d la so nguyen to.\n", n);
    else
        printf("%d khong phai la so nguyen to.\n", n);
}
void chucnang2(){
    int a, b, temp_a, temp_b, r;
    printf("Nhap 2 so can tim UCLN va BCNN:\n");
    scanf("%d %d", &a, &b);
    temp_a = a;
    temp_b = b;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    printf("UCLN cua %d va %d la: %d\n", temp_a, temp_b, a);
    printf("BCNN cua %d va %d la: %d\n", temp_a, temp_b, (temp_a * temp_b) / a);
}
void chucnang3(){
    int h;
    float tien;
    printf("Nhap so gio karaoke da thue:\n");
    scanf("%d", &h);
    if (h <= 3) {
        tien = h * 30000;
    } else {
        tien = 3 * 30000 + (h - 3) * 40000;
    }
    printf("So tien phai tra la: %.2f VND\n", tien);
}
void chucnang4(){
    int sodien;
    float tien;
    printf("Nhap so dien(kwh) n:\n");
    scanf("%d", &sodien);
    if (sodien <= 50) {
        tien = sodien * 1000;
    } else {
        tien = 50 * 1000 + (sodien - 50) * 1200;

    }
    printf("So tien phai tra la: %.2f VND\n", tien);
}
void chucnang5(){
    int tien;
    float usd, eur;
    printf("Nhap so tien can doi:\n");
    scanf("%d", &tien);
    usd = tien / 23000.0;
    eur = tien / 27000.0;
    printf("So tien doi duoc la: %.2f USD va %.2f EUR\n", usd, eur);
}
void chucnang6(){
    char choice[10];
    printf("Nhap ls de tinh laisuat va vtg de tinh vaytragop :\n");
    scanf("%s", choice);
    if (strcmp(choice, "ls") == 0) {
        float principal, rate, time, interest;
        printf("Nhap so tien vay goc:\n");
        scanf("%f", &principal);
        printf("Nhap lai suat nam(%%):\n");
        scanf("%f", &rate);
        printf("Nhap so nam vay:\n");
        scanf("%f", &time);
        interest = (principal * rate * time) / 100;
        printf("So tien lai phai tra la: %.2f VND\n", interest);
    } else if (strcmp(choice, "vtg") == 0) {
        float loan_amount, annual_rate, monthly_payment;
        int months;
        printf("Nhap so tien can vay de mua xe:\n");
        scanf("%f", &loan_amount);
        printf("Nhap lai suat nam(%%):\n");
        scanf("%f", &annual_rate);
        printf("Nhap so thang tra gop:\n");
        scanf("%d", &months);
        float monthly_rate = annual_rate / 12 / 100;
        monthly_payment = (loan_amount * monthly_rate) / (1 - pow(1 + monthly_rate, -months));
        printf("So tien tra hang thang la: %.2f VND\n", monthly_payment);
    } else {
        printf("Lua chon khong hop le.\n");
    }
}
void chucnang7(){
    float loan_amount, annual_rate, monthly_payment;
    int months;
    printf("Nhap so tien can vay de mua xe:\n");
    scanf("%f", &loan_amount);
    printf("Nhap lai suat nam(%%):\n");
    scanf("%f", &annual_rate);
    printf("Nhap so thang tra gop:\n");
    scanf("%d", &months);
    float monthly_rate = annual_rate / 12 / 100;
    monthly_payment = (loan_amount * monthly_rate) / (1 - pow(1 + monthly_rate, -months));
    printf("So tien tra hang thang la: %.2f VND\n", monthly_payment);
}
void chucnang8(){
    int sl;
    printf("Nhap so vao so luong sinh vien:\n");
    scanf("%d", &sl);
    char names[sl][50];
    float grades[sl];
    for (int i = 0; i < sl; i++) {
        printf("Nhap ten sinh vien thu %d:\n", i + 1);
        scanf("%s", names[i]);
        printf("Nhap diem cua sinh vien thu %d:\n", i + 1);
        scanf("%f", &grades[i]);
    }
    // Sap xep theo diem giam dan
    for (int i = 0; i < sl - 1; i++) {
        for (int j = i + 1; j < sl; j++) {
            if (grades[i] < grades[j]) {
                // Doi diem
                float temp_grade = grades[i];
                grades[i] = grades[j];
                grades[j] = temp_grade;
                // Doi ten
                char temp_name[50];
                strcpy(temp_name, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp_name);
            }
        }
    }
    printf("Danh sach sinh vien sau khi sap xep theo diem giam dan:\n");
    for (int i = 0; i < sl; i++) {
        printf("%s - %.2f\n", names[i], grades[i]);
    }
}
void chucnang9(){
    int user_numbers[2];
    int lottery_numbers[2];
    srand(time(0));
    lottery_numbers[0] = rand() % 15 + 1;
    do {
        lottery_numbers[1] = rand() % 15 + 1;
    } while (lottery_numbers[1] == lottery_numbers[0]);
    printf("Nhap 2 so may man (1-15):\n");  
    scanf("%d %d", &user_numbers[0], &user_numbers[1]);
    int match_count = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (user_numbers[i] == lottery_numbers[j]) {
                match_count++;
            }
        }
    }
    printf("So may man cua ban la: %d\n", match_count);
    printf("So trung thuong la: %d va %d\n", lottery_numbers[0], lottery_numbers[1]);
}
void chucnang10(){
    int numerator1, denominator1, numerator2, denominator2;
    printf("Nhap tu so va mau so phan so thu nhat:\n");
    scanf("%d %d", &numerator1, &denominator1);
    printf("Nhap tu so va mau so phan so thu hai:\n");
    scanf("%d %d", &numerator2, &denominator2);
    int result_numerator = numerator1 * denominator2 + numerator2 * denominator1;
    int result_denominator = denominator1 * denominator2;
    printf("Tong cua hai phan so la: %d/%d\n", result_numerator, result_denominator);
}
int main(){
    int luachon;
    //Menu chuc nang
    do{
        printf("Welcome to 22_PS49638_DOVANTHANG_ASM1_COM108.\n");
        printf("_____________________________________________\n");
        printf("Chuc nang so 1: Kiem Tra So Nguyen.\n");
        printf("Chuc nang so 2: Tim uoc so chung va boi so chung cua 2 so.\n");
        printf("Chuc nang so 3: Chuong trinh tinh tien cho quan karaoke.\n");
        printf("Chuc nang so 4: Tinh tien dien.\n");
        printf("Chuc nang so 5: Chuc nang doi tien.\n");
        printf("Chuc nang so 6: Xay dung tinh nang tinh lai suat vay ngan hang hoac vay tra gop.\n");
        printf("Chuc nang so 7: Xay dung chuong trinh vay tien mua xe.\n");
        printf("Chuc nang so 8: Sap xep thong tin sinh vien.\n");
        printf("Chuc nang so 9: Xay dung game FPT-LOTT(2/15).\n");
        printf("Chuc nang so 10:Xay dung chuong trinh tinh toan phan so.\n");
        printf("==============================================\n");
        printf("Lua chon chuc nang cua ban la :....\n");
        scanf("%d", &luachon);
        //xet lua chon 
        switch (luachon){
            case 1:{
                chucnang1();
                break;
            }
            case 2:{
                chucnang2();
                break;
            }
            case 3:{
                chucnang3();
                break;
            }
            case 4:{
                chucnang4();
                break;
            }
            case 5:{
                chucnang5();
                break;
            }
            case 6:{
                chucnang6();
                break;
            }
            case 7:{
                chucnang7();
                break;
            }
            case 8:{
                chucnang8();
                break;
                }
            case 9:{
                chucnang9();
                break;
                }
            case 10:{
                chucnang10();
                break;
                }
            default:{
                printf("Lua Chon Khong Hop Le Vui Long Nhap lai\n");
            }

        }
    }
        while (luachon!=0);
    return 0;
}