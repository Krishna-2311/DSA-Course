#include<iostream>
#include<string>
using namespace std;
// <--------BruteForce--------->
string twosum(int arr[],int n,int t){
    for(int i=0;i <n; i++){
        for(int j=i+1; j<n;i++){
            if(arr[i]+arr[j]==t) {
                  return "yes";
            }
            
        }
    }

    return "no";
}
  
int main() {
    int n;
    cout<<"Please Enter the number"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"target"<<endl;
    cin>>target;
    string ans=twosum(arr,n,target);
    cout<<ans<<endl;
    return 0;
}