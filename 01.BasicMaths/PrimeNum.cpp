#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Please Enter the number" << endl;
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << "Not the prime number" << endl;
        return 0;
    }

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "It is a prime number" << endl;
    }
    else
    {
        cout << "It is not a prime number" << endl;
    }

    return 0;
}