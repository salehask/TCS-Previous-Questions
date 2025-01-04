#include<bits/stdc++.h>
using namespace std;
string incele(string str){
    for(int i=0;i<str.length();i++){
    int ascii = (int)(str[i]);
    if(ascii == 90){
        str[i]= char(65);
    }
    else if(ascii == 122){
        str[i]= char(97);
    }
    else if((ascii >= 65 && ascii <90)|| (ascii >= 97 && ascii < 122)){
        str[i]= char(ascii+1);
    }
    }
    return str;
}
int main(){
  string str = "abcdxyz";
   cout<<"Original String: "<<"\n";
  cout<<str<<endl;
  cout << "New string: " << "\n";
  cout << incele(str) << "\n";
  return 0; 
}