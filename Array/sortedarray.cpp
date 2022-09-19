#include<bits/stdc++.h>
using namespace std;

int isSorted(int arr[],int n){
    return is_sorted(arr,arr+n);
}



int main(){
    int arr[]={84,37,29,88,90,56,45,12,10,43};
    int arr1[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(arr1)/sizeof(arr1[0]);
    
    if(isSorted(arr1,m)){
        cout<<"Array is sorted.\n";
    }else{
        cout<<"Array is not sorted.\n";
    }


}