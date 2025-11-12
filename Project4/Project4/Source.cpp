#include <iostream>
#include <limits> 

using namespace std;

unsigned long long int fibonacci(unsigned int n)
{
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    unsigned long long int prev2 = 0;
    unsigned long long int prev1 = 1;
    unsigned long long int current = 0;

    for (unsigned int i = 2; i <= n; ++i) 
    {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}

int main() 
{
    int g;
    cin >> g;
    cout <<fibonacci(g) << endl;
    int max_n = 0;
    unsigned long long int a = 0;
    unsigned long long int b = 1;
    unsigned long long int next_fib = 0;
    unsigned long long int ULL_MAX = numeric_limits<unsigned long long int>::max();

    for (unsigned int n = 2; ; ++n) 
    {
        
        if (b > ULL_MAX - a) {
            max_n = n - 1;
            break;
        }

        next_fib = a + b;
        a = b;
        b = next_fib;
        if (n == numeric_limits<unsigned int>::max())
        {
            max_n = n;
            break;
        }
    }
    cout << "The largest safe Fibonacci number is F(" << max_n << ")." << endl;
    cout << "F(" << max_n << ") = " << fibonacci(max_n) << endl;

    return 0;
}