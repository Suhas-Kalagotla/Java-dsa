#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
  int n;
  cin >> n;
  if(n==3 || n == 2){
    cout << "NO SOLUTION"<< endl;
  }else{
    for(int i=2; i<=n;i+=2){
      cout << i << " ";
    }
  for(int i=1; i<=n;i+=2){
    cout << i << " ";
  }

  }
}
