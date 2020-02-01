#include <bits/stdc++.h>
using namespace std;

int fillPrefixSum(vector <int> arr, int n, int prefixSum[]) { 
    prefixSum[0] = arr[0];  
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i-1] + arr[i]; 
        
    }
    cout <<prefixSum[n-1]<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,K,T,val,i;
    cin >>T;
    while(T--){
        cin >>N;
        cin >>K;
        vector <int> v;
        vector <int> x;
        for (i=0;i<N;i++){
            cin>>val;
            v.push_back(val);
        }
        reverse(v.begin(),v.end());
        
        for(i=0;i<K;i++){
            v.push_back(1);
            }
        for(i =0;i<N;i++){
            int var = v[i]*v[i];
            x.push_back(var);
        }
        for(i=0;i<N;i++){
            cout <<"V:"<<v.at(i)<<" ";
        }
        int n = sizeof(v) / sizeof(v[0]); 
          int prefixSum[n]; 
  
         fillPrefixSum(v, n, prefixSum); 
        //  int square = prefixSum[n-1];
        // //  cout <<square<<"\n";
        //  fillPrefixSum(x, n, prefixSum);
        //  int nonSq = prefixSum[n-1];
        // //  cout <<nonSq<<"\n";

        //  if(square<= nonSq){
        //      cout <<"YES"<<"\n";
        //  }
        //  else
        //      cout <<"NO"<<"\n";
}
}