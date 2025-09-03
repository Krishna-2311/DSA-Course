#include<iostream>
using namespace std;
int fun(int n){
    if(n<=1){ return n;}
    int last =fun(n-1);
    int slast=fun (n-2);
    return last+slast;

    
}
int main() {
    int n;
     cout << " Please Enter the number"<<endl;
     cin>>n;
      int ans = fun(n);
      cout <<"The Answer is"<<ans <<endl;
    return 0;
}