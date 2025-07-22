#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    int num=x;
    int c;
    long int rev=0;
        while(x!=0){
        c=x%10;
        rev=10*rev+c;
        x=x/10;
    }
    return (num==rev);
    
}

int main(){
    int num=-1221;

    cout<<isPalindrome(num)<<endl;


    return 0;
}