#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    int j=nums[0];
    for(int i=1;i<nums.size();i++){
        j=j^nums[i];
    }
    return j;
}

int main(){

    vector<int> nums={2,2,1};
    cout<<singleNumber(nums)<<endl;

    return 0;
}