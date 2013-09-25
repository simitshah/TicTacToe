
#include <stdio.h>
#include <time.h>
#include<conio.h>
#include<graphics.h>
void dtim(void)
{
  time_t t;

  t = time(NULL);
  gotoxy(150,0);
  printf("%s", ctime(&t));

}


