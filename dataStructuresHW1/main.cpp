// David Klett 2/8/2019
// Data Structures HW 1
// Problem 2
#include <iostream>

using namespace std;

int countTheOnes(int n)
{
    //base case
    if(n == 0)
    {
        return 0; //returns 0
    }
    else
    {   //returns the bitwise AND operation of n & 1 plus a recursive call of n right-shifted 1
        return (n & 1) + countTheOnes(n >> 1);
    }
}
int main()
{
    cout << countTheOnes(9);

    return 0;
}
