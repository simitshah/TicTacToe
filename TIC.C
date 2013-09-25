#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<io.h>
#include"dtim.c"
#include"mouse.c"
int i,l1,l2,chance=0;
char p1[10],p2[10];
int s1[10],flag[10],win=0;
int cnt1=0;
int cnt2=0;
int turns=0;
char win1[10],win2[10];
void player1();
void start();
void back();
void quit();
void instr();
void play();

void reset()
{
  cnt1=0;
  cnt1=0;
  setfillstyle(SOLID_FILL,8);
  bar3d(25,230,125,260,5,1);
  settextstyle(DEFAULT_FONT,0,1);
  outtextxy(35,240,p1);

  setfillstyle(SOLID_FILL,8);
  bar3d(50,290,100,320,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(60,300,"0");

  setfillstyle(SOLID_FILL,8);
  bar3d(25,350,125,380,5,1);
  settextstyle(DEFAULT_FONT,0,1);
  outtextxy(35,360,p2);

  setfillstyle(SOLID_FILL,8);
  bar3d(50,410,100,440,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(60,420,"0");

}
void new()
{
  setfillstyle(EMPTY_FILL,15);
  bar(170,110,430,140);
  bar(150,150,450,450);
  line(250,150,250,450);
  line(350,150,350,450);
  line(150,250,450,250);
  line(150,350,450,350);
  chance=0;
  for(i=1;i<10;i++)
  {
   flag[i]=0;
   s1[i]=0;
  }
  win=0;
}
void player2()
{
  int x,y;
  hidemouse();
  clearviewport();
  clrscr();
  cleardevice();

  for(i=0;i<10;i++)
  printf("\n");
  for(i=0;i<3;i++)
  printf("\t");
  printf(" ");
  setfillstyle(LINE_FILL,4);
  bar(10,10,630,470);
  setfillstyle(EMPTY_FILL,3);
  bar(20,40,610,100);
  settextstyle(TRIPLEX_FONT,0,7);
  outtextxy(100,30,"ENTER INFO");

  settextstyle(TRIPLEX_FONT,0,2);
  outtextxy(100,150,"PLAYER2");
  setfillstyle(EMPTY_FILL,3);
  bar(200,150,500,175);

  settextstyle(TRIPLEX_FONT,0,1);
  outtextxy(250,185,"(MAX 10 CHAR)");

  setfillstyle(SOLID_FILL,8);
  bar3d(270,390,370,420,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(290,400,"BACK");

  setfillstyle(SOLID_FILL,8);
  bar3d(270,250,370,280,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(280,260,"START");

  showmouse();
  scanf("%s",p2);

  while(1)
  {
    showmouse();
    out.x.bx=0;
    while(!out.x.bx)
    {
     getmouse(&x,&y);
    }
    if(x>270&&x<370&&y>250&&y<280)
    {
      start();
      break;
    }
    else if(x>270&&x<370&&y>390&&y<420)
    {
     player1();
     break;
    }
    hidemouse();
  }
}
void player1()
{
  int x,y;
  hidemouse();
  clearviewport();
  clrscr();
  cleardevice();

  for(i=0;i<10;i++)
  printf("\n");
  for(i=0;i<3;i++)
  printf("\t");
  printf(" ");
  setfillstyle(LINE_FILL,4);
  bar(10,10,630,470);
  setfillstyle(EMPTY_FILL,3);
  bar(20,40,610,100);
  settextstyle(TRIPLEX_FONT,0,7);
  outtextxy(100,30,"ENTER INFO");

  settextstyle(TRIPLEX_FONT,0,2);
  outtextxy(100,150,"PLAYER1");
  setfillstyle(EMPTY_FILL,3);
  bar(200,150,500,175);
  settextstyle(TRIPLEX_FONT,0,1);
  outtextxy(250,185,"(MAX 10 CHAR)");

  setfillstyle(SOLID_FILL,8);
  bar3d(270,390,370,420,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(290,400,"BACK");


  setfillstyle(SOLID_FILL,8);
  bar3d(270,250,370,280,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(300,260,"OK");

  showmouse();
  scanf("%s",p1);

  while(1)
  {
    showmouse();
    out.x.bx=0;
    while(!out.x.bx)
    {
     getmouse(&x,&y);
    }

    if(x>270&&x<370&&y>250&&y<280)
    {
      player2();
      break;
    }
    else if(x>270&&x<370&&y>390&&y<420)
    {
     back();
     break;
    }
    hidemouse();
  }
}
void start()
{

  int x,y;
  int w1,w2,w3,w4,w5,w6,w7,w8,w9;
  new();
  cnt1=0;
  cnt2=0;

  hidemouse();
  clearviewport();
  clrscr();
  cleardevice();
  setfillstyle(LINE_FILL,4);
  bar(10,10,630,470);
  setfillstyle(EMPTY_FILL,3);
  bar(20,40,610,100);
  settextstyle(TRIPLEX_FONT,0,7);
  outtextxy(200,30,"GAME ON");

  setfillstyle(SOLID_FILL,8);
  bar3d(25,170,125,200,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(35,180,"SCORE");

  setfillstyle(SOLID_FILL,8);
  bar3d(475,200,575,230,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(485,210,"MENU");

  setfillstyle(SOLID_FILL,8);
  bar3d(475,250,575,280,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(485,260,"NEW");

  setfillstyle(SOLID_FILL,8);
  bar3d(475,300,575,330,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(485,310,"RESET");

  setfillstyle(SOLID_FILL,8);
  bar3d(475,350,575,380,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(485,360,"QUIT");

  setfillstyle(EMPTY_FILL,15);
  bar(170,110,430,140);
  bar(150,150,450,450);
  line(250,150,250,450);
  line(350,150,350,450);
  line(150,250,450,250);
  line(150,350,450,350);

  setfillstyle(SOLID_FILL,8);
  bar3d(25,230,125,260,5,1);
  settextstyle(DEFAULT_FONT,0,1);
  outtextxy(35,240,p1);

  setfillstyle(SOLID_FILL,8);
  bar3d(50,290,100,320,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(60,300,"0");

  setfillstyle(SOLID_FILL,8);
  bar3d(25,350,125,380,5,1);
  settextstyle(DEFAULT_FONT,0,1);
  outtextxy(35,360,p2);

  setfillstyle(SOLID_FILL,8);
  bar3d(50,410,100,440,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(60,420,"0");

  while(1)
  {
   turns=0;
   showmouse();
   out.x.bx=0;
   while(!out.x.bx)
   {
    getmouse(&x,&y);
   }
   if(x>475&&x<575&&y>200&&y<230)
   {
    back();
    break;
   }
   else if(x>475&&x<575&&y>250&&y<280)
   {
    new();
   }
   else if(x>475&&x<575&&y>300&&y<330)
   {
    reset();
   }
   else if(x>475&&x<575&&y>350&&y<380)
   {
    quit();
    break;
   }
   else if(x>150&&x<250&&y>150&&y<250&&flag[1]!=1&&win==0)
   {
     hidemouse();
     setfillstyle(SOLID_FILL,7);
     bar(150,150,250,250);
     settextstyle(GOTHIC_FONT,0,8);
     if(chance%2==0)
     {
      outtextxy(175,150,"X");
      s1[1]=1;
     }
     else
     {
      outtextxy(175,150,"O");
      s1[1]=2;
     }
     chance++;
     flag[1]=1;
     if(s1[1]==s1[2]&&s1[2]==s1[3]||s1[1]==s1[4]&&s1[4]==s1[7]||s1[1]==s1[5]&&s1[5]==s1[9])
     {
       win=1;
       if(s1[1]==1)
       {
	settextstyle(DEFAULT_FONT,0,2);
	outtextxy(175,120,p1);
	outtextxy(350,120,"WINS");
	cnt1+=1;
	itoa(cnt1,win1,10);
	setfillstyle(SOLID_FILL,8);
	bar3d(50,290,100,320,5,1);
	settextstyle(GOTHIC_FONT,0,1);
	outtextxy(60,290,win1);
       }
       else
       {
	settextstyle(DEFAULT_FONT,0,2);
	outtextxy(175,120,p2);
	outtextxy(350,120,"WINS");
	cnt2+=1;
	itoa(cnt2,win2,10);
	setfillstyle(SOLID_FILL,8);
	bar3d(50,410,100,440,5,1);
	settextstyle(GOTHIC_FONT,0,1);
	outtextxy(60,410,win2);
       }
       if(s1[1]==s1[2]&&s1[2]==s1[3])
       {
	setcolor(3);
	rectangle(150,150,250,250);
	rectangle(250,150,350,250);
	rectangle(350,150,450,250);
	setcolor(15);
       }
       if(s1[1]==s1[4]&&s1[4]==s1[7])
       {
	setcolor(3);
	rectangle(150,150,250,250);
	rectangle(150,250,250,350);
	rectangle(150,350,250,450);
	setcolor(15);
       }
       if(s1[1]==s1[5]&&s1[5]==s1[9])
       {
	setcolor(3);
	rectangle(150,150,250,250);
	rectangle(250,250,350,350);
	rectangle(350,350,450,450);
	setcolor(15);
       }
     }
   }
   else if(x>250&&x<350&&y>150&&y<250&&flag[2]!=1&&win==0)
   {
     hidemouse();
     setfillstyle(SOLID_FILL,7);
     bar(250,150,350,250);
     settextstyle(GOTHIC_FONT,0,8);

     if(chance%2==0)
     {
      outtextxy(275,150,"X");
      s1[2]=1;
     }
     else
     {
      outtextxy(275,150,"O");
      s1[2]=2;
     }
     chance++;
     flag[2]=1;
     if(s1[1]==s1[2]&&s1[2]==s1[3]||s1[2]==s1[5]&&s1[5]==s1[8])
     {
      win=1;
      if(s1[2]==1)
      {
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(175,120,p1);
       outtextxy(350,120,"WINS");
       cnt1+=1;
       itoa(cnt1,win1,10);
       setfillstyle(SOLID_FILL,8);
       bar3d(50,290,100,320,5,1);
       settextstyle(GOTHIC_FONT,0,1);
       outtextxy(60,290,win1);
      }
      else
      {
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(175,120,p2);
       outtextxy(350,120,"WINS");
       cnt2+=1;
       itoa(cnt2,win2,10);
       setfillstyle(SOLID_FILL,8);
       bar3d(50,410,100,440,5,1);
       settextstyle(GOTHIC_FONT,0,1);
       outtextxy(60,410,win2);
      }
      if(s1[1]==s1[2]&&s1[2]==s1[3])
       {
	setcolor(3);
	rectangle(150,150,250,250);
	rectangle(250,150,350,250);
	rectangle(350,150,450,250);
	setcolor(15);
       }
       if(s1[8]==s1[2]&&s1[2]==s1[5])
       {
	setcolor(3);
	rectangle(250,250,350,350);
	rectangle(250,150,350,250);
	rectangle(250,350,350,450);
	setcolor(15);
       }
     }
   }
   else if(x>350&&x<450&&y>150&&y<250&&flag[3]!=1&&win==0)
   {
     hidemouse();
     setfillstyle(SOLID_FILL,7);
     bar(350,150,450,250);
     settextstyle(GOTHIC_FONT,0,8);

     if(chance%2==0)
     {
      outtextxy(375,150,"X");
      s1[3]=1;
     }
     else
     {
      outtextxy(375,150,"O");
      s1[3]=2;
     }
     chance++;
     flag[3]=1;
     if(s1[1]==s1[2]&&s1[2]==s1[3]||s1[3]==s1[6]&&s1[6]==s1[9]||s1[3]==s1[5]&&s1[5]==s1[7])
     {
      win=1;
      if(s1[3]==1)
      {
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(175,120,p1);
       outtextxy(350,120,"WINS");
       cnt1+=1;
       itoa(cnt1,win1,10);
       setfillstyle(SOLID_FILL,8);
       bar3d(50,290,100,320,5,1);
       settextstyle(GOTHIC_FONT,0,1);
       outtextxy(60,290,win1);
      }
      else
      {
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(175,120,p2);
       outtextxy(350,120,"WINS");
       cnt2+=1;
       itoa(cnt2,win2,10);
       setfillstyle(SOLID_FILL,8);
       bar3d(50,410,100,440,5,1);
       settextstyle(GOTHIC_FONT,0,1);
       outtextxy(60,410,win2);
      }
      if(s1[1]==s1[2]&&s1[2]==s1[3])
       {
	setcolor(3);
	rectangle(150,150,250,250);
	rectangle(250,150,350,250);
	rectangle(350,150,450,250);
	setcolor(15);
       }
       if(s1[9]==s1[6]&&s1[6]==s1[3])
       {
	setcolor(3);
	rectangle(350,350,450,450);
	rectangle(350,250,450,350);
	rectangle(350,150,450,250);
	setcolor(15);
       }
       if(s1[3]==s1[5]&&s1[5]==s1[7])
       {
	setcolor(3);
	rectangle(250,250,350,350);
	rectangle(150,350,250,450);
	rectangle(350,150,450,250);
	setcolor(15);
       }
     }
   }
   else if(x>150&&x<250&&y>250&&y<350&&flag[4]!=1&&win==0)
   {
     hidemouse();
     setfillstyle(SOLID_FILL,7);
     bar(150,250,250,350);
     settextstyle(GOTHIC_FONT,0,8);

     if(chance%2==0)
     {
      outtextxy(175,250,"X");
      s1[4]=1;
     }
     else
     {
      outtextxy(175,250,"O");
      s1[4]=2;
     }
     chance++;
     flag[4]=1;
     if(s1[1]==s1[4]&&s1[4]==s1[7]||s1[4]==s1[5]&&s1[5]==s1[6])
     {
      win=1;
      if(s1[4]==1)
      {
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(175,120,p1);
       outtextxy(350,120,"WINS");
       cnt1+=1;
       itoa(cnt1,win1,10);
       setfillstyle(SOLID_FILL,8);
       bar3d(50,290,100,320,5,1);
       settextstyle(GOTHIC_FONT,0,1);
       outtextxy(60,290,win1);
      }
      else
      {
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(175,120,p2);
       outtextxy(350,120,"WINS");
       cnt2+=1;
       itoa(cnt2,win2,10);
       setfillstyle(SOLID_FILL,8);
       bar3d(50,410,100,440,5,1);
       settextstyle(GOTHIC_FONT,0,1);
       outtextxy(60,410,win2);
      }
      if(s1[1]==s1[4]&&s1[4]==s1[7])
       {
	setcolor(3);
	rectangle(150,150,250,250);
	rectangle(150,250,250,350);
	rectangle(150,350,250,450);
	setcolor(15);
       }
      if(s1[6]==s1[4]&&s1[4]==s1[5])
       {
	setcolor(3);
	rectangle(250,250,350,350);
	rectangle(150,250,250,350);
	rectangle(350,250,450,350);
	setcolor(15);
       }

     }
   }
   else if(x>250&&x<350&&y>250&&y<350&&flag[5]!=1&&win==0)
   {
     hidemouse();
     setfillstyle(SOLID_FILL,7);
     bar(250,250,350,350);
     settextstyle(GOTHIC_FONT,0,8);

     if(chance%2==0)
     {
      outtextxy(275,250,"X");
      s1[5]=1;
     }
     else
     {
      outtextxy(275,250,"O");
      s1[5]=2;
     }
     chance++;
     flag[5]=1;
     if(s1[4]==s1[5]&&s1[5]==s1[6]||s1[2]==s1[5]&&s1[5]==s1[8]||s1[1]==s1[5]&&s1[5]==s1[9]||s1[3]==s1[5]&&s1[5]==s1[7])
     {
      win=1;
      if(s1[5]==1)
      {
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(175,120,p1);
       outtextxy(350,120,"WINS");
       cnt1+=1;
       itoa(cnt1,win1,10);
       setfillstyle(SOLID_FILL,8);
       bar3d(50,290,100,320,5,1);
       settextstyle(GOTHIC_FONT,0,1);
       outtextxy(60,290,win1);
      }
      else
      {
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(175,120,p2);
       outtextxy(350,120,"WINS");
       cnt2+=1;
       itoa(cnt2,win2,10);
       setfillstyle(SOLID_FILL,8);
       bar3d(50,410,100,440,5,1);
       settextstyle(GOTHIC_FONT,0,1);
       outtextxy(60,410,win2);
      }
	if(s1[1]==s1[5]&&s1[5]==s1[9])
       {
	setcolor(3);
	rectangle(150,150,250,250);
	rectangle(250,250,350,350);
	rectangle(350,350,450,450);
	setcolor(15);
       }
       if(s1[6]==s1[4]&&s1[4]==s1[5])
       {
	setcolor(3);
	rectangle(250,250,350,350);
	rectangle(150,250,250,350);
	rectangle(350,250,450,350);
	setcolor(15);
       }
       if(s1[8]==s1[2]&&s1[2]==s1[5])
       {
	setcolor(3);
	rectangle(250,250,350,350);
	rectangle(250,150,350,250);
	rectangle(250,350,350,450);
	setcolor(15);
       }
       if(s1[3]==s1[5]&&s1[5]==s1[7])
       {
	setcolor(3);
	rectangle(250,250,350,350);
	rectangle(150,350,250,450);
	rectangle(350,150,450,250);
	setcolor(15);
       }
     }
   }
   else if(x>350&&x<450&&y>250&&y<350&&flag[6]!=1&&win==0)
   {
     hidemouse();
     setfillstyle(SOLID_FILL,7);
     bar(350,250,450,350);
     settextstyle(GOTHIC_FONT,0,8);
     if(chance%2==0)
     {
      outtextxy(375,250,"X");
      s1[6]=1;
     }
     else
     {
      outtextxy(375,250,"O");
      s1[6]=2;
     }
     chance++;
     flag[6]=1;
     if(s1[3]==s1[6]&&s1[6]==s1[9]||s1[4]==s1[5]&&s1[5]==s1[6])
     {
      win=1;
      if(s1[6]==1)
      {
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(175,120,p1);
       outtextxy(350,120,"WINS");
       cnt1+=1;
       itoa(cnt1,win1,10);
       setfillstyle(SOLID_FILL,8);
       bar3d(50,290,100,320,5,1);
       settextstyle(GOTHIC_FONT,0,1);
       outtextxy(60,290,win1);
      }
      else
      {
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(175,120,p2);
       outtextxy(350,120,"WINS");
       cnt2+=1;
       itoa(cnt2,win2,10);
       setfillstyle(SOLID_FILL,8);
       bar3d(50,410,100,440,5,1);
       settextstyle(GOTHIC_FONT,0,1);
       outtextxy(60,410,win2);
      }
	 if(s1[6]==s1[4]&&s1[4]==s1[5])
       {
	setcolor(3);
	rectangle(250,250,350,350);
	rectangle(150,250,250,350);
	rectangle(350,250,450,350);
	setcolor(15);
       }
	 if(s1[9]==s1[6]&&s1[6]==s1[3])
       {
	setcolor(3);
	rectangle(350,350,450,450);
	rectangle(350,250,450,350);
	rectangle(350,150,450,250);
	setcolor(15);
       }

     }
   }
   else if(x>150&&x<250&&y>350&&y<450&&flag[7]!=1&&win==0)
   {
     hidemouse();
     setfillstyle(SOLID_FILL,7);
     bar(150,350,250,450);
     settextstyle(GOTHIC_FONT,0,8);
     if(chance%2==0)
     {
      outtextxy(175,350,"X");
      s1[7]=1;
     }
     else
     {
      outtextxy(175,350,"O");
      s1[7]=2;
     }
     chance++;
     flag[7]=1;
     if(s1[7]==s1[8]&&s1[8]==s1[9]||s1[1]==s1[4]&&s1[4]==s1[7]||s1[3]==s1[5]&&s1[5]==s1[7])
     {
      win=1;
      if(s1[7]==1)
      {
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(175,120,p1);
       outtextxy(350,120,"WINS");
       cnt1+=1;
       itoa(cnt1,win1,10);
       setfillstyle(SOLID_FILL,8);
       bar3d(50,290,100,320,5,1);
       settextstyle(GOTHIC_FONT,0,1);
       outtextxy(60,290,win1);
      }
      else
      {
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(175,120,p2);
       outtextxy(350,120,"WINS");
       cnt2+=1;
       itoa(cnt2,win2,10);
       setfillstyle(SOLID_FILL,8);
       bar3d(50,410,100,440,5,1);
       settextstyle(GOTHIC_FONT,0,1);
       outtextxy(60,410,win2);
      }
	  if(s1[1]==s1[4]&&s1[4]==s1[7])
       {
	setcolor(3);
	rectangle(150,150,250,250);
	rectangle(150,250,250,350);
	rectangle(150,350,250,450);
	setcolor(15);
       }
       if(s1[3]==s1[5]&&s1[5]==s1[7])
       {
	setcolor(3);
	rectangle(250,250,350,350);
	rectangle(150,350,250,450);
	rectangle(350,150,450,250);
	setcolor(15);
       }
       if(s1[9]==s1[8]&&s1[8]==s1[7])
       {
	setcolor(3);
	rectangle(350,350,450,450);
	rectangle(150,350,250,450);
	rectangle(250,350,350,450);
	setcolor(15);
       }

     }
   }
   else if(x>250&&x<350&&y>350&&y<450&&flag[8]!=1&&win==0)
   {
     hidemouse();
     setfillstyle(SOLID_FILL,7);
     bar(250,350,350,450);
     settextstyle(GOTHIC_FONT,0,8);

     if(chance%2==0)
     {
      outtextxy(275,350,"X");
      s1[8]=1;
     }
     else
     {
      outtextxy(275,350,"O");
      s1[8]=2;
     }
     chance++;
     flag[8]=1;
     if(s1[7]==s1[8]&&s1[8]==s1[9]||s1[2]==s1[5]&&s1[5]==s1[8])
     {
      win=1;
      if(s1[8]==1)
      {
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(175,120,p1);
       outtextxy(350,120,"WINS");
       cnt1+=1;
       itoa(cnt1,win1,10);
       setfillstyle(SOLID_FILL,8);
       bar3d(50,290,100,320,5,1);
       settextstyle(GOTHIC_FONT,0,1);
       outtextxy(60,290,win1);
      }
      else
      {
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(175,120,p2);
       outtextxy(350,120,"WINS");
       cnt2+=1;
       itoa(cnt2,win2,10);
       setfillstyle(SOLID_FILL,8);
       bar3d(50,410,100,440,5,1);
       settextstyle(GOTHIC_FONT,0,1);
       outtextxy(60,410,win2);
      }
      if(s1[9]==s1[8]&&s1[8]==s1[7])
       {
	setcolor(3);
	rectangle(350,350,450,450);
	rectangle(150,350,250,450);
	rectangle(250,350,350,450);
	setcolor(15);
       }
	   if(s1[8]==s1[2]&&s1[2]==s1[5])
       {
	setcolor(3);
	rectangle(250,250,350,350);
	rectangle(250,150,350,250);
	rectangle(250,350,350,450);
	setcolor(15);
       }

     }
   }
   else if(x>350&&x<450&&y>350&&y<450&&flag[9]!=1&&win==0)
   {
     hidemouse();
     setfillstyle(SOLID_FILL,7);
     bar(350,350,450,450);
     settextstyle(GOTHIC_FONT,0,8);

     if(chance%2==0)
     {
      outtextxy(375,350,"X");
      s1[9]=1;
     }
     else
     {
      outtextxy(375,350,"O");
      s1[9]=2;
     }
     chance++;
     flag[9]=1;
     if(s1[7]==s1[8]&&s1[8]==s1[9]||s1[3]==s1[6]&&s1[6]==s1[9]||s1[1]==s1[5]&&s1[5]==s1[9])
     {
      win=1;
      if(s1[9]==1)
      {
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(175,120,p1);
       outtextxy(350,120,"WINS");
       cnt1+=1;
       itoa(cnt1,win1,10);
       setfillstyle(SOLID_FILL,8);
       bar3d(50,290,100,320,5,1);
       settextstyle(GOTHIC_FONT,0,1);
       outtextxy(60,290,win1);
      }
      else
      {
       settextstyle(DEFAULT_FONT,0,2);
       outtextxy(175,120,p2);
       outtextxy(350,120,"WINS");
       cnt2+=1;
       itoa(cnt2,win2,10);
       setfillstyle(SOLID_FILL,8);
       bar3d(50,410,100,440,5,1);
       settextstyle(GOTHIC_FONT,0,1);
       outtextxy(60,410,win2);
      }
       if(s1[1]==s1[5]&&s1[5]==s1[9])
       {
	setcolor(3);
	rectangle(150,150,250,250);
	rectangle(250,250,350,350);
	rectangle(350,350,450,450);
	setcolor(15);
       }
	 if(s1[9]==s1[6]&&s1[6]==s1[3])
       {
	setcolor(3);
	rectangle(350,350,450,450);
	rectangle(350,250,450,350);
	rectangle(350,150,450,250);
	setcolor(15);
       }
       if(s1[9]==s1[8]&&s1[8]==s1[7])
       {
	setcolor(3);
	rectangle(350,350,450,450);
	rectangle(150,350,250,450);
	rectangle(250,350,350,450);
	setcolor(15);
       }

     }
   }
  else if(chance==9&&win!=1)
   {
    settextstyle(DEFAULT_FONT,0,2);
    outtextxy(200,120,"DRAW");
   }

  }




}
void back()
{
 int x,y;
 while(1)
 {
  hidemouse();
  setfillstyle(LINE_FILL,4);
  bar(10,10,630,470);
  setfillstyle(EMPTY_FILL,3);
  bar(20,40,610,100);
  settextstyle(TRIPLEX_FONT,0,7);
  outtextxy(200,30,"HELLO");

  setfillstyle(EMPTY_FILL,3);
  bar(20,120,610,180);
  settextstyle(TRIPLEX_FONT,0,7);
  outtextxy(130,110,"LET'S PLAY");

  setfillstyle(WIDE_DOT_FILL,14);
  setcolor(14);
  fillellipse(320,280,250,70);
  setcolor(15);

  settextstyle(TRIPLEX_FONT,0,7);
  outtextxy(100,240,"TIC TAC TOE");


  setfillstyle(SOLID_FILL,8);
  bar3d(55,390,135,420,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(65,400,"QUIT");

  setfillstyle(SOLID_FILL,8);
  bar3d(220,390,430,420,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(230,400,"INSTRUCTIONS");

  setfillstyle(SOLID_FILL,8);
  bar3d(505,390,585,420,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(515,400,"PLAY");



  while(1)
  {
   showmouse();
   out.x.bx=0;
   while(!out.x.bx)
   {
    getmouse(&x,&y);
   }

   if(x>55&&x<135&&y>390&&y<420)
   {
    quit();
    break;
   }

   else if(x>220&&x<430&&y>390&&y<420)
   {
    instr();
    break;
   }

   else if(x>505&&x<585&&y>390&&y<420)
   {
    play();
    break;
   }
   hidemouse();
  }
 }

}
void instr()
{
 int x,y;
 hidemouse();
 clearviewport();
 clrscr();
 cleardevice();

 setfillstyle(LINE_FILL,4);
 bar(10,10,630,470);
 setfillstyle(EMPTY_FILL,3);
 bar(20,40,610,100);
 settextstyle(TRIPLEX_FONT,0,7);
 outtextxy(100,30,"INSTRUCTIONS");

 settextstyle(TRIPLEX_FONT,0,3);
 outtextxy(30,130,"1.ONLY TWO PLAYERS CAN PLAY WITH EACH");
 outtextxy(50,160,"PLAYER HAVING ALTERNATE TURN.");
 outtextxy(30,190,"2.ONE PLAYER PLAYS WITH X AND OTHER");
 outtextxy(50,220,"WITH O.");
 outtextxy(30,250,"3.TRY TO MAKE 3 Xs OR 3 Os VERTICALLY,");
 outtextxy(50,280,"HORIZONTAL OR DIAGONALLY.");
 outtextxy(30,310,"4.PLAYER DOING IT FIRST,WINS.");
 outtextxy(30,340,"5.LAST RULE !!PLAY TO WIN.");

 setfillstyle(SOLID_FILL,8);
 bar3d(255,400,335,430,5,1);
 settextstyle(DEFAULT_FONT,0,2);
 outtextxy(265,410,"BACK");

 while(1)
 {
  showmouse();
  out.x.bx=0;
  while(!out.x.bx)
  {
   getmouse(&x,&y);
  }

   if(x>255&&x<335&&y>400&&y<430)
   {
    back();
    break;
   }
  hidemouse();
 }

}

void play()
{
  int x,y;
  player1();
}

void quit()
{
  hidemouse();
  clearviewport();
  clrscr();
  cleardevice();
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(220,420,"BYE");
  outtextxy(280,420,"BYE");


  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(100,200,"EXITING");
  settextstyle(DEFAULT_FONT,0,1);
  delay(500);
  for(i=0;i<100;i++)
  {
   i+=19;
   outtextxy((210+i),210,".");
   delay(500);
  }

   exit(0);

}

void main()
{

 int gmode,gdriver=DETECT;
 int x,y;
 initgraph(&gdriver,&gmode,"c:\\TurboC++\\disk\\TurboC3\\bgi");

 clrscr();

 cleardevice();

 settextstyle(DEFAULT_FONT,0,1);
 outtextxy(220,420,"A");
 outtextxy(240,420,"PRODUCT");
 outtextxy(310,420,"BY");
 outtextxy(220,440,"DUDE");
 outtextxy(270,440,"FUNUNLIMITED");


 settextstyle(DEFAULT_FONT,0,2);
 outtextxy(100,200,"LOADING");
 settextstyle(DEFAULT_FONT,0,1);
 delay(500);
 for(i=0;i<100;i++)
 {
  i+=9;
  outtextxy((210+i),210,".");
  delay(500);
 }
 initmouse();
 while(1)
 {
  setfillstyle(LINE_FILL,4);
  bar(10,10,630,470);
  setfillstyle(EMPTY_FILL,3);
  bar(20,40,610,100);
  settextstyle(TRIPLEX_FONT,0,7);
  outtextxy(200,30,"HELLO");

  setfillstyle(EMPTY_FILL,3);
  bar(20,120,610,180);
  settextstyle(TRIPLEX_FONT,0,7);
  outtextxy(130,110,"LET'S PLAY");

  setfillstyle(WIDE_DOT_FILL,14);
  setcolor(14);
  fillellipse(320,280,250,70);
  setcolor(15);

  settextstyle(TRIPLEX_FONT,0,7);
  outtextxy(130,240,"TIC TAC TOE");


  setfillstyle(SOLID_FILL,8);
  bar3d(55,390,135,420,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(65,400,"QUIT");

  setfillstyle(SOLID_FILL,8);
  bar3d(220,390,430,420,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(230,400,"INSTRUCTIONS");

  setfillstyle(SOLID_FILL,8);
  bar3d(505,390,585,420,5,1);
  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(515,400,"PLAY");



  initmouse();

  while(1)
  {
   showmouse();
   out.x.bx=0;
   while(!out.x.bx)
   {
    getmouse(&x,&y);
   }

   if(x>55&&x<135&&y>390&&y<420)
   {
    quit();
    break;
   }

   else if(x>220&&x<430&&y>390&&y<420)
   {
    instr();
    break;
   }

   else if(x>505&&x<585&&y>390&&y<420)
   {
    play();
    break;
   }
   hidemouse();
  }
 }
}