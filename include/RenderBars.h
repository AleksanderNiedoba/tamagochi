#ifndef RENDERBARS_H
#define RENDERBARS_H
#include <windows.h>
#include <vector>
#include <string>

class RenderBars
{
    public:
        RenderBars();
        virtual ~RenderBars();
        void renderAll(std::vector<std::string> barsNumber);

    protected:

    private:
        void setCursorPosition(char x, char y);
        HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
        COORD c;
        const int blueNumber = 1;
        const int greenNumber = 2;
        const int greyNumber = 8;
        const int BAR_SQUARES_WIDTH = 20;
        const int START_BARS_X =50;
        const int START_BARS_Y =5;
        const int BAR_Y_DIFFERENCE =3;
        const int NAME_Y_DIFFERENCE= 1;


        void drawBar(char x, char y, const int colorNumber, int coloredCharsNum);
        void renderName(char x, char y, std::string name);

};

#endif // RENDERBARS_H
