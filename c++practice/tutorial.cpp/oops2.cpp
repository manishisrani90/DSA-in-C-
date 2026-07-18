 #include<bits/stdc++.h>
 using namespace std;
class Teacher{
    private:
    double Salary;

    public:
    // non-parameterized constructor

    // Teacher(){
    //     dept = "Computer Science ";
    // }

    //copy constructor
    Teacher(Teacher &orgObj){  //pass by refrence
        cout<<"i am custom copy constrc... ";
this->name= orgObj.name;
this->dept= orgObj.dept;
this->subject=orgObj.subject;
this->Salary=orgObj.Salary;
    }

  // parameterized constructor
//   ye jo line no 41-44 me tumne alag alag naam assign kiye he vo yahi kr skte ho parameter me 
string name;
    string dept;
    string subject;
    Teacher(string name,string dept,string subject,double salary){
        // agar ye parameters ke naam short me nhi rkhna chahte ho,pura pura naam rkhna chahte ho 
        this->name=name;
        this->dept = dept;
        this->subject=subject;
        this->Salary = salary;
    }
    
    double Sal;

    void changeDept(string newDept){
        dept = newDept;
    }
//    void setSalary(double s){
//         Salary = s;
//     }
//     // getter 
//     double getSalary(){
//         return Salary;
    
//     }  // setter
void getInfo(){
    cout<<"name : "<<name<<endl;
    cout<<"subject : "<<subject<<endl;
    cout<<"dept : "<<dept<<endl;
    cout<<"salary : "<<Salary<<endl;
   
}   
};




 int main(){





 Teacher a1("teena","cs","maths",25000);
//  Teacher a2;
//  a1.name = "teena.j ";
//  a1.subject = "maths";
// //  a1.dept ="computer science";
//  a1.setSalary(20000);

//  cout<<a1.dept<<endl;
//  cout<<a1.getSalary()<<endl;
Teacher a2(a1);  //default copy constructor
a2.getInfo();
 return 0;
 }