#include "RenderBars.h"
#include <iostream>

RenderBars::RenderBars()
{
    //ctor
}

RenderBars::~RenderBars()
{
    //dtor
}

void RenderBars::setCursorPosition(char x, char y)
{
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(h,c);
}

void RenderBars::drawBar(char x, char y, const int colorNumber, int coloredCharsNum)
{
    const char barElement = (char)219;
    setCursorPosition(x, y);
    SetConsoleTextAttribute(h, greyNumber);
    int squaresDrawn = 0;
    while(squaresDrawn < BAR_SQUARES_WIDTH)
    {
        if(squaresDrawn + coloredCharsNum < BAR_SQUARES_WIDTH)
        {
            SetConsoleTextAttribute(h, colorNumber);
        }
        std::cout<<barElement;
        squaresDrawn++;
    }

}

void RenderBars::renderAll() //uzaleznij od szerokosci tamagochuja
{
    int x=50;
    int y=15;
    drawBar(x,y,blueNumber,BAR_SQUARES_WIDTH);
}


