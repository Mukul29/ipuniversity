//Write a program to implement Bresenhams circle drawing algorithm

#include <stdio.h>
#include <dos.h>
#include <graphics.h>
void draw(int,int,int,int);
void bres(int, int, int);
int main()
{
 int xc = 300, yc = 150, r2 = 90;
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "C:\\TC\\BGI");
 bres(xc, yc, r2);
 getch();
 closegraph();
 return 0;
}
void draw(int xc, int yc, int x, int  y)
{
	putpixel(xc+x, yc+y, RED);
	putpixel(xc-x, yc+y, RED);
	putpixel(xc+x, yc-y, RED);
	putpixel(xc-x, yc-y, RED);
	putpixel(xc+y, yc+x, RED);
	putpixel(xc-y, yc+x, RED);
	putpixel(xc+y, yc-x, RED);
	putpixel(xc-y, yc-x, RED);
}
void bres(int xc, int yc, int r)
{
	int x = 0, y = r;
	int d = 3 - 2 * r;
	while(y >= x)
	{
	draw(xc, yc, x, y);
		x++;
		if(d > 0)
		{
			y--;
			d = d + 4 * (x - y)+10;
		}
		else
			d = d + 4 * x + 6;
		draw(xc, yc, x, y);
	}
}
