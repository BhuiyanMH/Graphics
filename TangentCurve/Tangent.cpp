#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>


main()
{

	int gd = DETECT, gm;
	char ch = 'a';
   	struct arccoordstype a, b;
   	initgraph(&gd, &gm, "C:\\TC\\BGI");
   	
   	int angle = 0;
    double x=0, y=0;
   	int option = 0; 
   	
 	
 	while(option != 1 && option != 2 && option!=3)
	 {
	 	printf("Select the triginometric Function:\n1. Sin\n2. Cos\n3. Tan\nInput option: ");
 		scanf("%d", &option);
 		
	 }
 	
 	line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
 	//generate the sine wave
 	while(x < getmaxx()) {
 
 
    	 //calculate the value of function
    	 switch(option)
		 {
		 	case 1:
		 		y = 50*sin(angle*3.141/180);
		 		break;
		 	case 2:
		 		y = 50*cos(angle*3.141/180);
		 		break;
		 	case 3:
		 		y = 50*tan(angle*3.141/180);
		 		break;
    	 	
		 }
    	 //y = 50*sin(angle*3.141/180);
    	 y = getmaxy()/2 - y;
 
    	// Draw a pixel
 		 putpixel(x, y, 15);
 		 delay(10);
 		
 		//increment the angle
 	 	angle+=5;
 	 	x++;
	 }
   	  	
   	
	getch();
	closegraph();
}

