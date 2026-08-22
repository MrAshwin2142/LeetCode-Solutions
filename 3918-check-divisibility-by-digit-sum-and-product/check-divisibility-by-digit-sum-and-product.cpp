class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,pod=1;
        int org=n;
        while(n){
            int t=n%10;
            sum+=t;
            pod*=t;
            n/=10;
        }
        cout<<sum<<" "<<pod;
        return !(org%(sum+pod));
    }
};