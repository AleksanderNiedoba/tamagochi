#ifndef GAME_H
#define GAME_H


class Game
{
    public:
        bool init();
        void run();
        void draw();
        Game();
        virtual ~Game();

    protected:

    private:
        bool endGame();
};

#endif // GAME_H
