#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Chai{
    private:
        string teaname;
        int serve;
        vector<string> ingredients;
    public:
        Chai(){
            teaname="Unknown";
            serve=1;
            ingredients={"water","tea leaves"};
        }
        Chai(string name,int ser,vector<string> ingr){
            teaname=name;
            serve=ser;
            ingredients=ingr;
        }
        //getter
        string gettename(){
            return teaname;
        }
        void setteaname(string name){
            teaname=name;
        }
        int getserving(){
            return serve;
        }
        void setserving(int ser){
            serve=ser;
        }
        vector<string> getingredients(){
            return ingredients;
        }
        void setingredients(vector<string> ing){
            ingredients=ing;
        }
};
int main(){
    Chai chai;
    chai.setteaname("Masala chai");
    cout<<chai.gettename();

}