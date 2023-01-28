#include<bits/stdc++.h>
using namespace std;

class Hash
{
    int N;
    list<int> *table;

    public:
        Hash(int v);

        void insertItem(int x);

        void deleteItem(int key);

        int hashFuction(int x){
            return (x % N);
        }
        void displayHash();
};

Hash::Hash(int b){
    this->N=b;
    table=new list<int>[N];
}

void Hash::insertItem(int val){
    int index=hashFuction(val); //get index from hashfunction
    table[index].push_back(val); //add value to list in particular index
}

void Hash::deleteItem(int val)
{
    int index=hashFuction(val); //find index of given value

    list<int>::iterator i;
    
    //search through list of particular row
    for(i=table[index].begin();i!=table[index].end();i++){
        if(*i==val)
            break;
    }

    // if key is found in hash table, remove it
    if (i != table[index].end()){
        table[index].erase(i);
    }
}
    void Hash::displayHash() {
        for (int i = 0; i < N; i++)
        { 
            cout << i;
            for (auto x : table[i])
                cout << " --> " << x;
            cout << endl;
        }
    }


int main()
{
    int a[]={15,11,27,8,12};
    int n=sizeof(a)/sizeof(a[0]);

    Hash h(7);

    for (int i = 0; i < n; i++)
        h.insertItem(a[i]);

    h.deleteItem(12);


    h.displayHash();

    return 0;
}