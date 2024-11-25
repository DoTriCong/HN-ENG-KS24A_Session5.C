#include<stdio.h>

int main(){
	int num1, num2, choice;
	printf("Moi ban nhap so thu nhat: \n");
	scanf("%d",&num1);
	printf("Moi ban nhap so thu hai: \n");
	scanf("%d",&num2);
	
	do{
		printf("     CALCULATOR     \n");
		printf("1. Tong hai so \n");
		printf("2. Hieu hai so \n");
		printf("3. Tich hai so \n");
		printf("4. Thuong hai so \n");
		printf("5. Thoat \n");
		printf("Lua chon cua ban: \n");
		scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("1. Tong hai so la: %d\n",num1 + num2);
			break;
		case 2:
			printf("2. Hieu hai so la: %d\n",num1 - num2);
			break;
		case 3:
			printf("3. Tich hai so la: %d\n",num1 * num2);
			break;
		case 4:
			printf("4. Thuong hai so la: %d\n",num1 / num2);
			break;
		case 5:
			printf("Thoat chuong trinh");
			break;
		default:
			printf("Khong hop le!!!\n");
	}
} 	while(choice != 5);
	return 0;
}
