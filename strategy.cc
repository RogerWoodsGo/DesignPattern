#include <iostream>
using namespace std;

//compostion make it easy to change to different strategy, just pass into different concrete strategy
class IStrategy{
    public:
        virtual void UseStrategy(){};
};

class Strategy1:public IStrategy{
    public:
        void UseStrategy(){
            cout << "use sta1" << endl;
        };
};

class Strategy2:public IStrategy{
    public:
        void UseStrategy(){
            cout << "use sta2" << endl;
        };
};

class Wrapper{
    public:
        Wrapper(IStrategy* isg):isg_(isg){};
        void DoAction(){isg_->UseStrategy();};
    private:
        IStrategy* isg_;//has a， this is the key point
};
