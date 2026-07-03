class Solution {
public:
    int dayOfYear(string date) {
        int y = stoi(date.substr(0,4));
        int m = stoi(date.substr(5,2));
        int d = stoi(date.substr(8,2));

        vector<int> daysOfMonths ({31,28,31,30,31,30,31,31,30,31,30,31});

        if(isLeapYear(y)){
            daysOfMonths[1] = 29;
        }

        for(int i=0; i<m-1; i++){
            d = d + daysOfMonths[i];
        }

        return d;
    }

    bool isLeapYear(int y){
       return ((y % 400 == 0) or (y%4 == 0 and y%100 != 0));
    }
};