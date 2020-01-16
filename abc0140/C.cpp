#include <bits/stdc++.h>
using namespace std;

 int main() {
   int N;
   cin >> N;
   vector<int> B(N-1);

   for(int i=0;i<N-1;i++) {
     cin >> B[i];
   }

   int total = B[0];

   for(int i=0;i<N-2;i++) {
     if(B[i] < B[i+1]) {
       total += B[i];
     } else {
       total += B[i+1];
     }
   }

   total += B[N-2];

   cout << total << endl;

   return 0;
 }