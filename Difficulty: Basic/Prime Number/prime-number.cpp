//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isPrime(int n) {
       int count=0;
       for(int i=1;i*i<=n;i++){
           if(n%i==0){
               count++;
           if((n/i)!=i)
               count++;
       }
       }
       if(count==2){
           return true;
       }
       else{
           return false;
       }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << (ob.isPrime(N) ? "true" : "false") << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends