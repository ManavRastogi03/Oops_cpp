#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Chai{
    public:
        string teaname;
        int serve;
        vector<string> ingredients;
        // deligate constructructor
        Chai(string name):Chai(name,1,{"water","tealeave"}){}
        Chai(string name,int ser,vector<string> ingr){
            teaname=name;
            serve=ser;
            ingredients=ingr;
        }
        void displayChaiDetails(){
            cout<<"TeaName"<<teaname<<endl;
            cout<<"Serving"<<serve<<endl;
            cout<<"Ingredients";
            for(string ingrident:ingredients){
                cout<<ingrident<<" ";
            }
            cout<<endl;
        }

};
int main(){
    Chai quickChai("quick chai");
    quickChai.displayChaiDetails();

}