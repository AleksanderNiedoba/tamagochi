#include "Needs_container.h"
#include "Need.h"
#include <iostream>


Needs_container::Needs_container()
{
    //ctor
}

Needs_container::~Needs_container()
{
    //dtor
}

void Needs_container::add_need(Need need)
{
    needs.push_back(need);
}


vector<Need>& Needs_container::get_needs()
{
    return needs;
}

void Needs_container::update_needs()
{
    for(auto &need: needs)
    {
        need.change_need_lvl(NEED_LVL_CHANGE);
    }
}
