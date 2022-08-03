class MyCalendar {
public:
    unordered_map<int,int>um1;
    MyCalendar() {
    }
    
    bool book(int start, int end) {
        for(auto [s1,s2]:um1)if(!(start >= s2 || s1 >= end))return false;
        um1[start]=end;
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */