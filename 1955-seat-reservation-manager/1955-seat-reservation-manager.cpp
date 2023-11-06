class SeatManager {
public:
    // vector<int> v;
    set<int> st;
    SeatManager(int n) {
        for(int i=0;i<=n;i++){
            st.insert(i);
            // v.push_back(false);
        }
        st.erase(0);
    }
    
    int reserve() {
        for(int i:st){
            // v[i] = true;
            st.erase(i);
            return i;
        }
        return 0;
    }
    
    void unreserve(int seatNumber) {
        // v[seatNumber]=false;
        st.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */