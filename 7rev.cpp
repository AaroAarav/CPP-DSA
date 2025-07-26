#include <iostream>
using namespace std;
int reverse(int x) {
    int n=0;
    if(x==0){
        return 0;
    }
    if(x<0){
        
        n=(-x);
    }else{
        n=x;
    }
    int rev=0;int rem;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;

    }
    if(x<0){
        return -rev;
    }else{
        return rev;
    }
}

int main(){
 
    int r=reverse(123);

    cout<<r<<endl;

    return 0;
}