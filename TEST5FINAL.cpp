#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include <stdlib.h>

int input_output (char S1[50], char S2[50]);
int rmvs1 (char S1[50], int locus1);
int rmvs2 (char S2[50], int locus2);
int rmvspc1 (char S1[50]);
int rmvspc2 (char S2[50]); 
int chuanhoa1 (char S1[50]);
int chuanhoa2 (char S2[50]);
int demtu (char S1[50]);
void ghepchuoi (char S1[50], char S2[50]);
int dx (char S1[50]);
int daonguoc (char S1[50]);

int main () {
	char S1[50], S2[50];
	int key;
//------------------------------------------------------------------------------------------
		while(true) {
			system("cls");
			printf("************************************\n");
			printf("**  THAO TAC TREN CHUOI           **\n");
			printf("**  1. Nhap va chuan hoa chuoi    **\n");
			printf("**  2. Dem so tu trong chuoi      **\n");
			printf("**  3. Ghep chuoi                 **\n");
			printf("**  4. Kiem tra doi xung          **\n");
			printf("**  5. In chuoi dao nguoc         **\n");
			printf("**  0. Thoat                      **\n");
			printf("************************************\n");
			fflush(stdin);
			printf("\n \t\t AN PHIM CHON: ");
			scanf("%d",&key);
			switch(key)	{
				case 1:
				fflush(stdin);
				input_output(S1,S2);
				printf("\n Bam phim bat ky de tiep tuc!");
				getch();
				break;
			case 2:
			    demtu(S1);
				printf("\n Bam phim bat ky de tiep tuc!");
				getch();
				break;
			case 3:
				printf("\n Bam phim bat ky de tiep tuc!");
				ghepchuoi(S1,S2);
				getch();
				break;
			case 4:
				printf("\n Bam phim bat ky de tiep tuc!");
				dx(S1);
				break;
			case 5:
				printf("\n Bam phim bat ky de tiep tuc!");
				daonguoc(S1);
				getch();
				break;
			case 0:
				exit(1);
			default:
				printf("\n Khong co chuc nang nay!");
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
			}
		}		
//------------------------------------------------------------------------------------------ 
		//countstrs(S1,S2); 
		//countchrtrs(S1); 
}
//1.Nhap chuoi S1, S2
int input_output (char S1[50], char S2[50]) {
	printf(" Nhap chuoi S1: ");
	gets(S1);
	printf(" Nhap chuoi S2: ");
	gets(S2);
	chuanhoa1(S1);
	printf(" Chuoi chuan hoa cua S1:");
	puts(S1);
	chuanhoa2(S2);
	printf(" Chuoi chuan hoa cua S2:");
	puts(S2);	
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
		for(int i = 0; i < strlen(S1); i++) 
		{
			if(S1[i]  == ' ' && S1[i + 1] != ' ')
				S1[i + 1] =  S1[i + 1] - 32;
		}		
}

//S2	
int rmvs2 (char S2[50], int locus2)
 {		
	int m = strlen(S2);
		for (int j = locus2; j < m; j++)
		 {
			S2[j] = S2[j + 1];
			S2[m - 1] = '\0';
		}		
}
int rmvspc2 (char S2[50])
 {
	for(int j = 0; j < strlen(S2); j++) 
		if(S2[j] == ' ' && S2[j + 1] == ' ')
		 {
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


//Dem so tu co trong chuoi S1
int demtu (char S1[50])
 {
	int demtu = 1;
		strlwr(S1);
		for(int i = 0; i < strlen(S1); i++)
		 {
			if(S1[i] == ' ')
				demtu++;
	   	 }
		printf("\n So tu co trong chuoi S1 la: %d",demtu);
}

//Ghep chuoi S2 vao cuoi chuoi S1
void ghepchuoi (char S1[50], char S2[50])
 {
	int i, j, size, size1, size2;
		fflush(stdin);
		chuanhoa1(S1);
		chuanhoa2(S2);
		size1 = strlen(S1);
		size2 = strlen(S2);
		size = size1 + size2;
		j = 0;
		for(i = size1; i < size; i++)
		 {
			S1[i] = S2[j];
			j++;
		 }
		S1[i] = '\0';
		printf("\n Ket qua sau khi noi chuoi la: %s",S1); 
}

//Kiem tra doi xung S1
int dx (char S1[50])
 {
    int i, j, count = 0;
    	fflush(stdin);
    	strlwr(S1);
    	for(i = 0, j = strlen(S1) - 1; i < j; i++, j--)
		 {
        	if(S1[i] != S1[j])
			 {
            	printf("\n Chuoi S1 khong doi xung");
            	getch();
           	return 0;
        	 }
        	else
			 {
             count++;
        	 }
    	}
   		printf("\n Chuoi S1 co doi xung");
    	printf("\n So chu giong nhau trong chuoi: %d",count);
    	getch();
    return 0;
}

//In chuoi dao nguoc
int daonguoc (char S1[50])
 {
	int i, n;
		chuanhoa1(S1);
		n = strlen(S1);
    	printf("\n Chuoi dao nguoc:");
    	for( i = n-1; i >=0 ; i--) 
    		putchar(S1[i]);   	
   		getch();
	return 0;
}

