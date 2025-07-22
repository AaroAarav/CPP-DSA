#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices){
    int maxP=0;
    int bestb= prices[0];

    for(int i =1;i<prices.size();i++){

        if(bestb<prices[i]){
            maxP=max(maxP,prices[i]-bestb);

        }
        if(prices[i]<bestb){
            bestb=prices[i];
        }

    }
    return maxP;
}

int main(){

    vector<int> prices={7,6,4,3,1};
    cout<<maxProfit(prices)<<endl;

}