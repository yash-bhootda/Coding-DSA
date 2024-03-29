class SeatManager {
public:
    map<int,int> mp;
    priority_queue<int , vector<int> , greater<int>> unreserved;
    SeatManager(int n) {
        for(int i =1;i<=n;i++)
        {
            unreserved.push(i);
        }
    }
    
    int reserve() {
        int ans;
        if(!unreserved.empty())
        {
            ans=unreserved.top();
            unreserved.pop();
        }
        return ans;
    }
    
    void unreserve(int seatNumber) {
        unreserved.push(seatNumber);
        
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */