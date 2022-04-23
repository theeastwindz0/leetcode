class Solution {
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string ans="";
        ans+="http://tinyurl.com/|";
        for(int i=0;i<size(longUrl);i++){
            int x=longUrl[i];
            ans+=to_string(x);
            ans.push_back('|');
        }   
            // cout<<ans;
        return ans;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string ans="",no="";
        int i=0;
        for( i=0;i<shortUrl.size();i++)if(shortUrl[i]=='|')break;
        i++;
        for(;i<shortUrl.size();i++){
            if(shortUrl[i]!='|')no+=shortUrl[i];
            else {
                // cout<<no<<endl;
                int x=stoi(no);
                ans+=char(x);
                no="";
            }
        }
        return ans;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));