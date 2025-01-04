#include <bits/stdc++.h>
using namespace std;
string maxword(string str){
    int i=0;int j=0;
    int max_start=0;
    int max_length=0;
    string maxword1="";
    while(j < str.length()){
        if(j < str.length() && str[j] != ' '){
            j++;
        }
        else{
            int current = j-i;
            if(max_length < current){
                max_length= current;
                max_start= i;
            }
            j++;
        i=j;
        }
        

    }
    maxword1 = str.substr(max_start,max_length);
    return maxword1;
}
int main(){
    string str = "Google docs";
    cout<<maxword(str)<<endl;
    return 0;
}