#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;


int maxFrequency(vector<int>& nums, int k) {
    unordered_map<int,long> mpp;
    
    auto maxIt = std::max_element(nums.begin(), nums.end());
   
    for(long i=0;i<nums.size();i++){
        long s=nums[i];
        for(long j=0;j<=k;j++){
            if((s+j)<=*maxIt){
                mpp[(s+j)]++;
            }
            
            
        }
    }
    long maxVal = INT_MIN;
    long maxKey;
     for (const auto& pair : mpp) {
        if (pair.second > maxVal) {
            maxVal = pair.second;
            maxKey = pair.first;
        }
    }
    
        cout<<maxKey<<endl;
        cout<<maxVal<<endl;
    
    return 0;
}


int main(){
    vector<int> nums={1,2,4};
    int k=5;
    cout<<maxFrequency(nums,k)<<endl;
    return 0;
}