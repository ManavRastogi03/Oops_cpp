#include<iostream>
using namespace std;
class Chai{
    private:
    string teaname;
    int serving;
    public:
        Chai(string name,int serve):teaname(name),serving(serve){};

        friend class F;
};
class F{
    public:
        void display(Chai &chai1){
            cout<<chai1.teaname<<" ";
            cout<<chai1.serving<<endl;
        }
        
};
int main(){
    Chai masalaChai("Masala chai",23);
    F fri;
    fri.display(masalaChai);
}