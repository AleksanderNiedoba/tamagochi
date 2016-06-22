#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include "Need.h"
#include "Tamagochi.h"

#include "TamagochiDrawTypes.h"
#include "Game.h"
#include "Draw.h"
#include "RenderBars.h"


using namespace std;

Game::Game()
{
    //ctor
}

Game::~Game()
{
    //dtor
}

void Game::clearConsole()
{
    if (system("CLS")) system("clear");
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
    if (tamagochi.is_dead(needs_container))
    {
       // clearConsole();//temporary
        return true;
    }

    return false;
}

void Game::update()
{
   needs_container.update_needs();
   double happiness_lvl = needs_container.get_happiness_lvl();
   tamagochi.set_mood(happiness_lvl);

   vector<Need> needs = needs_container.get_needs();
   tamagochi.check_needs(needs);
}

void Game::render() // render jest kurwa nieczytelny!!!
{
    clearConsole();
    TamagochiDrawTypes tdt;
    std::string fileName = tdt.getFileName(tamagochi);
    Draw d;
    d.drawTamagochi(fileName);
    RenderBars rb;
    std::vector<Need> needs = needs_container.get_needs();
    rb.renderAll(needs);
}

void Game::save()
{
    ofstream myfile;
    myfile.open ("gameState.txt");
    needs_container.saveState(myfile);
    itemContainer.saveState(myfile);


    myfile.close();

}

void Game::load()
{
    ifstream myfile;
    myfile.open ("gameState.txt");
    needs_container.loadState(this, myfile);
    itemContainer.loadState(this, myfile);


    myfile.close();
}


