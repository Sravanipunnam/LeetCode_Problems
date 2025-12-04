class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rstart, int cstart) {
        vector<vector<int>>ans;
        ans.push_back({rstart,cstart});
        int count=1;
        int pos=true;
        while(ans.size()<rows*cols){
       if(pos){
       for(int i=1;i<=count;i++){
        ++cstart;
        if(rstart>=0 && cstart>=0 && rstart<rows && cstart<cols)
        {
  
        ans.push_back({rstart,cstart});

        }
       }
       for(int i=1;i<=count;i++)
       {
        ++rstart;
        if(rstart>=0 && cstart>=0 && rstart<rows && cstart<cols)
        {
        ans.push_back({rstart,cstart});
        }
       }
       count++;
       

       pos=false;
       }else{
      for(int i=1;i<=count;i++)
      {
        --cstart;
     if(rstart>=0 && cstart>=0 && rstart<rows && cstart<cols)
        {
      
        ans.push_back({rstart,cstart});

        }
      }
       for(int i=1;i<=count;i++)
      {
        --rstart;
          if(rstart>=0 && cstart>=0 && rstart<rows && cstart<cols)
        {
     
        ans.push_back({rstart,cstart});

        }
      }
        
        
     count++;
        pos=true;
       }
        }
      return ans;  
        
    }
};