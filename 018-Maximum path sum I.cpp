#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()

       {

       unsigned int tests = 1;
   //    #ifndef ORIGINAL
       cin >> tests;
     //  #endif
       while (tests--)
    {
   unsigned int numRows = 15;
   
cin >> numRows;
 //#endif
vector<unsigned int> last(1);

cin >> last[0];

           for (unsigned int row = 1; row < numRows; row++)    {
             unsigned int numElements = row + 1;
             vector<unsigned int> current;

             for (unsigned int column = 0; column < numElements; column++)
   {
   unsigned int x;
   cin >> x;
   unsigned int leftParent = 0;
   if (column > 0)
   leftParent = last[column - 1];

               unsigned int rightParent = 0;
               if (column < last.size())
               rightParent = last[column];
               unsigned int sum = x + max(leftParent, rightParent);
               current.push_back(sum);       }
               last = current;  }
               cout << *std::max_element(last.begin(), last.end()) << std::endl;

         }
                 return 0;    }

   

