class MedianFinder {
public:
vector<int>a;
    MedianFinder() {}
    
    void addNum(int num) {
        int i,j=0,c=0;

        if(a.size()==0 or a.back() <= num){
            a.push_back(num);
            return;
        }

        if(a[0] > num ){
            a.insert(a.begin(),num);
            return;
        }


        for(i=1;i<a.size();i++) if(a[i]>num and a[i-1]<=num){j=i;break;}

        a.insert(a.begin()+i,num);

    }
    
    double findMedian() {
        double ans=0;

        if(a.size()==0) return 0;
        int n = a.size();
        int mid = n / 2;
    
    if (n % 2 == 0) {
        return (a[mid - 1] + a[mid]) / 2.0;
    } else {
        return a[mid];
    }

    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */