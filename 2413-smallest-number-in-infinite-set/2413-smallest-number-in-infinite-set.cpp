class SmallestInfiniteSet {
public:
    SmallestInfiniteSet() {
        for(int i=0;i<1005;i++){
            v.push_back(true);
        }
    }
    
    int popSmallest() {
        for(int i=1;i<=1000;i++){
            if(v[i]){
                v[i]=false;
                return i;
            }
        }

        return 0;
    }
    
    void addBack(int num) {
        v[num]= true;
    }
    private:
    vector<bool> v; 
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */