#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vec;
    for(int i=10;i>0;i--){
        vec.push_back(i*10);
    }
    for(auto it:vec){
        cout<<it<<" ";
    }
    cout<<"\n";
    cout<<*vec.begin()<<"\n"; /* begin() return an iterator to first element*/
    cout<<vec.front()<<"\n"; /* front() return a reference to first element*/
    cout<<vec.back()<<"\n"; /* back() return a reference to last element*/
    
    vec.insert(vec.begin()+6,15); /*enters and element after specified iterator*/

    for(auto it:vec){
        cout<<it<<" ";
    }
    cout<<"\n";
    
    return 0;
}