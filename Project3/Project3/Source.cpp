#include <iostream>
using namespace std;
int power(int base1, int exponent1)
{
    if (exponent1 == 1) 
    {
        return base1;
    }
    return base1 * power(base1, exponent1 - 1);
}
int main() 
{
    int base1;
    int exponent1;
    cin >> base1 >> exponent1;
    cout <<  power(base1 , exponent1) << endl;
}