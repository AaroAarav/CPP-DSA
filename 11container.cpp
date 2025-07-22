#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height){
    int mx = INT_MIN;
    int n = height.size();
    int area;
    int l=0;
    int r=n-1;
    while(l<r){
        int w=abs(l-r);
        area=w*min( height[l], height[r]);
        height[l]<height[r]?l++:r--;
        mx=max(mx,area);

    }
    return mx;
}

int main(){
    vector<int> h ={1,8,6,2,5,4,8,3,7};

    cout<<maxArea(h)<<endl;
    return 0;
}