#include<iostream>
using namespace std;
int findSumTillN(int n){
    if(n==1){
        return 1;
    }
    int remainingSum=n+findSumTillN(n-1);
    return remainingSum;
}
int main(){
    int n;
    cin>>n;
    cout<<findSumTillN(n)<<endl;
//hrhdhdgdgd

    return 0;
}