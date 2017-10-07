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

unsigned int makePalindrome(unsigned int x)

       {
         unsigned int result = x * 1000;   
         result +=    x / 100;             
         result +=  ((x / 10) % 10) *  10; 
         result +=   (x % 10)       * 100; 

         return result;

       } int main()

       {

         unsigned int tests;

        cin >> tests;

         while (tests--)
         {
           unsigned int maximum;
           cin >> maximum;
           bool found = false;

           for (auto upper3 = maximum / 1000; upper3 >= 100 && !found; upper3--)

           {

             auto palindrome = makePalindrome(upper3);

             if (palindrome >= maximum)

               continue;

             for (unsigned int i = 100; i * i <= palindrome; i++)

               if (palindrome % i == 0) 

               {
                 auto other = palindrome / i;

                 if (other < 100 || other > 999)

                   continue;

        

                 cout << palindrome << endl;

                 found = true;

                 break;

               }

           }

         }

         return 0;

       }
