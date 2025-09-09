#include <iostream>
using namespace std;
int removeDuplicate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] != arr[j - 1])
            {
                i++;
                arr[i] = arr[j];
            }
        }
        return i + 1;
    }
}
int main()
{
    int n;
    cout << "please Enter the number" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k = removeDuplicate(arr, n);
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}