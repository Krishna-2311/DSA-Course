#include<iostream>
using namespace std;
void fun( int arr[],int l, int r){
    if(l>=r){
        return;
    }
    
        swap(arr[l],arr[r]);
    
    fun( arr,l+1,r-1);
}
int main() {
    int n;
    cout<<"please Enter the number"<<endl;
    cin>>n;

    int arr[n];
    cout <<n <<endl;
    for( int i=0 ; i<n;i++){
    cin>>arr[i];}
 fun(arr,0,n -1);
 cout<< "reversed array"<<endl;
 for (int i=0 ; i<n; i++){
    cout<<arr[i]<<endl;
 }
 

    return 0;
}