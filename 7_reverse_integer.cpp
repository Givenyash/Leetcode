#include<iostream> 
#include<climits>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x!=0){
            int k=x%10;
            if((ans>INT_MAX/10) or (ans<INT_MIN/10)){
                return 0;
            }
            ans=ans*10+k;
            x=x/10;
        }
        return ans;   
    }

    int main(){
        Solution s;
        int num;
        cin>>num;

        int reversed_num =s.reverse(num);
        cout<< "Reversed integer: "<<reversed_num <<endl;
        return 0;
    }
};