#include <iostream>
#include <vector>

using namespace std;
int tottime(vector<int> &a,int b){
    int total = 0;
    int endTime = 0;

    for (int t : a) {
        if (t >= endTime) {
            
            total += b;
        } else {

            total += (t + b) - endTime;
        }
        endTime = t + b;
    }

    return total;
}

int main(){

    vector<int> a={3,5,7};
    int b=3;
    cout<<tottime(a,b)<<endl;
    return 0;
}