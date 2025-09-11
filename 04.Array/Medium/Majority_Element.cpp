#include<iostream>
using namespace std;
// int Majelement(int arr[],int n){
//     for(int i=0; i<n; i++){
//         int count=0;
//         for(int j=0; j<n; j++){
//             if(arr[j]==arr[i]){
//                 count++;
//             }
      
//         }
//         if(count>n/2)return arr[i];
//     } 
// }
    int Majelement(int arr[],int n){
    int count=0;
    int el=0;
    for(int i=0; i<n; i++){
        if(count==0){
            el=arr[i];
            count=1;
        }
        else if(arr[i]=el){
            count++;
        }
        else {
        count--;
        }
    }
    int count1=0;
     for(int i=0; i<n; i++){
           if(el==arr[i]){
            count1++;
           }
            if(count1>n/2) return el;
            return -1;
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
     int ans= Majelement(arr,n);
    
        cout<<ans<<endl;
      
    return 0;
}