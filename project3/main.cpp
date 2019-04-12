#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>

#include "heapsort.h"
#include "insertsort.h"
#include "mergesort.h"
#include "quicksort.h"

using namespace std;

int main()
{
    vector <int> a{2, 3, 5, 2, 3, 5, 2, 8, 9, 23, 55 , 43, 32};
    string fileName;
    cout << "Please enter the file name: ";
    cin >> fileName;

    string line;
      ifstream myfile (fileName);
      int countV = 0;

      if (myfile.is_open())
      {
        //Iterate through vector:
        while ( getline (myfile,line) )
        {
          //adjList.push_back(mtLst);

                std::istringstream is( line );
                //int x;
                //populate the linked-list!
               a[countV] = stoi(line);

          countV++;
        }
        myfile.close();
      }

      else cout << "Unable to open file";


    cout << a[1];
    heapsort(a);
    cout << a[1];
    return 0;
}
