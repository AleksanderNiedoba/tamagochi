#ifndef FOOD_NEED_H
#define FOOD_NEED_H

#include <Need.h>


class Food_need : public Need
{
    public:
        Food_need();
        virtual ~Food_need();
        std::string get_type() override;
    protected:

    private:
        std::string type="food";
};

#endif // FOOD_NEED_H
