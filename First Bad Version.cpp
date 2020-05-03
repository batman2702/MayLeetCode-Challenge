// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
            //cout<<n<<endl;
            int start=1,end=n;
            while(start<end)
            {
                int mid=start+(end-start)/2;
                if(isBadVersion(mid)) end=mid;
                else start=mid+1;
            }
        return start;
    }
};
