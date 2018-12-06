#include "std_lib_facilities.h"

namespace X {
    int var = 0;
    void print () {cout << "In space X: " << var << endl;}
};

namespace Y {
    int var = 0;
    void print () {cout << "In space Y: " << var << endl;}
};

namespace Z {
    int var = 0;
    void print () {cout << "In space Z: " << var << endl;}
};

int main () {
    X::var = 7;
    X::print();
    using namespace Y;
    var = 9;
    print();
    {   using Z::var;
        using Z::print;
        var = 11;
        print();
    }
    print();
    X::print();
}
