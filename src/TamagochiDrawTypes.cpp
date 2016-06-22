#include "TamagochiDrawTypes.h"


TamagochiDrawTypes::TamagochiDrawTypes()
{
    moodToFileName["Wonderful"]             =  "good.txt";
    moodToFileName["life is beautiful"]     =  "good.txt";
    moodToFileName["I'm happy"]             =  "normal.txt";
    moodToFileName["life sucks"]            =  "normal.txt";
    moodToFileName["Don't forget about me"] =  "bad.txt";
    moodToFileName["I'm dying"]             =  "bad.txt";
}

TamagochiDrawTypes::~TamagochiDrawTypes()
{
    //dtor
}

std::string TamagochiDrawTypes::getFileName(Tamagochi &tamagochi)
{
    const std::string mood = tamagochi.get_mood();
    return moodToFileName[mood];
}
