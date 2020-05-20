class StockSpanner {
public:
    vector<int> stock;
    stack<int> st;
    StockSpanner() {
        
      st.push(0);
        
    }
    
    int next(int price) {
        int ans=0;
        
        stock.push_back(price);
        if(stock.size()==1)
            return 1;
    
        while(!st.empty() && price>=stock[st.top()])
            st.pop();

        ans=(st.empty())?stock.size():((stock.size()-1)-st.top());

        st.push(stock.size()-1);
            
        
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
