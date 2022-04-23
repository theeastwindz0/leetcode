class Bank {
public:
    vector<long long> cust;
    Bank(vector<long long>& balance) {
        cust=balance;
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(account1>cust.size() || account2>cust.size()) return false;
        if(money>cust[account1-1]) return false;
        
        cust[account2-1]+=money;
        cust[account1-1]-=money;
        
        return true;
    }
    
    bool deposit(int account, long long money) {
        if(account>cust.size())return false;
        cust[account-1]+=money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if(account>cust.size() || (cust[account-1]==0 && money>0))return false;
        if(cust[account-1]<money)return false;
        cust[account-1]-=money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */