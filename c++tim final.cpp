#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#define MAX 13

void gotoxy(int x,int y)
{
    HANDLE  h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD g= {x,y};
    SetConsoleCursorPosition(h,g);
}

void textcolor(int x)
{
    HANDLE  h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,x);
}
 

void resizeConsole(int width, int height)
{
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, width, height, TRUE);
}
 
void Begin()
{
                               gotoxy(28,2); textcolor(12); printf( "          CONNECTING FROM LOVE SEVER                      ");  
                        gotoxy(16,2); textcolor(12); printf("           %c%c%c",3,3,3 );gotoxy(64,2);printf("      %c%c%c",3,3,3);
                         gotoxy(16,4); textcolor(11); printf("          Send to..............Nguoi con gai toi tham thuong");
                           gotoxy(18,6); textcolor(14); printf("_____________________________________________________________");
                                 gotoxy(32,6); textcolor(14); printf(        "_______Loading......10%%");
                           gotoxy(18,7); textcolor(14); printf(" ___________________________________________________________");
}    
void love(int luu)
{
 

int traitim[MAX][MAX]= {
{0,0,1,1,1,0,0,0,1,1,1,0,0},
{0,1,0,0,0,1,0,1,0,0,0,1,0},
{1,0,0,0,0,0,1,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,1},
{0,1,0,0,0,0,0,0,0,0,0,1,0},
{0,0,1,0,0,0,0,0,0,0,1,0,0},
{0,0,0,1,0,0,0,0,0,1,0,0,0},
{0,0,0,0,1,0,0,0,1,0,0,0,0},
{0,0,0,0,0,1,0,1,0,0,0,0,0},
{0,0,0,0,0,0,1,0,0,0,0,0,0}};
textcolor(luu%16+1); 
 

if(luu==0)
{
    for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
            Sleep(10);
            if(traitim[i][j]) {gotoxy(j+20,i+10); printf("%c",3);}
            else  {gotoxy(j+20,i+10); printf(" ");} 
        }
    printf("\n");
}
for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
            Sleep(10);
            if(traitim[i][j]) {gotoxy(j+33,i+10); printf("%c",3);}
            else  {gotoxy(j+33,i+10); printf(" ");} 
        }
    printf("\n");
}
for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
            Sleep(10);
            if(traitim[i][j]) {gotoxy(j+46,i+10); printf("%c",3);}
            else  {gotoxy(j+46,i+10); printf(" ");} 
        }
    printf("\n");
}
}
if(luu%2==0)
{
    for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
            if(traitim[i][j]) {gotoxy(j+20,i+10); printf("%c",3);}
            else  {gotoxy(j+20,i+10); printf(" ");} 
        }
    printf("\n");
}
for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
            if(traitim[i][j]) {gotoxy(j+33,i+10); printf("%c",3);}
            else  {gotoxy(j+33,i+10); printf(" ");} 
        }
    printf("\n");
}
for(int i=0;i<MAX;i++)
{
    for(int j=0;j<MAX;j++)
        {
            if(traitim[i][j]) {gotoxy(j+46,i+10); printf("%c",3);}
            else  {gotoxy(j+46,i+10); printf(" ");} 
        }
    printf("\n");
}
}
   textcolor(12);
   gotoxy(26,14); printf("I");   gotoxy(38,14); printf("LOVE");    gotoxy(51,14); printf("YOU");
}
int main()
{
    resizeConsole(900,450);
    Begin();  
 
 

    gotoxy(10,10); textcolor(15); printf("        Cau a!! to muon noi chuyen voi cau.....");
    Sleep(5000);gotoxy(32,6); textcolor(14); printf("_______Loading......15%%_____ ");
    gotoxy(10,10); textcolor(15); printf("       Truoc khi gap cau....to co nhieu thoi gian ranh roi lam");
    Sleep(5000);gotoxy(32,6); textcolor(14); printf("_______Loading......20%%_____ ");
    gotoxy(10,10); textcolor(15); printf("      Nhung tu sau khi gap cau....Nhung khoang thoi gian do to luon nghi ve cau");
    gotoxy(10,12); textcolor(15); printf("               va lap day boi noi nho, tuong tu, va nhung suy nghi ve cau");
    Sleep(10000);gotoxy(32,6); textcolor(14); printf("______Loading......34%%_____");
    gotoxy(10,10); textcolor(15); printf("      Co le 'To thich cau that roi ;-;                                               ");
    gotoxy(10,12); textcolor(15); printf("                                                                              ");
    Sleep(5000);gotoxy(32,6); textcolor(14); printf("______Loading......45%%_____ ");
    gotoxy(10,10); textcolor(15); printf("...                                                                          ");
    Sleep(5000);gotoxy(32,6); textcolor(14); printf("______Loading......55%%______");
    gotoxy(10,10); textcolor(15); printf("Nhieu luc thuc su to muon lay het can dam tien lai gan cau va noi ...                 ");
    gotoxy(10,12); textcolor(11); printf("                                    'TO THICH CAU'                            ");
    Sleep(5000);gotoxy(32,6); textcolor(14); printf("______Loading......65%%_");
    gotoxy(10,10); textcolor(15); printf("Nhung to khong lam duoc....                                        ");
    gotoxy(10,12); textcolor(15); printf("     To khong co diem gi noi bat de co the ngo loi voi cau");
    Sleep(5000);gotoxy(32,6); textcolor(14); printf("______Loading......79%%_");
    gotoxy(10,10); textcolor(15); printf("Vi vay....Thich cau, to van se giu trong long, chi minh to biet!!           ");
    gotoxy(10,12); textcolor(15); printf("                   to se chi luon ngam nhin cau tu phia sau!!                          ");         
    Sleep(10000);gotoxy(32,6); textcolor(14); printf("______Loading......88%%_");
    gotoxy(10,10); textcolor(15); printf(" tinh yeu don phuong, nhieu luc cung hanh phuc lam vi                              ");
    gotoxy(10,12); textcolor(15); printf("                    to se khong bao gio bi cau tu choi....                     ");
    Sleep(5000);gotoxy(32,6); textcolor(14); printf("______Loading......99%%_");
    gotoxy(10,10); textcolor(15); printf("To chi can moi ngay den truong deu duoc nhin thay cau                        ");
    gotoxy(10,12); textcolor(15); printf("               du lam cho to vui roi!!!                            ");
    Sleep(10000);gotoxy(32,6); textcolor(14); printf("______Loading......100%%_");
    gotoxy(10,10); textcolor(15); printf("Va hien tai hy vong duy nhat cua to chi la                         ");
    gotoxy(10,12); textcolor(15); printf("     1 ngay nao do cau biet duoc rang...                 ");         
    gotoxy(10,14); textcolor(15); printf("                                          *to thuong cau rat nhieu*                      ");
    Sleep(5000);
    system("cls");
    int luu = 0;
    while(1)
    {
        love(luu);
        luu++;
        Sleep(300);
       }
     
getch();
}
//made by tan phuoc
