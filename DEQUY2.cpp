#include<stdio.h>
#include<conio.h>
#include<string.h>


long tinhGiaithua(int n){
	if (n > 0){
		return n * tinhGiaithua(n - 1);
	}else{
		return 1;
	}
}
int main()
{
	int n;
	printf("\n Nhap so nguyen duong n: ");
	scanf("%d",&n);
	printf("Giai thua cua %d la : %d \n", n ,tinhGiaithua(n));
}
