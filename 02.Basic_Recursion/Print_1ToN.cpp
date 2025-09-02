#include<iostream>
using namespace std;
void fun(int i, int n){
    if(i>n){
        return;
    }
    else{
        cout<<i<<endl;
    }
    fun(i+1,n);
}
int main() {
    int n;
    cout<<"Please enter the Number"<<endl;
    cin>>n;
    fun(1,n);
    return 0;
}