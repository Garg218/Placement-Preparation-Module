class SmallestInfiniteSet {
public:
    set<int> ss;
    int n=1;
    SmallestInfiniteSet() {
        
        
    }
    
    int popSmallest() {
        int a=n;
        n=n+1;
        while(ss.find(n)!=ss.end())
            
        {
            n=n+1;
        }
        ss.insert(a);
        return a;
    }
    
    void addBack(int num) {
        if(ss.find(num)!=ss.end())
        {
            
            if(n>num)
            {
                n=num;
                
            }
            ss.erase(num);
        }
            
        
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
