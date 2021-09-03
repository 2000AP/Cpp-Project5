//*********************** Program to check sum of two prime number **********************************

#include <iostream>
using namespace std;

//function to check number is prime number
int prime(int n)
{
    int isPrime = 1;
    if (n == 0 || n == 1) //as 0 and 1 are not prime number
    {
        isPrime = 0;
    }
    else
    {
        for (int i = 2; i < n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    return isPrime;
}

int main()
{
    int n, flag = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
    {
        if (prime(i) == 1) //used to check weather "i" is prime number or not
        {
            if (prime(n - i) == 1) //used to check weather "n-i" is prime number or not
            {
                cout << n << " = " << i << " + " << n - i << endl;
                flag = 1;
            }
        }
    }
    if (flag = 0)
    {
        cout << n << " it cannot be expressed as sum of two prime number." << endl;
    }

    return 0;
}
