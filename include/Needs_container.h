#ifndef NEEDS_CONTAINER_H
#define NEEDS_CONTAINER_H
#include <vector>
#include <string>

using namespace std;

class Need;

class Needs_container
{
    public:
        double get_happiness_lvl();
        Needs_container();
        virtual ~Needs_container();
    void add_need(Need need);
    Need getNeedOfType(string type);
    vector<Need>& get_needs();
    void update_needs();
    protected:

    private:
        const double NEED_LVL_CHANGE = -0.001;
    vector<Need> needs;

};

#endif // NEEDS_CONTAINER_H
