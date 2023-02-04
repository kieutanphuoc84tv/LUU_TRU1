#include<stdio.h>
#include<conio.h>
#include<string.h>

int tongN(int n);

int main(){
	int i, n, tinhtongN;
	
	printf("Nhap not so nguyen duong: ");
	scanf("%", &n);
	tinhtongN = tongN(n);
	printf("\n Tong cac so tu 1 %d la: %d", n, tinhtongN);
	
	return (0);
}
int tongN(int n){
	int tinhtong;
	if (n == 1){
		return (1);
	}else{
		tinhtong = n + tongN(n - 1);
	}
	return (tinhtong);
}
