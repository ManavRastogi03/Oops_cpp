#include<iostream>
#include<vector>
using namespace std;
class Chai{
    public:
        string teaName;
        int serving;
        vector<string> ingedients;
        Chai(){
            cout<<"Wizard_Is_Calling_You"<<endl;
            teaName=" Unknown Tea";
            serving=0;
            ingedients={"0"};

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
    Chai chaione;
    chaione.displayChaiDetails();
    return 0;
}
