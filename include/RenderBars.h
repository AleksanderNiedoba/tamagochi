#ifndef RENDERBARS_H
#define RENDERBARS_H
#include <windows.h>

class RenderBars
{
    public:
        RenderBars();
        virtual ~RenderBars();
        void renderAll();

    protected:

    private:
        void setCursorPosition(char x, char y);
        HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
        COORD c;
        const int blueNumber = 1;
        const int greenNumber = 2;
        const int greyNumber = 8;
        const int BAR_SQUARES_WIDTH = 20;



        void drawBar(char x, char y, const int colorNumber, int coloredCharsNum);

};

#endif // RENDERBARS_H
