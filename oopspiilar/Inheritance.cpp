#include<iostream>
#include<vector>
#include<string>
using namespace std;
// base/main/parent class 
class Tea{
    protected:
        string teaName;
        int serving;
    public:
        Tea(string name,int serve):teaName(name),serving(serve){
            cout<<"Tea Constructor"<<teaName<<endl;
        }
        // abstract class
        virtual void brew() const{
            cout<<"Brewing "<<teaName<<"with genric method"<<endl;
        }
        virtual void serve() const{
            cout<<"Serving"<<serving<<"cup of tea with genric method"<<endl;
        }
        virtual ~Tea(){
            cout<<"Tea destructor"<<teaName;
        }
        
};
// class inherit
class GreenTea:public Tea{
    public:
    // constructor overide
    // sare method ko overide karna jarruri nhi hai
    GreenTea(int serve):Tea("green tea",serve){
        cout<<"Grreen tea constructor called"<<endl;
    }
    void brew()const override final{
        cout<<"Brewing"<<teaName<<"Bysteeping grreen tea"<<endl;
    }
    ~GreenTea(){
        cout<<"Green tree destructor called"<<endl;
    }

};
// cannot override final function
// class spicyGreenTea:public GreenTea{
//     public:
//     void brew()override{
//         cout<<"Brewing"<<teaName<<"Bysteeping grreen tea"<<endl;

//     }
// }
class MasalaTea:public Tea{
    public:
        MasalaTea(int serve):Tea("Masala tea",serve){};
    void brew()const override{
        cout<<"Brewing"<<teaName<<"Byteeping masala tea"<<endl;
    }
    ~MasalaTea(){
        cout<<"Masala tea destructor"<<endl;
    }

};
int main(){
    // GreenTea greentea(2);
    // greentea.serve();
    // MasalaTea masalatea(3);
    // masalatea.brew();
    Tea* tea1=new GreenTea(2);
    Tea* tea2=new MasalaTea(3);
    tea1->serve();
    tea2->brew();
    delete tea1;
    delete tea2;


}
// protected inheritance ke liye bhi available
