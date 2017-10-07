#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


       int main()

       {      const int MaxPerimeter = 3000;
         const int NoSolution   =   -1;
      vector<int> cache(MaxPerimeter + 1, NoSolution);
   for (int a = 1; a < MaxPerimeter; a++)

           for (int b = a + 1; b < MaxPerimeter - a; b++)

           {

         

             int c2 = a*a + b*b;

         

             int c = sqrt(c2);

          

             if (c*c != c2)

               continue;

        

         

             int sum = a + b + c;

             if (sum > MaxPerimeter)

               break;


             if (cache[sum] < a*b*c)

               cache[sum] = a*b*c;

           }

        

         unsigned int tests;

        cin >> tests;

         while (tests--)

         {

           unsigned int n;

          cin >> n;

    cout << cache[n] << endl;

         }

         return 0;

       }


