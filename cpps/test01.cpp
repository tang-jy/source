#include <bits/stdc++.h> 
using namespace std;
bool slove(string a,char s,int pos,int len) {
    if(len == 0) {
        return false;
    }
    else if(len == 1){ 
        return (a[pos] == s);
    }
    else {
        return (slove(a,s,pos,len>>1)|slove(a,s,pos+(len>>1)+1,len>>1));
    }
}
int main (){
    string a = "asdxcadgdfgdh";
    char s = 'a';
    //cin>>a>>s;
    cout<<(slove(a,s,0,a.length())?"YES":"NOT");
}
