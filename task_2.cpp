#include <iostream>

using namespace std;

int lastDigit(int n)
{
    return n % 10;
}

int secondLastDigit(int n)
{
    int secondLastDig = ((n % 100) - lastDigit(n)) / 10;

    return secondLastDig;
}

int findSumOfLastDigit(int n)
{
    int sum = secondLastDigit(n) + lastDigit(n);

    return sum;
}

int main()
{
    int number;

    cin >> number;

    cout << findSumOfLastDigit(number) << endl;
}