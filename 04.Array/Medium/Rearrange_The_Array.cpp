#include<iostream>
using namespace std;
 void rearrange(int arr[],int n){
    int ans[n];
    int negIndex=1;
    int posIndex=0;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            ans[negIndex]=arr[i];
            negIndex+=2;
        }
        else{
               ans[posIndex]=arr[i];
            posIndex+=2;
        }
         
    
    for (int i = 0; i < n; i++) arr[i] = ans[i];
    }
    
}
int main() {
    int n;
     cout<<" Please Enter the number"<<endl;
     cin>>n; 
     int arr[n];
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
      rearrange(arr,n) ;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<endl;
        }
      }
      
    
