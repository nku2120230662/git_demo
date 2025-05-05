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
}