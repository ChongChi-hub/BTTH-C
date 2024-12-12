#include <stdio.h>
 
int main() {
    float tienMuonDoi, tienDaDoi;
    int number;
    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    
    printf("Nhap don vi tien te muon chuyen doi(1~8): ");
    scanf("%d", &number);
    printf("Nhap so tien ban muon doi: ");
    scanf("%f", &tienMuonDoi);
    
    switch (number) {
        case 1:
        tienDaDoi = tienMuonDoi * 25395.99;
        printf("%.2f USD = %.2f VND", tienMuonDoi, tienDaDoi);
        break;
        
        case 2:
        tienDaDoi = tienMuonDoi * 26668.00;
        printf("%.2f EUR = %.2f VND", tienMuonDoi, tienDaDoi);
        break;
        
        case 3:
        tienDaDoi = tienMuonDoi * 32419.32;
        printf("%.2f GBP = %.2f VND", tienMuonDoi, tienDaDoi);
        break;
        
        case 4:
        tienDaDoi = tienMuonDoi * 166.45;
        printf("%.2f JPY = %.2f VND", tienMuonDoi, tienDaDoi);
        break;
        
        case 5:
        tienDaDoi = tienMuonDoi / 25395.99;
        printf("%.2f VND = %.2f USD", tienMuonDoi, tienDaDoi);
        break;
        
        case 6:
        tienDaDoi = tienMuonDoi / 26668.00;
        printf("%.2f VND = %.2f EUR", tienMuonDoi, tienDaDoi);
        break;
        
        case 7:
        tienDaDoi = tienMuonDoi / 32419.32;
        printf("%.2f VND = %.2f GBP", tienMuonDoi, tienDaDoi);
        break;
        
        case 8:
        tienDaDoi = tienMuonDoi / 166.45;
        printf("%.2f VND = %.2f JPY", tienMuonDoi, tienDaDoi);
        break;
        
        default:
        printf("Vui long chon dung don vi tien te muon chuyen doi(1~8): ");
        break;
        }
        //Vì tỉ giá hối đoái reset liên tục trong 24h mỗi ngày nên kết quả chỉ mang giá trị gần đúng.
    return 0;
}