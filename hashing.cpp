#include<bits/stdc++.h>;
using namespace std;
class Hash
{
int BUCKET;
list<int> *table;
public:
Hash(int V);
void insertItem(int x);
void deleteItem(int key);
int hashFunction(int x)
{
return (x % BUCKET);
}
void displayHash();
};

Hash::Hash(int b)
{
this->BUCKET = b;
table = new list<int>[BUCKET];
}
void Hash::insertItem(int key)
{
int index = hashFunction(key);
table[index].push_back(key);
}
void Hash::displayHash()
{
for(int i = 0; i < BUCKET; i++)
{
cout << i;
for (auto x : table[i])
{
cout << " --> " << x;
}
cout << endl;
}
}
int main()
{

int n;
cout<<"Enter the size of table.\n";
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
cin>>arr[i];
}
Hash h(n);
for(int i = 0; i < n; i++)
h.insertItem(arr[i]);
h.displayHash();
return 0;
}
