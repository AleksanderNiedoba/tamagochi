#include <iostream>
#include <assert.h>
#include "Need.h"
#include "Tamagochi.h"
#include "Needs_container.h"
#include "Game.h"


using namespace std;

void NeedAsserts()
{
    Need food_need("food");
    assert(food_need.get_type()=="food");
    assert(food_need.is_satisfied());
    food_need.change_need_lvl(-40);
    assert(food_need.get_need_lvl()==60);
    assert(!food_need.is_satisfied());
}


int main()
{


    NeedAsserts();
    Game game;
    game.init();
    game.run();

}
