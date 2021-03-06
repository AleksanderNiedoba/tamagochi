#ifndef TAMAGOCHI_H
#define TAMAGOCHI_H
#include <string>
#include <vector>
#include "Need.h"

class Tamagochi
{
    public:
        Tamagochi();
        virtual ~Tamagochi();
    bool is_dead();
        set_mood();

    protected:

    private:
        std::string mood;
        void check_needs(std::vector<Need*> needs);
        void demand(Need* need);
};
#endif // TAMAGOCHI_H
