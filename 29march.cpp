// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> arr = {3,7,4,9,5,2};

//     int i = 0, j = arr.size() - 1;

//     while(i < j){
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }

//     for(int k = 0; k < arr.size(); k++){
//         cout << arr[k] << " ";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> reverse(vector<int> v){
//     int s=0,e=v.size()-1;
//     while(s<e){
//         swap(v[s],v[e]);
//         s++;
//         e--;

//     }
//     return v;
// }

// int main() {
//     vector<int> arr;
//     arr.push_back(7);
//     arr.push_back(4);
//     arr.push_back(6);
//     arr.push_back(8);
//     arr.push_back(9);
//     vector<int> ans=reverse(arr);
//     for(int i=0;i<=arr.size()-1;i++){
//         cout<<"the "<<i<<" element is : "<<ans[i]<<endl;
//     }
//         return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> a={3,4,5,6,7,8,11,15,19,21};
//     vector<int> b={4,7,9,11};
//     int n=a.size()+b.size();

//    vector <int> c;
//     int p=0,q=0;
//     for(int i=0;i<n;i++){

//     if(p == a.size()){
//         c.push_back(b[q]);
//         q++;
//     }
//     else if(q == b.size()){
//         c.push_back(a[p]);
//         p++;
//     }
//     else if(a[p] <= b[q]){
//         c.push_back(a[p]);
//         p++;
//     }
//     else{
//         c.push_back(b[q]);
//         q++;
//     }
// }
//      for(int l=0;l<c.size();l++){
//         cout<<c[l]<<" ";
//      }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> darray = {1,0,2,0,0,5,3,7,0,0,0,8};

    int k = 0;

    // Step 1: non-zero elements ko aage shift karo
    for(int i = 0; i < darray.size(); i++) {
        if(darray[i] != 0) {
            darray[k] = darray[i];
            k++;
        }
    }

    // Step 2: baaki jagah zero fill karo
    while(k < darray.size()) {
        darray[k] = 0;
        k++;
    }

    // Output
    for(int x : darray) {
        cout << x << " ";
    }

    return 0;
}