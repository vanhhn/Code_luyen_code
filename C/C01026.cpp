#include<stdio.h>
#define ll long long 
bool checkPrime(ll n) {
    if (n <= 3) return n > 1;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    ll n;
    scanf("%lld",&n);
    if(checkPrime(n)){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}