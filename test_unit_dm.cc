//#include "sigleton.h"
//#include "strategy.cc"
//#include "template.cc"
//#include "facade.cc"
//#include "adapter.cc"
//#include "observer.cc"
//#include "factory.cc"
#include "bridges.cc"

int main(){
//    Sigleton* sg = Sigleton::instance();
//   delete sg;

//    IStrategy* isg = new Strategy1();  
//    Wrapper* wp = new Wrapper(isg);
//    wp->DoAction();
//    delete isg;
//    delete wp;
    ///T* temp = new T1();
    /////T1* temp = new T1();
    ///temp->DoAction();
    ///delete temp;
//   Wrapper* wp = new Wrapper(); 
//   wp->Operator();
//   delete wp;
  //ThirdLib* adp = new ThirdLib();   
  //OurInterface* inte = new LibAdapter(adp);
  //inte->CallLib();
  //delete adp;
  //delete inte;
//  Observer1* ob1 = new Observer1();
//  Observer2* ob2 = new Observer2();
//  Target* ta = new Target();
//  ta->Register(ob1);
//  ta->Register(ob2);
//  ta->NotifyAll();
//  delete ob1;
//  delete ob2;
//  delete ta;
//    Factory* fa = new FactoryA();
//    IProduct* pro = fa->CreateProduct();
//    pro->Operate();
//    delete fa;
//    delete pro;
    Abstraction* abc = new Abstraction(new ConcreteImp1());
    abc->Operate();
    AnotherAbstraction* aabc =  new AnotherAbstraction(new ConcreteImp2());
    aabc->Operate();
    delete abc;
    delete aabc;
}
