#include<iostream>
using namespace std;
class A
{
protected :
    int a = 10;
};

class B : virtual public A
{
protected :
    int b = 20;
};

class C : virtual public A , public B
{

    public:
    void print()
    {
        cout << a << " " << b;
    }
};

int main()
{   
    C  c1;
    c1.print();
    return 0;
    
}
