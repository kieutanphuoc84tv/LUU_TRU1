#include <stdio.h>
#include <math.h>
void nhap()
{
	
}
int timsongto(int n)
{
	if(n < 2){
		printf ("\n%d khong phai la so nguyen to",n);
		return 0;
	}
	int count = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if (n % i ==0){
			count++;
		}
	}
	return count;
}
int main(){
	int n, kq;
	printf ("\nNhap n = ");
	scanf("%d", &n);
	kq=timsongto(n);
	if(kq == 0){
		printf("\n%d la so nguyen to", n);
	}else{
		printf("\n%d khong phai la so nguyen to", n);
	}
	return 0;
}
