// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 0;
//     int b = 1;
//     int c = a + b;
//     int n;
//     cout << "enter value of n";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         c = a + b;
//         a = b;
//         b = c;

//         cout << c << " ";
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// float vol,surfaceArea,r;
// cout<<"enter the radius ";
// cin>>r;
// surfaceArea=(1.33)*(3.14)*(r*r);
// cout<<"the surface area of sphere is "<<surfaceArea;
// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
int units,bill,c,d;
cout<<"enter the units : ";
cin>>units;
if(units<=200)
{
    bill=units*3.5;
}
else if((units>=200) && (units<=400))
bill=200*(3.5)+(units-200)*5;

else if(units>400){
    bill=200*3.5+200*5+(units-400)*7.5;
}
cout<<bill;

return 0;
}