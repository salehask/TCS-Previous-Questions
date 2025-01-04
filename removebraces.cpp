#include<bits/stdc++.h>
using namespace std;

string solve(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]=='(' || str[i] == ')'){
            str=str.substr(0,i)+str.substr(i+1,str.length());
            i--;
        }
    }
    return str;
}
int main() {

  string input1 = "a+((b-c)+d)";
  string input2 = "(((a-b))+c)";
  
  
  cout<<"Original String: "<<input1<<endl;
  cout<<"After removing brackets: "<<solve(input1)<<endl;
  cout<<"Original String: "<<input2<<endl;
  cout<<"After removing brackets: "<<solve(input2)<<endl;
}