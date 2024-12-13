#include <stdio.h>
#include <math.h>


int main()
{
    int n, cout = 0, num = 2, check = 0;
    printf("Nhap so nguyen duong bat ky: ");
    scanf("%d", &n);
    if(n <= 0){
        printf("Hay nhap so lon hon 0");
        return 0;
    }
    printf("%d so nguyen to dau tien la: \n", n);
    while (cout < n){
        check = 0;
        for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            check = 1;
        }
    }
        if(check == 0){
            printf("%d \n", num);
            cout++;
        }
        num++;
    }
    
    return 0;
}

