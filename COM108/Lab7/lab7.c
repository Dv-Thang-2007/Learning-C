#include <stdio.h>
#include <string.h>
#include <ctype.h>
//_____________________________________Bai 1___________________________________
//xay dung ham dem so nguyen am va phu am trong chuoi
void demngampam(){
    char str[100];
    int i, nguyenam=0, phuam=0;
    printf("Nhap chuoi: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++){
        char chuoi = str[i];
        if((chuoi>='a' && chuoi<='z') || (chuoi>='A' && chuoi<='Z')){
            chuoi = tolower(chuoi);
            if(chuoi=='a' || chuoi=='e' || chuoi=='i' || chuoi=='o' || chuoi=='u'){
                nguyenam++;
            }
            else{
                phuam++;
            }
        }
    }
    printf("So nguyen am: %d\n", nguyenam);
    printf("So phu am: %d\n", phuam);
}
////_____________________________________Bai 2___________________________________
// xay dung ham dang nhap usename va password 
void dangnhap(){
    char username[]="admin";
    int password=12345;
    char login_user[50];
    int login_pass;
    printf("Dang nhap:\n");
    printf("Nhap username: ");
    gets(login_user);
    printf("Nhap password: ");
    scanf("%d", &login_pass);
    if(strcmp(username, login_user) == 0 && password ==login_pass){
        printf("Dang nhap thanh cong!\n");
    }
    else{
        printf("Dang nhap that bai!\n");
    }
}
//_____________________________________Bai 3___________________________________
//tim ki tu xuat hien nhieu hon 2 lan trong chuoi
void xetkituspam(){
    char str[100],temp;
    int i,biendem;
    getchar();
    printf("Nhap chuoi: ");
    gets(str);
    for( i=0; str[i]!='\0'; i++){
        if (str[i]==str[i+1]){
            biendem++;
            if (biendem>2){
                temp=str[i];
            }
        }
    }
    if (biendem>2)
    printf("ki tu xuat hien tren 2 lan la %c", temp);
}

int main(){
    demngampam();
    dangnhap();
    xetkituspam();
    return 0;
}