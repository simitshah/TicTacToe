#include<stdio.h>
#include<conio.h>
#include<dos.h>
union REGS in,out;
void initmouse()
{
 in.x.ax=0;
 int86(0x33,&in,&out);
}
void showmouse()
{
 in.x.ax=1;
 int86(0x33,&in,&out);
}
void hidemouse()
{
 in.x.ax=2;
 int86(0x33,&in,&out);
}
void getmouse(int *x,int *y)
{

 in.x.ax=3;
 *x=out.x.cx;
 *y=out.x.dx;
 int86(0x33,&in,&out);
 }
