#include <iostream>
#include "util.h"
using namespace std;
int main()
{
    cout << "Hello World!" << endl;
    int a = 5;
    int b = 10;
    int sum = add(a, b);
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
    int difference = minusf(a, b);
    cout << "The difference of " << a << " and " << b << " is: " << difference << endl;
    int product = multiplyf(a, b);
    cout << "The product of " << a << " and " << b << " is: " << product << endl;
    return 0;
}