#ifndef NEED_H
#define NEED_H
#include <string>


class Need
{
public:
    Need(std::string, double);
    virtual ~Need();
    bool is_satisfied() const;
    const std::string get_type() const;
    double get_need_lvl() const;
    const double get_happiness_weight() const;
    void change_need_lvl(double amount);
protected:
    double need_lvl=100;
    void to_range(double&);
private:
    const int SATISFY_TRESHHOLD = 75;
    std::string type;
    double happiness_weight;

};

#endif // NEED_H
