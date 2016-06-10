#include "Tamagochi.h"
#include <iostream>
#include <string>

Tamagochi::Tamagochi()
{
    //ctor
}

Tamagochi::~Tamagochi()
{
    //dtor
}

void Tamagochi::check_needs(std::vector<Need> needs)
{
    for(auto need: needs)
    {
        if( !need.is_satisfied() )
        {
            demand(need);
        }
    }
}

void Tamagochi::demand(Need need)
{
    //std::cout<<(*need).get_type()<<" is not satisfied"<<std::endl;
    std::cout<<" is not satisfied"<<std::endl;
}

bool Tamagochi::is_dead()
{
    //when food is zero or health is zero
    return false;
}

const std::string Tamagochi::get_mood() const
{
    return mood;
}

void Tamagochi::set_mood(const double happiness_lvl)
{
    if( happiness_lvl >= 95)
    {
        mood = "Wonderful";
    }
    else if( happiness_lvl >= 75)
    {
        mood = "life is beautiful";
    }
    else if( happiness_lvl >= 55)
    {
        mood = "I'm happy";
    }
     else if( happiness_lvl >= 35)
    {
        mood = "life sucks";
    }
     else if( happiness_lvl >= 15)
    {
        mood = "Don't forget about me";
    }
    else
    {
        mood = "I'm dying";
    }
}
