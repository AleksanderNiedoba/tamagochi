#include "Needs_container.h"


Needs_container::Needs_container()
{
    //ctor
}

Needs_container::~Needs_container()
{
    //dtor
}

void Needs_container::add_need(Need* need)
{
    needs.push_back(need);
}


vector<Need*> Needs_container::get_needs()
{
    return needs;
}
