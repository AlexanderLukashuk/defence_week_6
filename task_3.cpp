#include <iostream>

using namespace std;

bool isOddOrEven(int sum)
{
    if (sum % 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int findSumOfLine(int arr[][4], int size)
{
    int row_sum = 0;
    int row_index;

    for (int i = 0; i < size; i++)
    {
        int temp;
        for (int j = 0; j < size; j++)
        {
            temp += arr[i][j];
        }

        if (isOddOrEven(temp))
        {
            if (temp > row_sum)
            {
                row_sum = temp;
                row_index = i;
            }
        }

    }

    return row_index;
}


int main()
{
    int size;

    int arr[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << findSumOfLine(arr, size) << endl;
}