#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(arr1[i]);
        }
        for(int i=0;i<m;i++){
            s.insert(arr2[i]);
        }
        vector<int> v(s.begin(),s.end());
        return v;
}




int main(){

    int arr1[]={4,5,14,25},arr2[]={1,2,3};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    
    vector<int> ans=findUnion(arr1,arr2,n,m);
    for(int i:ans){
        cout<<i<<' ';
    }    
    cout<<endl;

    return 0;
}
