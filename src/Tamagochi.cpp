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
