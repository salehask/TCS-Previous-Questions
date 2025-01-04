#include<bits/stdc++.h>
using namespace std;
string RemoveVowels(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            str=str.substr(0,i)+str.substr(i+1,str.length());
            i--;
        }
    }
    return str;
}
int main(){
    string str = "Take u forward";
  cout <<"String after removing the vowels \n" <<RemoveVowels(str) << endl;
  return 0;
}