#ifndef ITEM_H
#define ITEM_H
#include <string>
#include "Need.h"


class Item
{
    public:
        Item(std::string _name, double _satisfyValue, int _price);
        virtual ~Item();
        void use(Need &need);
        void buy();
        std::string getName();

    protected:

    private:
        double satisfyValue;
        std::string name;
        int price;
};

#endif // ITEM_H
