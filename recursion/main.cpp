#include <iostream>

using namespace std;

int factorialFinder(int x)
{
    //base case:
    if(x == 1)
    {
        return 1;
    }else{
        return x * factorialFinder(x-1);
    }
}
int main()
{
    cout << factorialFinder(10); //worked!!
    return 0;
}
