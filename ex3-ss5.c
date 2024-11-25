#include <stdio.h>

int main() {
    int n;
    int Number = 0; 
    int i; 
    do {
        printf("Nhap vao mot so nguyen duong: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf(" Day khong phai so nguyen duong, vui long nhap lai .\n");
        }
    } while (n <= 0); 

    for ( i = 1; i <= n; i++) {
        Number += i; 
    }
    printf("Tong cac so tu 1 den %d la: %d\n", n, Number);

    return 0;
}

