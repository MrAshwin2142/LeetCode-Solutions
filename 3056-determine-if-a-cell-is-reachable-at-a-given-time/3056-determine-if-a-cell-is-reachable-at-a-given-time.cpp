class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {

        if(sx==fx && fy==sy) return t!=1;
        if(sx==fx) return abs(fy-sy)<=t;
        if(sy==fy) return abs(fx-sx)<=t;
        if(abs(sx-fx)>t || abs(sy-fy)>t) return false;
        return true;
    }
};