//.........Loops on Array.............
#include <iostream>
using namespace std;

int main(){
    int size=5;
    int mks[size];

  for(int i=0;i<size;i++){
    cout<<"Enter numbers";
    cin>>mks[i];
  }
  for(int i=0;i<size;i++){
    cout<<mks[i]<<" ";
  }
  return 0;
}
