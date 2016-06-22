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
//operator<(const a, const b){ return a > b}
vector<Item>& ItemContainer::getItems() //it's still not return by reference!
{
    return itemContainer;
}

void ItemContainer::useItem(string itemName, Need &need) // format to get rid of break
{
    for(vector<Item>::iterator it = itemContainer.begin(); it != itemContainer.end(); ++it)
    {
        if( (*it).getName() == itemName )
        {
            (*it).use(need);
            itemContainer.erase(it);
            break;
        }
    }
}

void ItemContainer::addItem(Item &item)
{
    itemContainer.push_back(item);
}

void ItemContainer::saveState(ofstream& myfile)
{
    myfile<<itemContainer.size()<<endl;
    for(auto &item: itemContainer)
    {
        item.saveState(myfile);
    }
}

void ItemContainer::loadState(Game& game, ifstream& myfile)
{
     std::string TempLine;
     std::getline (File, TempLine);
    int vectorSize= int(TempLine)
        for(int i=0;i<=vectorSize;i++)
        {
            std::getline (File, TempLine);
            double satisfyValue = (double) TempLine;
            std::getline (File, TempLine);
            std::string name = TempLine;
            std::getline (File, TempLine);
            int price = (int) TempLine;

            Item item(satisfyValue, name, price);
            game.itemContainer.addItem(item);
        }

}


  myfile<<satisfyValue<<std::endl;
   myfile<<name<<std::endl;
   myfile<<price<<std::endl;
