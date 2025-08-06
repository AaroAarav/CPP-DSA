vector<int> empty(1,baskets.size());
    int count;
    for(int i=0;i<fruits.size();i++){
        for(int j=0;j<baskets.size();j++){
            if(fruits[i]<=baskets[j] && empty[j]){
                empty[j]=0;
                break;
            }
        }
        count++;
    }
    return count;