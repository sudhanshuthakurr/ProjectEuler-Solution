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
    // greatest common divisor
       unsigned long long gcd(unsigned long long a, unsigned long long b){

         while (a != 0)
{
           unsigned long long c = a;
           a = b % a;
           b = c;
         }

         return b;

       }


       unsigned long long lcm(unsigned long long a, unsigned long long b)
  {
return a * (b / gcd(a, b));       }

          int main()
       {
         unsigned int tests;
         cin >> tests;
         while (tests--)
         {unsigned int x;
             cin >> x;
            unsigned long long result = 1;
           for (unsigned int i = 2; i <= x; i++)
               result = lcm(result, i);
          cout << result <<endl;
         }
return 0;}


