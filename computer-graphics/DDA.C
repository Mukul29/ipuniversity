//Write a program to implement DDA line algorithm

#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include <conio.h>

void lineDDA(int x1, int y1, int x2, int y2);

void main()
{
	int gd=DETECT, gm;
	int x1, y1, x2, y2;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	printf("Enter the starting coordinate of line: ");
	scanf("%d %d", &x1, &y1);
	printf("Enter the ending coordinate of line: ");
	scanf("%d %d", &x2, &y2);
	lineDDA(x1,y1,x2,y2);
	getch();
	closegraph();
}

void lineDDA(int x1, int y1, int x2, int y2)
{
	float i, dx, dy, step, x, y;

	dx = abs(x2-x1);
	dy = abs(y2-y1);
	if(dx>dy)
		step = dx;
	else
		step = dy;

	dx = dx/step;
	dy = dy/step;
	x = x1; y = y1;

	for(i=1;i<=step;i++) {
		putpixel(x, y, RED);
		x = x + dx;
		y = y + dy;
	}
}

