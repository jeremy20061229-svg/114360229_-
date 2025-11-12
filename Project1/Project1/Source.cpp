#include <iostream>
#include <cctype> 
using namespace std;
int main() {
    char a;
    cin >> a;
    char b;
    if ('a' >= 90)
    {
         b = tolower(a);
    }
    else
    {
        b = toupper(a);
    }
    cout << b;
    
}