class MyCalendar {
public:
    MyCalendar() {
        
    }
    map<int,int>mpp;

    bool book(int start, int end) {
        mpp[start]++;  //check krne ke liye ki book ho skta hai ki ni
        mpp[end]--; 
        int sum=0;
        for(auto it:mpp){
             sum+=it.second;
             if(sum>1){
                 mpp[start]--;
                 mpp[end]++;
                 return false;
             }
        }
        return true;

    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */