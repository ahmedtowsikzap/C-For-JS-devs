#include <iostream>
using namespace std;

int main() {
    long long int N, M;

    // Read the input values
    cin >> N >> M;

    // Extract the last digits and find their sum
    int last_digit_N = N % 10;
    int last_digit_M = M % 10;
    int sum_of_last_digits = last_digit_N + last_digit_M;

    // Print the sum
    cout << sum_of_last_digits << endl;

    return 0;
}
