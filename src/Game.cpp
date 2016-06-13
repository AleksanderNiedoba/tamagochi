#include <iostream>
#include <string>
#include "Need.h"
#include "Tamagochi.h"
#include "Needs_container.h"
//#include "ItemContainer.h"
#include "Game.h"

using namespace std;

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
    Need food_need("food", 12);
    Need entertainment_need("entertainment", 8);
    needs_container.add_need(food_need);
    needs_container.add_need(entertainment_need);
    return true;
}

bool Game::endGame()
{
    return false;
}

void Game::update()
{
   needs_container.update_needs();
   double happiness_lvl = needs_container.get_happiness_lvl();
   tamagochi.set_mood(happiness_lvl);

   vector<Need> needs = needs_container.get_needs();
   tamagochi.check_needs(needs);

   cout<<tamagochi.get_mood()<<endl;
}
