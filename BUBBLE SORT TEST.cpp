#include <stdio.h>
void bubble_sort (int array [],int n){
	int i,j;
	for (i = 0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if (array [j]>array[j+1]){
				int temp = array[j];
				array[j] = array [j+1];
				array[j+1] = temp;
			}
		}
	}
}
int main(){
	int array[]={13,20,9,3,14,24,15,5,26,4};
	int n= sizeof (array)/sizeof(array[0]);
	bubble_sort (array,n);
	for (int i =0;i<n;i++){
		printf("%d",array[i]);
	}
	printf("\n");
	return 0;
}