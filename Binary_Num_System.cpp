//Decimal to Binary
 #include <iostream>
 using namespace std;

 int BinaryNum(int num){
   int ans=0,pow=1;
     while(num>0){
     int rem=num%2;         //rem= 5%2 =1        2%2 =0        1  
     num/=2;                //num= 5/2 =2        2/2 =1        0
     ans+=(rem*pow);        //ans= 1*1 =1   +    0*10=0  +     100   = 101
     pow*=10;               //pow= 1*10 =10      100
  }
  return ans;
}
int main(){
  
  int num=5;
  cout<<"Decimal to Binary : "<<BinaryNum(num)<<endl;

  //Print bin nums 1-10..
  for(int i=1;i<=10;i++){
    cout<<BinaryNum(i)<<endl;
  }
  return 0;
}

// //Binary to Decimal
// #include <iostream>
// using namespace std;
// int binToDecimal(int num){
//   int ans=0, pow=1;

//   while(num>0){
//     int rem=num%10;
//     ans+=rem*pow;
//     num=num/10;
//     pow*=2;
//   }
//   return ans;
// }

// int main(){
//   int num=11;
//   cout<<"Decimal num:"<<binToDecimal(num)<<endl;
//   return 0;
// }