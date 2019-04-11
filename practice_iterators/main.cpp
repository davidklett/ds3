#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iterator>

using namespace std;
using std::cout;
using std::endl;
using std::cin;
using std::list;
using std::vector;

list<int>::iterator find_gt(list<int>::iterator start, list<int>::iterator stop,int x)
{
    std::list<int>::iterator temp = start;
    while(start != stop)
    {
        if(*start > x)
            return start;
    }
    return temp;
}
int main()
{
    list<int>::iterator it;
    return 0;
}
