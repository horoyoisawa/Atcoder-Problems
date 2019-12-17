#include <bits/stdc++.h>
using namespace std;

 int main() {
   int N;
   cin >> N;
   vector<int> a(N);
   vector<int> b(N);
   vector<int> c(N-1);

   for(int i=0;i<N;i++) {
     cin >> a[i];
   }

   for(int i=0;i<N;i++) {
     cin >> b[i];
   }

   for(int i=0;i<N-1;i++) {
     cin >> c[i];
   }

   int total = 0;

   for(int i=0;i<N;i++) {
     total += b[a[i]-1];
     if(i != 0) {
       if(a[i] == a[i-1] + 1) {
         total += c[a[i]-2];
       }
     }
   }

   cout << total << endl;

   return 0;
 }