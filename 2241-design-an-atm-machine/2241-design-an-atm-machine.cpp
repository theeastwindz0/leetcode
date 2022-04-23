class ATM {
public:
    map<long long,long long> m1;
    ATM() {
        m1.insert({20,0});
        m1.insert({50,0});
        m1.insert({100,0});
        m1.insert({200,0});
        m1.insert({500,0});
    }
    
    void deposit(vector<int> bnc) {
        vector<int> v1{20,50,100,200,500};
        for(int i=0;i<bnc.size();i++) m1[v1[i]]+=bnc[i];
        
        // for(auto it:m1)cout<<it.first<<" "<<it.second<<endl;
    }
    
    vector<int> withdraw(int amount) {
    map<long long,long long> ::iterator it;
        it=m1.end();
        vector<int>v1(5,0);
        int ct=4;
        it--;
        // cout<<(it->first);
        // cout<<amount-it->first<<endl;
        while(ct>=0 && amount){
            if(amount>=it->first && m1[it->first]>0){
                int i=0;
                if(m1[it->first]>=amount/it->first)i=amount/it->first;
                else i=m1[it->first];
                
                v1[ct]+=i;
                m1[it->first]-=i;
                amount-=i*it->first;
            }
            else{
                it--;ct--;
            }
// 722349970 [1,1,0,1188137,969445]   
        }
            // cout<<amount<<" ";
        // cout<<amount<<endl;
        if(amount!=0){
    map<long long,long long> ::iterator it3=m1.begin();
        for(auto it2:v1){
            m1[it3->first]+=it2;
            it3++;
        }
            return {-1};}
       
        return v1;

    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */