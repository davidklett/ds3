#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    std::map<int, vector<std::string>> myMap;
    vector<string> hello{"hi", "well"};
    vector<string> wellDone{"streak", "eggs"};
    myMap.insert(std::pair<int, vector<string> >(4, hello ));
    myMap.insert(std::pair<int, vector<string> >(4, wellDone));

    int x = 56500;
    int range = x/10000;
    cout << range << endl;
    range = range * 10000;
    cout << range;
}
