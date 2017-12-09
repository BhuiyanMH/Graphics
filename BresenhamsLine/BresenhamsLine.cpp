#include <stdio.h>
#include <graphics.h>

void bresenhamsLine(int x1, int y1, int x2, int y2)
{
	int x, y, dx, dy, dT, dS, d; 
	x = x1;
	y = y1;
	dx = x2-x1;
	dy = y2-y1;
	dT = 2*(dy-dx);
	dS = 2*dy;
	d = (2*dy)-dx;
	
	putpixel(x, y, 15); 
	
	while(x < x2)
	{
		x++;
		if(d<0)
		{
			d = d + dS;
			
		}else
		{
			y++;
			d = d + dT;
		}
		putpixel(x, y, 15);
	}
	 
}

main()
{
	int x1,y1,x2,y2;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	
	printf("Enter center co-ordinate x1, y1, x2, y2:");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	
	bresenhamsLine(x1,y1,x2,y2);
	getch();
	closegraph();
}

