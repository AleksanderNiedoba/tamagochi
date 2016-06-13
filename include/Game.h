#ifndef GAME_H
#define GAME_H
#include "ItemContainer.h"

class Game
{
    public:
        bool init();
        void run();
        void draw();
        void update();
        Game();
        virtual ~Game();

    protected:

    private:
        Needs_container needs_container;
        ItemContainer itemContainer;
        Tamagochi tamagochi;
        bool endGame();
};

#endif // GAME_H
