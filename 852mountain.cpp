#include <iostream>
#include <vector>
using namespace std;


int peakIndexInMountainArray(vector<int>& arr) {
    int st=1;
    int end=arr.size()-2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]>=arr[mid+1] && arr[mid]>=arr[mid-1]){
            return mid;
        }
        if(arr[mid]>=arr[mid+1] && arr[mid]<=arr[mid-1]){
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return -1;        
}

int main(){

    vector<int> arr={0,11,10,5,2};
    int r= peakIndexInMountainArray(arr);
    cout<<r<<endl;
    return 0;
}