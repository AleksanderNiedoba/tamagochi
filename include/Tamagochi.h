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
        void set_mood(const double);
        void check_needs(std::vector<Need> needs);
        const std::string get_mood() const;

    protected:

    private:
        std::string mood;
        void demand(Need need);
};
#endif // TAMAGOCHI_H
