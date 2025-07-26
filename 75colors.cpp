#include <iostream>
#include <vector>
using namespace std;


void sortColors(vector<int>& nums) {
    int count2=0;
    int count1=0;
    int count0=0;

    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            count0++;
        }
        if(nums[i]==1){
            count1++;
        }
        if(nums[i]==2){
            count2++;
        }
    }

    count1+=count0;
    count2+=count1;

    for(int i=0;i<nums.size();i++){
        if(i<count0){
            nums[i]=0;
        }
        if(i>=count0 && i<count1){
            nums[i]=1;
        }
        if(i>=count1 && i<count2){
            nums[i]=2;
        }
    }

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    
    }
        
}

int main(){
    vector<int> nums={2,0,2,1,1,0};
    sortColors(nums);

    return 0;
}