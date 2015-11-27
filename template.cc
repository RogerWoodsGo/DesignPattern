#include <iostream>
using namespace std;
//disadvantage: derived class cannot be used by other abstract class
class T{
    public:
        void DoAction(){
            this->UseT1();
            this->UseT2();
        }
        virtual void UseT1(){
            cout << "this T" << endl;
        }; 
        virtual void UseT2(){}; 
};


class T1:public T{
    public:
        void UseT1(){
            cout << "This t1" << endl;
        };
        void UseT2(){
            cout << "This t1" << endl;
        };
};

class T2:public T{
    public:
        void UseT2(){
            cout << "This t2" << endl;
        };
};
