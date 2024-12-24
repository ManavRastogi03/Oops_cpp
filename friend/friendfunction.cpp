#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Chai{
    private:
        string teaname;
        int serving;
    public:

        Chai(string name,int serve):teaname(name),serving(serve){}
        friend bool compareServing(const Chai &chai1,const Chai &chai2);
        void display() const{
            cout<<teaname<<" ";
            cout<<serving<<endl;
        }
};
bool compareServing(const Chai &chai1,const Chai &chai2){
    return chai1.serving>chai2.serving;
}
int main(){
    Chai masalaChai("Masala Chai",12);
    Chai gingerChai("ginger",2);
    masalaChai.display();
    gingerChai.display();
    if(compareServing(masalaChai,gingerChai)){
        cout<<"Masala chai haas more serving ";
    }else{
        cout<<"Ginger chai has more serving ";
    }


}
