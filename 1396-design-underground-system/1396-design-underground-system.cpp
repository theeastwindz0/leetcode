class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>>ins;
    unordered_map<string,pair<int,int>>out;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        ins[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto [stName,inTime]=ins[id];
        ins.erase(id);
        out[stName+"->"+stationName].first++;
        out[stName+"->"+stationName].second+=t-inTime;
        
    }
    
    double getAverageTime(string startStation, string endStation) {
        // string finalS=startStation+"->"+endStation;
        auto[tTrips,tTime]=out[startStation+"->"+endStation];
        // double ans=0.0;
        // ans=out[finalS].second/out[finalS].first;
        // cout<<ans<<endl;
        return (double)tTime/tTrips;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */