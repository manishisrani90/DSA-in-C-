#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> nums={324,819,523,911,711};
   for(int j=0;j<nums.size();j++){


// it will count the number of digits in the specific number
   int count_digit_term=0;
   for(int i=0;i<nums.size();i++){
    if(nums[i]%10!=0){
        count_digit_term++;
    }
    else{
        break;
    }
int max=0;
int min=0;
for(int l=0;l<=count_digit_term;i++){
// nums[l%10>max]{
// }
if(nums[l]%10>max){
    max=nums[l];
}

}
for(int l=0;l<=count_digit_term;i++){
// nums[l%10>max]{
// }
if(nums[l]%10<=min){
    min=nums[l];

}

}
int digit_range=max-min;


}}
    return 0;
}