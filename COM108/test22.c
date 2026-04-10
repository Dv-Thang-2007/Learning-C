#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int main(){
    char str[100];
    int u=0,e=0,o=0,a=0,i=0;
    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    for(int i=0; str[i]!='\0'; i++){
        if (str[i]=='a'||str[i]=='A'){
            a++;
        }
        else if (str[i]=='u'||str[i]=='U'){
            u++;
        }
        else if (str[i]=='e'||str[i]=='E'){
            e++;
        }
        else if (str[i]=='o'||str[i]=='O'){
            o++;
        }
        else if (str[i]=='i'||str[i]=='I'){
            i++;
        }  
    }
    if (a!=0) printf("\nnguyen am a: %d lan",a); 
    if (u!=0) printf("\nnguyen am u: %d lan",u);  
    if (e!=0) printf("\nnguyen am e: %d lan",e);  
    if (o!=0) printf("\nnguyen am o: %d lan",o);  
    if (i!=0) printf("\nnguyen am i: %d lan",i);
    return 0;

}
