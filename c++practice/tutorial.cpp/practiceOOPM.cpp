// #include <bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//     string name;
//     int age;

//     void display(){
//         cout<<"the name of the student is"<<name;
//     }
// };
// int main() {
//     Student rama;
//     rama.name=" ramaeish ";
//     rama.age=30;
//     rama.display();
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// class Employee{
//     public:
//     string name;
//     int id;
//     int age;

//     void setdata(string c,int a,int b){
// name=c;
// id=a;
// age=b;
//     }
//     void getData(){
//         cout<<"the name of employee is "<<name<<"his id"<<id<< " and "
//  <<" age is "<<age;   }
// }nokar;
// int main() {
//     nokar.setdata("rakesh",3,21);
//     nokar.getData();

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Circle{
//     public:
//     float radius;
//     float area(){
//         return 3.14*radius*radius;
//     }
// };
// int main() {
//     Circle c1;
//     c1.radius=5;
//     cout<<"area is "<<c1.area()<<endl;
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class areaofcube{
//     public:
//     int a,b,c;
//     void setData(int p,int q,int r){
//         a=p;
//         b=q;
//         c=r;
//     }
//     void getArea(){
//         cout<<"the area of cube is "<<6*a*a;
//     }
// }c1;
// int main() {
//    c1.setData(10,0,0);
//    c1.getArea(); 
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    //Constructor
Person(string n){
    name=n;
    cout<<name<<" object created "<<endl;
}
~Person(){
    cout<<name<<" object destroyed "<<endl;
}
};
int main() {
    Person p1("Manish");
    return 0;
}

















