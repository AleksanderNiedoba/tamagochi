#ifndef TAMAGOCHIDRAWTYPES_H
#define TAMAGOCHIDRAWTYPES_H
#include <map>
#include <string>
#include "Tamagochi.h"



class TamagochiDrawTypes
{
    public:
        TamagochiDrawTypes();
        virtual ~TamagochiDrawTypes();
        std::string getFileName(Tamagochi &tamagochi);

    protected:

    private:
        std::map<std::string, std::string> moodToFileName;
};

#endif // TAMAGOCHIDRAWTYPES_H
