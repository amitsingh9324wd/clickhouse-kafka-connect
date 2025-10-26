
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 8, 9, 11};

    int target = 8;
  
    
    if (binary_search(v.begin(), v.end(), target)) {
      
        
        cout << target << " found.";
    } else {
      
 
        cout << target << " NOT found.";
    }
    return 0;
}
