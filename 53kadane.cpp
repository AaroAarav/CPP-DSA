#include <iostream>
#include <vector>

using namespace std;


int maxSubArray(vector<int>& nums) {
    int sum=INT_MIN,csum=0;
    for(int i=0;i<nums.size();i++){
        csum+=nums[i];
        sum=max(sum,csum);
        if(csum<0){
            csum=0;
        }
    }
}

int main(){
    return 0;
}