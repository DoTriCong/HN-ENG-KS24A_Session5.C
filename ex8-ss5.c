#include<stdio.h>
int main(){
	int iii, num5, num6, min1, ucln1,bcnn;
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &num5);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &num6);
    if (num5 <= 0 || num6 <= 0) {
        printf("Vui long nhap hai so nguyen duong\n");
        return 1;
    }
    min1 = (num5 < num6) ? num5 : num6; 
    ucln1= 1;  
    for (iii = 1; iii <= min1; iii++) {
        if (num5 % iii == 0 && num6 % iii == 0) {
            ucln1 = iii;
        }
    }
    bcnn = (num5 * num6) / ucln1;
    printf("Boi chung nho nhat cua %d va %d la: %d\n", num5, num6, bcnn);
    return 0; 
} 
