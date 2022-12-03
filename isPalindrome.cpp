#include<iostream>
#include<string>
using namespace std;
bool isPalindromeCheck(int l,int r,string &s)
{
	if(l==r || l>r){
		return true;
	}
	if(s[l]!=s[r]){
		return false;
	}else{
		return isPalindromeCheck(l+1,r-1,s);
	}
	return false;
}
bool isPalindrome(string &s)
{
	return isPalindromeCheck(0,s.length()-1,s);
}

int main(){
    string s;
    cin>>s;
    cout<<isPalindrome(s)<<endl;


    return 0;
	return 1;
}