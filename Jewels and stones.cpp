class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char>st;
        int count=0;
        for(char i:J)
        {
            st.insert(i);
        }
        for(char j:S)
        {
            if(st.find(j)!=st.end())
                count+=1;
        }
        return count;
    }
};
