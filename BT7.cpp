#include <stdio.h>
#include <stdlib.h>
void nhap       (int *a, int n);
void xuat       (int *a, int n);
void max    	(int *a, int n);
void tich     	(int *a, int n);
int  snt 		(int a);
void dsnt		(int *a, int n);
void timx		(int *a, int n);
void swap		(int *x, int *y);
void sx			(int *a, int n);




void *calloc	(size_t nitems,size_t size);


int main()
 {
	int *a;
	int n;
	a=(int*)calloc(256,sizeof(int));
	printf("Nhap n tu ban phim : n = "); scanf("%d",&n);
	nhap    (a,n);
	xuat	(a,n);
	max		(a,n);
	tich	(a,n); 
	dsnt  	(a,n);
	timx	(a,n);
	sx		(a,n);
 }


void nhap(int *a, int n)
{
	 printf("\n\nNhap cac phan tu trong mang mot chieu A co %d phan tu :\n",n);
	 for (int i=0;i<n;i++)
	 {
	 	 printf("\nA[%d] = ",i);  scanf("%d", a+i);
	 }
}




void xuat(int *a, int n)
{
	 printf("\nMang A gom : "); 
	 for (int i=0;i<n;i++)
	 {
	 	 printf("%d  ",*(a+i));
	 }
}

void max(int *a, int n)
 {
	 int max=*(a);
	 for (int i=0;i<n;i++)
	 {
	 	 if(max<=*(a+i)) max=*(a+i);
	 }
	 printf("\n\nGia tri lon nhat trong mang A la : %d",max);
 }

void tich(int *a, int n)
 {
	 int tich=1;
	 for (int i=0;i<n;i++)
	 {
	 	 tich=tich**(a+i);
	 }
	 printf("\n\nTich gia tri cac phan tu trong mang A la : %d",tich);
 }


int snt(int a)
 {
	int check=1;
	if (a<2)
	{
		check=0;
	}
	else
	{
		for (int i=2;i<a;i++)
		{
			if (a%i==0 && a!=2) 
		   	   check=0;
			{
		  	   break;	
			}
		}
	}
	return check;
 }


void dsnt(int *a, int n)
 {
	 int dem=0,tong=0;
	 printf("\n\nCac gia tri la so nguyen to trong mang A la : ");
	 for (int i=0;i<n;i++)
	 {
	 	 if (snt(*(a+i))==1)
	 	 {
	 	 	printf("%d  ",*(a+i));
	 	 	dem++;
	 	 	tong=tong + *(a+i);
	 	 }
	 }
	 printf("\n\nTong gia tri cac so nguyen to trong mang A = %d",tong);
 }


void timx(int *a, int n)
 {
	 int x, dem=0;
	 printf("\n\nNhap gia tri x can tim : x="); scanf("%d",&x);
	 for (int i=0;i<n;i++)
	 	 if (x==*(a+i))
	 {
	 	 {
          	dem++;
          	printf("\n\nPhan tu A[%d] trong mang A co gia tri bang gia tri x. A[%d]=%d",i,i,x);
	 	 }
	 }
	 if (dem==0) printf("\n\nX khong ton tai !");
 }
	 
void swap(int *x, int *y)
 {
	 int tam;
	 tam=*x;
	 *x=*y;
	 *y=tam;
 }
void sx(int *a, int n)
 {
	 int tam;
     for (int i=0;i<n;i++)
	 {
	 	 for (int j=i+1;j<n;j++)
	 	 {
	 	 	 if (*(a+i)>*(a+j))
	 	 	 {
	 			swap(a+i,a+j);
	 	 	 }	 
	 	 }
	 }
	 printf("\n\nMang A sau khi sap xep :\n\n");
	 for (int i=0;i<n;i++)
	 {
	 	 printf("%d  ",*(a+i));
	 }
	 printf("\n\n");
 }
