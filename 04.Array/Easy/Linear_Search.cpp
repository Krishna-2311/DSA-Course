#include<iostream>
using namespace std;
int LinearSearch( int arr[],int n, int num){
    for(int i=0; i<n; i++){
       if(arr[i]==num){
    
        return i;
    
       }
    }
    return -1;
}

int main() {
    int n;
     cout<<"Please Enter the number"<<endl;
     cin>>n;
     int arr[n];
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
     int num;
     cout<<"Number you want to find"<<endl;
     cin>>num;
     int ans =LinearSearch(arr,n,num);
     cout<<" Element found at index"<<" "<<ans<<endl;

    return 0;
}
