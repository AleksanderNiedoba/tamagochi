#include "Need.h"
#include <iostream>

Need::Need(std::string need_type, double need_happiness_weight)
{
    type = need_type;
    happiness_weight = need_happiness_weight;
}

Need::~Need()
{
    //dtor
}


void Need::to_range(double &need_lvl)
{
    if(need_lvl>100)
    {
        need_lvl=100;
    }
    if(need_lvl<0)
    {
        need_lvl=0;
    }
}


double Need::get_need_lvl()
{
    return need_lvl;
}

bool Need::is_satisfied()
{

    return need_lvl >= SATISFY_TRESHHOLD;
}

void Need::change_need_lvl(double amount)
{
    need_lvl+=amount;
    to_range(need_lvl);
}

std::string Need::get_type()
{
    return type;
}

