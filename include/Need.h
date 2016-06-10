#ifndef NEED_H
#define NEED_H
#include <string>


class Need
{
public:
    Need();
    virtual ~Need();
    bool is_satisfied();
    virtual std::string get_type() = 0;
    int get_need_lvl();
    void change_need_lvl(int amount);
protected:
    int need_lvl=100;
    void to_range(int);
private:
    const int SATISFY_TRESHHOLD = 25;

};

#endif // NEED_H
