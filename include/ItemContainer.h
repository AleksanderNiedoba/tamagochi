#ifndef ITEMCONTAINER_H
#define ITEMCONTAINER_H
#include <string>
#include <vector>
#include "Item.h"

using namespace std;

class ItemContainer
{
    public:
        ItemContainer();
        virtual ~ItemContainer();
        vector<Item >& getItems();
        void useItem(string itemName, Need &need);
        void addItem(Item &item);

    protected:

    private:
        vector<Item> itemContainer;
};

#endif // ITEMCONTAINER_H
