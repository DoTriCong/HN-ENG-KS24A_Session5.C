#include <stdio.h>
int main (){
	int ii, num3, num4, min, ucln;
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &num3);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &num4);
    if (num3 <= 0 || num4 <= 0) {
        printf("Vui long nhap hai so nguyen duong\n");
        return 1;
    }
    min = (num3 < num4) ? num3 : num4; 
    ucln = 1;  
    for (ii = 1; ii <= min; ii++) {
        if (num3 % ii == 0 && num4 % ii == 0) {
            ucln = ii;
        }
    }
    printf("UCLN cua %d va %d la: %d\n", num3, num4, ucln);
   return 0;
    
} 

