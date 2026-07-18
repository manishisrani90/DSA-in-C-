#include<bits/stdc++.h>
using namespace std;
class student {
    public:
    string rollno;
int marks;
char grade;

};
int main(){
student deepak;
    deepak.rollno="33";
deepak.marks=50;
deepak.grade='A';

student manish;
manish.marks=45;
manish.grade='B';
manish.rollno="38";

cout<<deepak.rollno;
return 0;
}