#include<bits/stdc++.h>
using namespace std;

void printDupli(string str){
    map<char,int> count;
    for(int i=0;i<str.length();i++){
        count[str[i]++];
    }
    for(auto it:count){
        if(auto it.second > 1){
              cout << it.first << ", count = " << it.second
                 << "\n";

        }
    }
}

int main(){
    string str="test string";
    printDupli(str);
    return 0;
}