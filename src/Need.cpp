#include "Need.h"


Need::Need()
{
    //ctor
}

Need::~Need()
{
    //dtor
}


void Need::to_range(int need_lvl)
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


int Need::get_need_lvl()
{
    return need_lvl;
}

bool Need::is_satisfied()
{

    return need_lvl < SATISFY_TRESHHOLD;
}

void Need::change_need_lvl(int amount)
{
    need_lvl+=amount;
    to_range(need_lvl);
}


