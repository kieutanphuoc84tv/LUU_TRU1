#include <stdio.h>
void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("gia tri a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// quy luật của bubble sort//* 
void bubbleSort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // chỗ thay đổi đã sẵn sàng
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
}
 
/* in ra bảng bubble sort  */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// test và xuất bublle sort//*
int main()
{
    int a[100], n;
    printf("nhap so pt n= ");
    scanf("%d",&n);
	nhap(a,n);
	int m = sizeof(a) / sizeof(a[0]);
    bubbleSort(a, n);
    printf("bubble sort: \n");
    printArray(a, n);
    return 0;
}