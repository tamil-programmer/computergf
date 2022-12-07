//  <---- S.SURYA THEME ------------->
//imp  
// char data[] = "C:\\MinGW\\lib\\libbgi.a"; 

#include <graphics.h>
#include <conio.h>
#include<stdlib.h>
//driver code
int main()
{
 char data[] = "C:\\MinGW\\lib\\libbgi.a"; 

int gd = DETECT, gm, x, y, i , color, angle = 0;
struct arccoordstype a, b;
initgraph(&gd, &gm, data);

while(angle<=360)
{
setcolor(BLACK);
arc(getmaxx()/2,getmaxy()/2,angle,angle+2,100);
setcolor(RED);
getarccoords(&a);
circle(a.xstart,a.ystart,25);
setcolor(BLACK);
arc(getmaxx()/2,getmaxy()/2,angle,angle+2,150);
getarccoords(&a);
setcolor(GREEN);
circle(a.xstart,a.ystart,25);
angle = angle+5;

delay(50);
}
getch();
closegraph();
return 0;
}