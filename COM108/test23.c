#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define N 100
struct SinhVien {
    char masv[10];
    char tensv[50];
    float diem;
};
typedef struct SinhVien sv;

void nhapSV(sv ds[],int n) {
    int flag;
    for (int i = 0; i < n; i++){    
        printf("Ma SV: ");
        fgets(ds[i].masv, 10, stdin);
        ds[i].masv[strlen(ds[i].masv)-1] = '\0';
        printf("Ho Ten: ");
        fgets(ds[i].tensv, 50, stdin);
        ds[i].tensv[strlen(ds[i].tensv)-1] = '\0';
        printf("So diem: ");
        scanf("%f", &ds[i].diem);
        getchar();
    }
}
void xuatdsSV(sv ds[],int n) {
    printf("\ndanh sach sinh vien \n");
    printf("\n%-10s %-20s %-15s \n", "MANV", "HoTen", "Diem");
    for (int i = 0; i < n; i++) {
        printf("%-10s %-20s %.2f \n",
               ds[i].masv, ds[i].tensv, ds[i].diem);
    }
    printf("\n------------------------------------------------\n");
}

void timsv(sv ds[],int n){
    char ten2[50];
    printf("nhap sinh vien can tim:");
    fgets(ten2, 50, stdin);
    ten2[strlen(ten2)-1] = '\0';
    for (int i = 0; i < n; i++){
        if (strcmp(ds[i].tensv,ten2)==0){
            printf("%-10s %-20s %.2f \n",ds[i].masv, ds[i].tensv, ds[i].diem); 
            break;
        }
    }
}

int main(){
    int n,i;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    getchar();
    sv ds[n];
    nhapSV(ds,n);
    xuatdsSV(ds,n);
    timsv(ds,n);
    return 0;
}