#ifndef TOYS_H
#define TOYS_H

#include <Item.h>


class Toys : public Item
{
    public:
        Toys();
        virtual ~Toys();
        void use() override;
        void buy() override;

    protected:

    private:
};

#endif // TOYS_H
