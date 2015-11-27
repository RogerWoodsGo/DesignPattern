#include <iostream>
#include <list>
using namespace std;

class ObserverInterface{
    public:
        virtual void Notify() = 0;
};

class Observer1:public ObserverInterface{
    public:
        void Notify(){
             cout << "this is observer 1" << endl;
        };
};

class Observer2:public ObserverInterface{
    public:
        void Notify(){
             cout << "this is observer 2" << endl;
        };
};

class Target{
    public:
        void Register(ObserverInterface* observer){
            lst_.push_back(observer);
        };
        void NotifyAll(){
            for(lst_it it = lst_.begin(); it != lst_.end(); it++){
                (*it)->Notify();
            }
        };
    private:
        list<ObserverInterface*> lst_;
        typedef list<ObserverInterface*>::iterator lst_it;
};
