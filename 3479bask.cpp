#include <iostream>
#include <vector>

using namespace std;


int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
    vector<int> empty(baskets.size(),1);
    int count=0;
    for(int i=0;i<fruits.size();i++){
        for(int j=0;j<baskets.size();j++){
            if(fruits[i]<=baskets[j] && empty[j]){
                empty[j]=0;
                count++;
                break;
            }
        }
        
    }
    cout<<fruits.size()-count<<endl;
    return fruits.size()-count;
}

int main(){
    vector<int> fruits ={3,6,1};
    vector<int> baskets ={6,4,7};
    numOfUnplacedFruits(fruits,baskets);
    
    return 0;
}