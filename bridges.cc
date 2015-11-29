#include <iostream>
using namespace std;
class AbstractImp{
    public:
        virtual void Operate() = 0;
};

class Abstraction{
    public:
        Abstraction(AbstractImp* abi):concrete_imp_(abi){}; 
        void Operate(){
            concrete_imp_->Operate();
        };
    private:
        AbstractImp* concrete_imp_;
};

class AnotherAbstraction{
    public:
        AnotherAbstraction(AbstractImp* abi):concrete_imp_(abi){};
        void Operate(){
            concrete_imp_->Operate();
        };
    private:
        AbstractImp* concrete_imp_;
};

class ConcreteImp1:public AbstractImp{
    public:
        void Operate(){
            cout << "this is one ConcreteImp" << endl;
        };
};

class ConcreteImp2:public AbstractImp{
    public:
        void Operate(){
            cout << "this is two ConcreteImp2" << endl;
        };
};
