#include <iostream>
using namespace std;
// <------------------------------------BruteForce---------------------------->TC-->O(2n)
// int main() {
//     int n;
//     cout<<"Please the enter the number"<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//         int largest=arr[0];
//         for(int i=0;i<n;i++){
//             if(arr[i]>largest){
//                 largest=arr[i];
//             }
//         }

//         int slargest=-1;
//         for(int i=0; i<n; i++){
//             if(arr[i]>slargest && arr[i]!=largest){
//                 slargest=arr[i];
//             }
//         }
//         cout<<"The second largest number in your given array is "<<""<<slargest<<endl;
//     return 0;

// }

// < -- -- -- -- -- -- -- -- -Optimal-- -- -- -- -- -- -- -- --->
int main()
{
    int n;
    cout << "PLease Enter the number" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largest = arr[0];
    int slargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    cout << "The Second largest Number is" << endl;

    return 0;
}