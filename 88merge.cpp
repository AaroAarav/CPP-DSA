#include <iostream>
#include <vector>
using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int idx=m+n-1;
    int i=m-1;
    int j=n-1;
    int mx;
    while(i>=0 && j>=0){
        if(nums1[i]>=nums2[j]){
            nums1[idx--]=nums1[i--];
        }else{
            nums1[idx--]=nums2[j--];
        }
    }
    while(j>=0){
        nums1[idx--]=nums2[j--];
    }
    for(int l=0;l<nums1.size();l++){
        cout<<nums1[l]<<" ";
    }
    
        
}

int main(){
    vector<int> a={1,2,3,0,0,0};
    vector<int> b={2,5,6};
    merge(a,3,b,3);    
    return 0;
}