#include <iostream>
using namespace std;

class Subsystem1 {
public:
    void OP1() {
        cout << "operate sys 1" << endl;
    };
};


class Subsystem2 {
public:
    void OP2() {
        cout << "operate sys 2" << endl;
    };
};

class Wrapper {
public:
    Wrapper() {
        s1_ =  new Subsystem1();
        s2_ =  new Subsystem2();
    };
    ~Wrapper() {
        delete s1_;
        delete s2_;
    };
    void Operator() {
        s1_->OP1();
        s2_->OP2();
    }
private:
    Subsystem1* s1_;
    Subsystem2* s2_;
};

