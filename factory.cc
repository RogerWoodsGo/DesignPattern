#include <iostream>
using namespace std;

class IProduct {
public:
    virtual void Operate() = 0;
};

class Factory {
public:
    virtual IProduct* CreateProduct() = 0;
private:
};

class ProductA:public IProduct {
public:
    void Operate() {
        cout << "this is product A" << endl;
    };
};

class ProductB:public IProduct {
public:
    void Operate() {
        cout << "this is product B" << endl;
    };
};

class FactoryA:public Factory {
public:
    IProduct* CreateProduct() {
        return new ProductA();
    };
};

