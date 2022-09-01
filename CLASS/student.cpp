#include<iostream>
#include <cstring>
#include<string>
using namespace std;

class Student{
    private:
    int roll_no;
    char name[26];
    int marks[3];
    int total(void);
    
    public: 
    void set_data(int r, char *n, int m1, int m2, int m3);
    void display_data(){
            cout<<"\n Student 's Details";
            cout<<"\n Roll Number:"<<roll_no;
            cout<<"\n Name:"<<name;
            cout<<"\n Marks:"<<total();
    }
};

inline void Student :: set_data(int r,char *n, int m1,int m2, int m3){
    roll_no=r;
    strcpy(name,n);
    marks[0]=m1,marks[1]=m2,marks[2]=m3;
}
int Student :: total(){
    int sum=0;
    for(int i=0;i<3;i++)
    sum+=marks[i];
    return sum;
}

int main(){
    Student s1;
    int r,m1,m2,m3;
    char n[20];
    cout<<"\n Enter the name :";
    cin.ignore();
    cin.getline(n,20);
    cout<<"\n Enter the marks in 3 subjects:";
    cin>>m1>>m2>>m3;
    s1.set_data(r,n,m1,m2,m3);
    s1.display_data();

}