#include<bits/stdc++.h>
using namespace std;
string  removeDuplicateLetters(string str){
    vector<bool> visited(26,false);
    string ans = "";

    for(int i=0;i<str.length();i++){
        if(str[i] != ' '){
            if(visited[str[i]-'a'] == false){
                ans += str[i];
                visited[str[i]-'a'] = true;
            }
        }
    }
    return ans;
    
}


int main() {
  string str = "cbacdcbc";
  cout << "Original String: "<<str<<endl<<"After removing duplicates: "
  <<removeDuplicateLetters(str) << endl;
  return 0;
}