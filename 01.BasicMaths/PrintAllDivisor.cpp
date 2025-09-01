#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Please Enter the Number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
}