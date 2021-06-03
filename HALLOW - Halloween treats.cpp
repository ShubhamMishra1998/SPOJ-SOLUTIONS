#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void printSubArrays(ll *a,ll n,ll k){
 unordered_map<ll,ll> m1;
 m1[0] = 0;
 ll sum = 0;
 ll l = 0, r = 0;
 for (int i = 0; i < n;i++){
     sum+=a[i];
     if(sum%k==0){
      l = 1;
      r = i + 1;
      break;
     }
     if(m1[sum%k]!=0){
      l = m1[sum % k]+1;
      r = i+1;
      break;
     }
     m1[sum % k] = i + 1;
 }
 for (int i = l; i <= r;i++)
  cout << i << ' ';
 cout << '\n';
}
int main(){
 while(1){
  ll k, n;
  cin >> k >> n;
  if(k==0&&n==0)
   break;
  ll a[n];
  for (int i = 0;i<n;i++){
   cin >> a[i];
  }
  printSubArrays(a, n, k);
 }
}
