#include<bits/stdc++.h>
using namespace std;
int main(){
    string ans = "";
    string str="101010";
    int n = str.length();
    if(n%3 == 1){
        str=str+"00";
    }
    else if(n%3 == 2){
        str = str+"0";
    }
    n = str.length();
    for(int i=0;i<n;i+=3){
        int temp = (str[i]-'0')*4+(str[i+1]-'0')*2+(str[i+2]-'0')*1;
        ans +=(temp + '0');
    }

    cout<<ans;
}