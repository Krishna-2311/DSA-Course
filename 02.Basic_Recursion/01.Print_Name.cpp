#include<iostream>
using namespace std;
void fun(int i, int n){
if(i>n){
    return;
}
else {
    cout<<"Ramesh"<<endl;
}
fun(i+1,n);
}
int main() {
    int n;
    cout<<"Please Enter the Number"<<endl;
    cin>>n;
    
     fun(1,n);

    return 0;
}