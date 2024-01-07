class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int i,j,k,c=0;
	
	for(i=a.size()-1;i>0;i--){
		if(a[i]>a[i-1]){
			c=1;
			break;
		}
	}
	
	if(c==0) {
		sort(a.begin(),a.end());
		return;
	}
	
	j=i;
	k=i;
	int m = a[i];
	for(j=i;j<a.size();j++){
		if(a[j]>a[i-1] and a[j]<m){
			
			k=j;
			m=a[j];
	}
	}
	
	swap(a[k],a[i-1]);
	
	sort(a.begin()+i,a.end());
    }
};