#include <iostream>
using namespace std;

long long fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    
    int n;
    cout << "Enter n:";
    cin >> n;

    cout << "Calculating fib(" << n << ")..." << endl;
    long long result = fib(n);
    cout << "Result: " << result << endl;

    return 0;
}
