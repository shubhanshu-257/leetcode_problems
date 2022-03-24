class Solution {
public:
    int numRescueBoats(vector<int>& people, int l) {
        sort(people.begin(),people.end());
        int x=people.size();
     
        int lo=0;
        int h=x-1;
        int cnt1=0;
        while(lo<=h){
            if (people[lo]+people[h]<=l){
                cnt1++;
                lo++;
                h--;
            }
            else{
                cnt1++;
                h--;
            }
        }
        return cnt1;
        
    }
};