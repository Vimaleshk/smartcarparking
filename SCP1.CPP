#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main()
{
clrscr();
int gd=DETECT,gm,i,j,n;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);

for(n=0;n<=6;n++)
{
if(n==0)
{
for(i=0;i<=110;i++)
{
//car coding
pieslice(356,356,352-i,90-i,4);
circle(356,356,4);

pieslice(384,356,380,90-i,4);
circle(384,356,4);

line(360,356,380,356);//Middle line
line(340,356,352,356);//Back line
line(388,356,400,356);//Front line
line(340,356,340,344);//Back Height
line(340,344,346,336);//Back Height Inner
line(346,336,378,336);//Roof
line(378,336,388,344);//Front Glass
line(388,344,400,348);//Baunat
line(400,348,400,356);//Front Height

//Back Mirror
line(349,340,345,346);//back line
line(349,340,360,340);//Top line
line(345,346,360,346);//down line
line(360,340,360,346);//front line

//Front Mirror
line(364,340,364,346);//back line
line(364,340,375,340);//Top line
line(364,346,383,346);//down line
line(375,340,383,346);//front line

delay(20);
cleardevice();

//Road Coding
line(270,400,275,370);//Road Left down line
line(275,370,220,370);//Left Road down line

//Left road dot line
line(270,360,260,360);
line(250,360,240,360);
line(230,360,225,360);

line(280,350,220,350);//left road upper line
line(280,350,310,225);//Road left upper line

//Dot line on Road
line(320,400,320,370);
line(320,350,320,325);
line(320,310,320,290);
line(320,280,320,265);
line(320,260,320,250);
line(320,245,320,240);
line(320,236,320,232);
line(310,228,310,226);

line(370,400,365,370);//Road right down line
line(365,370,420,370);//Right road down line

//Right road dot line
line(370,360,380,360);
line(390,360,400,360);
line(410,360,415,360);

line(360,350,420,350);//Right Road Upper line
line(360,350,330,225);//Road right upper line

//Left side
//Left down
setcolor(LIGHTBLUE);
line(20,280,100,280);//upper
line(100,280,100,360);//right
line(20,360,100,360);//lower
line(20,280,20,360);//left

//right down
setcolor(LIGHTGREEN);
line(125,280,205,280);//upper
line(205,280,205,360);//right
line(125,360,205,360);//lower
line(125,280,125,360);//left

//left middle
setcolor(LIGHTCYAN);
line(20,255,100,255);//lower
line(20,175,20,255);//left
line(100,175,100,255);//right
line(20,175,100,175);//upper

//right middle
setcolor(LIGHTRED);
line(125,255,205,255);//lower
line(125,175,125,255);//left
line(205,175,205,255);//right
line(125,175,205,175);//upper
setcolor(WHITE);
circle(151,251,4);
circle(179,251,4);
line(155,251,175,251);//m
line(135,251,147,251);//b
line(183,251,195,251);//f
line(135,239,135,251);//bh
line(135,239,141,231);//bhi
line(141,231,173,231);//r
line(173,231,183,239);//fg
line(183,239,195,243);//b
line(195,243,195,251);//fh

//left upper
setcolor(LIGHTMAGENTA);
line(20,150,100,150);//lower
line(20,70,20,150);//left
line(100,70,100,150);//right
line(20,70,100,70);//upper
setcolor(WHITE);
circle(46,146,4);
circle(74,146,4);
line(50,146,70,146);//m
line(30,146,42,146);//b
line(78,146,90,146);//f
line(30,134,30,146);//bh
line(30,134,36,126);//bhi
line(36,126,68,126);//r
line(68,126,78,134);//fg
line(78,134,90,138);//b
line(90,138,90,146);//fh

//right upper
setcolor(YELLOW);
line(125,150,205,150);//lower
line(125,70,125,150);//left
line(205,70,205,150);//right
line(125,70,205,70);//upper
setcolor(WHITE);
circle(151,146,4);
circle(179,146,4);
line(155,146,175,146);//m
line(135,146,147,146);//b
line(183,146,195,146);//f
line(135,134,135,146);//bh
line(135,134,141,126);//bhi
line(141,126,173,126);//r
line(173,126,183,134);//fg
line(183,134,195,138);//b
line(195,138,195,146);//fh

//Right Side
//left down
setcolor(LIGHTBLUE);
line(435,360,515,360);//lower
line(435,280,435,360);//left
line(515,280,515,360);//right
line(435,280,515,280);//upper

//right down
setcolor(LIGHTGREEN);
line(540,360,620,360);//lower
line(540,280,540,360);//left
line(620,280,620,360);//right
line(540,280,620,280);//upper

//left middle
setcolor(LIGHTCYAN);
line(435,255,515,255);//lower
line(435,175,435,255);//left
line(515,175,515,255);//right
line(435,175,515,175);//upper

//right middle
setcolor(LIGHTRED);
line(540,255,620,255);//lower
line(540,175,540,255);//left
line(620,175,620,255);//right
line(540,175,620,175);//upper

//left upper
setcolor(LIGHTMAGENTA);
line(435,150,515,150);//lower
line(435,70,435,150);//left
line(515,70,515,150);//right
line(435,70,515,70);//upper

//right upper
setcolor(YELLOW);
line(540,150,620,150);//lower
line(540,70,540,150);//left
line(620,70,620,150);//right
line(540,70,620,70);//upper

}}
else if(n==1)
{
for(i=0;i<=110;i++)
{
//car coding
setcolor(WHITE);
pieslice(356+i,356,352-i,90-i,4);
circle(356+i,356,4);

pieslice(384+i,356,380-i,90-i,4);
circle(384+i,356,4);

line(360+i,356,380+i,356);//Middle line
line(340+i,356,352+i,356);//Back line
line(388+i,356,400+i,356);//Front line
line(340+i,356,340+i,344);//Back Height
line(340+i,344,346+i,336);//Back Height Inner
line(346+i,336,378+i,336);//Roof
line(378+i,336,388+i,344);//Front Glass
line(388+i,344,400+i,348);//Baunat
line(400+i,348,400+i,356);//Front Height

//Back Mirror
line(349+i,340,345+i,346);//back line
line(349+i,340,360+i,340);//Top line
line(345+i,346,360+i,346);//down line
line(360+i,340,360+i,346);//front line

//Front Mirror
line(364+i,340,364+i,346);//back line
line(364+i,340,375+i,340);//Top line
line(364+i,346,383+i,346);//down line
line(375+i,340,383+i,346);//front line

delay(20);
cleardevice();

//Road Coding
line(270,400,275,370);//Road Left down line
line(275,370,220,370);//Left Road down line

//Left road dot line
line(270,360,260,360);
line(250,360,240,360);
line(230,360,225,360);

line(280,350,220,350);//left road upper line
line(280,350,310,225);//Road left upper line

//Dot line on Road
line(320,400,320,370);
line(320,350,320,325);
line(320,310,320,290);
line(320,280,320,265);
line(320,260,320,250);
line(320,245,320,240);
line(320,236,320,232);
line(310,228,310,226);

line(370,400,365,370);//Road right down line
line(365,370,420,370);//Right road down line

//Right road dot line
line(370,360,380,360);
line(390,360,400,360);
line(410,360,415,360);

line(360,350,420,350);//Right Road Upper line
line(360,350,330,225);//Road right upper line

//Left side
//Left down
setcolor(LIGHTBLUE);
line(20,280,100,280);//upper
line(100,280,100,360);//right
line(20,360,100,360);//lower
line(20,280,20,360);//left

//right down
setcolor(LIGHTGREEN);
line(125,280,205,280);//upper
line(205,280,205,360);//right
line(125,360,205,360);//lower
line(125,280,125,360);//left

//left middle
setcolor(LIGHTCYAN);
line(20,255,100,255);//lower
line(20,175,20,255);//left
line(100,175,100,255);//right
line(20,175,100,175);//upper

//right middle
setcolor(LIGHTRED);
line(125,255,205,255);//lower
line(125,175,125,255);//left
line(205,175,205,255);//right
line(125,175,205,175);//upper
setcolor(WHITE);
circle(151,251,4);
circle(179,251,4);
line(155,251,175,251);//m
line(135,251,147,251);//b
line(183,251,195,251);//f
line(135,239,135,251);//bh
line(135,239,141,231);//bhi
line(141,231,173,231);//r
line(173,231,183,239);//fg
line(183,239,195,243);//b
line(195,243,195,251);//fh

//left upper
setcolor(LIGHTMAGENTA);
line(20,150,100,150);//lower
line(20,70,20,150);//left
line(100,70,100,150);//right
line(20,70,100,70);//upper
setcolor(WHITE);
circle(46,146,4);
circle(74,146,4);
line(50,146,70,146);//m
line(30,146,42,146);//b
line(78,146,90,146);//f
line(30,134,30,146);//bh
line(30,134,36,126);//bhi
line(36,126,68,126);//r
line(68,126,78,134);//fg
line(78,134,90,138);//b
line(90,138,90,146);//fh

//right upper
setcolor(YELLOW);
line(125,150,205,150);//lower
line(125,70,125,150);//left
line(205,70,205,150);//right
line(125,70,205,70);//upper
setcolor(WHITE);
circle(151,146,4);
circle(179,146,4);
line(155,146,175,146);//m
line(135,146,147,146);//b
line(183,146,195,146);//f
line(135,134,135,146);//bh
line(135,134,141,126);//bhi
line(141,126,173,126);//r
line(173,126,183,134);//fg
line(183,134,195,138);//b
line(195,138,195,146);//fh

//Right Side
//left down
setcolor(LIGHTBLUE);
line(435,360,515,360);//lower
line(435,280,435,360);//left
line(515,280,515,360);//right
line(435,280,515,280);//upper

//right down
setcolor(LIGHTGREEN);
line(540,360,620,360);//lower
line(540,280,540,360);//left
line(620,280,620,360);//right
line(540,280,620,280);//upper

//left middle
setcolor(LIGHTCYAN);
line(435,255,515,255);//lower
line(435,175,435,255);//left
line(515,175,515,255);//right
line(435,175,515,175);//upper

//right middle
setcolor(LIGHTRED);
line(540,255,620,255);//lower
line(540,175,540,255);//left
line(620,175,620,255);//right
line(540,175,620,175);//upper

//left upper
setcolor(LIGHTMAGENTA);
line(435,150,515,150);//lower
line(435,70,435,150);//left
line(515,70,515,150);//right
line(435,70,515,70);//upper

//right upper
setcolor(YELLOW);
line(540,150,620,150);//lower
line(540,70,540,150);//left
line(620,70,620,150);//right
line(540,70,620,70);//upper
}

if(i==111)
{
for(j=1;j<=105;j++)
{
delay(10);
cleardevice();

//Road Coding
setcolor(WHITE);
line(270,400,275,370);//Road Left down line
line(275,370,220,370);//Left Road down line

//Left road dot line
line(270,360,260,360);
line(250,360,240,360);
line(230,360,225,360);

line(280,350,220,350);//left road upper line
line(280,350,310,225);//Road left upper line

//Dot line on Road
line(320,400,320,370);
line(320,350,320,325);
line(320,310,320,290);
line(320,280,320,265);
line(320,260,320,250);
line(320,245,320,240);
line(320,236,320,232);
line(310,228,310,226);

line(370,400,365,370);//Road right down line
line(365,370,420,370);//Right road down line

//Right road dot line
line(370,360,380,360);
line(390,360,400,360);
line(410,360,415,360);

line(360,350,420,350);//Right Road Upper line
line(360,350,330,225);//Road right upper line

//Left side
//Left down
setcolor(LIGHTBLUE);
line(20,280,100,280);//upper
line(100,280,100,360);//right
line(20,360,100,360);//lower
line(20,280,20,360);//left

//right down
setcolor(LIGHTGREEN);
line(125,280,205,280);//upper
line(205,280,205,360);//right
line(125,360,205,360);//lower
line(125,280,125,360);//left

//left middle
setcolor(LIGHTCYAN);
line(20,255,100,255);//lower
line(20,175,20,255);//left
line(100,175,100,255);//right
line(20,175,100,175);//upper

//right middle
setcolor(LIGHTRED);
line(125,255,205,255);//lower
line(125,175,125,255);//left
line(205,175,205,255);//right
line(125,175,205,175);//upper
setcolor(WHITE);
circle(151,251,4);
circle(179,251,4);
line(155,251,175,251);//m
line(135,251,147,251);//b
line(183,251,195,251);//f
line(135,239,135,251);//bh
line(135,239,141,231);//bhi
line(141,231,173,231);//r
line(173,231,183,239);//fg
line(183,239,195,243);//b
line(195,243,195,251);//fh

//left upper
setcolor(LIGHTMAGENTA);
line(20,150,100,150);//lower
line(20,70,20,150);//left
line(100,70,100,150);//right
line(20,70,100,70);//upper
setcolor(WHITE);
circle(46,146,4);
circle(74,146,4);
line(50,146,70,146);//m
line(30,146,42,146);//b
line(78,146,90,146);//f
line(30,134,30,146);//bh
line(30,134,36,126);//bhi
line(36,126,68,126);//r
line(68,126,78,134);//fg
line(78,134,90,138);//b
line(90,138,90,146);//fh

//right upper
setcolor(YELLOW);
line(125,150,205,150);//lower
line(125,70,125,150);//left
line(205,70,205,150);//right
line(125,70,205,70);//upper
setcolor(WHITE);
circle(151,146,4);
circle(179,146,4);
line(155,146,175,146);//m
line(135,146,147,146);//b
line(183,146,195,146);//f
line(135,134,135,146);//bh
line(135,134,141,126);//bhi
line(141,126,173,126);//r
line(173,126,183,134);//fg
line(183,134,195,138);//b
line(195,138,195,146);//fh

//Right Side
//left down
setcolor(LIGHTBLUE);
line(435+j,360,515+j,360);//lower
line(435+j,280,435+j,360);//left
line(515+j,280,515+j,360);//right
line(435+j,280,515+j,280);//upper
setcolor(WHITE);
circle(461+j,356,4);
circle(489+j,356,4);
line(465+j,356,485+j,356);
line(445+j,356,457+j,356);
line(493+j,356,505+j,356);
line(445+j,344,445+j,356);
line(445+j,344,451+j,336);
line(451+j,336,483+j,336);
line(483+j,336,493+j,344);
line(493+j,344,505+j,348);
line(505+j,348,505+j,356);

//right down
setcolor(LIGHTGREEN);
line(540,360-j,620,360-j);//lower
line(540,280-j,540,360-j);//left
line(620,280-j,620,360-j);//right
line(540,280-j,620,280-j);//upper

//left middle
setcolor(LIGHTCYAN);
line(435,255+j,515,255+j);//lower
line(435,175+j,435,255+j);//left
line(515,175+j,515,255+j);//right
line(435,175+j,515,175+j);//upper

//right middle
setcolor(LIGHTRED);
line(540,255-j,620,255-j);//lower
line(540,175-j,540,255-j);//left
line(620,175-j,620,255-j);//right
line(540,175-j,620,175-j);//upper

//left upper
setcolor(LIGHTMAGENTA);
line(435,150+j,515,150+j);//lower
line(435,70+j,435,150+j);//left
line(515,70+j,515,150+j);//right
line(435,70+j,515,70+j);//upper

//right upper
setcolor(YELLOW);
line(540-j,150,620-j,150);//lower
line(540-j,70,540-j,150);//left
line(620-j,70,620-j,150);//right
line(540-j,70,620-j,70);//upper
}}
setcolor(WHITE);
circle(566,356,4);
circle(594,356,4);
line(570,356,590,356);//m
line(550,356,562,356);//b
line(598,356,610,356);//f
line(550,344,550,356);//bh
line(550,344,556,336);//bhi
line(556,336,588,336);//r
line(588,336,598,344);//fg
line(598,344,610,348);//b
line(610,348,610,356);//fh
}
//=======================================================================
else if(n==2)
{
for(i=0;i<=110;i++)
{
//car coding
setcolor(WHITE);
pieslice(356+i,356,352-i,90-i,4);
circle(356+i,356,4);

pieslice(384+i,356,380-i,90-i,4);
circle(384+i,356,4);

line(360+i,356,380+i,356);//Middle line
line(340+i,356,352+i,356);//Back line
line(388+i,356,400+i,356);//Front line
line(340+i,356,340+i,344);//Back Height
line(340+i,344,346+i,336);//Back Height Inner
line(346+i,336,378+i,336);//Roof
line(378+i,336,388+i,344);//Front Glass
line(388+i,344,400+i,348);//Baunat
line(400+i,348,400+i,356);//Front Height

//Back Mirror
line(349+i,340,345+i,346);//back line
line(349+i,340,360+i,340);//Top line
line(345+i,346,360+i,346);//down line
line(360+i,340,360+i,346);//front line

//Front Mirror
line(364+i,340,364+i,346);//back line
line(364+i,340,375+i,340);//Top line
line(364+i,346,383+i,346);//down line
line(375+i,340,383+i,346);//front line

delay(20);
cleardevice();

//Road Coding
line(270,400,275,370);//Road Left down line
line(275,370,220,370);//Left Road down line

//Left road dot line
line(270,360,260,360);
line(250,360,240,360);
line(230,360,225,360);

line(280,350,220,350);//left road upper line
line(280,350,310,225);//Road left upper line

//Dot line on Road
line(320,400,320,370);
line(320,350,320,325);
line(320,310,320,290);
line(320,280,320,265);
line(320,260,320,250);
line(320,245,320,240);
line(320,236,320,232);
line(310,228,310,226);

line(370,400,365,370);//Road right down line
line(365,370,420,370);//Right road down line

//Right road dot line
line(370,360,380,360);
line(390,360,400,360);
line(410,360,415,360);

line(360,350,420,350);//Right Road Upper line
line(360,350,330,225);//Road right upper line

//Left side
//Left down
setcolor(LIGHTBLUE);
line(20,280,100,280);//upper
line(100,280,100,360);//right
line(20,360,100,360);//lower
line(20,280,20,360);//left

//right down
setcolor(LIGHTGREEN);
line(125,280,205,280);//upper
line(205,280,205,360);//right
line(125,360,205,360);//lower
line(125,280,125,360);//left

//left middle
setcolor(LIGHTCYAN);
line(20,255,100,255);//lower
line(20,175,20,255);//left
line(100,175,100,255);//right
line(20,175,100,175);//upper

//right middle
setcolor(LIGHTRED);
line(125,255,205,255);//lower
line(125,175,125,255);//left
line(205,175,205,255);//right
line(125,175,205,175);//upper
setcolor(WHITE);
circle(151,251,4);
circle(179,251,4);
line(155,251,175,251);//m
line(135,251,147,251);//b
line(183,251,195,251);//f
line(135,239,135,251);//bh
line(135,239,141,231);//bhi
line(141,231,173,231);//r
line(173,231,183,239);//fg
line(183,239,195,243);//b
line(195,243,195,251);//fh

//left upper
setcolor(LIGHTMAGENTA);
line(20,150,100,150);//lower
line(20,70,20,150);//left
line(100,70,100,150);//right
line(20,70,100,70);//upper
setcolor(WHITE);
circle(46,146,4);
circle(74,146,4);
line(50,146,70,146);//m
line(30,146,42,146);//b
line(78,146,90,146);//f
line(30,134,30,146);//bh
line(30,134,36,126);//bhi
line(36,126,68,126);//r
line(68,126,78,134);//fg
line(78,134,90,138);//b
line(90,138,90,146);//fh

//right upper
setcolor(YELLOW);
line(125,150,205,150);//lower
line(125,70,125,150);//left
line(205,70,205,150);//right
line(125,70,205,70);//upper
setcolor(WHITE);
circle(151,146,4);
circle(179,146,4);
line(155,146,175,146);//m
line(135,146,147,146);//b
line(183,146,195,146);//f
line(135,134,135,146);//bh
line(135,134,141,126);//bhi
line(141,126,173,126);//r
line(173,126,183,134);//fg
line(183,134,195,138);//b
line(195,138,195,146);//fh

//Right Side
//left down
setcolor(LIGHTCYAN);
line(435,360,515,360);//lower
line(435,280,435,360);//left
line(515,280,515,360);//right
line(435,280,515,280);//upper

//right down
setcolor(LIGHTBLUE);
line(540,360,620,360);//lower
line(540,280,540,360);//left
line(620,280,620,360);//right
line(540,280,620,280);//upper
setcolor(WHITE);
circle(566,356,4);
circle(594,356,4);
line(570,356,590,356);//m
line(550,356,562,356);//b
line(598,356,610,356);//f
line(550,344,550,356);//bh
line(550,344,556,336);//bhi
line(556,336,588,336);//r
line(588,336,598,344);//fg
line(598,344,610,348);//b
line(610,348,610,356);//fh

//left middle
setcolor(LIGHTMAGENTA);
line(435,255,515,255);//lower
line(435,175,435,255);//left
line(515,175,515,255);//right
line(435,175,515,175);//upper

//right middle
setcolor(LIGHTGREEN);
line(540,255,620,255);//lower
line(540,175,540,255);//left
line(620,175,620,255);//right
line(540,175,620,175);//upper

//left upper
setcolor(YELLOW);
line(435,150,515,150);//lower
line(435,70,435,150);//left
line(515,70,515,150);//right
line(435,70,515,70);//upper

//right upper
setcolor(LIGHTRED);
line(540,150,620,150);//lower
line(540,70,540,150);//left
line(620,70,620,150);//right
line(540,70,620,70);//upper
}

if(i==111)
{
for(j=1;j<=105;j++)
{
delay(10);
cleardevice();

//Road Coding
setcolor(WHITE);
line(270,400,275,370);//Road Left down line
line(275,370,220,370);//Left Road down line

//Left road dot line
line(270,360,260,360);
line(250,360,240,360);
line(230,360,225,360);

line(280,350,220,350);//left road upper line
line(280,350,310,225);//Road left upper line

//Dot line on Road
line(320,400,320,370);
line(320,350,320,325);
line(320,310,320,290);
line(320,280,320,265);
line(320,260,320,250);
line(320,245,320,240);
line(320,236,320,232);
line(310,228,310,226);

line(370,400,365,370);//Road right down line
line(365,370,420,370);//Right road down line

//Right road dot line
line(370,360,380,360);
line(390,360,400,360);
line(410,360,415,360);

line(360,350,420,350);//Right Road Upper line
line(360,350,330,225);//Road right upper line

//Left side
//Left down
setcolor(LIGHTBLUE);
line(20,280,100,280);//upper
line(100,280,100,360);//right
line(20,360,100,360);//lower
line(20,280,20,360);//left

//right down
setcolor(LIGHTGREEN);
line(125,280,205,280);//upper
line(205,280,205,360);//right
line(125,360,205,360);//lower
line(125,280,125,360);//left

//left middle
setcolor(LIGHTCYAN);
line(20,255,100,255);//lower
line(20,175,20,255);//left
line(100,175,100,255);//right
line(20,175,100,175);//upper

//right middle
setcolor(LIGHTRED);
line(125,255,205,255);//lower
line(125,175,125,255);//left
line(205,175,205,255);//right
line(125,175,205,175);//upper
setcolor(WHITE);
circle(151,251,4);
circle(179,251,4);
line(155,251,175,251);//m
line(135,251,147,251);//b
line(183,251,195,251);//f
line(135,239,135,251);//bh
line(135,239,141,231);//bhi
line(141,231,173,231);//r
line(173,231,183,239);//fg
line(183,239,195,243);//b
line(195,243,195,251);//fh

//left upper
setcolor(LIGHTMAGENTA);
line(20,150,100,150);//lower
line(20,70,20,150);//left
line(100,70,100,150);//right
line(20,70,100,70);//upper
setcolor(WHITE);
circle(46,146,4);
circle(74,146,4);
line(50,146,70,146);//m
line(30,146,42,146);//b
line(78,146,90,146);//f
line(30,134,30,146);//bh
line(30,134,36,126);//bhi
line(36,126,68,126);//r
line(68,126,78,134);//fg
line(78,134,90,138);//b
line(90,138,90,146);//fh

//right upper
setcolor(YELLOW);
line(125,150,205,150);//lower
line(125,70,125,150);//left
line(205,70,205,150);//right
line(125,70,205,70);//upper
setcolor(WHITE);
circle(151,146,4);
circle(179,146,4);
line(155,146,175,146);//m
line(135,146,147,146);//b
line(183,146,195,146);//f
line(135,134,135,146);//bh
line(135,134,141,126);//bhi
line(141,126,173,126);//r
line(173,126,183,134);//fg
line(183,134,195,138);//b
line(195,138,195,146);//fh

//Right Side
//left down
setcolor(LIGHTCYAN);
line(435+j,360,515+j,360);//lower
line(435+j,280,435+j,360);//left
line(515+j,280,515+j,360);//right
line(435+j,280,515+j,280);//upper
setcolor(WHITE);
circle(461+j,356,4);
circle(489+j,356,4);
line(465+j,356,485+j,356);
line(445+j,356,457+j,356);
line(493+j,356,505+j,356);
line(445+j,344,445+j,356);
line(445+j,344,451+j,336);
line(451+j,336,483+j,336);
line(483+j,336,493+j,344);
line(493+j,344,505+j,348);
line(505+j,348,505+j,356);

//right down
setcolor(LIGHTBLUE);
line(540,360-j,620,360-j);//lower
line(540,280-j,540,360-j);//left
line(620,280-j,620,360-j);//right
line(540,280-j,620,280-j);//upper
setcolor(WHITE);
circle(566,356-j,4);
circle(594,356-j,4);
line(570,356-j,590,356-j);//m
line(550,356-j,562,356-j);//b
line(598,356-j,610,356-j);//f
line(550,344-j,550,356-j);//bh
line(550,344-j,556,336-j);//bhi
line(556,336-j,588,336-j);//r
line(588,336-j,598,344-j);//fg
line(598,344-j,610,348-j);//b
line(610,348-j,610,356-j);//fh

//left middle
setcolor(LIGHTMAGENTA);
line(435,255+j,515,255+j);//lower
line(435,175+j,435,255+j);//left
line(515,175+j,515,255+j);//right
line(435,175+j,515,175+j);//upper

//right middle
setcolor(LIGHTGREEN);
line(540,255-j,620,255-j);//lower
line(540,175-j,540,255-j);//left
line(620,175-j,620,255-j);//right
line(540,175-j,620,175-j);//upper

//left upper
setcolor(YELLOW);
line(435,150+j,515,150+j);//lower
line(435,70+j,435,150+j);//left
line(515,70+j,515,150+j);//right
line(435,70+j,515,70+j);//upper

//right upper
setcolor(LIGHTRED);
line(540-j,150,620-j,150);//lower
line(540-j,70,540-j,150);//left
line(620-j,70,620-j,150);//right
line(540-j,70,620-j,70);//upper
}}
setcolor(WHITE);
circle(566,356,4);
circle(594,356,4);
line(570,356,590,356);//m
line(550,356,562,356);//b
line(598,356,610,356);//f
line(550,344,550,356);//bh
line(550,344,556,336);//bhi
line(556,336,588,336);//r
line(588,336,598,344);//fg
line(598,344,610,348);//b
line(610,348,610,356);//fh

circle(566,251,4);
circle(594,251,4);
line(570,251,590,251);//m
line(562,251,550,251);//b
line(598,251,610,251);//f
line(550,251,550,239);//bh
line(550,239,556,231);//bhi
line(556,231,588,231);//r
line(588,231,598,239);//fg
line(598,239,610,243);//b
line(610,243,610,251);//fh
}
//=========================================================================
else if(n==3)
{
for(i=0;i<=110;i++)
{
//car coding
pieslice(356+i,356,352-i,90-i,4);
circle(356+i,356,4);

pieslice(384+i,356,380-i,90-i,4);
circle(384+i,356,4);

line(360+i,356,380+i,356);//Middle line
line(340+i,356,352+i,356);//Back line
line(388+i,356,400+i,356);//Front line
line(340+i,356,340+i,344);//Back Height
line(340+i,344,346+i,336);//Back Height Inner
line(346+i,336,378+i,336);//Roof
line(378+i,336,388+i,344);//Front Glass
line(388+i,344,400+i,348);//Baunat
line(400+i,348,400+i,356);//Front Height

//Back Mirror
line(349+i,340,345+i,346);//back line
line(349+i,340,360+i,340);//Top line
line(345+i,346,360+i,346);//down line
line(360+i,340,360+i,346);//front line

//Front Mirror
line(364+i,340,364+i,346);//back line
line(364+i,340,375+i,340);//Top line
line(364+i,346,383+i,346);//down line
line(375+i,340,383+i,346);//front line

delay(20);
cleardevice();

//Road Coding
line(270,400,275,370);//Road Left down line
line(275,370,220,370);//Left Road down line

//Left road dot line
line(270,360,260,360);
line(250,360,240,360);
line(230,360,225,360);

line(280,350,220,350);//left road upper line
line(280,350,310,225);//Road left upper line

//Dot line on Road
line(320,400,320,370);
line(320,350,320,325);
line(320,310,320,290);
line(320,280,320,265);
line(320,260,320,250);
line(320,245,320,240);
line(320,236,320,232);
line(310,228,310,226);

line(370,400,365,370);//Road right down line
line(365,370,420,370);//Right road down line

//Right road dot line
line(370,360,380,360);
line(390,360,400,360);
line(410,360,415,360);

line(360,350,420,350);//Right Road Upper line
line(360,350,330,225);//Road right upper line

//Left side
//Left down
setcolor(LIGHTBLUE);
line(20,280,100,280);//upper
line(100,280,100,360);//right
line(20,360,100,360);//lower
line(20,280,20,360);//left

//right down
setcolor(LIGHTGREEN);
line(125,280,205,280);//upper
line(205,280,205,360);//right
line(125,360,205,360);//lower
line(125,280,125,360);//left

//left middle
setcolor(LIGHTCYAN);
line(20,255,100,255);//lower
line(20,175,20,255);//left
line(100,175,100,255);//right
line(20,175,100,175);//upper

//right middle
setcolor(LIGHTRED);
line(125,255,205,255);//lower
line(125,175,125,255);//left
line(205,175,205,255);//right
line(125,175,205,175);//upper
setcolor(WHITE);
circle(151,251,4);
circle(179,251,4);
line(155,251,175,251);//m
line(135,251,147,251);//b
line(183,251,195,251);//f
line(135,239,135,251);//bh
line(135,239,141,231);//bhi
line(141,231,173,231);//r
line(173,231,183,239);//fg
line(183,239,195,243);//b
line(195,243,195,251);//fh

//left upper
setcolor(LIGHTMAGENTA);
line(20,150,100,150);//lower
line(20,70,20,150);//left
line(100,70,100,150);//right
line(20,70,100,70);//upper
setcolor(WHITE);
circle(46,146,4);
circle(74,146,4);
line(50,146,70,146);//m
line(30,146,42,146);//b
line(78,146,90,146);//f
line(30,134,30,146);//bh
line(30,134,36,126);//bhi
line(36,126,68,126);//r
line(68,126,78,134);//fg
line(78,134,90,138);//b
line(90,138,90,146);//fh

//right upper
setcolor(YELLOW);
line(125,150,205,150);//lower
line(125,70,125,150);//left
line(205,70,205,150);//right
line(125,70,205,70);//upper
setcolor(WHITE);
circle(151,146,4);
circle(179,146,4);
line(155,146,175,146);//m
line(135,146,147,146);//b
line(183,146,195,146);//f
line(135,134,135,146);//bh
line(135,134,141,126);//bhi
line(141,126,173,126);//r
line(173,126,183,134);//fg
line(183,134,195,138);//b
line(195,138,195,146);//fh

//Right Side
//left down
setcolor(LIGHTMAGENTA);
line(435,360,515,360);//lower
line(435,280,435,360);//left
line(515,280,515,360);//right
line(435,280,515,280);//upper

//right down
setcolor(LIGHTCYAN);
line(540,360,620,360);//lower
line(540,280,540,360);//left
line(620,280,620,360);//right
line(540,280,620,280);//upper
setcolor(WHITE);
circle(566,356,4);
circle(594,356,4);
line(570,356,590,356);//m
line(550,356,562,356);//b
line(598,356,610,356);//f
line(550,344,550,356);//bh
line(550,344,556,336);//bhi
line(556,336,588,336);//r
line(588,336,598,344);//fg
line(598,344,610,348);//b
line(610,348,610,356);//fh

//left middle
setcolor(YELLOW);
line(435,255,515,255);//lower
line(435,175,435,255);//left
line(515,175,515,255);//right
line(435,175,515,175);//upper

//right middle
setcolor(LIGHTBLUE);
line(540,255,620,255);//lower
line(540,175,540,255);//left
line(620,175,620,255);//right
line(540,175,620,175);//upper
setcolor(WHITE);
circle(566,251,4);
circle(594,251,4);
line(570,251,590,251);//m
line(562,251,550,251);//b
line(598,251,610,251);//f
line(550,251,550,239);//bh
line(550,239,556,231);//bhi
line(556,231,588,231);//r
line(588,231,598,239);//fg
line(598,239,610,243);//b
line(610,243,610,251);//fh

//left upper
setcolor(LIGHTRED);
line(435,150,515,150);//lower
line(435,70,435,150);//left
line(515,70,515,150);//right
line(435,70,515,70);//upper

//right upper
setcolor(LIGHTGREEN);
line(540,150,620,150);//lower
line(540,70,540,150);//left
line(620,70,620,150);//right
line(540,70,620,70);//upper
}

if(i==111)
{
for(j=1;j<=105;j++)
{
delay(10);
cleardevice();

//Road Coding
setcolor(WHITE);
line(270,400,275,370);//Road Left down line
line(275,370,220,370);//Left Road down line

//Left road dot line
line(270,360,260,360);
line(250,360,240,360);
line(230,360,225,360);

line(280,350,220,350);//left road upper line
line(280,350,310,225);//Road left upper line

//Dot line on Road
line(320,400,320,370);
line(320,350,320,325);
line(320,310,320,290);
line(320,280,320,265);
line(320,260,320,250);
line(320,245,320,240);
line(320,236,320,232);
line(310,228,310,226);

line(370,400,365,370);//Road right down line
line(365,370,420,370);//Right road down line

//Right road dot line
line(370,360,380,360);
line(390,360,400,360);
line(410,360,415,360);

line(360,350,420,350);//Right Road Upper line
line(360,350,330,225);//Road right upper line

//Left side
//Left down
setcolor(LIGHTBLUE);
line(20,280,100,280);//upper
line(100,280,100,360);//right
line(20,360,100,360);//lower
line(20,280,20,360);//left

//right down
setcolor(LIGHTGREEN);
line(125,280,205,280);//upper
line(205,280,205,360);//right
line(125,360,205,360);//lower
line(125,280,125,360);//left

//left middle
setcolor(LIGHTCYAN);
line(20,255,100,255);//lower
line(20,175,20,255);//left
line(100,175,100,255);//right
line(20,175,100,175);//upper

//right middle
setcolor(LIGHTRED);
line(125,255,205,255);//lower
line(125,175,125,255);//left
line(205,175,205,255);//right
line(125,175,205,175);//upper
setcolor(WHITE);
circle(151,251,4);
circle(179,251,4);
line(155,251,175,251);//m
line(135,251,147,251);//b
line(183,251,195,251);//f
line(135,239,135,251);//bh
line(135,239,141,231);//bhi
line(141,231,173,231);//r
line(173,231,183,239);//fg
line(183,239,195,243);//b
line(195,243,195,251);//fh

//left upper
setcolor(LIGHTMAGENTA);
line(20,150,100,150);//lower
line(20,70,20,150);//left
line(100,70,100,150);//right
line(20,70,100,70);//upper
setcolor(WHITE);
circle(46,146,4);
circle(74,146,4);
line(50,146,70,146);//m
line(30,146,42,146);//b
line(78,146,90,146);//f
line(30,134,30,146);//bh
line(30,134,36,126);//bhi
line(36,126,68,126);//r
line(68,126,78,134);//fg
line(78,134,90,138);//b
line(90,138,90,146);//fh

//right upper
setcolor(YELLOW);
line(125,150,205,150);//lower
line(125,70,125,150);//left
line(205,70,205,150);//right
line(125,70,205,70);//upper
setcolor(WHITE);
circle(151,146,4);
circle(179,146,4);
line(155,146,175,146);//m
line(135,146,147,146);//b
line(183,146,195,146);//f
line(135,134,135,146);//bh
line(135,134,141,126);//bhi
line(141,126,173,126);//r
line(173,126,183,134);//fg
line(183,134,195,138);//b
line(195,138,195,146);//fh

//Right Side
//left down
setcolor(LIGHTMAGENTA);
line(435+j,360,515+j,360);//lower
line(435+j,280,435+j,360);//left
line(515+j,280,515+j,360);//right
line(435+j,280,515+j,280);//upper
setcolor(WHITE);
circle(461+j,356,4);
circle(489+j,356,4);
line(465+j,356,485+j,356);
line(445+j,356,457+j,356);
line(493+j,356,505+j,356);
line(445+j,344,445+j,356);
line(445+j,344,451+j,336);
line(451+j,336,483+j,336);
line(483+j,336,493+j,344);
line(493+j,344,505+j,348);
line(505+j,348,505+j,356);

//right down
setcolor(LIGHTCYAN);
line(540,360-j,620,360-j);//lower
line(540,280-j,540,360-j);//left
line(620,280-j,620,360-j);//right
line(540,280-j,620,280-j);//upper
setcolor(WHITE);
circle(566,356-j,4);
circle(594,356-j,4);
line(570,356-j,590,356-j);//m
line(550,356-j,562,356-j);//b
line(598,356-j,610,356-j);//f
line(550,344-j,550,356-j);//bh
line(550,344-j,556,336-j);//bhi
line(556,336-j,588,336-j);//r
line(588,336-j,598,344-j);//fg
line(598,344-j,610,348-j);//b
line(610,348-j,610,356-j);//fh

//left middle
setcolor(YELLOW);
line(435,255+j,515,255+j);//lower
line(435,175+j,435,255+j);//left
line(515,175+j,515,255+j);//right
line(435,175+j,515,175+j);//upper

//right middle
setcolor(LIGHTBLUE);
line(540,255-j,620,255-j);//lower
line(540,175-j,540,255-j);//left
line(620,175-j,620,255-j);//right
line(540,175-j,620,175-j);//upper
setcolor(WHITE);
circle(566,251-j,4);
circle(594,251-j,4);
line(570,251-j,590,251-j);//m
line(562,251-j,550,251-j);//b
line(598,251-j,610,251-j);//f
line(550,251-j,550,239-j);//bh
line(550,239-j,556,231-j);//bhi
line(556,231-j,588,231-j);//r
line(588,231-j,598,239-j);//fg
line(598,239-j,610,243-j);//b
line(610,243-j,610,251-j);//fh

//left upper
setcolor(LIGHTRED);
line(435,150+j,515,150+j);//lower
line(435,70+j,435,150+j);//left
line(515,70+j,515,150+j);//right
line(435,70+j,515,70+j);//upper

//right upper
setcolor(LIGHTGREEN);
line(540-j,150,620-j,150);//lower
line(540-j,70,540-j,150);//left
line(620-j,70,620-j,150);//right
line(540-j,70,620-j,70);//upper
}}
setcolor(WHITE);
circle(566,356,4);
circle(594,356,4);
line(570,356,590,356);//m
line(550,356,562,356);//b
line(598,356,610,356);//f
line(550,344,550,356);//bh
line(550,344,556,336);//bhi
line(556,336,588,336);//r
line(588,336,598,344);//fg
line(598,344,610,348);//b
line(610,348,610,356);//fh

circle(566,251,4);
circle(594,251,4);
line(570,251,590,251);//m
line(562,251,550,251);//b
line(598,251,610,251);//f
line(550,251,550,239);//bh
line(550,239,556,231);//bhi
line(556,231,588,231);//r
line(588,231,598,239);//fg
line(598,239,610,243);//b
line(610,243,610,251);//fh

circle(566,146,4);
circle(594,146,4);
line(570,146,590,146);//m
line(562,146,550,146);//b
line(598,146,610,146);//f
line(550,146,550,134);//bh
line(550,134,556,126);//bhi
line(556,126,588,126);//r
line(588,126,598,134);//fg
line(598,134,610,138);//b
line(610,138,610,146);//fh
}
//=========================================================================
else if(n==4)
{
for(i=0;i<=110;i++)
{
//car coding
pieslice(356+i,356,352-i,90-i,4);
circle(356+i,356,4);

pieslice(384+i,356,380-i,90-i,4);
circle(384+i,356,4);

line(360+i,356,380+i,356);//Middle line
line(340+i,356,352+i,356);//Back line
line(388+i,356,400+i,356);//Front line
line(340+i,356,340+i,344);//Back Height
line(340+i,344,346+i,336);//Back Height Inner
line(346+i,336,378+i,336);//Roof
line(378+i,336,388+i,344);//Front Glass
line(388+i,344,400+i,348);//Baunat
line(400+i,348,400+i,356);//Front Height

//Back Mirror
line(349+i,340,345+i,346);//back line
line(349+i,340,360+i,340);//Top line
line(345+i,346,360+i,346);//down line
line(360+i,340,360+i,346);//front line

//Front Mirror
line(364+i,340,364+i,346);//back line
line(364+i,340,375+i,340);//Top line
line(364+i,346,383+i,346);//down line
line(375+i,340,383+i,346);//front line

delay(20);
cleardevice();

//Road Coding
line(270,400,275,370);//Road Left down line
line(275,370,220,370);//Left Road down line

//Left road dot line
line(270,360,260,360);
line(250,360,240,360);
line(230,360,225,360);

line(280,350,220,350);//left road upper line
line(280,350,310,225);//Road left upper line

//Dot line on Road
line(320,400,320,370);
line(320,350,320,325);
line(320,310,320,290);
line(320,280,320,265);
line(320,260,320,250);
line(320,245,320,240);
line(320,236,320,232);
line(310,228,310,226);

line(370,400,365,370);//Road right down line
line(365,370,420,370);//Right road down line

//Right road dot line
line(370,360,380,360);
line(390,360,400,360);
line(410,360,415,360);

line(360,350,420,350);//Right Road Upper line
line(360,350,330,225);//Road right upper line

//Left side
//Left down
setcolor(LIGHTBLUE);
line(20,280,100,280);//upper
line(100,280,100,360);//right
line(20,360,100,360);//lower
line(20,280,20,360);//left

//right down
setcolor(LIGHTGREEN);
line(125,280,205,280);//upper
line(205,280,205,360);//right
line(125,360,205,360);//lower
line(125,280,125,360);//left

//left middle
setcolor(LIGHTCYAN);
line(20,255,100,255);//lower
line(20,175,20,255);//left
line(100,175,100,255);//right
line(20,175,100,175);//upper

//right middle
setcolor(LIGHTRED);
line(125,255,205,255);//lower
line(125,175,125,255);//left
line(205,175,205,255);//right
line(125,175,205,175);//upper
setcolor(WHITE);
circle(151,251,4);
circle(179,251,4);
line(155,251,175,251);//m
line(135,251,147,251);//b
line(183,251,195,251);//f
line(135,239,135,251);//bh
line(135,239,141,231);//bhi
line(141,231,173,231);//r
line(173,231,183,239);//fg
line(183,239,195,243);//b
line(195,243,195,251);//fh

//left upper
setcolor(LIGHTMAGENTA);
line(20,150,100,150);//lower
line(20,70,20,150);//left
line(100,70,100,150);//right
line(20,70,100,70);//upper
setcolor(WHITE);
circle(46,146,4);
circle(74,146,4);
line(50,146,70,146);//m
line(30,146,42,146);//b
line(78,146,90,146);//f
line(30,134,30,146);//bh
line(30,134,36,126);//bhi
line(36,126,68,126);//r
line(68,126,78,134);//fg
line(78,134,90,138);//b
line(90,138,90,146);//fh

//right upper
setcolor(YELLOW);
line(125,150,205,150);//lower
line(125,70,125,150);//left
line(205,70,205,150);//right
line(125,70,205,70);//upper
setcolor(WHITE);
circle(151,146,4);
circle(179,146,4);
line(155,146,175,146);//m
line(135,146,147,146);//b
line(183,146,195,146);//f
line(135,134,135,146);//bh
line(135,134,141,126);//bhi
line(141,126,173,126);//r
line(173,126,183,134);//fg
line(183,134,195,138);//b
line(195,138,195,146);//fh


//Right Side
//left down
setcolor(LIGHTMAGENTA);
line(435,360,515,360);//lower
line(435,280,435,360);//left
line(515,280,515,360);//right
line(435,280,515,280);//upper

//right down
setcolor(LIGHTCYAN);
line(540,360,620,360);//lower
line(540,280,540,360);//left
line(620,280,620,360);//right
line(540,280,620,280);//upper
setcolor(WHITE);
circle(566,356,4);
circle(594,356,4);
line(570,356,590,356);//m
line(550,356,562,356);//b
line(598,356,610,356);//f
line(550,344,550,356);//bh
line(550,344,556,336);//bhi
line(556,336,588,336);//r
line(588,336,598,344);//fg
line(598,344,610,348);//b
line(610,348,610,356);//fh

//left middle
setcolor(YELLOW);
line(435,255,515,255);//lower
line(435,175,435,255);//left
line(515,175,515,255);//right
line(435,175,515,175);//upper

//right middle
setcolor(LIGHTBLUE);
line(540,255,620,255);//lower
line(540,175,540,255);//left
line(620,175,620,255);//right
line(540,175,620,175);//upper
setcolor(WHITE);
circle(566,251,4);
circle(594,251,4);
line(570,251,590,251);//m
line(562,251,550,251);//b
line(598,251,610,251);//f
line(550,251,550,239);//bh
line(550,239,556,231);//bhi
line(556,231,588,231);//r
line(588,231,598,239);//fg
line(598,239,610,243);//b
line(610,243,610,251);//fh

//left upper
setcolor(LIGHTRED);
line(435,150,515,150);//lower
line(435,70,435,150);//left
line(515,70,515,150);//right
line(435,70,515,70);//upper

//right upper
setcolor(LIGHTGREEN);
line(540,150,620,150);//lower
line(540,70,540,150);//left
line(620,70,620,150);//right
line(540,70,620,70);//upper
setcolor(WHITE);
circle(566,146,4);
circle(594,146,4);
line(570,146,590,146);//m
line(562,146,550,146);//b
line(598,146,610,146);//f
line(550,146,550,134);//bh
line(550,134,556,126);//bhi
line(556,126,588,126);//r
line(588,126,598,134);//fg
line(598,134,610,138);//b
line(610,138,610,146);//fh
}

if(i==111)
{
for(j=1;j<=105;j++)
{
delay(10);
cleardevice();

//Road Coding
line(270,400,275,370);//Road Left down line
line(275,370,220,370);//Left Road down line

//Left road dot line
line(270,360,260,360);
line(250,360,240,360);
line(230,360,225,360);

line(280,350,220,350);//left road upper line
line(280,350,310,225);//Road left upper line

//Dot line on Road
line(320,400,320,370);
line(320,350,320,325);
line(320,310,320,290);
line(320,280,320,265);
line(320,260,320,250);
line(320,245,320,240);
line(320,236,320,232);
line(310,228,310,226);

line(370,400,365,370);//Road right down line
line(365,370,420,370);//Right road down line

//Right road dot line
line(370,360,380,360);
line(390,360,400,360);
line(410,360,415,360);

line(360,350,420,350);//Right Road Upper line
line(360,350,330,225);//Road right upper line

//Left side
//Left down
setcolor(LIGHTBLUE);
line(20,280,100,280);//upper
line(100,280,100,360);//right
line(20,360,100,360);//lower
line(20,280,20,360);//left

//right down
setcolor(LIGHTGREEN);
line(125,280,205,280);//upper
line(205,280,205,360);//right
line(125,360,205,360);//lower
line(125,280,125,360);//left

//left middle
setcolor(LIGHTCYAN);
line(20,255,100,255);//lower
line(20,175,20,255);//left
line(100,175,100,255);//right
line(20,175,100,175);//upper

//right middle
setcolor(LIGHTRED);
line(125,255,205,255);//lower
line(125,175,125,255);//left
line(205,175,205,255);//right
line(125,175,205,175);//upper
setcolor(WHITE);
circle(151,251,4);
circle(179,251,4);
line(155,251,175,251);//m
line(135,251,147,251);//b
line(183,251,195,251);//f
line(135,239,135,251);//bh
line(135,239,141,231);//bhi
line(141,231,173,231);//r
line(173,231,183,239);//fg
line(183,239,195,243);//b
line(195,243,195,251);//fh

//left upper
setcolor(LIGHTMAGENTA);
line(20,150,100,150);//lower
line(20,70,20,150);//left
line(100,70,100,150);//right
line(20,70,100,70);//upper
setcolor(WHITE);
circle(46,146,4);
circle(74,146,4);
line(50,146,70,146);//m
line(30,146,42,146);//b
line(78,146,90,146);//f
line(30,134,30,146);//bh
line(30,134,36,126);//bhi
line(36,126,68,126);//r
line(68,126,78,134);//fg
line(78,134,90,138);//b
line(90,138,90,146);//fh

//right upper
setcolor(YELLOW);
line(125,150,205,150);//lower
line(125,70,125,150);//left
line(205,70,205,150);//right
line(125,70,205,70);//upper
setcolor(WHITE);
circle(151,146,4);
circle(179,146,4);
line(155,146,175,146);//m
line(135,146,147,146);//b
line(183,146,195,146);//f
line(135,134,135,146);//bh
line(135,134,141,126);//bhi
line(141,126,173,126);//r
line(173,126,183,134);//fg
line(183,134,195,138);//b
line(195,138,195,146);//fh

//Right Side
//left down
setcolor(LIGHTMAGENTA);
line(435+j,360,515+j,360);//lower
line(435+j,280,435+j,360);//left
line(515+j,280,515+j,360);//right
line(435+j,280,515+j,280);//upper
setcolor(WHITE);
circle(461+j,356,4);
circle(489+j,356,4);
line(465+j,356,485+j,356);
line(445+j,356,457+j,356);
line(493+j,356,505+j,356);
line(445+j,344,445+j,356);
line(445+j,344,451+j,336);
line(451+j,336,483+j,336);
line(483+j,336,493+j,344);
line(493+j,344,505+j,348);
line(505+j,348,505+j,356);

//right down
setcolor(LIGHTCYAN);
line(540,360-j,620,360-j);//lower
line(540,280-j,540,360-j);//left
line(620,280-j,620,360-j);//right
line(540,280-j,620,280-j);//upper
setcolor(WHITE);
circle(566,356-j,4);
circle(594,356-j,4);
line(570,356-j,590,356-j);//m
line(550,356-j,562,356-j);//b
line(598,356-j,610,356-j);//f
line(550,344-j,550,356-j);//bh
line(550,344-j,556,336-j);//bhi
line(556,336-j,588,336-j);//r
line(588,336-j,598,344-j);//fg
line(598,344-j,610,348-j);//b
line(610,348-j,610,356-j);//fh

//left middle
setcolor(YELLOW);
line(435,255+j,515,255+j);//lower
line(435,175+j,435,255+j);//left
line(515,175+j,515,255+j);//right
line(435,175+j,515,175+j);//upper

//right middle
setcolor(LIGHTBLUE);
line(540,255-j,620,255-j);//lower
line(540,175-j,540,255-j);//left
line(620,175-j,620,255-j);//right
line(540,175-j,620,175-j);//upper
setcolor(WHITE);
circle(566,251-j,4);
circle(594,251-j,4);
line(570,251-j,590,251-j);//m
line(562,251-j,550,251-j);//b
line(598,251-j,610,251-j);//f
line(550,251-j,550,239-j);//bh
line(550,239-j,556,231-j);//bhi
line(556,231-j,588,231-j);//r
line(588,231-j,598,239-j);//fg
line(598,239-j,610,243-j);//b
line(610,243-j,610,251-j);//fh

//left upper
setcolor(LIGHTRED);
line(435,150+j,515,150+j);//lower
line(435,70+j,435,150+j);//left
line(515,70+j,515,150+j);//right
line(435,70+j,515,70+j);//upper

//right upper
setcolor(LIGHTGREEN);
line(540-j,150,620-j,150);//lower
line(540-j,70,540-j,150);//left
line(620-j,70,620-j,150);//right
line(540-j,70,620-j,70);//upper
setcolor(WHITE);
circle(566-j,146,4);
circle(594-j,146,4);
line(570-j,146,590-j,146);//m
line(562-j,146,550-j,146);//b
line(598-j,146,610-j,146);//f
line(550-j,146,550-j,134);//bh
line(550-j,134,556-j,126);//bhi
line(556-j,126,588-j,126);//r
line(588-j,126,598-j,134);//fg
line(598-j,134,610-j,138);//b
line(610-j,138,610-j,146);//fh
}}
circle(566,356,4);
circle(594,356,4);
line(570,356,590,356);//m
line(550,356,562,356);//b
line(598,356,610,356);//f
line(550,344,550,356);//bh
line(550,344,556,336);//bhi
line(556,336,588,336);//r
line(588,336,598,344);//fg
line(598,344,610,348);//b
line(610,348,610,356);//fh

circle(566,251,4);
circle(594,251,4);
line(570,251,590,251);//m
line(562,251,550,251);//b
line(598,251,610,251);//f
line(550,251,550,239);//bh
line(550,239,556,231);//bhi
line(556,231,588,231);//r
line(588,231,598,239);//fg
line(598,239,610,243);//b
line(610,243,610,251);//fh

circle(566,146,4);
circle(594,146,4);
line(570,146,590,146);//m
line(562,146,550,146);//b
line(598,146,610,146);//f
line(550,146,550,134);//bh
line(550,134,556,126);//bhi
line(556,126,588,126);//r
line(588,126,598,134);//fg
line(598,134,610,138);//b
line(610,138,610,146);//fh

circle(461,146,4);
circle(489,146,4);
line(465,146,485,146);//m
line(445,146,457,146);//b
line(493,146,505,146);//f
line(445,146,445,134);//bh
line(445,134,451,126);//bhi
line(451,126,483,126);//r
line(483,126,493,134);//fg
line(493,134,505,138);//b
line(505,146,505,138);//fh
}
//==========================================================================
else if(n==5)
{
for(i=0;i<=110;i++)
{
//car coding
pieslice(356+i,356,352-i,90-i,4);
circle(356+i,356,4);

pieslice(384+i,356,380-i,90-i,4);
circle(384+i,356,4);

line(360+i,356,380+i,356);//Middle line
line(340+i,356,352+i,356);//Back line
line(388+i,356,400+i,356);//Front line
line(340+i,356,340+i,344);//Back Height
line(340+i,344,346+i,336);//Back Height Inner
line(346+i,336,378+i,336);//Roof
line(378+i,336,388+i,344);//Front Glass
line(388+i,344,400+i,348);//Baunat
line(400+i,348,400+i,356);//Front Height

//Back Mirror
line(349+i,340,345+i,346);//back line
line(349+i,340,360+i,340);//Top line
line(345+i,346,360+i,346);//down line
line(360+i,340,360+i,346);//front line

//Front Mirror
line(364+i,340,364+i,346);//back line
line(364+i,340,375+i,340);//Top line
line(364+i,346,383+i,346);//down line
line(375+i,340,383+i,346);//front line

delay(20);
cleardevice();

//Road Coding
line(270,400,275,370);//Road Left down line
line(275,370,220,370);//Left Road down line

//Left road dot line
line(270,360,260,360);
line(250,360,240,360);
line(230,360,225,360);

line(280,350,220,350);//left road upper line
line(280,350,310,225);//Road left upper line

//Dot line on Road
line(320,400,320,370);
line(320,350,320,325);
line(320,310,320,290);
line(320,280,320,265);
line(320,260,320,250);
line(320,245,320,240);
line(320,236,320,232);
line(310,228,310,226);

line(370,400,365,370);//Road right down line
line(365,370,420,370);//Right road down line

//Right road dot line
line(370,360,380,360);
line(390,360,400,360);
line(410,360,415,360);

line(360,350,420,350);//Right Road Upper line
line(360,350,330,225);//Road right upper line

//Left side
//Left down
setcolor(LIGHTBLUE);
line(20,280,100,280);//upper
line(100,280,100,360);//right
line(20,360,100,360);//lower
line(20,280,20,360);//left

//right down
setcolor(LIGHTGREEN);
line(125,280,205,280);//upper
line(205,280,205,360);//right
line(125,360,205,360);//lower
line(125,280,125,360);//left

//left middle
setcolor(LIGHTCYAN);
line(20,255,100,255);//lower
line(20,175,20,255);//left
line(100,175,100,255);//right
line(20,175,100,175);//upper

//right middle
setcolor(LIGHTBLUE);
line(125,255,205,255);//lower
line(125,175,125,255);//left
line(205,175,205,255);//right
line(125,175,205,175);//upper
setcolor(WHITE);
circle(151,251,4);
circle(179,251,4);
line(155,251,175,251);//m
line(135,251,147,251);//b
line(183,251,195,251);//f
line(135,239,135,251);//bh
line(135,239,141,231);//bhi
line(141,231,173,231);//r
line(173,231,183,239);//fg
line(183,239,195,243);//b
line(195,243,195,251);//fh

//left upper
setcolor(LIGHTMAGENTA);
line(20,150,100,150);//lower
line(20,70,20,150);//left
line(100,70,100,150);//right
line(20,70,100,70);//upper
setcolor(WHITE);
circle(46,146,4);
circle(74,146,4);
line(50,146,70,146);//m
line(30,146,42,146);//b
line(78,146,90,146);//f
line(30,134,30,146);//bh
line(30,134,36,126);//bhi
line(36,126,68,126);//r
line(68,126,78,134);//fg
line(78,134,90,138);//b
line(90,138,90,146);//fh

//right upper
setcolor(YELLOW);
line(125,150,205,150);//lower
line(125,70,125,150);//left
line(205,70,205,150);//right
line(125,70,205,70);//upper
setcolor(WHITE);
circle(151,146,4);
circle(179,146,4);
line(155,146,175,146);//m
line(135,146,147,146);//b
line(183,146,195,146);//f
line(135,134,135,146);//bh
line(135,134,141,126);//bhi
line(141,126,173,126);//r
line(173,126,183,134);//fg
line(183,134,195,138);//b
line(195,138,195,146);//fh

//Right Side
//left down
setcolor(YELLOW);
line(435,360,515,360);//lower
line(435,280,435,360);//left
line(515,280,515,360);//right
line(435,280,515,280);//upper

//right down
setcolor(LIGHTMAGENTA);
line(540,360,620,360);//lower
line(540,280,540,360);//left
line(620,280,620,360);//right
line(540,280,620,280);//upper
setcolor(WHITE);
circle(566,356,4);
circle(594,356,4);
line(570,356,590,356);//m
line(550,356,562,356);//b
line(598,356,610,356);//f
line(550,344,550,356);//bh
line(550,344,556,336);//bhi
line(556,336,588,336);//r
line(588,336,598,344);//fg
line(598,344,610,348);//b
line(610,348,610,356);//fh

//left middle
setcolor(LIGHTRED);
line(435,255,515,255);//lower
line(435,175,435,255);//left
line(515,175,515,255);//right
line(435,175,515,175);//upper

//right middle
setcolor(LIGHTCYAN);
line(540,255,620,255);//lower
line(540,175,540,255);//left
line(620,175,620,255);//right
line(540,175,620,175);//upper
setcolor(WHITE);
circle(566,251,4);
circle(594,251,4);
line(570,251,590,251);//m
line(562,251,550,251);//b
line(598,251,610,251);//f
line(550,251,550,239);//bh
line(550,239,556,231);//bhi
line(556,231,588,231);//r
line(588,231,598,239);//fg
line(598,239,610,243);//b
line(610,243,610,251);//fh

//left upper
setcolor(LIGHTGREEN);
line(435,150,515,150);//lower
line(435,70,435,150);//left
line(515,70,515,150);//right
line(435,70,515,70);//upper
setcolor(WHITE);
circle(461,146,4);
circle(489,146,4);
line(465,146,485,146);//m
line(445,146,457,146);//b
line(493,146,505,146);//f
line(445,146,445,134);//bh
line(445,134,451,126);//bhi
line(451,126,483,126);//r
line(483,126,493,134);//fg
line(493,134,505,138);//b
line(505,146,505,138);//fh

//right upper
setcolor(LIGHTBLUE);
line(540,150,620,150);//lower
line(540,70,540,150);//left
line(620,70,620,150);//right
line(540,70,620,70);//upper
setcolor(WHITE);
circle(566,146,4);
circle(594,146,4);
line(570,146,590,146);//m
line(562,146,550,146);//b
line(598,146,610,146);//f
line(550,146,550,134);//bh
line(550,134,556,126);//bhi
line(556,126,588,126);//r
line(588,126,598,134);//fg
line(598,134,610,138);//b
line(610,138,610,146);//fh
}
if(i==111)
{
for(j=1;j<=105;j++)
{
delay(10);
cleardevice();

//Road Coding
line(270,400,275,370);//Road Left down line
line(275,370,220,370);//Left Road down line

//Left road dot line
line(270,360,260,360);
line(250,360,240,360);
line(230,360,225,360);

line(280,350,220,350);//left road upper line
line(280,350,310,225);//Road left upper line

//Dot line on Road
line(320,400,320,370);
line(320,350,320,325);
line(320,310,320,290);
line(320,280,320,265);
line(320,260,320,250);
line(320,245,320,240);
line(320,236,320,232);
line(310,228,310,226);

line(370,400,365,370);//Road right down line
line(365,370,420,370);//Right road down line

//Right road dot line
line(370,360,380,360);
line(390,360,400,360);
line(410,360,415,360);

line(360,350,420,350);//Right Road Upper line
line(360,350,330,225);//Road right upper line

//Left side
//Left down
setcolor(LIGHTBLUE);
line(20,280,100,280);//upper
line(100,280,100,360);//right
line(20,360,100,360);//lower
line(20,280,20,360);//left

//right down
setcolor(LIGHTGREEN);
line(125,280,205,280);//upper
line(205,280,205,360);//right
line(125,360,205,360);//lower
line(125,280,125,360);//left

//left middle
setcolor(LIGHTCYAN);
line(20,255,100,255);//lower
line(20,175,20,255);//left
line(100,175,100,255);//right
line(20,175,100,175);//upper

//right middle
setcolor(LIGHTRED);
line(125,255,205,255);//lower
line(125,175,125,255);//left
line(205,175,205,255);//right
line(125,175,205,175);//upper
setcolor(WHITE);
circle(151,251,4);
circle(179,251,4);
line(155,251,175,251);//m
line(135,251,147,251);//b
line(183,251,195,251);//f
line(135,239,135,251);//bh
line(135,239,141,231);//bhi
line(141,231,173,231);//r
line(173,231,183,239);//fg
line(183,239,195,243);//b
line(195,243,195,251);//fh

//left upper
setcolor(LIGHTMAGENTA);
line(20,150,100,150);//lower
line(20,70,20,150);//left
line(100,70,100,150);//right
line(20,70,100,70);//upper
setcolor(WHITE);
circle(46,146,4);
circle(74,146,4);
line(50,146,70,146);//m
line(30,146,42,146);//b
line(78,146,90,146);//f
line(30,134,30,146);//bh
line(30,134,36,126);//bhi
line(36,126,68,126);//r
line(68,126,78,134);//fg
line(78,134,90,138);//b
line(90,138,90,146);//fh

//right upper
setcolor(YELLOW);
line(125,150,205,150);//lower
line(125,70,125,150);//left
line(205,70,205,150);//right
line(125,70,205,70);//upper
setcolor(WHITE);
circle(151,146,4);
circle(179,146,4);
line(155,146,175,146);//m
line(135,146,147,146);//b
line(183,146,195,146);//f
line(135,134,135,146);//bh
line(135,134,141,126);//bhi
line(141,126,173,126);//r
line(173,126,183,134);//fg
line(183,134,195,138);//b
line(195,138,195,146);//fh

//Right Side
//left down
setcolor(YELLOW);
line(435+j,360,515+j,360);//lower
line(435+j,280,435+j,360);//left
line(515+j,280,515+j,360);//right
line(435+j,280,515+j,280);//upper
setcolor(WHITE);
circle(461+j,356,4);
circle(489+j,356,4);
line(465+j,356,485+j,356);
line(445+j,356,457+j,356);
line(493+j,356,505+j,356);
line(445+j,344,445+j,356);
line(445+j,344,451+j,336);
line(451+j,336,483+j,336);
line(483+j,336,493+j,344);
line(493+j,344,505+j,348);
line(505+j,348,505+j,356);

//right down
setcolor(LIGHTMAGENTA);
line(540,360-j,620,360-j);//lower
line(540,280-j,540,360-j);//left
line(620,280-j,620,360-j);//right
line(540,280-j,620,280-j);//upper
setcolor(WHITE);
circle(566,356-j,4);
circle(594,356-j,4);
line(570,356-j,590,356-j);//m
line(550,356-j,562,356-j);//b
line(598,356-j,610,356-j);//f
line(550,344-j,550,356-j);//bh
line(550,344-j,556,336-j);//bhi
line(556,336-j,588,336-j);//r
line(588,336-j,598,344-j);//fg
line(598,344-j,610,348-j);//b
line(610,348-j,610,356-j);//fh

//left middle
setcolor(LIGHTRED);
line(435,255+j,515,255+j);//lower
line(435,175+j,435,255+j);//left
line(515,175+j,515,255+j);//right
line(435,175+j,515,175+j);//upper

//right middle
setcolor(LIGHTCYAN);
line(540,255-j,620,255-j);//lower
line(540,175-j,540,255-j);//left
line(620,175-j,620,255-j);//right
line(540,175-j,620,175-j);//upper
setcolor(WHITE);
circle(566,251-j,4);
circle(594,251-j,4);
line(570,251-j,590,251-j);//m
line(562,251-j,550,251-j);//b
line(598,251-j,610,251-j);//f
line(550,251-j,550,239-j);//bh
line(550,239-j,556,231-j);//bhi
line(556,231-j,588,231-j);//r
line(588,231-j,598,239-j);//fg
line(598,239-j,610,243-j);//b
line(610,243-j,610,251-j);//fh

//left upper
setcolor(LIGHTGREEN);
line(435,150+j,515,150+j);//lower
line(435,70+j,435,150+j);//left
line(515,70+j,515,150+j);//right
line(435,70+j,515,70+j);//upper
setcolor(WHITE);
circle(461,146+j,4);
circle(489,146+j,4);
line(465,146+j,485,146+j);//m
line(445,146+j,457,146+j);//b
line(493,146+j,505,146+j);//f
line(445,146+j,445,134+j);//bh
line(445,134+j,451,126+j);//bhi
line(451,126+j,483,126+j);//r
line(483,126+j,493,134+j);//fg
line(493,134+j,505,138+j);//b
line(505,146+j,505,138+j);//fh

//right upper
setcolor(LIGHTBLUE);
line(540-j,150,620-j,150);//lower
line(540-j,70,540-j,150);//left
line(620-j,70,620-j,150);//right
line(540-j,70,620-j,70);//upper
setcolor(WHITE);
circle(566-j,146,4);
circle(594-j,146,4);
line(570-j,146,590-j,146);//m
line(562-j,146,550-j,146);//b
line(598-j,146,610-j,146);//f
line(550-j,146,550-j,134);//bh
line(550-j,134,556-j,126);//bhi
line(556-j,126,588-j,126);//r
line(588-j,126,598-j,134);//fg
line(598-j,134,610-j,138);//b
line(610-j,138,610-j,146);//fh
}}
circle(566,356,4);
circle(594,356,4);
line(570,356,590,356);//m
line(550,356,562,356);//b
line(598,356,610,356);//f
line(550,344,550,356);//bh
line(550,344,556,336);//bhi
line(556,336,588,336);//r
line(588,336,598,344);//fg
line(598,344,610,348);//b
line(610,348,610,356);//fh

circle(566,251,4);
circle(594,251,4);
line(570,251,590,251);//m
line(562,251,550,251);//b
line(598,251,610,251);//f
line(550,251,550,239);//bh
line(550,239,556,231);//bhi
line(556,231,588,231);//r
line(588,231,598,239);//fg
line(598,239,610,243);//b
line(610,243,610,251);//fh

circle(566,146,4);
circle(594,146,4);
line(570,146,590,146);//m
line(562,146,550,146);//b
line(598,146,610,146);//f
line(550,146,550,134);//bh
line(550,134,556,126);//bhi
line(556,126,588,126);//r
line(588,126,598,134);//fg
line(598,134,610,138);//b
line(610,138,610,146);//fh

circle(461,146,4);
circle(489,146,4);
line(465,146,485,146);//m
line(445,146,457,146);//b
line(493,146,505,146);//f
line(445,146,445,134);//bh
line(445,134,451,126);//bhi
line(451,126,483,126);//r
line(483,126,493,134);//fg
line(493,134,505,138);//b
line(505,146,505,138);//fh

circle(461,251,4);
circle(489,251,4);
line(465,251,485,251);//m
line(445,251,457,251);//b
line(493,251,505,251);//f
line(445,251,445,239);//bh
line(445,239,451,231);//bhi
line(451,231,483,231);//r
line(483,231,493,239);//fg
line(493,239,505,243);//b
line(505,243,505,251);//fh
}
//==========================================================================
else
{
for(i=0;i<=110;i++)
{
//car coding
pieslice(356+i,356,352-i,90-i,4);
circle(356+i,356,4);

pieslice(384+i,356,380-i,90-i,4);
circle(384+i,356,4);

line(360+i,356,380+i,356);//Middle line
line(340+i,356,352+i,356);//Back line
line(388+i,356,400+i,356);//Front line
line(340+i,356,340+i,344);//Back Height
line(340+i,344,346+i,336);//Back Height Inner
line(346+i,336,378+i,336);//Roof
line(378+i,336,388+i,344);//Front Glass
line(388+i,344,400+i,348);//Baunat
line(400+i,348,400+i,356);//Front Height

//Back Mirror
line(349+i,340,345+i,346);//back line
line(349+i,340,360+i,340);//Top line
line(345+i,346,360+i,346);//down line
line(360+i,340,360+i,346);//front line

//Front Mirror
line(364+i,340,364+i,346);//back line
line(364+i,340,375+i,340);//Top line
line(364+i,346,383+i,346);//down line
line(375+i,340,383+i,346);//front line

delay(20);
cleardevice();

//Road Coding
line(270,400,275,370);//Road Left down line
line(275,370,220,370);//Left Road down line

//Left road dot line
line(270,360,260,360);
line(250,360,240,360);
line(230,360,225,360);

line(280,350,220,350);//left road upper line
line(280,350,310,225);//Road left upper line

//Dot line on Road
line(320,400,320,370);
line(320,350,320,325);
line(320,310,320,290);
line(320,280,320,265);
line(320,260,320,250);
line(320,245,320,240);
line(320,236,320,232);
line(310,228,310,226);

line(370,400,365,370);//Road right down line
line(365,370,420,370);//Right road down line

//Right road dot line
line(370,360,380,360);
line(390,360,400,360);
line(410,360,415,360);

line(360,350,420,350);//Right Road Upper line
line(360,350,330,225);//Road right upper line

//Left side
//Left down
setcolor(LIGHTBLUE);
line(20,280,100,280);//upper
line(100,280,100,360);//right
line(20,360,100,360);//lower
line(20,280,20,360);//left

//right down
setcolor(LIGHTGREEN);
line(125,280,205,280);//upper
line(205,280,205,360);//right
line(125,360,205,360);//lower
line(125,280,125,360);//left

//left middle
setcolor(LIGHTCYAN);
line(20,255,100,255);//lower
line(20,175,20,255);//left
line(100,175,100,255);//right
line(20,175,100,175);//upper

//right middle
setcolor(LIGHTRED);
line(125,255,205,255);//lower
line(125,175,125,255);//left
line(205,175,205,255);//right
line(125,175,205,175);//upper
setcolor(WHITE);
circle(151,251,4);
circle(179,251,4);
line(155,251,175,251);//m
line(135,251,147,251);//b
line(183,251,195,251);//f
line(135,239,135,251);//bh
line(135,239,141,231);//bhi
line(141,231,173,231);//r
line(173,231,183,239);//fg
line(183,239,195,243);//b
line(195,243,195,251);//fh

//left upper
setcolor(LIGHTMAGENTA);
line(20,150,100,150);//lower
line(20,70,20,150);//left
line(100,70,100,150);//right
line(20,70,100,70);//upper
setcolor(WHITE);
circle(46,146,4);
circle(74,146,4);
line(50,146,70,146);//m
line(30,146,42,146);//b
line(78,146,90,146);//f
line(30,134,30,146);//bh
line(30,134,36,126);//bhi
line(36,126,68,126);//r
line(68,126,78,134);//fg
line(78,134,90,138);//b
line(90,138,90,146);//fh

//right upper
setcolor(YELLOW);
line(125,150,205,150);//lower
line(125,70,125,150);//left
line(205,70,205,150);//right
line(125,70,205,70);//upper
setcolor(WHITE);
circle(151,146,4);
circle(179,146,4);
line(155,146,175,146);//m
line(135,146,147,146);//b
line(183,146,195,146);//f
line(135,134,135,146);//bh
line(135,134,141,126);//bhi
line(141,126,173,126);//r
line(173,126,183,134);//fg
line(183,134,195,138);//b
line(195,138,195,146);//fh

//Right Side
//left down
setcolor(LIGHTRED);
line(435,360,515,360);//lower
line(435,280,435,360);//left
line(515,280,515,360);//right
line(435,280,515,280);//upper

//right down
setcolor(YELLOW);
line(540,360,620,360);//lower
line(540,280,540,360);//left
line(620,280,620,360);//right
line(540,280,620,280);//upper
setcolor(WHITE);
circle(566,356,4);
circle(594,356,4);
line(570,356,590,356);//m
line(550,356,562,356);//b
line(598,356,610,356);//f
line(550,344,550,356);//bh
line(550,344,556,336);//bhi
line(556,336,588,336);//r
line(588,336,598,344);//fg
line(598,344,610,348);//b
line(610,348,610,356);//fh

//left middle
setcolor(LIGHTGREEN);
line(435,255,515,255);//lower
line(435,175,435,255);//left
line(515,175,515,255);//right
line(435,175,515,175);//upper
setcolor(WHITE);
circle(461,251,4);
circle(489,251,4);
line(465,251,485,251);//m
line(445,251,457,251);//b
line(493,251,505,251);//f
line(445,251,445,239);//bh
line(445,239,451,231);//bhi
line(451,231,483,231);//r
line(483,231,493,239);//fg
line(493,239,505,243);//b
line(505,243,505,251);//fh

//right middle
setcolor(LIGHTMAGENTA);
line(540,255,620,255);//lower
line(540,175,540,255);//left
line(620,175,620,255);//right
line(540,175,620,175);//upper
setcolor(WHITE);
circle(566,251,4);
circle(594,251,4);
line(570,251,590,251);//m
line(562,251,550,251);//b
line(598,251,610,251);//f
line(550,251,550,239);//bh
line(550,239,556,231);//bhi
line(556,231,588,231);//r
line(588,231,598,239);//fg
line(598,239,610,243);//b
line(610,243,610,251);//fh

//left upper
setcolor(LIGHTBLUE);
line(435,150,515,150);//lower
line(435,70,435,150);//left
line(515,70,515,150);//right
line(435,70,515,70);//upper
setcolor(WHITE);
circle(461,146,4);
circle(489,146,4);
line(465,146,485,146);//m
line(445,146,457,146);//b
line(493,146,505,146);//f
line(445,146,445,134);//bh
line(445,134,451,126);//bhi
line(451,126,483,126);//r
line(483,126,493,134);//fg
line(493,134,505,138);//b
line(505,146,505,138);//fh

//right upper
setcolor(LIGHTCYAN);
line(540,150,620,150);//lower
line(540,70,540,150);//left
line(620,70,620,150);//right
line(540,70,620,70);//upper
setcolor(WHITE);
circle(566,146,4);
circle(594,146,4);
line(570,146,590,146);//m
line(562,146,550,146);//b
line(598,146,610,146);//f
line(550,146,550,134);//bh
line(550,134,556,126);//bhi
line(556,126,588,126);//r
line(588,126,598,134);//fg
line(598,134,610,138);//b
line(610,138,610,146);//fh
}
if(i==111)
{
for(j=1;j<=105;j++)
{
delay(10);
cleardevice();

//Road Coding
line(270,400,275,370);//Road Left down line
line(275,370,220,370);//Left Road down line

//Left road dot line
line(270,360,260,360);
line(250,360,240,360);
line(230,360,225,360);

line(280,350,220,350);//left road upper line
line(280,350,310,225);//Road left upper line

//Dot line on Road
line(320,400,320,370);
line(320,350,320,325);
line(320,310,320,290);
line(320,280,320,265);
line(320,260,320,250);
line(320,245,320,240);
line(320,236,320,232);
line(310,228,310,226);

line(370,400,365,370);//Road right down line
line(365,370,420,370);//Right road down line

//Right road dot line
line(370,360,380,360);
line(390,360,400,360);
line(410,360,415,360);

line(360,350,420,350);//Right Road Upper line
line(360,350,330,225);//Road right upper line

//Left side
//Left down
setcolor(LIGHTBLUE);
line(20,280,100,280);//upper
line(100,280,100,360);//right
line(20,360,100,360);//lower
line(20,280,20,360);//left

//right down
setcolor(LIGHTGREEN);
line(125,280,205,280);//upper
line(205,280,205,360);//right
line(125,360,205,360);//lower
line(125,280,125,360);//left

//left middle
setcolor(LIGHTCYAN);
line(20,255,100,255);//lower
line(20,175,20,255);//left
line(100,175,100,255);//right
line(20,175,100,175);//upper

//right middle
setcolor(LIGHTRED);
line(125,255,205,255);//lower
line(125,175,125,255);//left
line(205,175,205,255);//right
line(125,175,205,175);//upper
setcolor(WHITE);
circle(151,251,4);
circle(179,251,4);
line(155,251,175,251);//m
line(135,251,147,251);//b
line(183,251,195,251);//f
line(135,239,135,251);//bh
line(135,239,141,231);//bhi
line(141,231,173,231);//r
line(173,231,183,239);//fg
line(183,239,195,243);//b
line(195,243,195,251);//fh

//left upper
setcolor(LIGHTMAGENTA);
line(20,150,100,150);//lower
line(20,70,20,150);//left
line(100,70,100,150);//right
line(20,70,100,70);//upper
setcolor(WHITE);
circle(46,146,4);
circle(74,146,4);
line(50,146,70,146);//m
line(30,146,42,146);//b
line(78,146,90,146);//f
line(30,134,30,146);//bh
line(30,134,36,126);//bhi
line(36,126,68,126);//r
line(68,126,78,134);//fg
line(78,134,90,138);//b
line(90,138,90,146);//fh

//right upper
setcolor(YELLOW);
line(125,150,205,150);//lower
line(125,70,125,150);//left
line(205,70,205,150);//right
line(125,70,205,70);//upper
setcolor(WHITE);
circle(151,146,4);
circle(179,146,4);
line(155,146,175,146);//m
line(135,146,147,146);//b
line(183,146,195,146);//f
line(135,134,135,146);//bh
line(135,134,141,126);//bhi
line(141,126,173,126);//r
line(173,126,183,134);//fg
line(183,134,195,138);//b
line(195,138,195,146);//fh

//Right Side
//left down
setcolor(LIGHTRED);
line(435+j,360,515+j,360);//lower
line(435+j,280,435+j,360);//left
line(515+j,280,515+j,360);//right
line(435+j,280,515+j,280);//upper
setcolor(WHITE);
circle(461+j,356,4);
circle(489+j,356,4);
line(465+j,356,485+j,356);
line(445+j,356,457+j,356);
line(493+j,356,505+j,356);
line(445+j,344,445+j,356);
line(445+j,344,451+j,336);
line(451+j,336,483+j,336);
line(483+j,336,493+j,344);
line(493+j,344,505+j,348);
line(505+j,348,505+j,356);

//right down
setcolor(YELLOW);
line(540,360-j,620,360-j);//lower
line(540,280-j,540,360-j);//left
line(620,280-j,620,360-j);//right
line(540,280-j,620,280-j);//upper
setcolor(WHITE);
circle(566,356-j,4);
circle(594,356-j,4);
line(570,356-j,590,356-j);//m
line(550,356-j,562,356-j);//b
line(598,356-j,610,356-j);//f
line(550,344-j,550,356-j);//bh
line(550,344-j,556,336-j);//bhi
line(556,336-j,588,336-j);//r
line(588,336-j,598,344-j);//fg
line(598,344-j,610,348-j);//b
line(610,348-j,610,356-j);//fh

//left middle
setcolor(LIGHTGREEN);
line(435,255+j,515,255+j);//lower
line(435,175+j,435,255+j);//left
line(515,175+j,515,255+j);//right
line(435,175+j,515,175+j);//upper
setcolor(WHITE);
circle(461,251+j,4);
circle(489,251+j,4);
line(465,251+j,485,251+j);//m
line(445,251+j,457,251+j);//b
line(493,251+j,505,251+j);//f
line(445,251+j,445,239+j);//bh
line(445,239+j,451,231+j);//bhi
line(451,231+j,483,231+j);//r
line(483,231+j,493,239+j);//fg
line(493,239+j,505,243+j);//b
line(505,243+j,505,251+j);//fh

//right middle
setcolor(LIGHTMAGENTA);
line(540,255-j,620,255-j);//lower
line(540,175-j,540,255-j);//left
line(620,175-j,620,255-j);//right
line(540,175-j,620,175-j);//upper
setcolor(WHITE);
circle(566,251-j,4);
circle(594,251-j,4);
line(570,251-j,590,251-j);//m
line(562,251-j,550,251-j);//b
line(598,251-j,610,251-j);//f
line(550,251-j,550,239-j);//bh
line(550,239-j,556,231-j);//bhi
line(556,231-j,588,231-j);//r
line(588,231-j,598,239-j);//fg
line(598,239-j,610,243-j);//b
line(610,243-j,610,251-j);//fh

//left upper
setcolor(LIGHTBLUE);
line(435,150+j,515,150+j);//lower
line(435,70+j,435,150+j);//left
line(515,70+j,515,150+j);//right
line(435,70+j,515,70+j);//upper
setcolor(WHITE);
circle(461,146+j,4);
circle(489,146+j,4);
line(465,146+j,485,146+j);//m
line(445,146+j,457,146+j);//b
line(493,146+j,505,146+j);//f
line(445,146+j,445,134+j);//bh
line(445,134+j,451,126+j);//bhi
line(451,126+j,483,126+j);//r
line(483,126+j,493,134+j);//fg
line(493,134+j,505,138+j);//b
line(505,146+j,505,138+j);//fh

//right upper
setcolor(LIGHTCYAN);
line(540-j,150,620-j,150);//lower
line(540-j,70,540-j,150);//left
line(620-j,70,620-j,150);//right
line(540-j,70,620-j,70);//upper
setcolor(WHITE);
circle(566-j,146,4);
circle(594-j,146,4);
line(570-j,146,590-j,146);//m
line(562-j,146,550-j,146);//b
line(598-j,146,610-j,146);//f
line(550-j,146,550-j,134);//bh
line(550-j,134,556-j,126);//bhi
line(556-j,126,588-j,126);//r
line(588-j,126,598-j,134);//fg
line(598-j,134,610-j,138);//b
line(610-j,138,610-j,146);//fh
}}
circle(566,356,4);
circle(594,356,4);
line(570,356,590,356);//m
line(550,356,562,356);//b
line(598,356,610,356);//f
line(550,344,550,356);//bh
line(550,344,556,336);//bhi
line(556,336,588,336);//r
line(588,336,598,344);//fg
line(598,344,610,348);//b
line(610,348,610,356);//fh

circle(566,251,4);
circle(594,251,4);
line(570,251,590,251);//m
line(562,251,550,251);//b
line(598,251,610,251);//f
line(550,251,550,239);//bh
line(550,239,556,231);//bhi
line(556,231,588,231);//r
line(588,231,598,239);//fg
line(598,239,610,243);//b
line(610,243,610,251);//fh

circle(566,146,4);
circle(594,146,4);
line(570,146,590,146);//m
line(562,146,550,146);//b
line(598,146,610,146);//f
line(550,146,550,134);//bh
line(550,134,556,126);//bhi
line(556,126,588,126);//r
line(588,126,598,134);//fg
line(598,134,610,138);//b
line(610,138,610,146);//fh

circle(461,146,4);
circle(489,146,4);
line(465,146,485,146);//m
line(445,146,457,146);//b
line(493,146,505,146);//f
line(445,146,445,134);//bh
line(445,134,451,126);//bhi
line(451,126,483,126);//r
line(483,126,493,134);//fg
line(493,134,505,138);//b
line(505,146,505,138);//fh

circle(461,251,4);
circle(489,251,4);
line(465,251,485,251);//m
line(445,251,457,251);//b
line(493,251,505,251);//f
line(445,251,445,239);//bh
line(445,239,451,231);//bhi
line(451,231,483,231);//r
line(483,231,493,239);//fg
line(493,239,505,243);//b
line(505,243,505,251);//fh

circle(461,356,4);
circle(489,356,4);
line(465,356,485,356);//m
line(445,356,457,356);//b
line(493,356,505,356);//f
line(445,356,445,344);//bh
line(445,344,451,336);//bhi
line(451,336,483,336);//r
line(483,336,493,344);//fg
line(493,344,505,348);//b
line(505,348,505,356);//fh
}}
cout<<"\n\n\t\t\t\tParking Full";
getch();
closegraph();
return 0;
}