#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//_____________________________________________________cac ham chuc nang cua menu__________________________________________________________________________

//nhap vao 1 so nguyen ==> kiem tra so nguyen,so nguyen to,so chinh phuong
void chucnang1(){
    float n;
    int b;
    printf("Nhap vao so nguyen:");
    scanf("%f",&n);
    if (n/(int)n==0){
        printf("%.0f la so nguyen\n",n);
        //so nguyen to
        b=(int)n;
        if (b==2){
            printf("%d la mot so nguyen to\n",b);
        }
        if (b>1){
            if (b%2!=0){
                if (b%3!=0){
                    printf("%d la mot so nguyen to\n",b);
                }
            }
        }
        else{
            printf("%d khong la so nguyen to\n",b);
        }
        //so chinh phuong
        int can=sqrt(b);
        if (can*can==b||b==0||b==1){
            printf("%d la mot so chinh phuong\n",b);
        }
        else{
            printf("%d khong la so chinh phuong\n",b);
        }
    }
    else {
        printf("%f khong la so nguyen\n",n);
        printf("%f khong la so nguyen to\n",n);
        printf("%f khong la so chinh phuong\n",n);
    }
    printf("\n--------------------------------------------\n");

}

//nhap vao 2 so nguyen ==> tim UCLN va BCNN cua 2 so da nhap
void chucnang2(){
    int x,y,max=1,min;
    printf("Nhap vao 2 so x y:");
    scanf("%d %d",&x,&y);
    //UCLN
    if (x==0||y==0){
        max=x+y;
    }
    
    for (int i = 1; i <= x && i<= y; i++){
        if (x%i==0&&y%i==0){
            if (max<i){
                max=i;
            }
        }
    }
    printf("UCLN la %d\n",max);
    //BCNN
    if (x>y){
        min=x;
    }else{
        min=y;
    }
    while (1){
        if (min%x==0&&min%y==0){
            break;
        }
        min++;
    }
    printf("BCNN la %d\n",min);
printf("\n--------------------------------------------\n");

}

//nhap vao gio bat dau va gio ket thuc ==> gia tien can thanh toan
void chucnang3(){
    int start,end,cost,time;
    do{
        printf("Nhap vao gio bat dau va gio ket thuc:");
        scanf("%d %d",&start,&end);
    } while (start<12&&end>23);
    time=end-start;
    if (time<=3){
        cost=150000*time;
    }
    else{
        cost=time*(150000*0.7);
    }
    if (start<=17&&start>=14){
        cost*=0.9;
    }
    printf("So tien can thanh toan la: %d \n ",cost);
printf("\n--------------------------------------------\n");

}

// nhap vao so dien kwh ==> tien dien
void chucnang4(){
    int k,TIEN=0;
    printf("Nhap vao so dien(kwh):");
    scanf("%d",&k);
    if (k<=50){
        TIEN=k*1678;
    }
    else if (k<=100){
        TIEN=50*1678;
    	TIEN+=(k-50)*1734;
    }
    else if (k<=200){
        TIEN=50*1678;
    	TIEN+=50*1734;
    	TIEN+=(k-100)*2014;
    }
    else if (k<=300){
        TIEN=50*1678;
    	TIEN+=50*1734;
    	TIEN+=100*2014;
    	TIEN+=(k-200)*2536;
    }
    else if (k<=400){
        TIEN=50*1678;
    	TIEN+=50*1734;
    	TIEN+=100*2014;
    	TIEN+=200*2536;
        TIEN+=(k-300)*2834;
    }
    else{
        TIEN=50*1678;
    	TIEN+=50*1734;
    	TIEN+=100*2014;
    	TIEN+=200*2536;
        TIEN+=300*2834;
        TIEN+=(k-400)*2927;
    }
    printf("TIEN DIEN = %d VND\n",TIEN);
printf("\n--------------------------------------------\n");

}

//Nhap vao so tien can doi ==> menh gia tien duoc doi ra
void chucnang5(){
    int tdoi,to1,to2,to3,soto1=0,soto2=0,soto3=0;
    int tien[9]={500,200,100,50,20,10,5,2,1};
    printf("Nhap vao so tien can doi:");
    scanf("%d",&tdoi);
    for (int i = 0; i < 10; i++){
        if (tdoi==tien[i]){
            to1=tien[i+1];
            to2=tien[i+2];
            to3=tien[i+3];
        }
    }
    if (tdoi==1*to1+2*to2+1*to3){
        soto1++;
        soto2=2;
        soto3++;
        printf("Tien sau khi doi la %d to %d, %d to %d va %d to %d\n",soto1,to1,soto2,to2,soto3,to3 );     
    }
    else if (tdoi==2*to1+1*to2+0*to3){
        soto1=2;
        soto2++;
        printf("Tien sau khi doi la %d to %d va %d to %d \n",soto1,to1,soto2,to2 );     

    }
    else{
        soto1++;
        soto2=2;
        printf("Tien sau khi doi la %d to %d va %d to %d \n",soto1,to1,soto2,to2);     
    }
printf("\n--------------------------------------------\n");

}

//nhap vao so tien muon vay ngan hang ==> so tien can tra trong 12 thang
void chucnang6(){
    int tienvay,lai,i,tienvayhangthang;
    printf("nhap vao so tien vay: ");
    scanf("%d",&tienvay);
    tienvayhangthang=tienvay/12;
    for (int i = 1; i <=12; i++){
        lai=tienvay*0.05;
        printf("%-2s %-10s %-10s %-10s %-10s\n","ky han__",
    "lai phai tra__","goc phai tra__","so tien phai tra__","so tien con lai__");
        printf("%-10d %-14d %-14d %-17d %d\n",i,lai,
    tienvayhangthang,tienvayhangthang+lai,tienvay-=tienvayhangthang);
    }
    printf("\n--------------------------------------------\n");

}

//nhap vao so phan tram vay toi da(so phan tram tra gop) ==> so tien tra truoc va so tien tra hang thang cho den het ky han vay
void chucnang7(){
    float sophantram,tratruoc,trahangthang;
    printf("Nhap vao so phan tram vay toi da:");
    scanf("%f",&sophantram);
    tratruoc=((100-sophantram)/100)*500000000;
    trahangthang=(500000000-tratruoc)/(24*12);
    printf("so tien can tra truoc la %.2f\n",tratruoc);
    printf("so tien tra hang thang %.2f\n",trahangthang*(1+(0.15/12)));
    printf("\n--------------------------------------------\n");

}

//nhap vao ho ten va diem cua sinh vien ==> xuat ra danh sach sinh vien giam dan
struct SinhVien {
    char ten[50];
    float diem;
    char hocluc[20];
};
void chucnang8(){
    //nhap danh sach
    int n;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    getchar();
    struct SinhVien sv[n];
    for (int i = 0; i < n; i++) {
        printf("\nNhap ten sinh vien %d: ", i + 1);
        fgets(sv[i].ten, sizeof(sv[i].ten), stdin);
        sv[i].ten[strcspn(sv[i].ten, "\n")] = '\0';
        // nhap diem va kiem tra hoc luc
        do {
            printf("Nhap diem (0 - 10): ");
            scanf("%f", &sv[i].diem);
            if (sv[i].diem < 0 || sv[i].diem > 10)
                printf("Diem khong hop le! Vui long nhap lai.\n");
        } while (sv[i].diem < 0 || sv[i].diem > 10);
        getchar();
        if (sv[i].diem >= 9.0)
            strcpy(sv[i].hocluc, "Xuat sac");
        else if (sv[i].diem >= 8.0)
            strcpy(sv[i].hocluc, "Gioi");
        else if (sv[i].diem >= 6.5)
            strcpy(sv[i].hocluc, "Kha");
        else if (sv[i].diem >= 5.0)
            strcpy(sv[i].hocluc, "Trung binh");
        else
            strcpy(sv[i].hocluc, "Yeu");
    }
    //sap xep diem giam dan
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sv[i].diem < sv[j].diem) {
                struct SinhVien tmp = sv[i];
                sv[i] = sv[j];
                sv[j] = tmp;
            }
        }
    }
    //xuat danh sach
    printf("\n===== DANH SACH SINH VIEN GIAM DAN =====\n");
    printf("%-25s %-10s %-15s\n", "Ho ten", "Diem", "Hoc luc");
    for (int i = 0; i < n; i++) {
        printf("%-25s %-10.2f %-15s\n",
               sv[i].ten, sv[i].diem, sv[i].hocluc);
    }
    printf("\n--------------------------------------------\n");
}

//nhap vao 2 so (1-15)==> hien thi thong tin trung giai
void chucnang9(){
    int so1,so2,sotrung1,sotrung2;
    // nhap 2 so may man
    printf("Nhap vao 2 so (1 - 15): ");
    scanf("%d %d", &so1, &so2);
    // Kiểm tra hợp lệ
    if (so1 < 1 || so1 > 15 || so2 < 1 || so2 > 15){
        printf("so khong hop le vui long nhap lai\n");
        return;
    }
    //sinh si ngau nhien tu a-b theo ct=a+rand()%(b-a+1)
    sotrung1 = 1 + rand() % 15;
    sotrung2 = 1 + rand() % 15;
    printf("2 So trung thuong la: %d %d\n", sotrung1, sotrung2);
    // Đếm số trúng
    int bd = 0;
    if (so1 == sotrung1 || so1 == sotrung2) bd++;
    if (so2 == sotrung1 || so2 == sotrung2) bd++;
    if (bd == 2)
        printf("Chuc mung ban da trung GIAI NHAT\n");
    else if (bd == 1)
        printf("Chuc mung ban da trung GIAI NHI\n");
    else
        printf("Chuc ban may man lan sau\n");
    printf("\n--------------------------------------------\n");

}

//nhap vao 2 phan so ==> tong hieu tich thuong cua 2 phan so
void chucnang10(){
    //nhap 2 phans
    int tu1,mau1,tu2,mau2;
    printf("Nhap phan so thu 1 (tu mau): ");
    scanf("%d %d", &tu1, &mau1);
    printf("Nhap phan so thu 2 (tu mau): ");
    scanf("%d %d", &tu2, &mau2);
    if (mau1 == 0 || mau2 == 0){
        printf("Mau so khong duoc bang 0!\n");
        return;
    }
    // + cong
    int congtu = tu1 * mau2 + tu2 * mau1;
    int congmau = mau1 * mau2;
    // - tru
    int trutu = tu1 * mau2 - tu2 * mau1;
    int trumau = mau1 * mau2;
    // * nhan
    int nhantu = tu1 * tu2;
    int nhanmau = mau1 * mau2;
    // / chia
    int chiatu = tu1 * mau2;
    int chiamau = mau1 * tu2;
    if (chiamau == 0){
        printf("Khong the chia! Mau so bang 0.\n");
        return;
    }
    printf("\n===== KET QUA =====\n");
    printf("Cong: %d/%d\n", congtu, congmau);
    printf("Tru : %d/%d\n", trutu, trumau);
    printf("Nhan: %d/%d\n", nhantu, nhanmau);
    printf("Chia: %d/%d\n", chiatu, chiamau);
    printf("\n--------------------------------------------\n");

}

//menu
int main(){
//_______________________________________________Menu chuc nang_______________________________________________
    int luachon;
    do{
        printf("\n--------------------------------------------\n");
        printf("Welcome to 22_PS49638_DOVANTHANG_ASM2_COM108.\n");
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
        printf("Lua chon chuc nang cua ban la : ");
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
    }while (luachon!=0);
    return 0;
}