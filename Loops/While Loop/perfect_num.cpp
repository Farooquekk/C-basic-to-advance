#include <iostream>
using namespace std;

int main() {
    int N, i = 1, sum = 0;
    cout << "Enter a number: ";
    cin >> N;

    while (i <= N / 2) {
        if (N % i == 0) {
            sum += i;
        }
        i++;
    }

    if (sum == N)
        cout << N << " is a perfect number" << endl;
    else
        cout << N << " is not a perfect number" << endl;

    return 0;
}