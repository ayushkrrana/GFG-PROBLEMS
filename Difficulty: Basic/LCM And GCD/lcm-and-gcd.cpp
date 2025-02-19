//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        vector<int> result;
        int duplicate_a=a;
        int duplicate_b=b;
        while(a>0 && b>0){
            if(a>b){
                a=a%b;
            }
            else{
                b=b%a;
            }
        }
        if(a==0){
            result.push_back((duplicate_a*duplicate_b)/b);
            result.push_back(b);
            
        }
        else{
            result.push_back((duplicate_a*duplicate_b)/a);
            result.push_back(a);
        }
        return result;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends