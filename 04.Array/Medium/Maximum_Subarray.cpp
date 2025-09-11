#include<iostream>
#include<climits>
using namespace std;
long long Maxsubarray(int arr[], int n){
    long long sum=0; long long maxi=LLONG_MIN;
     for(int i=0; i<n; i++){
         sum+=arr[i];
         if(sum>maxi){
            maxi=sum;
         }
          if(sum<0){
            sum=0;
          }
     }
     return maxi;
}
int main() {
    int n; 
    cout<<"Please enter the number"<<endl;
    cin>>n;
     int arr[n];
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
     int max= Maxsubarray(arr,n);
     cout<<max<<endl;
    return 0;
}