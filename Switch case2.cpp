
#include<iostream>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<cmath>
#define PI 3.1415
using namespace std;

int main()
{
     int d=0,m;
    int x,y,i;
    int gd=DETECT,gm;
    int walk=0;
    initgraph(&gm,&gm," ");
    initwindow(800,800);

    int option;
     //name
    line(50,50,30,110);
    line(40,80,60,80);
    line(50,50,70,110);

    line(80,50,80,110);
    line(80,50,100,50);
    line(100,50,100,80);
    line(80,82.5,95,82.5);
    line(100,80,95,82.5);
    line(100,85,95,82.5);
    line(100,85,100,110);
    line(80,110,100,110);

    line(110,50,110,110);
    line(110,50,125,50);
    line(125,50,130,55);
    line(130,55,130,105);
    line(130,105,125,110);
    line(125,110,110,110);

    line(140,50,140,110);
    line(140,110,160,110);
    line(160,110,160,50);

     line(170,50,170,110);
    line(170,110,190,110);

     line(200,50,200,110);
    line(200,110,220,110);

    line(250,50,230,110);
    line(240,80,260,80);
    line(250,50,270,110);

    line(280,50,280,110);
    line(280,80,300,80);
    line(300,50,300,110);

    //id

        line(50,120,50,170);
    line(45,120,55,120);
    line(45,170,55,170);

     line(60,120,60,170);
    line(60,120,75,120);
    line(75,120,80,125);
    line(80,125,80,165);
    line(80,165,75,170);
    line(75,170,60,170);

     circle(100,130,5);
    circle(100,160,5);

    ellipse(130,145,50,340,10,30);

    line(150,120,170,120);
    line(150,120,150,145);
    line(150,145,170,145);
    line(170,145,170,170);
    line(150,170,170,170);

    line(180,120,200,120);
    line(180,120,180,170);
    line(180,145,200,145);
    line(180,170,200,170);


   line(210,120,230,120);
    line(230,120,230,145);
    line(210,145,230,145);
    line(210,145,210,170);
    line(210,170,230,170);

    circle(260,145,23);
    circle(310,145,23);

      line(340,120,340,170);
   line(340,120,335,125);
   line(335,170,345,170);

   circle(370,145,23);

    line(400,120,400,170);
    line(395,125,400,120);
   line(395,170,405,170);

    ellipse(420,130,5,360,10,12);
     ellipse(426,145,250,450,10,25);

     line(450,120,470,120);
    line(470,120,470,145);
    line(450,145,470,145);
    line(450,145,450,170);
    line(450,170,470,170);

    line(480,120,500,120);
    line(500,120,500,145);
    line(480,145,500,145);
    line(500,145,500,170);
    line(480,170,500,170);

     circle(530,145,23);


    // display menu



    std::cout << "Choose a shape to draw:" << std::endl;
    std::cout << "1. Tree" << std::endl;
    std::cout << "2. Rainbow" << std::endl;
    std::cout << "3. Home" << std::endl;
    std::cout << "4. Cicle" << std::endl;
    std::cout << "5. Star" << std::endl;
    std::cout << "6. Car" << std::endl;
    std::cout << "7. Watch" << std::endl;
    std::cout << "8. Emoji" << std::endl;
     std::cout << "9. Tower" << std::endl;
    std::cout << "10. Circle" << std::endl;


    std::cout << "Enter your choice: ";
    std::cin >> option;




    switch (option)
    {
    case 1:

            line(210,370,210,450);
    line(240,370,240,450);

     ellipse(206,350,90,280,25,30);
     ellipse(193,320,60,240,25,30);
     ellipse(198,295,40,200,29,30);
     ellipse(222,270,20,170,29,30);
     ellipse(250,270,0,120,29,30);
     ellipse(255,280,310,60,35,30);
     ellipse(268,300,280,50,35,30);
     ellipse(263,330,260,22,35,30);
     ellipse(240,340,270,340,35,30);


      rectangle(200,445,250,460);

      setfillstyle(1,GREEN);
    floodfill(205,356,WHITE);

     setfillstyle(1,BLUE);
    floodfill(205,450,WHITE);

        break;

    case 2:
        x=getmaxx()/2;
    y=getmaxy()/2;
    for(i=30;i<200;i++)
    {
         //name
    line(50,50,30,110);
    line(40,80,60,80);
    line(50,50,70,110);

    line(80,50,80,110);
    line(80,50,100,50);
    line(100,50,100,80);
    line(80,82.5,95,82.5);
    line(100,80,95,82.5);
    line(100,85,95,82.5);
    line(100,85,100,110);
    line(80,110,100,110);

    line(110,50,110,110);
    line(110,50,125,50);
    line(125,50,130,55);
    line(130,55,130,105);
    line(130,105,125,110);
    line(125,110,110,110);

    line(140,50,140,110);
    line(140,110,160,110);
    line(160,110,160,50);

     line(170,50,170,110);
    line(170,110,190,110);

     line(200,50,200,110);
    line(200,110,220,110);

    line(250,50,230,110);
    line(240,80,260,80);
    line(250,50,270,110);

    line(280,50,280,110);
    line(280,80,300,80);
    line(300,50,300,110);

    //id

        line(50,120,50,170);
    line(45,120,55,120);
    line(45,170,55,170);

     line(60,120,60,170);
    line(60,120,75,120);
    line(75,120,80,125);
    line(80,125,80,165);
    line(80,165,75,170);
    line(75,170,60,170);

     circle(100,130,5);
    circle(100,160,5);

    ellipse(130,145,50,340,10,30);

    line(150,120,170,120);
    line(150,120,150,145);
    line(150,145,170,145);
    line(170,145,170,170);
    line(150,170,170,170);

    line(180,120,200,120);
    line(180,120,180,170);
    line(180,145,200,145);
    line(180,170,200,170);


   line(210,120,230,120);
    line(230,120,230,145);
    line(210,145,230,145);
    line(210,145,210,170);
    line(210,170,230,170);

    circle(260,145,23);
    circle(310,145,23);

      line(340,120,340,170);
   line(340,120,335,125);
   line(335,170,345,170);

   circle(370,145,23);

    line(400,120,400,170);
    line(395,125,400,120);
   line(395,170,405,170);

    ellipse(420,130,5,360,10,12);
     ellipse(426,145,250,450,10,25);

     line(450,120,470,120);
    line(470,120,470,145);
    line(450,145,470,145);
    line(450,145,450,170);
    line(450,170,470,170);

    line(480,120,500,120);
    line(500,120,500,145);
    line(480,145,500,145);
    line(500,145,500,170);
    line(480,170,500,170);

     circle(530,145,23);



    //rainbow
    delay(100);
    setcolor(i/10);
    arc(x,y,0,360,i-10);
    }

        break;

    case 3:

                /* Draw Hut */
        setcolor(WHITE);
        rectangle(150,280,250,400);
        rectangle(250,280,420,400);
        rectangle(180,325,220,400);
        rectangle(320,325,360,400);
        rectangle(270,330,300,360);
        rectangle(380,330,410,360);

        rectangle(310,400,370,410);
        rectangle(315,410,365,420);

         line(310,400,280,500);
         line(370,400,400,500);


        line(200,200,150,280);
        line(200,200,250,280);
        line(200,200,370,200);
        line(370,200,420,280);



        /* Fill colours */
        setfillstyle(SOLID_FILL, BROWN);
        floodfill(152, 282, WHITE);
        floodfill(252, 282, WHITE);
        setfillstyle(SLASH_FILL, BLUE);
        floodfill(182, 352, WHITE);
        setfillstyle(HATCH_FILL, GREEN);
        floodfill(200, 205, WHITE);
        floodfill(210, 205, WHITE);

        break;

    case 4:

         for(int i=0;i<500;i++)
    {

             //name
    line(50,50,30,110);
    line(40,80,60,80);
    line(50,50,70,110);

    line(80,50,80,110);
    line(80,50,100,50);
    line(100,50,100,80);
    line(80,82.5,95,82.5);
    line(100,80,95,82.5);
    line(100,85,95,82.5);
    line(100,85,100,110);
    line(80,110,100,110);

    line(110,50,110,110);
    line(110,50,125,50);
    line(125,50,130,55);
    line(130,55,130,105);
    line(130,105,125,110);
    line(125,110,110,110);

    line(140,50,140,110);
    line(140,110,160,110);
    line(160,110,160,50);

     line(170,50,170,110);
    line(170,110,190,110);

     line(200,50,200,110);
    line(200,110,220,110);

    line(250,50,230,110);
    line(240,80,260,80);
    line(250,50,270,110);

    line(280,50,280,110);
    line(280,80,300,80);
    line(300,50,300,110);

    //id

        line(50,120,50,170);
    line(45,120,55,120);
    line(45,170,55,170);

     line(60,120,60,170);
    line(60,120,75,120);
    line(75,120,80,125);
    line(80,125,80,165);
    line(80,165,75,170);
    line(75,170,60,170);

     circle(100,130,5);
    circle(100,160,5);

    ellipse(130,145,50,340,10,30);

    line(150,120,170,120);
    line(150,120,150,145);
    line(150,145,170,145);
    line(170,145,170,170);
    line(150,170,170,170);

    line(180,120,200,120);
    line(180,120,180,170);
    line(180,145,200,145);
    line(180,170,200,170);


   line(210,120,230,120);
    line(230,120,230,145);
    line(210,145,230,145);
    line(210,145,210,170);
    line(210,170,230,170);

    circle(260,145,23);
    circle(310,145,23);

      line(340,120,340,170);
   line(340,120,335,125);
   line(335,170,345,170);

   circle(370,145,23);

    line(400,120,400,170);
    line(395,125,400,120);
   line(395,170,405,170);

    ellipse(420,130,5,360,10,12);
     ellipse(426,145,250,450,10,25);

     line(450,120,470,120);
    line(470,120,470,145);
    line(450,145,470,145);
    line(450,145,450,170);
    line(450,170,470,170);

    line(480,120,500,120);
    line(500,120,500,145);
    line(480,145,500,145);
    line(500,145,500,170);
    line(480,170,500,170);

     circle(530,145,23);
        //cicle
        line(50+i,405,100+i,405);
         line(75+i,375,125+i,375);
         line(50+i,405,75+i,375);
         line(100+i,405,125+i,375);
          line(150+i,405,100+i,345);
         line(75+i,375,75+i,370);
           line(70+i,370,80+i,370);
         line(80+i,345,100+i,345);

        //wheel

         circle(150+i,405,30);
          circle(50+i,405,30);

          //road
          line(0,436,getmaxx(),436);
          //stone
          rectangle(getmaxx()-1,436,650-1,431);




         delay(10);
         cleardevice();
    }

        break;

    case 5:

       line(200,185,180,240);
			line(200,185,220,240);
			line(120,240,180,240);
			line(220,240,280,240);
			line(160,275,120,240);
			line(160,275,145,330);

			line(145,330,200,290);
			line(255,330,200,290);
			line(255,330,240,275);
			line(240,275,280,240);
			setfillstyle(1,BLUE);
    floodfill(251,256,WHITE);

    line(120,210,192,210);
    line(80,220,188,220);
    line(50,230,184,230);

        break;

          case 6:

         for(int i=0;i<500;i++)
    {

            //id
    line(40,120,40,170);
    line(35,120,45,120);
    line(35,170,45,170);

     line(60,120,60,170);
    line(60,120,75,120);
    line(75,120,80,125);
    line(80,125,80,165);
    line(80,165,75,170);
    line(75,170,60,170);

     circle(100,130,5);
    circle(100,160,5);

    ellipse(130,145,50,340,10,30);

    line(150,120,170,120);
    line(150,120,150,145);
    line(150,145,170,145);
    line(170,145,170,170);
    line(150,170,170,170);

    line(180,120,200,120);
    line(180,120,180,170);
    line(180,145,200,145);
    line(180,170,200,170);


   line(210,120,230,120);
    line(230,120,230,145);
    line(210,145,230,145);
    line(210,145,210,170);
    line(210,170,230,170);

    circle(260,145,23);
    circle(310,145,23);

      line(340,120,340,170);
   line(340,120,335,125);
   line(335,170,345,170);

   circle(370,145,23);

    line(400,120,400,170);
    line(395,125,400,120);
   line(395,170,405,170);

    ellipse(420,130,5,360,10,12);
     ellipse(426,145,250,450,10,25);

     line(450,120,470,120);
    line(470,120,470,145);
    line(450,145,470,145);
    line(450,145,450,170);
    line(450,170,470,170);

    line(480,120,500,120);
    line(500,120,500,145);
    line(480,145,500,145);
    line(500,145,500,170);
    line(480,170,500,170);

     circle(530,145,23);

//name
    line(50,50,30,110);
    line(40,80,60,80);
    line(50,50,70,110);

    line(80,50,80,110);
    line(80,50,100,50);
    line(100,50,100,80);
    line(80,82.5,95,82.5);
    line(100,80,95,82.5);
    line(100,85,95,82.5);
    line(100,85,100,110);
    line(80,110,100,110);

    line(110,50,110,110);
    line(110,50,125,50);
    line(125,50,130,55);
    line(130,55,130,105);
    line(130,105,125,110);
    line(125,110,110,110);

    line(140,50,140,110);
    line(140,110,160,110);
    line(160,110,160,50);

     line(170,50,170,110);
    line(170,110,190,110);

     line(200,50,200,110);
    line(200,110,220,110);

    line(250,50,230,110);
    line(240,80,260,80);
    line(250,50,270,110);

    line(280,50,280,110);
    line(280,80,300,80);
    line(300,50,300,110);

    //id

        line(50,120,50,170);
    line(45,120,55,120);
    line(45,170,55,170);

     line(60,120,60,170);
    line(60,120,75,120);
    line(75,120,80,125);
    line(80,125,80,165);
    line(80,165,75,170);
    line(75,170,60,170);

     circle(100,130,5);
    circle(100,160,5);

    ellipse(130,145,50,340,10,30);

    line(150,120,170,120);
    line(150,120,150,145);
    line(150,145,170,145);
    line(170,145,170,170);
    line(150,170,170,170);

    line(180,120,200,120);
    line(180,120,180,170);
    line(180,145,200,145);
    line(180,170,200,170);


   line(210,120,230,120);
    line(230,120,230,145);
    line(210,145,230,145);
    line(210,145,210,170);
    line(210,170,230,170);

    circle(260,145,23);
    circle(310,145,23);

      line(340,120,340,170);
   line(340,120,335,125);
   line(335,170,345,170);

   circle(370,145,23);

    line(400,120,400,170);
    line(395,125,400,120);
   line(395,170,405,170);

    ellipse(420,130,5,360,10,12);
     ellipse(426,145,250,450,10,25);

     line(450,120,470,120);
    line(470,120,470,145);
    line(450,145,470,145);
    line(450,145,450,170);
    line(450,170,470,170);

    line(480,120,500,120);
    line(500,120,500,145);
    line(480,145,500,145);
    line(500,145,500,170);
    line(480,170,500,170);

     circle(530,145,23);
        //car
        line(50+i,370,90+i,370);
        arc(110+i,370,0,180,20);
         line(130+i,370,220+i,370);
        arc(240+i,370,0,180,20);
         line(260+i,370,300+i,370);
         line(300+i,370,300+i,350);
         line(300+i,350,240+i,330);
         line(240+i,330,200+i,300);
         line(200+i,300,110+i,300);
         line(110+i,300,80+i,330);
         line(80+i,330,50+i,340);
         line(50+i,340,50+i,370);

         line(165+i,305,165+i,330);
         line(165+i,330,230+i,330);
         line(230+i,330,195+i,305);
         line(195+i,305,165+i,305);

         line(160+i,305,160+i,330);
         line(160+i,330,95+i,330);
         line(95+i,330,120+i,305);
         line(120+i,305,160+i,305);

         circle(110+i,370,17);
          circle(240+i,370,17);




         delay(10);
         cleardevice();

         line(0,390,639,390);



    }

        break;
          case 7:

            //clock
   {
       line(250,400,230,350);
       line(250,400,340,330);
       circle(250,400,5);
    circle(250,400,200);
    setcolor(WHITE);

    outtextxy(250+180*sin(PI/6)-5 , 400+180*cos(PI/6) , "5");
    outtextxy(250+180*sin(4*PI/6)-5 , 400+180*cos(2*PI/6) , "4");
    outtextxy(250+180*sin(3*PI/6)-5 , 400+180*cos(3*PI/6) , "3");
    outtextxy(250+180*sin(2*PI/6)-5 , 400+180*cos(4*PI/6) , "2");
    outtextxy(250+180*sin(1*PI/6)-5 , 400+180*cos(5*PI/6) , "1");
    outtextxy(250+180*sin(12*PI/6)-5 , 400+180*cos(6*PI/6) , "12");
    outtextxy(250+180*sin(11*PI/6)-5 , 400+180*cos(7*PI/6) , "11");
    outtextxy(250+180*sin(10*PI/6)-5 , 400+180*cos(8*PI/6) , "10");
    outtextxy(250+180*sin(9*PI/6)-5 , 400+180*cos(9*PI/6) , "9");
    outtextxy(250+180*sin(8*PI/6)-5 , 400+180*cos(10*PI/6) , "8");
    outtextxy(250+180*sin(7*PI/6)-5 , 400+180*cos(11*PI/6) , "7");
    outtextxy(250+180*sin(6*PI/6)-5 , 400+180*cos(12*PI/6) , "6");

    //setfillstyle(1,GREEN);
    //floodfill(255,404,WHITE);


   }


        break;
         case 8:

        setcolor(RED);
    circle(400,310,100);
    setfillstyle(1,YELLOW);
    floodfill(415,315,RED);

    setcolor(RED);
    ellipse(400,340,180,360,55,50);
    line(345,340,455,340);
    setfillstyle(1,RED);
    floodfill(346,341,RED);

     setcolor(WHITE);
     circle(440,270,20);
     setfillstyle(1,WHITE);
     floodfill(441,271,WHITE);

     setcolor(WHITE);
     circle(360,270,20);
     setfillstyle(1,WHITE);
     floodfill(365,275,WHITE);

      setcolor(BLACK);
     circle(360,270,10);
     setfillstyle(1,BLACK);
     floodfill(361,271,BLACK);

      setcolor(BLACK);
     circle(440,270,10);
     setfillstyle(1,BLACK);
     floodfill(441,271,BLACK);

     //setcolor(RED);
     line(380,300,420,300);
     line(380,300,400,280);
     line(420,300,400,280);
    // setfillstyle(1,RED);
     //floodfill(381,302,RED);

        break;
         case 9:

        line(200,200,150,400);
    line(200,200,250,400);
    line(200,240,150,400);
    line(200,240,250,400);
    line(200,280,150,400);
    line(200,280,250,400);
    line(200,320,150,400);
    line(200,320,250,400);
    line(200,360,150,400);
    line(200,360,250,400);
    line(150,400,250,400);

     setfillstyle(SOLID_FILL, YELLOW);
        floodfill(201, 209, WHITE);

         setfillstyle(SOLID_FILL, RED);
        floodfill(201, 249, WHITE);

         setfillstyle(SOLID_FILL, BLUE);
        floodfill(201, 289, WHITE);

         setfillstyle(SOLID_FILL, GREEN);
        floodfill(201, 323, WHITE);

         setfillstyle(SOLID_FILL, CYAN);
        floodfill(201, 383, WHITE);

        break;

          case 10:

        setcolor(GREEN);
        circle(400, 400, 100);

        rectangle(50,250,250,500);

        break;




    }

    getch();
    closegraph();
    return 0;
}
