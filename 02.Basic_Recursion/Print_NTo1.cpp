#include<iostream>
using namespace std;
void fun(int i,int n){
if(i<1){
    return;
}
else{
    cout<<i<<endl;
}
fun(i-1,n);

}
int main() {
    int n;
    cout<<"Please Enter the Number"<<endl;
    cin>>n;
    fun(n,n);
    return 0;
}