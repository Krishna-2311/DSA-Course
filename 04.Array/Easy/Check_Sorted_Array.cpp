#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Please Enter the number"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];}
        for(int i=1 ;i<n; i++){
            if(arr[i]>=arr[i-1]){
            
            }   
                else {
                    cout<<"not sorted"<<endl;
                    return 0;

        
                }
            }
            cout<<"sorted"<<endl;
                  
                  return 0;
        }
