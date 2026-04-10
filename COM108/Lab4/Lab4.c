<<<<<<< HEAD
#include <stdio.h>
#include <math.h>
//tạo hàm
void tinhtbsochan(){
    int min,max,i;
    float tong=0,tb=0,biendem=0;
    printf("nhap vao min max(min<max):");
    scanf("%d%d",&min,&max);
    i=min;
    while (i<=max){
        if (i%2==0){
            tong+=i;
            biendem++;
        }
        i++;
    }
    tb=tong/biendem;
    printf("tb cac so chan tu min toi max la %2.f \n",tb);
}
void checksnt(){
    int a=0,n,i;
    printf("nhap n de xet n co phai so nguyen to hay khong:");
    scanf("%d",&n);
    for ( i = 2; i < n; i++){
        if (n%i==0){
            a++;
        }
        if (a==0){
            printf("%d la so nguyen to\n",n);
        }
        else{
            printf("%d khong phai la so nguyen to\n");
        }
    }
}
void checkscp(){
    int n,a=0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        if (i * i == n) {
            a = 1;
            break; 
        }
    }
    if (a) {
        printf("%d la so chinh phuong.\n", n);
    } else {
        printf("%d khong phai la so chinh phuong.\n", n);
    }
}
int main(){
    int luachon;    
    do{
        printf("================================================\n");
        printf("Welcome to 22_PS49638_DOVANTHANG_lab4.\n");
        printf("______________________________________\n");
        printf("Chuc nang so 1: tinh trung binh tong cac so chia het cho 2 tu min toi max.\n");
        printf("Chuc nang so 2: xay dung chuong trinh xac dinh so nguyen to.\n");
        printf("Chuc nang so 3: xay dung chuong trinh xac dinh so chinh phuong.\n");
        printf("=======================================\n");
        printf("Lua chon chuc nang cua ban (Nhap 0 de thoat): ");
        scanf("%d",&luachon);
    
        switch (luachon){
            case 1: tinhtbsochan(); break;
            case 2: checksnt(); break;
            case 3: checkscp(); break;
        }
    } while (luachon!=0);
    return 0;
}
=======
#include <stdio.h>
#include <math.h>
//tạo hàm
void tinhtbsochan(){
    int min,max,i;
    float tong=0,tb=0,biendem=0;
    printf("nhap vao min max(min<max):");
    scanf("%d%d",&min,&max);
    i=min;
    while (i<=max){
        if (i%2==0){
            tong+=i;
            biendem++;
        }
        i++;
    }
    tb=tong/biendem;
    printf("tb cac so chan tu min toi max la %2.f \n",tb);
}
void checksnt(){
    int a=0,n,i;
    printf("nhap n de xet n co phai so nguyen to hay khong:");
    scanf("%d",&n);
    for ( i = 2; i < n; i++){
        if (n%i==0){
            a++;
        }
        if (a==0){
            printf("%d la so nguyen to\n",n);
        }
        else{
            printf("%d khong phai la so nguyen to\n");
        }
    }
}
void checkscp(){
    int n,a=0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        if (i * i == n) {
            a = 1;
            break; 
        }
    }
    if (a) {
        printf("%d la so chinh phuong.\n", n);
    } else {
        printf("%d khong phai la so chinh phuong.\n", n);
    }
}
int main(){
    int luachon;    
    do{
        printf("================================================\n");
        printf("Welcome to 22_PS49638_DOVANTHANG_lab4.\n");
        printf("______________________________________\n");
        printf("Chuc nang so 1: tinh trung binh tong cac so chia het cho 2 tu min toi max.\n");
        printf("Chuc nang so 2: xay dung chuong trinh xac dinh so nguyen to.\n");
        printf("Chuc nang so 3: xay dung chuong trinh xac dinh so chinh phuong.\n");
        printf("=======================================\n");
        printf("Lua chon chuc nang cua ban (Nhap 0 de thoat): ");
        scanf("%d",&luachon);
    
        switch (luachon){
            case 1: tinhtbsochan(); break;
            case 2: checksnt(); break;
            case 3: checkscp(); break;
        }
    } while (luachon!=0);
    return 0;
}
>>>>>>> 189d4b0d88e2807329ea8e2e17de2496f5855b2d
