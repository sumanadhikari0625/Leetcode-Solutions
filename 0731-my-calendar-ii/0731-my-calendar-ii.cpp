class MyCalendarTwo {
public:
map<int, int> mpp;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        mpp[start]++;
        mpp[end]--; int result= 0;
        for(auto it: mpp){
            result+= it.second;
            if(result>2){
                mpp[start]--;
                mpp[end]++;
                return false;
            }
        }
        return  true;
    }
    
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */