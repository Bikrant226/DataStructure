#include<bits/stdc++.h>

using namespace std;


int main(){
    set<int> set1;

    for(int i=1;i<10;i+2){
        set1.insert(i);
    }

    for(auto it=set1.begin();it!=set1.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
    return 0;
}

