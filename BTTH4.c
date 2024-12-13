#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            printf("Uoc cua so nguyen %d la %d\n", n, i);
        }
    }

    return 0;
}
