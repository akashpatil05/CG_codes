#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class line
{
  public:
  int x,y,dx,dy,m,steps,xi,yi;
  void output()
    {
      putpixel(x,y,10);
    }
  void line1(int x1,int y1,int x2, int y2)
    {
      dx=x2-x1;
      dy=y2-y1;
      if(abs(dx)>abs(dy))
        steps=abs(dx);
      else
        steps=abs(dy);
        
      xi=dx/steps;
      yi=dy/steps;
      x=x1+0.5;
      y=y1+0.5;
      output();
      
      for(int i=1;i<=steps;i++)
        {
          x=x+xi;
          y=y+yi;
          output();
          delay(10);
        }
    }
}l;
class circle1
{
 public:
  void drawcircle(int x,int y,int r)
{
  int x1=0,y1=r;
  putpixel(x1,y1,3);
  int dk=3-2*r;
  while(x1<y1)
  {
    if(dk<=0)
    {
      dk=dk+(4*x1)+6;
    }  
    else
    {
      dk=dk+(4*(x1-y1))+10;
      y1--;
    }
    x1++;
  putpixel(x+x1,y+y1,3);
  putpixel(x-x1,y+y1,3);
  putpixel(x+x1,y-y1,3);
  putpixel(x-x1,y-y1,3);
  putpixel(x+y1,y+x1,3);
  putpixel(x-y1,y+x1,3);
  putpixel(x+y1,y-x1,3);
  putpixel(x-y1,y-x1,3);
  delay(15);
  }
}
}c;

int main()
{
  int gd=DETECT,gm=DETECT;
  initgraph(&gd,&gm,NULL);
  l.line1(250,250,150,150);
  l.line1(150,150,50,250);
  l.line1(50,250,250,250);
/* l.line1(100,100,100,400);
 l.line1(100,250,250,400);
l.line1(250,400,400,250);
  l.line1(400,250,250,100);
 l.line1(250,100,100,250);*/
  //l.line1(175,325,325,325);
  //l.line1(325,325,325,175);
 // l.line1(325,175,175,175);
 // l.line1(175,175,175,325);
  c.drawcircle(149,249,100);
  c.drawcircle(150,210,40);
  delay(500);
  //r=95;x=75;y=95;
  getch();
  closegraph();
  return 0;
}
