#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void mount();

void main()
{

int a,b,c,d;
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");

mount();

//sun rise
b=0;
for(a=0;a<150;a++)
{
setfillstyle(1,WHITE);
circle(400,600-b,40);
floodfill(400,561-b,WHITE);
b=b+3;
delay(30);
cleardevice();
mount();
}
setfillstyle(1,WHITE);
circle(400,600-b,40);
floodfill(400,561-b,WHITE);
delay(1000);

//circle(400,150,50);

line(350,130,330,120);
line(360,115,340,100);
line(378,105,360,85);

line(450,130,470,120);
line(440,115,460,100);
line(420,105,435,85);

line(445,170,470,185);
line(435,185,455,205);
line(420,200,430,222);

line(352,170,325,175);
line(360,185,340,200);
line(380,195,365,215);


line(350,150,325,150);
line(400,100,400,75);
line(450,150,475,150);
line(400,200,400,225);

 delay(2000);
//sun set
c=0;
for(a=0;a<150;a++)
{
setfillstyle(1,WHITE);
circle(400,600-b+c,40);
floodfill(400,561-b+c,WHITE);
c=c+3;
delay(30);
cleardevice();
mount();
}


getch();
}


void mount()
{

setfillstyle(1,WHITE);
//mountain
line(0,480,200,300);
line(200,300,400,480);
line(400,480,600,300);
line(600,300,800,480);
floodfill(100,470,WHITE);
floodfill(550,350,WHITE);

}