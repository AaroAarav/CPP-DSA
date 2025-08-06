#include <iostream>
#include <vector>

using namespace std;


void moveZeroes(vector<int>& nums) {
    int n=nums.size();
    int j=-1;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            j=i;
            break;
        }
       
    }
    cout<<j<<"";
    if(j==-1){
        return;
    }
    for(int i=j+1;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
        
}

int main(){

    vector<int> nums={1,0,1};
    moveZeroes(nums);
    return 0;
}