class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int,int>mr,mar;
        unordered_map<int,int>mc,mac;
        for(auto &b:buildings){
            int x=b[0];
            int y=b[1];
            if(!mr.count(x)){
                mr[x]=mar[x]=y;
            }
            mr[x]=min(mr[x],y);
            mar[x]=max(mar[x],y);

            if(!mc.count(y)){
                mc[y]=mac[y]=x;
            }
            mc[y]=min(mc[y],x);
            mac[y]=max(mac[y],x);
        }
        int count=0;
        for(auto &b:buildings){
            int x=b[0];
            int y=b[1];
            bool lr=(mr[x]<y && y<mar[x]);
            bool ud=(mc[y]<x && x<mac[y]);
            if(lr && ud){
                count++;
            }
        }
      return count;  
    }
};