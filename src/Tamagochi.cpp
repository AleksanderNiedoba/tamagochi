#include "Tamagochi.h"
#include <iostream>

Tamagochi::Tamagochi()
{
    //ctor
}

Tamagochi::~Tamagochi()
{
    //dtor
}

void Tamagochi::check_needs(std::vector<Need*> needs)
{
    for(std::vector<Need*>::iterator it = needs.begin(); it != needs.end(); ++it)
    {
        if( !(*(*it)).is_satisfied() )
        {
            demand((*it));
        }
    }
}

void Tamagochi::demand(Need* need)
{
    std::cout<<(*need).get_type()<<" is not satisfied"<<std::endl;
}

bool Tamagochi::is_dead()
{
    //when food is zero or health is zero
    return false;
}
