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

double Needs_container::get_happiness_lvl()
{
    if(find("food").get_need_lvl() < 1)
        return 0;


    double happiness_sum=0;
    double maxHappiness_sum=0;
    for(Need &need: needs)
    {
        happiness_sum    += need.get_need_lvl()*need.get_happiness_weight();
        maxHappiness_sum += need.getMaxNeedLvl()*need.get_happiness_weight();
    }
    double normalizedHappiness = happiness_sum/maxHappiness_sum*100;
    return normalizedHappiness;
}

Need Needs_container::getNeedOfType(string type)
{
    for(auto &need: needs)
    {
        if (need.get_type()==type)
        {
            return need;
        }
    }
}

std::vector<std::string> Needs_container::getNeedsNames()
{
    std::vector<std::string>needsNames;
    for(auto &need: needs)
    {
        needsNames.push_back(need.get_type());
    }
    return needsNames;
}

Need Needs_container::find(std::string name) // what if there is no such need?
{
    for(auto &need: needs)
    {
        if( need.get_type() == name)
            return need;
    }
}
