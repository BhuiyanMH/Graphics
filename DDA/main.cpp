# include <graphics.h>
# include <math.h>
# include <conio.h>
# include <iostream>
void DDALine(int x1,int y1,int x2,int y2);
main()
{
    
	int gd = DETECT, gm;
   	struct arccoordstype a, b;
   	initgraph(&gd, &gm, "C:\\TC\\BGI");
   	cleardevice();

    int x1,x2,y1,y2;
	
	printf("Enter x1, y1, x2 and y2:");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	    
    DDALine(x1, y1, x2, y2);
   	getch();
	closegraph();
}

void DDALine(int x1,int y1,int x2,int y2)
{
    float dX,dY,iSteps;
    float xInc,yInc,iCount,x,y;

    dX = x1 - x2;
    dY = y1 - y2;

    if (fabs(dX) > fabs(dY))
    {
        iSteps = fabs(dX);
    }
    else
    {
        iSteps = fabs(dY);
    }

    xInc = dX/iSteps;
    yInc = dY/iSteps;

    x = x1;
    y = y1;
    circle(x,y,1);

    for (iCount=1; iCount<=iSteps; iCount++)
    {
        putpixel(floor(x),floor(y),15);
        x -= xInc;
        y -= yInc;
    }
   
    return;
}

