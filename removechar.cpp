#include<bits/stdc++.h>
using namespace std;

string solve(string str , int n){
    string ans;
    for(int i=0;i<str.length();i++){
        int ascii = (int)str[i];
       if(ascii >=65 && ascii <=90 || ascii >=97 && ascii <= 122){
        ans.push_back(str[i]);

       }
    }
    return ans;
}


int main() {

  // Input string
  string str = "take12% *&u ^$#forward";
  int n = str.length();

  cout << "Resultant string:" << "\n";
  cout << solve(str, n) << "\n";
  return 0;
}