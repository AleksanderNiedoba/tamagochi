
#include "Need.h"
//#include "Need_asserts.cpp"
#include "Tamagochi.h"
#include "Needs_container.h"

#include "Game.h"

Game::Game()
{
    //ctor
}

Game::~Game()
{
    //dtor
}



bool Game::init()
{
    Need food_need("food");
    Need entertainment_need("entertainment");
    needs_container.add_need(&food_need);
    needs_container.add_need(&entertainment_need);
    return true;
}

bool Game::endGame()
{
    return false;
}

void Game::update()
{

}
