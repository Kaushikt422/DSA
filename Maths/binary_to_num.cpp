#include <bits/stdc++.h>
using namespace std;

bool is_binary(int num)
{
    while (num > 0)
    {
        int digit = num % 10;

        if (digit != 0 && digit != 1)
        {
            return false;
        }
        num = num / 10;
    }
    return true;
}

int convert_binary_to_number(int num)
{
    int sum = 0;
    int pow = 1;
    while (num > 0)
    {
        int rem = num % 10;
        num = num / 10;
        sum = sum + (rem * pow);
        pow = pow * 2;
    }
    return sum;
}

int main()
{
    long long num;
    cin >> num;

    if (is_binary(num) == true)
    {

        cout << convert_binary_to_number(num) << endl;
    }
    else
    {
        cout << "invalid number plz enter binary digits ";
    }

    return 0;
}