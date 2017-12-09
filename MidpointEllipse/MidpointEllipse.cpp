#include <stdio.h>
#include <graphics.h>

void midpointEllipse(int x1,int y1,int a, int b)
{
	
	int x,y;
	x=0;
	y=b;
	
	int aa = a*a;
	int bb = b*b;
	int aa2 = 2*aa;
	int bb2 = 2*bb;
	int fx = 0;
	int fy = aa2*b; // initial partial derivative
	int p = bb - (aa*b) + (0.25*aa); //compute and round off p1
	
	while(fx<fy)
	{
		
		putpixel(x1+x,y1-y,15);
        putpixel(x1-x,y1+y,15);
        putpixel(x1+x,y1+y,15);
        putpixel(x1-x,y1-y,15);
        delay(100);
        
		x++;
		fx = fx + bb2;
		
		if(p<0)
		{
			p = p + fx + bb;
			
		}else
		{
			y--;
			fy = fy - aa2;
			p = p + fx + bb - fy;
			
		}
		
	}
	
	putpixel(x1+x,y1-y,15);
    putpixel(x1-x,y1+y,15);
    putpixel(x1+x,y1+y,15);
    putpixel(x1-x,y1-y,15);
    delay(100);
    
	p = bb *((x+0.5)*(x+0.5))+ aa *((y-1)*(y-1))-(aa*bb);
	
	while(y>0)
	{
		y--;
		fy = fy -aa2;
		if(p>=0)
		{
			p = p - fy + aa;
			
		}else
		{
			x++;
			fx = fx + bb2;
			p = p + fx - fy + aa;
			
		}
		
		putpixel(x1+x,y1-y,15);
        putpixel(x1-x,y1+y,15);
        putpixel(x1+x,y1+y,15);
        putpixel(x1-x,y1-y,15);
        
        delay(100);
	
	}	
	

}

main()
{
	int x1,y1,a, b;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	
	printf("Enter center co-ordinate x, y: ");
	scanf("%d%d", &x1, &y1);
	printf("Enter Major Axis: ");
	scanf("%d", &a);
	printf("Enter Minor Axis: ");
	scanf("%d", &b);
		
	midpointEllipse(x1,y1,a, b);
	getch();
	closegraph();
}

