#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>

int x = 100, y = 100, radius = 50;

int drawCircle(int x, int y, int radius)
{

    if(((getmaxx()-x)>=radius)&&((getmaxy()-y>=radius))&&(x>=radius)&&(y>=radius) && radius!=0)
    {	
    	cleardevice();
        circle(x, y, radius);
        return 1;
    }else{
        return 0;

    }
}

void animatedCircle()
{
	char ch = 'a';
	
	while(1)
    {
        ch = getch();

        switch(ch)
        {
            case 'e':
                exit(0);
                break;

            case '+':
                if(drawCircle(x, y, radius+5) == 1)
                    radius+=5;
                break;

            case '-':
                if(drawCircle(x, y, radius-5) == 1)
                	radius-=5;
                break;

            case 'u':
            	if(drawCircle(x, y-5, radius) == 1)
                	y-=5;
                break;

            case 'd':
            	if(drawCircle(x, y+5, radius) == 1)
                	y+=5;
                
                break;

            case 'l':
            	if(drawCircle(x-5, y, radius) == 1)
                	x-=5;
                break;

            case 'r':
            	if(drawCircle(x+5, y, radius) == 1)
                	x+=5;
                break;

        }

    }
	
}
main()
{
	//putpixel(10,10, 10);
	
	int gd = DETECT, gm;
   	struct arccoordstype a, b;
   	initgraph(&gd, &gm, "C:\\TC\\BGI");
   	
   	cleardevice();
	circle(x, y, radius);

	printf("Commands:\n+ -> Zoom in\t- -> Zoom out\nu -> Up\t\td -> Down\nl -> Left\tr -> Right\ne -> Exit");
	animatedCircle();	

	 getch();
  	 closegraph();
}


