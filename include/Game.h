#ifndef GAME_H
#define GAME_H
#include "ItemContainer.h"
#include <stdlib.h>

class Game
{
    public:
        bool init();
        void run();
        void draw();
        void render();
        void update();
        Game();
        virtual ~Game();


    protected:

    private:
        Needs_container needs_container;
        ItemContainer itemContainer;
        Tamagochi tamagochi;
        bool endGame();
        void clearConsole();
};

#endif // GAME_H
