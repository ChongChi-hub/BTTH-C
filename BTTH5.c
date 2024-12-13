#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);
    if(n <= 1){
        printf("%d khong phai la so nguyen to", n);
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            printf("%d khong phai la so nguyen to\n", n);
            return 0;
        }
    }
    printf("%d la so nguyen to\n", n);

    return 0;
}
