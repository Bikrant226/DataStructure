#include<bits/stdc++.h>

using namespace std;

/* For every operation the time complexity is O(1) for average case and O(n) for worst case*/

int main(){
    unordered_set<int> set1;
    for(int i=1;i<10;i++){
        set1.insert(i);
    }
    for (auto it=set1.begin();it!=set1.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
    cout<<*set1.begin()<<"\n"; /*returns iterator to first element*/
    cout<<set1.count(1)<<"\n"; /*returns 1 if element is present else returns 0*/
    cout<<set1.size()<<"\n"; /*return size of the unordered set*/
    set1.erase(1); /*deletes single element*/
    for (auto it=set1.begin();it!=set1.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
    return 0;
}