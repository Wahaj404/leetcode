class StockSpanner {
    int v[10000 + 5];
    int i = -1;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        v[++i] = price;
        for (int j = i; j >= 0; --j) {
            if (v[i] < v[j]) return i - j;
        }
        return i + 1;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */