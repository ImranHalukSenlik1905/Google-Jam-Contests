#include <fstream>
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <deque>

using namespace std;

int main() {
  int t; scanf("%d", &t);
 ofstream outputFile("big.txt");
  for (int tc = 1; tc <= t; tc++) {
    string s; cin >> s;
    int n=s.size();
    string last; deque<char> q;
    if(n) q.push_back(s[0]); 
    if(n>1){ 
	if(s[0]>s[1]) q.push_front(s[1]);
        else q.push_back(s[1]);
    }
    for(int i=2; i<n; i++){
       if(s[i]>=q.back()) q.push_back(s[i]);
       else q.push_front(s[i]);
    }
    while(q.size()){ last+=q.back(); q.pop_back();} 
    outputFile << "Case #" << tc << ": " << last << endl;
  }
  return 0;
}
