#include<bits/stdc++.h>
using namespace std;


void sayHelloNtimes(int n){
    if(n<=0){
      return;
    }else{
        cout<<"Hello!!!\n";
        sayHelloNtimes(n-1);
        return;
    }
    
}

void printOneToN(int n){
    if(n>0){
        printOneToN(n-1);
        cout<<n<<" ";
    }
    
}

void printNtoOne(int n){
    if(n>0){
        cout<<n<<" ";
        printNtoOne(n-1);
    }
}


int sumOfN(int n){int t=0;
    if(n>0){
        return n+sumOfN(n-1);
    }
    return 0;
}

int fact(int n){
    if(n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}

void  reverse(int x,int y,int arr[]){
    if(x==y){
        cout<<'c';
    }else{
        arr[x]=arr[y];
        int t= arr[x];
        arr[y]=t;
        reverse(x+1,y-1);
    }
}


int main(){
    int n=5;
    int arr={10,20,30,40,50};
    sayHelloNtimes(n);
    printOneToN(n);
    cout<<endl;
    printNtoOne(n);
    cout<<endl;
    cout<<sumOfN(15)<<endl;
    cout<<fact(5)<<endl;
    
    return 0;
}