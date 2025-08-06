#include <iostream>
#include <vector>

using namespace std;


int removeDuplicates(vector<int>& nums) {
    vector<int> uni={nums[0]};
    int j=0;
    for(int i=1;i<nums.size();i++){
        if(uni[j]<nums[i]){
            uni.push_back(nums[i]);
            j++;
        }
    }
    for(int i=0;i<uni.size();i++){
        nums[i]=uni[i];
    }
    return j+1;      
}

int main(){
    vector<int> nums={0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums)<<endl;
    return 0;
}