#include <stdio.h>

int main() {
    int i = 5;  
    int n;

    printf("Nhap vao mot so nguyen cho truoc dung thi dung lai:\n");
    do {
        printf("Nhap so: ");
        scanf("%d", &n);  
        if (n != i) {
            printf("Sai, nhap lai\n");
        }
    } while (n != i);  

    printf(" Ban da nhap dung so %d\n", i);

    return 0;
}

