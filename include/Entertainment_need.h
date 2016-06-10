#ifndef ENTERTAINMENT_NEED_H
#define ENTERTAINMENT_NEED_H

#include <Need.h>


class Entertainment_need : public Need
{
public:
    Entertainment_need();
    virtual ~Entertainment_need();
    std::string get_type() override;
protected:

private:
    std::string type="entertainment";
};

#endif // ENTERTAINMENT_NEED_H
