#include<iostream>
using namespace std;
int* prepareChai(int cups){
    int* orders=new int[cups];
    for(int i=0;i<5;i++){
        orders[i]=(i+1)*10;
    }
    return orders;
}
int main(){
    int cups=5;
    int* Chaiorder=prepareChai(cups);
    for(int i=0;i<5;i++){
        cout<<Chaiorder[i]<<" ml";
    }
    delete[] Chaiorder;
}