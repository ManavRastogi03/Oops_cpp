#include<iostream>
#include<vector>
using namespace std;
class Chai{
    public:
        string teaName;
        int serving;
        vector<string> ingedients;
        Chai(string teaName,int serving,vector<string> ingedients ){
            this->teaName=teaName;
            this->serving=serving;
            this->ingedients=ingedients;

        }
        void displayChaiDetails(){
            cout<<"TeaName"<<teaName<<endl;
            cout<<"Serving"<<serving<<endl;
            cout<<"Ingredients";
            for(string ingrident:ingedients){
                cout<<ingrident<<" ";
            }
            cout<<endl;

        }
};
int main(){
    Chai chaione("Lemon Tea",2,{"BoiledWater","Chaipati"});
    chaione.displayChaiDetails();
    return 0;
}
