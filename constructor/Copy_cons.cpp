#include<iostream>
#include<vector>
using namespace std;
class Chai{
    public:
        string* teaName;
        int serving;
        vector<string> ingedients;
        Chai(string teaName,int serving,vector<string> ingedients ){
            this->teaName=new string(teaName);
            this->serving=serving;
            this->ingedients=ingedients;
        }
        //copy contructor called
        Chai(const Chai& other){
            this->teaName=new string(*other.teaName);
            this->serving=other.serving;
            this->ingedients=other.ingedients;
            cout<<"Copy Constructor called";
        }
        ~Chai(){
            delete teaName;
            cout<<"Destructor is being ready";
        }
        void displayChaiDetails(){
            cout<<"TeaName= "<<*teaName<<endl;
            cout<<"Serving= "<<serving<<endl;
            cout<<"Ingredients=";
            for(string ingrident:ingedients){
                cout<<ingrident<<" ";
            }
            cout<<endl;

        }
};
int main(){
    Chai chaione("Lemon Tea",2,{"BoiledWater","Chaipati"});
    // chaione.displayChaiDetails();
    //copy the object
    Chai chaitwo=chaione;
    // chaitwo.displayChaiDetails();
    *chaione.teaName="Banana tea";
    chaione.displayChaiDetails();

    chaitwo.displayChaiDetails();


    return 0;
}
