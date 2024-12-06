#include<iostream>
using namespace std;
int totalChaiServed(int chai[],int size){
    int total=0;
    for(int i=0;i<size;i++){
        total+=chai[i];
    }
    return total;
}
int main(){
    int chai[]={1,2,2,3,4};
    int size=5;
    cout<<totalChaiServed(chai,size);
}