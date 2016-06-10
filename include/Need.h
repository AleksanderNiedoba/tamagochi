#ifndef NEED_H
#define NEED_H
#include <string>


class Need
{
public:
    Need(std::string);
    virtual ~Need();
    bool is_satisfied();
    std::string get_type();
    int get_need_lvl();
    void change_need_lvl(int amount);
protected:
    int need_lvl=100;
    void to_range(int);
private:
    const int SATISFY_TRESHHOLD = 75;
    std::string type;

};

#endif // NEED_H
