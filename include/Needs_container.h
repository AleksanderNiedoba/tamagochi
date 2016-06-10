#ifndef NEEDS_CONTAINER_H
#define NEEDS_CONTAINER_H
#include <vector>

using namespace std;

class Need;

class Needs_container
{
    public:
        Needs_container();
        virtual ~Needs_container();
    void add_need(Need* need);
    vector<Need*> get_needs();
    protected:

    private:
      vector<Need*> needs;

};

#endif // NEEDS_CONTAINER_H
