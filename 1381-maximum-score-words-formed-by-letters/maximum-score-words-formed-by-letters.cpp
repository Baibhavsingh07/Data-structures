class Solution {
public:

    int great(string s,vector<int>&let){
        vector<int>mem(27,0);
        for(auto x:s)
        mem[x-'a']++;

        for(int i=0;i<26;i++){
            if(mem[i]>let[i])
            return 1;
        }

        return 0;
        
        }


    void f(int i,vector<string>&words,vector<int>&wordScore,vector<int>&let,int curr,int &ans){
        if(i==wordScore.size()){
            ans=max(ans,curr);
            return;
        }

        int c=great(words[i],let);

        

        if(c==0){

            for(int j=0;j<words[i].size();j++){
            
          
                let[words[i][j]-'a']--;
            

        }

        f(i+1,words,wordScore,let,curr+wordScore[i],ans);
        

        for(int j=0;j<words[i].size();j++){
           let[words[i][j]-'a']++;
        }
         }

        f(i+1,words,wordScore,let,curr,ans);


    }


    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        vector<int>wordScore;


        int i,j,k,c=0,s=0;

        for(int x=0;x<words.size();x++ ){
            c=0;
            for(i=0;i<words[x].size();i++){
                c+=score[words[x][i]-'a'];
            }
            wordScore.push_back(c);
        }

        vector<int>let(27,0);
        for(auto x:letters)
        let[x-'a']++;

        for(auto x:wordScore)
        cout<<x<<" ";
        cout<<endl;

        int ans=0;

        f(0,words,wordScore,let,0,ans);

        return ans;
    }
};