#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



void nextPermutation(vector<int>& nums) {
    int piv=-1;
    int n=nums.size();

    for(int i=n-1;i>=0;i--){
        if(nums[i]<nums[i+1]){
            piv=i;
            break;
        }
    }
    if(piv==-1){
        reverse(nums.begin(),nums.end());
        return;
    }

    for(int i=n-1;piv<i;i--){
        if(nums[i]>nums[piv]){
            swap(nums[i],nums[piv]);
            break;
        }
    }
    reverse(nums.begin()+piv+1,nums.end());

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}

int main(){

    vector <int> nums ={1};
    nextPermutation(nums);
    return 0;
}