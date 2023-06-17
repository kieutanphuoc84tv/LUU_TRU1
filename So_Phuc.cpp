#include <stdio.h>
#include <stdlib.h>

struct sophuc {
   float thuc;
   float ao;
   struct sophuc *next;
};
int main() {
   struct sophuc *head1, *tail1, *node1;
   struct sophuc *head2, *tail2, *node2;
   struct sophuc *head_ketqua, *tail_ketqua, *node_ketqua;
   int n;
   printf("Nhap So Luong So Phuc Thu Nhat:");
   scanf("%d", &n);
   head1 = (struct sophuc*)malloc(sizeof(struct sophuc));
   printf("\nNhap phan thuc 1: ");
   scanf("%f", &(head1->thuc));
   printf("Nhap phan ao 1: ");
   scanf("%f", &(head1->ao));
   tail1 = head1;

   for (int i = 2; i <= n; i++) 
   {
      node1 = (struct sophuc*)malloc(sizeof(struct sophuc));
      printf("Nhap phan thuc cua so %d: ", i);
      scanf("%f", &(node1->thuc));
      printf("Nhap phan ao cua so %d: ", i);
      scanf("%f", &(node1->ao));
      tail1->next = node1;
      tail1 = node1;
   }
   tail1->next = NULL;
   
   printf("\nNhap So Luong So Phuc Thu Hai: ");
   scanf("%d", &n);
   head2 = (struct sophuc*)malloc(sizeof(struct sophuc));
   printf("\nNhap phan thuc 1: ");
   scanf("%f", &(head2->thuc));
   printf("Nhap phan ao 1: ");
   scanf("%f", &(head2->ao));
   tail2 = head2;

   for (int i = 2; i <= n; i++) {
      node2 = (struct sophuc*)malloc(sizeof(struct sophuc));
      printf("Nhap phan thuc cua so phuc %d: ", i);
      scanf("%f", &(node2->thuc));
      printf("Nhap phan ao cua so phuc %d: ", i);
      scanf("%f", &(node2->ao));
      tail2->next = node2;
      tail2 = node2;
   }
   tail2->next = NULL;

   head_ketqua = (struct sophuc*)malloc(sizeof(struct sophuc));
   head_ketqua->thuc = head1->thuc + head2->thuc;
   head_ketqua->ao = head1->ao + head2->ao;
   tail_ketqua = head_ketqua;

   node1 = head1->next;
   node2 = head2->next;
   while (node1 != NULL && node2 != NULL) 
   {
      node_ketqua = (struct sophuc*)malloc(sizeof(struct sophuc));
      node_ketqua->thuc = node1->thuc + node2->thuc;
      node_ketqua->ao = node1->ao + node2->ao;
      tail_ketqua->next = node_ketqua;
      tail_ketqua = node_ketqua;

      node1 = node1->next;
      node2 = node2->next;
   }
   tail_ketqua->next = NULL;
   node_ketqua = head_ketqua;
   printf("\nCong 2 So Phuc:\n");
   while (node_ketqua != NULL) 
   {
      printf("%.2f + %.2fi\n", node_ketqua->thuc, node_ketqua->ao);
      node_ketqua = node_ketqua->next;
   }
   head_ketqua = (struct sophuc*)malloc(sizeof(struct sophuc));
   head_ketqua->thuc = head1->thuc - head2->thuc;
   head_ketqua->ao = head1->ao - head2->ao;
   tail_ketqua = head_ketqua;

   node1 = head1->next;
   node2 = head2->next;
   while (node1 != NULL && node2 != NULL) 
   {
      node_ketqua = (struct sophuc*)malloc(sizeof(struct sophuc));
      node_ketqua->thuc = node1->thuc - node2->thuc;
      node_ketqua->ao = node1->ao - node2->ao;
      tail_ketqua->next = node_ketqua;
      tail_ketqua = node_ketqua;

      node1 = node1->next;
      node2 = node2->next;
   }
   tail_ketqua->next = NULL;

   node_ketqua = head_ketqua;
   printf("\nHieu cua 2 so phuc la:\n");
   while (node_ketqua != NULL) 
   {
      printf("%.2f + %.2fi\n", node_ketqua->thuc, node_ketqua->ao);
      node_ketqua = node_ketqua->next;
   }
   head_ketqua = (struct sophuc*)malloc(sizeof(struct sophuc));
   head_ketqua->thuc = head1->thuc * head2->thuc - head1->ao * head2->ao;
   head_ketqua->ao = head1->thuc * head2->ao + head1->ao * head2->thuc;
   tail_ketqua = head_ketqua;

   node1 = head1->next;
   node2 = head2->next;
   while (node1 != NULL && node2 != NULL) {
      node_ketqua = (struct sophuc*)malloc(sizeof(struct sophuc));
      node_ketqua->thuc = node1->thuc * node2->thuc - node1->ao * node2->ao;
      node_ketqua->ao = node1->thuc * node2->ao + node1->ao * node2->thuc;
      tail_ketqua->next = node_ketqua;
      tail_ketqua = node_ketqua;

      node1 = node1->next;
      node2 = node2->next;
   }
   tail_ketqua->next = NULL;
   node_ketqua = head_ketqua;
   printf("\nTich cua 2 so phuc:\n");
   while (node_ketqua != NULL) 
   {
      printf("%.2f + %.2fi\n", node_ketqua->thuc, node_ketqua->ao);
      node_ketqua = node_ketqua->next;
   }

   return 0;
}

