#include<iostream>
#include<vector>
using namespace std;
class Chai{
    public:
        string teaName;
        int serving;
        vector<string> ingedients;
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
    Chai chaione;
    chaione.teaName="Lemon Tea";
    chaione.serving=1;
    chaione.ingedients={"Chaipatti","Sugar","Milk"};
    chaione.displayChaiDetails();
    return 0;
}
