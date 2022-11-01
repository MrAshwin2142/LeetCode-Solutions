class Solution {
public:
   vector<int> findBall(vector<vector<int>>& vec) {
        vector<int> res ;
        for(int i =0;i<vec[0].size();i++){

            int  x=0,y=i;
            bool flag = true;
            while(x<vec.size()){

                if(vec[x][y]==1){   
                 if (y+1>= vec[0].size() || vec[x][y+1]!=1){ 
                   flag = false;
                   break;      
                 }
                  x++;
                    y++;
                }

                else if(vec[x][y]==-1){  // if block is directing to left
                      if (y-1<0 || vec[x][y-1]!=-1){
                   flag = false;
                   break;   
                      }
                 x++;
                    y--;
                }

            }
            if(flag)res.push_back(y);
            else
                res.push_back(-1);

        }
           return res;

    }
};