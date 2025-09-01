#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Please Enter the number"<<endl;
    cin>>n;
    int Sum=0;
    int dup=n;
    while(n>0){
        int lastdigit=n%10;
        Sum=Sum+(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    if(Sum==dup){
        cout<<"Yes, It is Armstrong Number"<<endl;
    }
    else{
              cout<<"No, It is Not a Armstrong Number"<<endl;
    }
}