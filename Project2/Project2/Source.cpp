#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    int a, b,c,t1,t2;
    cin >> t1 >> t2;
    a =abs(t1);
    b =abs(t2);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    c = abs(t1 * t2) / a;
    cout << c << endl;


}