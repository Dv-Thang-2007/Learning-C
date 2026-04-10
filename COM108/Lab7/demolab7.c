#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[20];
    int i;
    scanf("%d", &i);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    printf("Nhap chuoi 1: ");
    gets(str1);
    printf("Nhap chuoi 2: ");
    gets(str2);
    /*if (strcmp(str1, str2) == 0){
        printf("Chuoi giong nhau");
    }
    else if (strcmp(str1, str2) > 0){
        printf("Chuoi 1 lon hon chuoi 2");
    }
    else{
        printf("Chuoi 2 lon hon chuoi 1");
    }
    printf("\nChuoi 1: %d", strlen(str1));
    printf("\nChuoi 2: %d", strlen(str2));
    printf("\nChuoi sau khi noi: %s", strcat(str1, str2));
    printf("\nChuoi 1 sau khi dao nguoc: ");
    strrev(str1);
    printf("%s", str1);
    printf("chuoi thuong : %s\n", strlwr(str1));
    printf("chuoi hoa : %s\n", strupr(str1));
    if (strstr(str1,str2)!=NULL)
    {
        printf("Chuoi 2 la chuoi con cua chuoi 1");
    }
    */
   
    return 0;
}