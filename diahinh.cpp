#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define N 20
typedef struct node
{
	long stt;
	char hoten[50];
	char sothua[50];
	char chieurong [50];
	char chieudai[50];
	char dientich [50];
}node;
typedef struct stack
 {
 	int top;
 	node list [N];
 }stack;
 void khoitao(stack &s)
    {
     s.top=-1;
    }
int empty  (stack s)
{
	return s.top==-1?1:0;
}  
int full (stack s)
{
	return s.top==N-1?1:0;
}
void push(stack &s,node x)
 {
 	if (!full(s))
 	s.list [++s.top]=x;
 }
node pop (stack &s)
{ node x;
	 if (!empty(s))
	 x=s.list[s.top--];
	 return x;
}
int main()
{
	int n;stack s;node x;
	int tl;char *t2;  char *t3; char  *t4; char *t5; char *t6;
	printf("\n Nhap vao phan tu:");
	scanf("%d",&n);
	khoitao(s);
	for(int i=0;i<n;i++)
	{
		printf("\n nhap so phan tu:");
		scanf("%d",&x.stt);
		printf("\n Nhap so thua:");
		fflush(stdin);
		gets(x.sothua);
		printf("\n Nhap ho ten:");
		fflush(stdin);
		gets(x.hoten);
		printf("\n Nhap chieu rong:");
		fflush(stdin);
		gets(x.chieurong);
		printf("\n Nhap chieu dai:");
		fflush(stdin);
		gets(x.chieudai);
		printf ("\n Nhap dien tich:");
		fflush(stdin);
		gets(x.dientich);
		push(s,x);
	}
while( !empty(s))
{
	x=pop(s);
	printf("\n|--------------------------------------------------------------------------------------------|\n");
	printf("\n|stt |  So thua  |       Ho ten       | Chieu rong   |   Chieu dai   |        Dien tich      |\n");
	printf("\n|%d   |   %-7s    |            %s       |        %sm   |    %sm      |       %sm2              |\n",x.stt,x.sothua,x.hoten,x.chieurong,x.chieudai,x.dientich);
	printf("\n|--------------------------------------------------------------------------------------------|\n");
}
}
