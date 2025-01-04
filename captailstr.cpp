#include <iostream>
#include <string>
using namespace std;

void Capitalize(string &str) {
    int size = str.length();

    for (int i = 0; i < size; i++) {
        if(i == 0 )str[0]= toupper(str[0]);
        if ( str[i] == ' ') {
            if (islower(str[i+1 || str[i-1]])) {
                str[i+1] = toupper(str[i+1]);
                str[i-1] = toupper(str[i-1]);
            }
        }
        if (i == size - 1 ) {
            if (islower(str[i])) {
                str[i] = toupper(str[i]);
            }
        }
    }

   
    cout << str << endl;
}

int main() {
   
    string str1 = "take u forward is awesome";
    Capitalize(str1);
    string str2 = "allah is mercy";
    Capitalize(str2);  
    return 0;
}
