#include <iostream>
using namespace std;

class part
{
private:
    int x;
    int y;
public:

    part() :x(12), y(10) {}
    part(int v1, int v2) :x(v1), y(v2){}

    void add()
    {
        cout << "x = " << x << "  + " << "  y = " << y << " the sum is  " << x + y << endl;
    }


};
int main()
{
    part s;
    s.add();
    
}

