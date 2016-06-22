#ifndef FOOD_H
#define FOOD_H

#include <Item.h>


class Food : public Item
{
    public:
        Food();
        virtual ~Food();
        void use();
        void buy();

    protected:

    private:
};

#endif // FOOD_H
