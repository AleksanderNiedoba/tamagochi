#ifndef ITEMCONTAINER_H
#define ITEMCONTAINER_H
#include <string>
#include <vector>
#include "Item.h"
#include "Game.h"

using namespace std;

class ItemContainer
{
    public:
        ItemContainer();
        virtual ~ItemContainer();
        vector<Item >& getItems();
        void loadState(Game& game, ifstream& myfile);
        void useItem(string itemName, Need &need);
        void addItem(Item &item);
        void saveState(std::ofstream& myfile);

    protected:

    private:
        vector<Item> itemContainer;
};

#endif // ITEMCONTAINER_H
