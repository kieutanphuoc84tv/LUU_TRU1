#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int rmvs1 (char S1[50], int locus1);
int rmvs2 (char S2[50], int locus2);
int rmvspc1 (char S1[50]);
int rmvspc2 (char S2[50]); 
int chuanhoa1 (char S1[50]);
int chuanhoa2 (char S2[50]);
int symmetry (char S1[50]);
int reverse (char S1[50]);

int main () {
	char S1[50], S2[50];
//1.Nhap chuoi S1, S2
		printf("\n 1.1.Nhap chuoi S1:");
		gets(S1);
		printf("\n 1.2.Nhap chuoi S2:");
		gets(S2);		
	chuanhoa1(S1);
		printf("\n 2.1.Chuoi chuan hoa cua S1:");
		puts(S1);
	chuanhoa2(S2);
		printf("\n 2.2.Chuoi chuan hoa cua S2:");
		puts(S2);	    
	symmetry(S1);
	reverse(S1);
	return 0;	
}

//2.Xuat chuoi chuan S1,S2

//S1
int rmvs1 (char S1[50], int locus1) {
	int n = strlen(S1);
		for(int i = locus1; i < n; i++) {			
			S1[i] = S1[i + 1];
			S1[n - 1] = '\0';			
		}
}
int rmvspc1 (char S1[50]) {
	for(int i = 0; i < strlen(S1); i++) 
		if(S1[i] == ' ' && S1[i + 1] == ' ') {
			rmvs1(S1,i);
			i--;
		}
	if(S1[0] == ' ')
		rmvs1(S1,0);
	if(S1[strlen(S1) - 1] == ' ')
		rmvs1(S1,strlen(S1) - 1);
}		
int chuanhoa1 (char S1[50]) {
	int i = 0; 
		strlwr(S1);
		rmvspc1(S1);
		S1[0] = S1[0] - 32;
		for(int i = 0; i < strlen(S1); i++) {
			if(S1[i]  == ' ' && S1[i + 1] != ' ')
				S1[i + 1] =  S1[i + 1] - 32;
		}		
}

//S2	
int rmvs2 (char S2[50], int locus2) {		
	int m = strlen(S2);
		for (int j = locus2; j < m; j++) {
			S2[j] = S2[j + 1];
			S2[m - 1] = '\0';
		}		
}
int rmvspc2 (char S2[50]) {
	for(int j = 0; j < strlen(S2); j++) 
		if(S2[j] == ' ' && S2[j + 1] == ' ') {
			rmvs2(S2,j);
			j--;
		}
	if(S2[0] == ' ')
		rmvs2(S2,0);
	if(S2[strlen(S2) - 1] == ' ')
		rmvs2(S2,strlen(S2) - 1);	
}
int chuanhoa2 (char S2[50]) {
	int j = 0;
		strlwr(S2);
		rmvspc2(S2);
		S2[0] = S2[0] - 32;
		for(int j = 0; j < strlen(S2); j++){
			if(S2[j]  == ' ' && S2[j + 1] != ' ')
				S2[j + 1] =  S2[j + 1] - 32;
		}
}

//7.Kiem tra doi xung S1
int symmetry (char S1[50]) {
    int i, j, count = 0;
    	strlwr(S1);
    	for(i = 0, j = strlen(S1) - 1; i < j; i++, j--) {
        	if(S1[i] != S1[j]) {
            	printf("\n 7.1.Chuoi S1 khong doi xung");
            	getch();
           	return 0;
        	}
        	else {
            count++;
        	}
    	}
   		printf("\n 7.1.Chuoi S1 co doi xung");
    	printf("\n 7.2.So chu giong nhau trong chuoi: %d",count);
    	getch();
    return 0;
}

//8.In chuoi dao nguoc
int reverse (char S1[50]) {
	int i, n;
		chuanhoa1(S1);
		n = strlen(S1);
    	printf("\n 8.Chuoi dao nguoc:");
    	for( i = n-1; i >=0 ; i--) 
    		putchar(S1[i]);   	
   		getch();
	return 0;
}