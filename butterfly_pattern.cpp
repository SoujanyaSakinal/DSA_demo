#include <iostream>
using namespace std;

int main(){
    cout<<"This is butterfly code\n";
    int r=4;
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++){
        cout<<"*";
        }
        if(i!=r-1){
            for(int j=0;j<=(2*(r-2-i));j++){
                cout<<" ";
            }            
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }       
    cout<<endl;
    }   
    return 0;
}