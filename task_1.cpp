#include <iostream>

using namespace std;

int Reverse(int num)
{
    int reverse_num = 0;
    int temp;

    while (num > 0)
    {
        temp = num % 10;
        reverse_num = (reverse_num + temp) * 10;
        num /= 10;
    }

    reverse_num /= 10;

    return reverse_num;
}

int main()
{
    int number;

    cin >> number;

    cout << Reverse(number) << endl;
}