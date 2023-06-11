#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct sophuc
{
	float phanthuc;
	float phanao;
	sophuc *pnext;
}sophuc;
typedef struct node
{
	sophuc data;
	node *pnext;
	node *a;
	node *n;
	node *phanthuc;
	node *phanao;

}node;
typedef struct list
{
	node *phead;
	node *ptail;
}list;
void khoitao(list &l)
{
	l.phead=l.ptail=NULL;
}
node *taonut()
{
	node *p;sophuc sp;
	p=new(node);
	if(p!=NULL)
	{
		printf("\nNhap phan thuc: ");
		scanf("%d",&sp.phanthuc);
		printf("\nNhap phan ao: ");
		scanf("%d",&sp.phanao);
		p->data=sp;
		p->pnext=NULL;
		return p;
	}
	return NULL;
}
sophuc* createNode(int phanthuc, int phanao)
{
    sophuc* pnode = NULL;
    if(phanthuc == 0)
    {
        return NULL;
    }
    pnode = (sophuc*)malloc(sizeof(sophuc));
    if(!pnode)
    {
        return NULL;
    }
    else
    {
        pnode->phanthuc = phanthuc;
        pnode->phanao = phanao;
        pnode->pnext = NULL;
        return pnode;
    }
}

	void addtail(list &l,node *new_ele)
{
	if(l.phead==NULL)
	{
		l.phead=new_ele;
		l.ptail=l.phead ;
	}
	else
	{
		l.ptail->pnext=new_ele;
		l.ptail=new_ele;
	}
}
void addfirst(list &l,node *new_ele)
{
	if(l.phead==NULL)
	{
		l.phead=new_ele;
		l.ptail=l.phead ;
	}
	else
	{
		new_ele->pnext=l.phead;
		l.phead=new_ele;
	}
}
void addafter(list &l,node *q,node *new_ele)
{
	if(q!=NULL)
	{
		new_ele->pnext=q->pnext;
		q->pnext=new_ele;
		if(q==l.ptail)
			l.ptail=new_ele;

	}
	else
		addfirst(l,new_ele);
}
void taods(list &l)
{
	int n;node *p;
	printf("\nNhap so luong so phuc:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		p=taonut();
		addfirst(l,p);

	}
}
void duyetds(list plist)
{
	node* p;
	printf("\nX= ");
	for(p = plist.phead; p != NULL; p = p->pnext)
    {
        if(p->phanthuc == 0)
            continue;
        else if(p->phanthuc < 0)
            printf(" %d-%di", (p->phanthuc , p->phanao));
        else
            printf(" %d+%di", p->phanthuc, p->phanao);
    }
}



int main()
{
	list l;node* q,*new_ele;
	khoitao(l);
	taods(l);
	printf("\nSo phuc da nhap la:");
	duyetds(l);

}
