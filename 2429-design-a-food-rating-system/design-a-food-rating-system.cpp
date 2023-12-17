class FoodRatings {
public:

struct comp{
    bool operator()(pair<int,string>&a,pair<int,string>&b){
        if(a.first == b.first)
        return b.second < a.second;
        return a.first < b.first;
    }
};

    map<string,int>rating;
    map<string,priority_queue<pair<int,string>,vector<pair<int,string>>,comp>>maxc;
    map<string,string>fc;

    FoodRatings(vector<string>& f, vector<string>& c, vector<int>& r) {
        for(int i=0;i<f.size();i++){
            rating[f[i]]=r[i];
            maxc[c[i]].push({r[i],f[i]});
            fc[f[i]]=c[i];
        }
    }
    
    void changeRating(string food, int newRating) {
        rating[food]=newRating;
        maxc[fc[food]].push({newRating,food});
    }
    
    string highestRated(string cuisine) {
        pair<int,string> ratFood = maxc[cuisine].top();

        while(   rating[ratFood.second]!=ratFood.first){
            maxc[cuisine].pop();
            ratFood = maxc[cuisine].top();
        }

        return ratFood.second;
        
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */