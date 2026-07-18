// #include<bits/stdc++.h>
// using namespace std;
// class student
// {
// public:
// string name;
// double cgpa;
// student(string name,double cgpa){
//     this->name=name;
//     this->cgpa=cgpa;
// }
// student(student &obj){  //copy constructor
//     cout<<"i am copy constructor ";
//     this->name=obj.name;
//     this->cgpa=obj.cgpa;
// }



// void getInfo(){
//     cout<<"name : "<<name<<endl;
//     cout<<"cgpa : "<<cgpa<<endl;
// }
// };
// int main(){
// student s1("manish",9.1);
// student s43("rakesh",8.9);
// s1.getInfo();
// s43.getInfo();
// return 0;
// }


#include<iostream>
using namespace std;

class KG{
    public :int p;
    public: int q;

    public :void setP(int input)

    {
        p=input;
        q=p/2;
    }
};
int main(){
    KG obj;
    obj.p=1;
    obj.q=5;
}















