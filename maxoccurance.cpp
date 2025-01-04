#include <bits/stdc++.h>
using namespace std;
void nonRepeating(string &str, int freq[200]) {
      int maxi =0;
      char ans;
      for(int i=0;i<str.length();i++){
        if(str[i]!= ' '){
          freq[str[i]]++;
        if(freq[str[i]] > maxi){
          maxi= freq[str[i]];
          ans = str[i];
        }

        }
        
      }
      cout<<ans<<endl;
      cout<<"Hi"<<endl;
       
}
  

int main() {
  string st = "saleha";
  int freq[200] = {0}; // Frequency array initialized to 0
 
cout << "Non-Repeating characters: ";
 nonRepeating(st, freq);
  return 0;
}
