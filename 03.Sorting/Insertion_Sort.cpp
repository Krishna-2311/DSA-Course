#include<iostream>
using namespace std;
 void Insertion_Sort(int arr[],int n){
for(int i=0; i<=n; i++){
    int j=i;

while (j>0 && arr[j-1]>arr[j]){
    int temp= arr[j-1];
    arr[j-1]=arr[j];
    arr[j]= temp;
    j--;
}
}
}
int main() {
    int n;
    cout<<"Please Enter the number"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Insertion_Sort(arr ,n);
    cout<<"Insertion Sort"<<endl;
    for(int i=0; i<n; i++){
        cout <<arr[i]<<endl;
    }
    return 0;
}