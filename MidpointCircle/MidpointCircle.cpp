#include <stdio.h>
#include <graphics.h>

void circleMidpoint(int x1,int y1,int r)
{
	int x,y,d;
	x=0;
	y=r;
	d=1-r;
	
	while(x<=y)
	{
		putpixel(x1+x,y1+y,15);
		putpixel(x1-x,y1+y,15);
		putpixel(x1+x,y1-y,15);
		putpixel(x1-x,y1-y,15);
		putpixel(x1+y,y1+x,15);
		putpixel(x1+y,y1-x,15);
		putpixel(x1-y,y1+x,15);
		putpixel(x1-y,y1-x,15);
				
		if(d<0)
		{
			d=d+(2*x)+3;
		}
		else
		{
			d=d+2*(x-y)+5;
			y--;

		}
		x=x+1;
		delay(100);

	}
}

main()
{
	int x1,y1,r;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	
	printf("Enter center co-ordinate x, y: ");
	scanf("%d%d", &x1, &y1);
	printf("Enter radius: ");
	scanf("%d", &r);
	
	circleMidpoint(x1,y1,r);
	getch();
	closegraph();
}

