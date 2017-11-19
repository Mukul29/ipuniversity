//Write a program to perform 3d transformations
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<process.h>

int maxx,maxy,midx,midy;
void main()
{
	int x,y,z,o,x1,x2,y1,y2,ch;
	int gd=DETECT,gm;
	clrscr();
	textbackground(WHITE);
	textcolor(BLACK);
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	maxx=getmaxx();
	maxy=getmaxy();
	midx=maxx/2;
	midy=maxx/2;
	printf("\nFIGURE  FORMED  IS>>>>>>>");
	bar3d(midx+50,midy-100,midx+60,midy-90,5,1);
	delay(2000);
	clrscr();
	printf("\nenter  choice  ");
	printf("\n1.TRANSLATION  \n2.SCALING  \n3.  ROTATION  \n");
	scanf("%d", &ch);
	if(ch==1)
	{
		clrscr();
		bar3d(midx+50,midy-100,midx+60,midy-90,5,1);
		printf("\nenter  translation  factors\n");
		scanf("%d %d", &x, &y);
		printf("\nafter  translation\n");
		bar3d(midx+x+50,midy-(y+100),midx+x+60,midy-(y+90),10,1);
	}
	else  if(ch==2)
	{
		clrscr();
		bar3d(midx+50,midy-100,midx+60,midy-90,5,1);
		printf("\nenter  scaling  factors\n");
		scanf("%d %d %d", &x, &y, &z);
		printf("\nafter  translation\n");
		bar3d(midx+(x*50),midy-(y*100),midx+(x*60),midy-(y*90),5*z,1);
	}
	else  if(ch==3)
	{
		clrscr();
		bar3d(midx+50,midy-100,midx+60,midy-90,5,1);
		printf("\nenter  rotating  angle  \n");
		scanf("%d", &o);
		x1=50*cos(o*3.14/180)-100*sin(o*3.14/180);
		y1=50*cos(o*3.14/180)+100*sin(o*3.14/180);
		x2=60*cos(o*3.14/180)-90*sin(o*3.14/180);
		y2=60*cos(o*3.14/180)+90*sin(o*3.14/180);
		printf("\nafter  rotation\n");
		bar3d(midx+x1,midy-y1,midx+x2,midy-y2,5,1);
	}
	else
		exit(0);
	getch();
	closegraph();
}
