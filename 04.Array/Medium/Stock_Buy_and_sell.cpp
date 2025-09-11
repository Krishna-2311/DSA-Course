#include<iostream>
#include<climits>
using namespace std;
int Maxprofit(int arr[],int n){
    int maxpro=0;
    int minprice= INT_MAX;
    for(int i=0; i<n; i++){
        minprice=min(minprice,arr[i]);
        maxpro=max(maxpro,arr[i]-minprice);
    }
    return maxpro;
}
int main() {
    int n;
     cout<<"Please enter the number"<<endl;
     cin>>n;
     int arr[n];
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
      int maxPro=Maxprofit(arr,n);
       cout<<maxPro<<endl;
    return 0; 
}