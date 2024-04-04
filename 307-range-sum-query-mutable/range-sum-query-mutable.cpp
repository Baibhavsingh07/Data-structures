class NumArray {
public:

vector<int>a;

    NumArray(vector<int>& nums) {
        a=nums;
        for(int i=1;i<a.size();i++) a[i]=a[i]+a[i-1];
    }
    
    void update(int k, int val) {
        
        int pv=a[0];
        if(k!=0) pv = a[k] -a[k-1];

        int diff = val-pv;
        
        for(int i=k;i<a.size();i++) a[i]+=diff;

    }
    
    int sumRange(int left, int right) {
        if(left==0) return a[right];
        return a[right]-a[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */