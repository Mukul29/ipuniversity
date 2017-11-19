#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
	int gm,gd=DETECT;
	int  i;
	float  u;
	float  px[4],py[4],cx,cy;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	for(i=0;i<=3;i++)
	{
		printf("enter  the  co-ordinate  of  px[%d]: ",i+1);
		scanf("%f",&px[i]);
		printf("enter  the  co-ordinate  of  py[%d]: ",i+1);
		scanf("%f",&py[i]);
	}
	for(u=0.0;u<=1.0;u=u+0.005)
	{
		cx=(px[0]*pow(1-u,3))+(3*px[1]*u*pow(1-u,2))+(3*px[2]*pow(u,2)*(1-u))+(px[3]*pow(u,3));
		cy=(py[0]*pow(1-u,3))+(3*py[1]*u*pow(1-u,2))+(3*py[2]*pow(u,2)*(1-u))+(py[3]*pow(u,3));
		putpixel(cx,cy,15);
	}
	getch();
	closegraph();
}
