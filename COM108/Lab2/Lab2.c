#include <stdio.h>



int main(){
    int a,b,tong=0,hieu=0,chdai,chrong,chuvihcn=0,dientichhcn=1;
    float pi=3.14,chuvihtron=0,dientichhtron=1,bankinh,toan,ly,hoa,diemtrungbinh=0;
    int AB,BC,CA,chuvitgv=0,dientichtgv=1;
    printf("nhap a va b:");
    scanf("%d%d",&a,&b);
    printf("nhap chieu dai va chieu rong:");
    scanf("%d%d",&chdai,&chrong);
    printf("nhap ban kinh hinh tron:");
    scanf("%f",&bankinh);
    printf("Nhap diem toan ly hoa:");
    scanf("%f%f%f",&toan,&ly,&hoa);
    printf("Nhap canh AB BC CA:");
    scanf("%d%d%d",&AB,&BC,&CA);

    tong=a+b;
    hieu=a-b;
    chuvihcn=(chdai+chrong)*2;
    dientichhcn=chdai*chrong;
    chuvihtron=bankinh*2*pi;
    dientichhtron=bankinh*bankinh*pi;
    diemtrungbinh=((toan*3)+(ly*2)+(hoa))/6;
    chuvitgv=AB+BC+CA;
    dientichtgv=(AB*BC)/2;


    printf("tong a b la:%d\n",tong);
    printf("hieu a b la:%d\n",hieu);
    printf("chu vi hcn la:%d\n",chuvihcn);
    printf("dien tich hcn la:%d\n",dientichhcn);
    printf("chu vi hinh tron la:%.1f\n",chuvihtron);
    printf("dien tich hinh tron la:%.1f",dientichhtron);
    printf("diem trung binh %f\n",diemtrungbinh);
    printf("chu vi tam giac vuong la: %d\n",chuvitgv);
    printf("dientich tam giac vuong la:%d",dientichtgv);


    
    return 0;
}