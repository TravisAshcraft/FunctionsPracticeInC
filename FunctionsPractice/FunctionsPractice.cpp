// FunctionsPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int IsItPrime(int x);
void CheckTwoIntegersPrimeNumbers(int i, int j);
int CheckPrimeNumber(int n);
void PascalTriangle(int x);
int n = 0;

int main()
{
    int j;
    int x, n;
    int i;

    cout << "Enter a whole number to see if it is prime" << endl;
    cin >> j;
    IsItPrime(j);

    cout << "Enter two integers." << endl;
    cin >> x >> n;
    CheckTwoIntegersPrimeNumbers(x, n);

    cout << "\nEnter a number of rows" << endl;
    cin >> i;
    PascalTriangle(i);
}

//Problem 1: Write a function that takes in an integer and returns true if the integer is a prime number.
int IsItPrime(int x)
{
    for (int i = 2; i <= x / 2; ++i)
    {
        if (x % i == 0) {
            n = 1;
            break;
        }
    }

    if (x == 1)
    {
        cout << " 1 is a composite number" << endl;
    }
    else if (n == 0)
    {
        cout << "This is a prime number."<< endl;
    }
    else {
        cout << "This is not a prime number."<< endl;
    }

    return n;
}


//Problem 2 : Write a function to find all prime numbers between two intervals.
//Eg.
//Input lower limit : 10
//Input upper limit : 50
//Output prime numbers between 10 - 50 are : 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47

void CheckTwoIntegersPrimeNumbers(int n, int j)
{
    bool flag; 

    //swap the two number 

    if (n > j)
    {
       j = n + j;
       n = j - n;
       j = j - n;
    }

    for (int i = n + 1; i < j; ++i)
    {
        flag = CheckPrimeNumber(i);

        if (flag)
        {
            cout << i << " ";
        }
    }

   

}

int CheckPrimeNumber(int n) {
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (int j = 2; j <= n / 2; ++j) {
            if (n % j == 0) {
                isPrime = false;
                break;
            }
        }
    }

    return isPrime;
}
//Problem 3 : Write a program to print pascal triangle up to n rows.

//Info about pascal triangles : Pascal Triangles

//For example Pascal triangle with 5 rows.
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

void PascalTriangle(int rows)
{
    int i, space, k = 0;

    for (i = 1; i <= rows; ++i, k = 0) {
        for (space = 1; space <= rows - i; ++space) {
            printf("  ");
        }
        while (k != 2 * i - 1) {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
}