#include "ItemContainer.h"
#include <iostream>
#include <string>
using namespace std;

ItemContainer::ItemContainer()
{
    //ctor
}

ItemContainer::~ItemContainer()
{
    //dtor
}

vector<Item> ItemContainer::getItems()
{
    return itemContainer;
}

void ItemContainer::useItem(string itemName, Need &need)
{
    for(vector<Item>::iterator it = itemContainer.begin(); it != itemContainer.end(); ++it)
    {
        cout<<(*it).getName()<<endl;
        cout<<itemName<<endl;
        if( (*it).getName() == itemName )
        {
            (*it).use(need);
        }
        itemContainer.erase(it);
        delete &(*it);
    }
    cout<<"TY CIULU"<<endl;
}

void ItemContainer::addItem(Item &item)
{
    itemContainer.push_back(item);
}
