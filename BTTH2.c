#include <stdio.h>

int main()
{
    float soGioLam, luongTheoGio, tienPhuCap, luongCoBan, tongTienLuong;
    
    printf("Nhap so gio lam viec: ");
    scanf("%f", &soGioLam);
    
    printf("Nhap muc luong theo gio: ");
    scanf("%f", &luongTheoGio);
    
    luongCoBan = soGioLam * luongTheoGio;
    if (soGioLam > 160) {
        tienPhuCap = luongCoBan * 0.1;
    } else {
        tienPhuCap = 0;
    }
    
    tongTienLuong = luongCoBan + tienPhuCap;
    printf("Luong co ban: %.2f\n", luongCoBan);
    printf("Tien phu cap: %.2f\n", tienPhuCap);
    printf("Tong tien luong: %.2f\n", tongTienLuong);
    
    return 0;
}