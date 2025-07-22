#include <iostream>
#include <vector>

using namespace std;
int main(){
     vector<int> v={1,1,1,1,2,5,2,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,3,3,3,1};
     int n=v.size();
     int freq=0;
     int ans=v[0];
     for (int val: v){
          if (freq==0){
               ans=val;
          }
          if (ans==val){
               freq++;
          }
          else{
               freq--;
          }
     }
     cout<<ans<<endl;

     return 0;
}