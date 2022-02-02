class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>v;
        unordered_map<char,int>mp;
        int n=s.length();
        int m=p.length();
        for (int i=0;i<m;i++){
            mp[p[i]]++;
        }
        int lo=-1;
        int hi=0;
        int cnt=m;
        while(hi <n){
   //       cout<<s[hi]<<endl;
            if (mp.find(s[hi])!=mp.end()){
      //        cout<<s[hi]<<endl;
                if (mp[s[hi]]){
                    mp[s[hi]]--;
                    cnt--;
                }
                else{
        //          cout<<s[hi]<<endl;
     //    cout<<lo<<" "<<hi<<endl;
                    while(lo<hi){
                        lo++;
                        if (s[lo]==s[hi]){
                            mp[s[lo]]++;
                            cnt++;
                            break;
                        }
                        if (mp.find(s[lo])!=mp.end()){
                            mp[s[lo]]++;
                        }
                        cnt++;
                    }
                    hi--;
                }
            }
            else{
                cnt=m;
    //        cout<<lo<<" "<<hi<<endl;
                
                while(lo<hi){
                        lo++;
          //        cout<<"hi"<<" ";
          //        cout<<s[lo]<<endl;
                        if (mp.find(s[lo])!=mp.end()){
                            mp[s[lo]]++;
                        }
                    }
         //       cout<<mp['a']<<" "<<mp['b']<<" "<<mp['c']<<endl;
       //       cout<<hi<<endl;
            }
            if (cnt==0){
                lo++;
                v.push_back(lo);
                mp[s[lo]]++;
                cnt++;
            }
      //    cout<<mp['a']<<" "<<mp['b']<<" "<<mp['c']<<endl;
      //    cout<<hi<<endl;
     //     cout<<cnt<<endl;
            hi++;
        }
      return v;
    }
};