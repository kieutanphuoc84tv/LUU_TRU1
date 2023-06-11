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
    int chieurong ;
	int chieudai;
	int dientich;
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
	int tl;char *t2;  char *t3;int t4;int t5;int t6;
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
		scanf("%d",&x.chieurong);
		printf("\n Nhap chieu dai:");
		fflush(stdin);
	    scanf("%d",&x.chieudai);
		if((x.chieurong>0)&&(x.chieudai>0))
		{
			x.dientich=x.chieurong*x.chieudai;
			printf("\n Dien tich: %dm2",x.dientich);
		}
		else
		{ 
		printf("\n Chieu rong hoac chieu dai khong hop le.");
	    }
		fflush(stdin);
		push(s,x);
	}
while( !empty(s))
{
	x=pop(s);
	printf("\n|--------------------------------------------------------------------------------------------|\n");
	printf("\n|stt |  So thua  |       Ho ten       | Chieu rong   |   Chieu dai   |        Dien tich      |\n");
	printf("\n|%d   |   %-7s    |            %s       |        %dm   |    %dm      |       %dm2              |\n",x.stt,x.sothua,x.hoten,x.chieurong,x.chieudai,x.dientich);
	printf("\n|--------------------------------------------------------------------------------------------|\n");
}
}
