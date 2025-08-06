#include <iostream>
#include <vector>

using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> p,n;
    int s=nums.size();
    for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            n.push_back(nums[i]);
        }else{
            p.push_back(nums[i]);
        }
    }
    nums={};

    for(int i=0;i<s/2;i++){
        nums.push_back(p[i]);
        nums.push_back(n[i]);
        
    }
    return nums;  
}

int main(){

    vector<int> nums={3,1,-2,-5,2,-4};
    vector<int> r=rearrangeArray(nums);
    for(int i=0;i<r.size();i++){
        cout<<r[i]<<" ";
    }
    return 0;
}