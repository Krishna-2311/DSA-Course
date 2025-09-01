#include <iostream>
using namespace std;

int countdigit(int n) {
    if (n == 0) return 1;
    if (n < 0) n = -n;

    int count = 0;
    while (n > 0) {
        count++;
        n = n / 10;
    }
    return count;
}

int main() {
    int num;
    cin >> num;
    cout << "Digits " << countdigit(num) << endl;
}
