#include<iostream>
using namespace std;

int main(){
    int Chai[3][7]={
        {20,13,12,11,15,34,14},
        {20,13,12,11,15,34,14},
        {20,13,12,11,15,34,14}
    };
    for(int i=0;i<3;i++){
        for(int j=0;j<7;j++){
            cout<<Chai[i][j]<<" ";
        }
        cout<<endl;
    }
    
}