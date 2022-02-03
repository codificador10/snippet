// clang-format off

/* TO USE-> 


```Add a defined term to your IDE```
#ifdef LOCAL 

OR

```this might not work on websites where "ONLINE_JUDGE" isnt defined```
#ifndef ONLINE_JUDGE 


```Include the path where the debugger header file is stored```
for ex-
#include "/home/codificador/debug.hpp"


Now add this to your template

#ifdef crazybarcafan
#include "path...file.hpp"
#else
#define debug(...)
#endif


*/
#include "bits/stdc++.h"
using namespace std;

//primitive data types
template <class T> void print(T t){cerr<<t;}

//pair
template <class T, class V> void print(pair <T, V> p){cerr << "{"; print(p.first); cerr << ","; print(p.second);cerr << "}";}
//vector
template <class T> void print(vector <T> v) {cerr << "[ "; for (T i : v) {print(i); cerr << " ";} cerr << "]";}
//Deque
template <class T> void print(deque <T> v) {cerr << "[ "; for (T i : v) {print(i); cerr << " ";} cerr << "]";}

//<STL array<int,size_t> [a] ->no size 
template <class T,size_t size> void print(array<T,size >v) {cerr << "[ "; for (T i : v) {print(i); cerr << " ";} cerr << "]";}

//1-D array [a,n]
// template <class T,class V> void print(T a,V n) {cerr << "["; for (int i = 0; i < n; ++i) { cerr << a[i]; if(i!=n-1){ cerr<<" ";}}  cerr  << "]";}
//<STL array [a,n]
// template <class T,size_t size,class V> void print(array<T,size >v,V x) {cerr << "[ "; for (int i=0;i<x;i++) {print(v[i]); cerr << " ";} cerr << "]";}
// <STL 2-D array [a,n,m]
// template <class T,size_t size,class V> void print(array<T,size >v,V x,V y) {cerr << "[ "; for (int i=0;i<x;i++) {cerr << "[ "; for (int j=0;j<y;j++){print(v[i][j]); cerr << " ";} cerr << "] " ;} cerr << "]";}

//Set
template <class T> void print(set <T> v) {cerr << "[ "; for (T i : v) {print(i); cerr << " ";} cerr << "]";}
//Reverse set
template <class T> void print(set <T,greater<T>> v) {cerr << "[ "; for (T i : v) {print(i); cerr << " ";} cerr << "]";}
//Multiset
template <class T> void print(multiset <T> v) {cerr << "[ "; for (T i : v) {print(i); cerr << " ";} cerr << "]";}
//Reverse multiset
template <class T> void print(multiset <T,greater<T>> v) {cerr << "[ "; for (T i : v) {print(i); cerr << " ";} cerr << "]";}

//Map
template <class T, class V> void print(map <T, V> v){cerr << "[ "; for (auto i : v) {print(i); cerr << " ";} cerr << "]";}
//Unordered_Map
template <class T, class V> void print(unordered_map <T, V> v){cerr << "[ "; for (auto i : v) {print(i); cerr << " ";} cerr << "]";}
//Multimap
template <class T, class V> void print(multimap <T, V> v){cerr << "[ "; for (auto i : v) {print(i); cerr << " ";} cerr << "]";}

//Priority Queue
template <class T> void print(priority_queue<T> a) { bool k = false; cerr << "["; while (!a.empty()) { if (k) { cerr << ", ";}print(a.top()); a.pop(); k = true;} cerr << "]";}
//Reverse Priority Queue(with vector as container)
template <class T> void print(priority_queue<T, vector<T>, greater<T>> a) { bool k = false; cerr << "["; while (!a.empty()) { if (k) { cerr << ", ";} print(a.top()); a.pop(); k = true;} cerr << "]";}
//Reverse Priority Queue(with default container)
template <class T> void print(priority_queue<T, greater<T>> a) { bool k = false; cerr << "["; while (!a.empty()) { if (k) { cerr << ", ";} print(a.top()); a.pop(); k = true;} cerr << "]";}
//Queue
template <class T> void print(queue<T> a){ bool k = 0; cerr << "["; while (!a.empty()) { if (k){cerr << ", ";}print(a.front()); a.pop(); k = 1;} cerr << "]";}
//Stack
template <class T> void print(stack<T> a){ bool k = 0; cerr << "["; while (!a.empty()){ if (k){ cerr << ", ";}print(a.top()); a.pop(); k = 1; } cerr << "]";}

//Multiarg...
template <typename T, typename... V>void print(T t, V... v){ cerr << "[";  print(t); if (sizeof...(v)){ cerr << ",  ";}  print(v...); cerr << "]\n"; }

//dbg defined
#define debug(x...) cerr << "[" << #x << "] = ";  print(x), cerr << "\n";
