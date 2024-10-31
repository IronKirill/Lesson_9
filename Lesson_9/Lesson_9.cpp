#include <iostream>
using std::cout;
using std::endl;

namespace Kirill
{
    class MyClass
    {
    public:
        void showInfo()
        {
            cout << "Namespace Kirill: MyClass" << endl;

        }
    };
}
namespace Nazar
{
    class MyClass
    {
    public:
        void printInfo()
        {
            cout << "Namespace Nazar: MyClass" << endl;
        }
    };
}

int main()
{
    //MyClass a; ERROR !!!
    Kirill::MyClass a;
    Nazar::MyClass b;
    a.showInfo();
    b.printInfo();
    using namespace Kirill;
    MyClass c;
    c.showInfo();
    using namespace Nazar;
    Nazar::MyClass d;
    d.printInfo();
}
