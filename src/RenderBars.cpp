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
        if(squaresDrawn + coloredCharsNum == BAR_SQUARES_WIDTH)
            SetConsoleTextAttribute(h, colorNumber);

        std::cout<<barElement;
        squaresDrawn++;
    }
    SetConsoleTextAttribute(h, greyNumber);
}

void RenderBars::renderAll(std::vector<std::string> needsNames) //uzaleznij od szerokosci tamagochuja
{
    int barY = START_BARS_Y;
    for(auto &needName: needsNames)
    {
        renderName(START_BARS_X, barY, needName);
        barY += NAME_Y_DIFFERENCE;
        drawBar(START_BARS_X ,barY ,blueNumber,BAR_SQUARES_WIDTH-10);
        barY += BAR_Y_DIFFERENCE;

    }
}

void RenderBars::renderName(char x, char y, std::string name)
{
    setCursorPosition(x, y);
    std::cout<<name;
}

