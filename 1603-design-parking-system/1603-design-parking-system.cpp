class ParkingSystem {
public:
    int big,small,medium;
    ParkingSystem(int bbig, int mmedium, int ssmall) {
        big=bbig;medium=mmedium;small=ssmall;
        cout<<medium;
    }
    
    bool addCar(int carType) {
   
        
        if(carType==1){if(--big>=0)return true;else return false;}
        else if(carType==2){if(--medium>=0)return true;else return false;}
        else{if(--small>=0)return true;else return false;}
        
        cout<<medium;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */