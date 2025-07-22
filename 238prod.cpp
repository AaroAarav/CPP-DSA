#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {

    vector<int> ans(nums.size());
    vector<int> suffix(nums.size(),1);
    vector<int> prefix(nums.size(),1);

    for(int i=1;i<nums.size();i++){
        prefix[i]=nums[i-1]*prefix[i-1];

    }
    
   for (int i=nums.size()-2;i>=0;i--){
       suffix[i]=nums[i+1]*suffix[i+1];

   }
   
   for(int i=0;i<nums.size();i++){
        ans[i]=suffix[i]*prefix[i];

    }
  

    return ans;


        
}

int main(){
    vector<int> nums={1,2,3,4};
    vector<int> v= productExceptSelf(nums);

    for(int val: v){
        cout<<val<<" ";
    }


    return 0;
}