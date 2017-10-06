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

typedef long long ll;
using namespace std;
int main(){
    int t;
    ll ans,x,y,z,n;
    cin>>t;
    while(t--){
      cin>>n;
      n-=1;
      x=n/3;
      y=n/5;
      z=n/15;
      x=(x*(x+1))>>1;
      y=(y*(y+1))>>1;
      z=(z*(z+1))>>1;
      x*=3;
      y*=5;
      z*=15;
      cout<<x+y-z<<endl;  
    }  
    
    return 0;
}

