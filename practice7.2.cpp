#include <iostream>

using namespace std;

int Fib(int n)
{
    if (n >= 2)
        return Fib(n - 1) + Fib(n - 2);
    else
        return 1;
}

int main()
{

    int k;
    cout << "Enter the number: ";
    cin >> k;

    cout << Fib(k);
}