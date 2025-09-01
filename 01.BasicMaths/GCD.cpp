#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    int b;
    cout<< " Enter the  value of b"<<endl;
    cin>>b;
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0){
        cout <<"The GCD is"<<" " <<b<<endl;
    }
    else
    { cout <<"The GCD is" <<" "<<a<<endl;}
    return 0;
}