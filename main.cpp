#include <iostream>
#include <assert.h>

#include "Need.h"
#include "Food_need.h"
#include "Tamagochi.h"
#include "Needs_container.h"
#include "Entertainment_need.h"
#include "Game.h"


using namespace std;



void adding_needs(Tamagochi tamagochi, Needs_container nc1)
{
    Food_need fn1;
    nc1.add_need(&fn1);

    assert(!nc1.get_needs().empty());
}

void return_type()
{
    string entertainment_type;
    Entertainment_need en1;
    entertainment_type = en1.get_type();
    assert(!entertainment_type.empty());
    assert(entertainment_type == "entertainment");

    string food_type;
    Food_need fn1;
    food_type = fn1.get_type();
    assert(!food_type.empty());
    assert(food_type == "food");
}

void asserts(Tamagochi tamagochi, Needs_container nc1)
{
    return_type();
    adding_needs(tamagochi, nc1);
}

int main()
{

    Tamagochi tamagochi;
    Needs_container nc1;
    asserts(tamagochi, nc1);
    Game game;
    game.run();

}
