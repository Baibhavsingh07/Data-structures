class MyCalendar {
public:
map<int,int>events;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        auto event = events.lower_bound(start);
        if(event!=events.end() ) {
            if(end > event->first) return 0;
            // if(max(start,event->first) < min(end,event->second)) return 0;
        }


        if(event!=events.begin() ){
            auto preevent = prev(event);
            if(preevent->second>start) return 0;
            // if(max(start,preevent->first) < min(end,preevent->second)) return 0;
        }

        events[start]=end;
        return 1;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */