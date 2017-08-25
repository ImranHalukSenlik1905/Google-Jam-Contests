#include <cstdio>
#include <cstring>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <iostream>

using namespace std;

void helper(long long v, unordered_map<int, int> & dict);
long long numToAll(long long val){
    unordered_map<int, int> dict;

    for(long long i=1; dict.size()<10; i++){
        long long next= val*i;
        helper(next, dict);
        if(dict.size()==9) return next;
    }
    return 0;
}
void helper(long long v, unordered_map<int, int> &dict){
    while(v){
        if(v%10) dict[v%10]=1;
        v/=10;
        if(dict.size()==9) return;
    }
}
int main() {
    long long n, val;
    cin >> n;
    for(long long i=0; i<n; i++){
        cin >> val;
        val=abs(val);
        if(val==0) cout << "Case #" << i+1 << ": INSOMNIA" << endl;
        else{ cout << "Case #" << i+1 << ": "<< numToAll(val) << endl; }
    }
    return 0;
}
