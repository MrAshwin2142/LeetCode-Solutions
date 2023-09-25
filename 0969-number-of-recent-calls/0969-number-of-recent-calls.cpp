class RecentCounter {
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int l=t-3000;
        q.push(t);
        while(q.front()<l) q.pop();
        return q.size();
    }
    private:
    queue<int> q;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */