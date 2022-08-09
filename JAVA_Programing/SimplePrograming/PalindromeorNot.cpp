#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int y=0;
    while(n>0){
        int digit=n%10;
        y=y*10+digit;
        n=n/10;
    }
    return y;
}
int main(){
    int X = 121;
   int dummy = X;
   int Y = reverse(X);
   if (dummy == Y) {
      cout << "Palindrome Number" << endl;
   } else {
      cout << "Not Palindrome Number" << endl;
   }
   return 0;

}