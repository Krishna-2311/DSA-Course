#include<iostream>
using namespace std;
 void Bubble_Sort(int arr[],int n){
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp; 
            }
        }
    }
 }
int main() {
    int n;
    cout<<"please Enter the number"<<endl;

    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];}
        Bubble_Sort(arr,n);
        cout<<"Bubble Sort"<<endl;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<endl;
            
        }
    
    return 0;
}