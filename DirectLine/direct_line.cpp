#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void directLine(float x1,float y1,float x2,float y2)
{
	float m,c,x,y;
	m = (y2 - y1)/(x2 - x1);
	c = y1 - m * x1;
	for(x = x1;x<x2;x++)
    {
 		y = m * x + c;
		putpixel(x,(int)y,15);
    }
}


main()
{

	int gd = DETECT, gm;
   	struct arccoordstype a, b;
   	initgraph(&gd, &gm, "C:\\TC\\BGI");
   	cleardevice();
   	
   	float x1, x2, y1, y2;
	printf("Enter Two Points: x1, y1, x2, y2:\n");
	scanf("%f %f %f %f", &x1, &y2, &x2, &y2);
	
	directLine(x1, y1, x2, y2);

	getch();
	closegraph();
}

