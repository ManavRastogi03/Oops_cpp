#include<iostream>
using namespace std;
// Abtract Class
// virtual function me functionaalty define nhi karte hai
// abtract class ke object nhi bante hai
class Tea{
    public:
        virtual void prepareIngredients()=0;//pure virtual function
        virtual void brew();//pure virtual function
        virtual void serve();//pure virtual
        void makeTea(){
            prepareIngredients();
            brew();
            serve();
        }
};
// derived Class
class GreenTea:public Tea{
    public: 
        void prepareIngredients()override {
            cout<<"Grreen Leaves";
        }
        void brew() override{
            cout<<"GreenTea Brewed";
        }
        void serve() override {
            cout<<"serve 1"<<endl;
        }
};
class masalaTea:public Tea{
    public:
        void prepareIngredients()override{
            cout<<"Masala Tealeave";
        }
        void brew() override{
            cout<<"masala Brewed";
        }
        void serve() override {
            cout<<"serve 2"<<endl;
        }

};
int main(){
    GreenTea greentea;
    greentea.makeTea();
    masalaTea masalatea;
    masalatea.makeTea();

}