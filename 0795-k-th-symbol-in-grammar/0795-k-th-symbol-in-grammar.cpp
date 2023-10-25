class Solution {
public:
    int kthGrammar(int n, int k) {
        bool vk=true;
        n=pow(2,n-1);
        while(n!=1){
            n/=2;
            if(k>n){
                k-=n;
                vk=!vk;
            }
        }
        return (vk?0:1);
    }
};