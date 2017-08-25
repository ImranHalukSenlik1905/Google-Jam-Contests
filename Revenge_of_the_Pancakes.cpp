#include <cstdio>
#include <cstring>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <iostream>

using namespace std;

int numFlips(string& s){
  int len = s.size(), retVal=0;
  for(int i=1; i<len; i++){
	if(s[i]!=s[i-1]) retVal++;
  }
  if(s[len-1]=='-') retVal++;
  return retVal;
}
int main() {
    long long n, val; 
    string strIn;
    cin >> n;
    for(long long i=0; i<n; i++){
        cin >> strIn;
        cout << "Case #" << i+1 << ": "<< numFlips(strIn)<<endl;
    }
    return 0;
}
