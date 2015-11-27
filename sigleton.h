#include <iostream>
using namespace std;

class Sigleton{
    public:
        static Sigleton* instance(){
            if(Sigleton::instance_ == NULL) 
                return new Sigleton();
        };
        ~Sigleton (){
            cout << "Deconstructor is excuted" << endl;
        }
    private:
        Sigleton (){
            cout << "Sigleton mode excuted" << endl;
        };
        static Sigleton* instance_;
};
