#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    map<int, int> mpp;
    int maxs= 0;
    int curr= 0;
    int prev = INT_MIN;

    for (int num : nums) {
        mpp[num]++;
    }

    for (auto it : mpp) {
        if (prev == INT_MIN || it.first == prev + 1) {
            curr++;
        } else {
            curr= 1;
        }
        maxs= max(maxs, curr);
        prev = it.first;
    }
    cout<<maxs<<" ";
    return maxs;
}


int main(){
    vector<int> nums={100,4,200,1,3,2};
    longestConsecutive(nums);
    return 0;
}