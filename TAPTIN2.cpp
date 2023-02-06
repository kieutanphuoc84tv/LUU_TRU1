#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 
 
int main()
{
	FILE * fp;
   char filename[67], ch;
     printf( " nhap ten duong dan: ");
     gets( filename );
     
     
    if (( fp = fopen (filename, "r")) == NULL)
    {
    	printf(" thong bao bi loi \n");
    	exit(1);
    	
    }
    
    while (( ch = getc(fp)) !=EOF)
     printf( "%c", ch);
     fclose (fp);
    return 0;
}