#include<iostream>


using namespace std;

string removeSpace(char str[]){
    int count=0;

    for(int i=0;i<str[i];i++){
        if(str[i]!=' '){
            str[count]=str[i];
            count++;
        }

    }
     str[count]='\0';


     return str;
}

int main(){
      char str[] = "Take you forward";
  cout << removeSpace(str);

  return 0;

}