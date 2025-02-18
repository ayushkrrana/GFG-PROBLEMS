//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
#include<bits/stdc++.h>
class Solution {
  public:
    bool armstrongNumber(int n) {
        int sum=0;
        int original=n;
        while(n>0){
            int last_digit=n%10;
            sum=sum+pow(last_digit,3);
            n=n/10;
        }
        if(sum==original){
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
        int n;
        cin >> n;
        Solution ob;
        bool flag = ob.armstrongNumber(n);
        if (flag) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends