class Solution {
public:
    int binaryGap(int n) {
        string binary="";
        while(n>0){
            binary+=char('0'+(n%2));
            n/=2;
        }
        int last=-1;
        int maxlength=0;
        for(int i=0;i<binary.size();i++){
            if(binary[i]=='1'){
                if(last!=-1){
                    maxlength=max(maxlength,i-last);
                }
                last=i;
            }

        }
        return maxlength;
        
    }
};