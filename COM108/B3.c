#include <stdio.h>
#include <string.h>

#define N 100 

int main() {
    int n;
    printf("Nhap so nguyen duong n ");
    scanf("%d", &n);
    getchar();
    char a[N][100]; 
    printf("Bat dau nhap %d chuoi:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Nhap chuoi thu %d: ", i + 1);
        fgets(a[i], 100, stdin);
        size_t len = strlen(a[i]);
        if (len > 0 && a[i][len - 1] == '\n') {
            a[i][len - 1] = '\0';
        }
    }
    printf("Cac chuoi da nhap la: \n");
    for (int i = 0; i < n; i++) {
        printf("Chuoi thu %d: %s\n", i + 1, a[i]);
    }
    return 0;
}