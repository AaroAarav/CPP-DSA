#include <iostream>
#include <vector>
using namespace std;


void sortColors(vector<int>& nums) {

    int m=0; int l=0;
    int h=nums.size()-1;

    while(m<=h){
        if(nums[m]==0){
            swap(nums[l],nums[m]);
            l++;
            m++;
        }
        else if(nums[m]==1){
            m++;
        }
        else if(nums[m]==2){
            swap(nums[h],nums[m]);
            h--;
        }
        
    }

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    
    }
        
}

int main(){
    vector<int> nums={1,2};
    sortColors(nums);

    return 0;
}