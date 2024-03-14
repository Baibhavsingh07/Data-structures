class Solution {
public:
    int maxArea(vector<int>& a) {
        int i=0,j=a.size()-1,m=0;

        while(i<j){
            int area = min(a[i],a[j])*(j-i);
            m=max(m,area);

            if(a[j]<a[i]) j--;
            else i++;
        }

        return m;
    }
};