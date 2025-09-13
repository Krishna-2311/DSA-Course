#include<iostream>
using namespace std;
int lowerbound(int arr[],int x,int n){
    int low=0; 
    int high=n-1;
    int ans=n;
    while(low<=high){
int mid=(low+high)/2;
if(arr[mid]>=x){
 ans=mid;
 high=mid-1;
}
else{
    low =mid+1;
}
    }
     return ans;
}
int main() {
    int n;
    cout<<"Please enter the number"<<endl;
    cin>>n;
    int arr[n];
    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter x"<<endl;
    cin>>x;
      int ind=lowerbound(arr,x,n);
     cout<<"The lower Bound index is"<<" "<<ind<<endl;
    return 0;
}