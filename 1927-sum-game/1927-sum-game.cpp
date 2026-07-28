class Solution {
public:
    bool sumGame(string num) {
        // first half, second half, first half ke question mark and second m=half ke queston mark

        int fh = 0, sh = 0, qf = 0, qs = 0;

        for(int i=0; i<num.size()/2; i++){
            if(num[i] == '?'){
                qf++;
            }
            else{
                fh += num[i] - '0';
            }
        }

        for(int j=num.size()/2; j<num.size(); j++){
            if(num[j] == '?'){
                qs++;
            }
            else{
                sh += num[j] - '0';
            }
        }

        if(fh == sh){
            return qf != qs;
        }
        bool possible = (fh > sh and qf < qs) or (fh < sh and qf > qs);

        if(!possible) return true;

        int diff = abs(fh-sh);
        int qDiff = abs(qf-qs);

        if(qDiff % 2 == 1) return true;
        return (qDiff / 2)*9 != diff;
    }
};