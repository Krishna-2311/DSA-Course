#include <iostream>
using namespace std;
void fun(int i, int sum)
{
    if (i < 1)
    {
        cout << "Final Sum" <<sum << endl;
        return;
    }
    fun(i - 1, sum + i);
}

int main()
{
    int n;
    cout << "Please Enter the number" << endl;
    cin >> n;
    fun(n, 0);

    return 0;
}