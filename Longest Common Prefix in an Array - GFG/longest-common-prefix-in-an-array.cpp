//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // int a;
        // int b=9;
        string ans="";
        for(int i=0;i<arr[0].size();i++){
            // arr[0]=geeksforgeeks
            char temp=arr[0][i];
            for(int j=0;j<N;j++){
                if(arr[j][i]!=temp){
                    return ans==""?"-1":ans;
                };
            }
            ans+=temp;
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends