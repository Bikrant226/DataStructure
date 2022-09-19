#include<bits/stdc++.h>

using namespace std;


int main(){
    multimap<int,string> mmp;

    for(int i=1;i<=3;i++){
        mmp.insert({i,"Apple"});
    }
    mmp.insert({2,"Orange"});

    for(auto it:mmp){
        cout<<it.first<<" "<<it.second<<" ";
    }
    cout<<'\n';

    return 0;
}