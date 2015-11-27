
#include <iostream>
using namespace std;


class OurInterface{
    public:
        virtual void CallLib() = 0;
};


class ThirdLib{
    public:
        void SpecifyLib(){
            cout << "this is the third lib" << endl;
        };
};

class LibAdapter:public OurInterface{
    public:
        LibAdapter(ThirdLib* tl){
            this->tl_ = tl; 
        };
        ~LibAdapter(){
        }
        void CallLib(){
            tl_->SpecifyLib();
        };
    private:
        ThirdLib* tl_;
};
