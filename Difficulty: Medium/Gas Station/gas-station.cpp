

/*You are required to complete this method*/
class Solution {
  public:
    int startStation(vector<int> &petrol, vector<int> &distance) {
        int ans=0;
        int amtIHave=0;
        int n=petrol.size();
        int psum=0,dsum=0;
         for(int i=0;i<n;i++){
              amtIHave+=petrol[i]-distance[i];//3
              psum+=petrol[i];//12
              dsum+=distance[i];//13
             
             if(amtIHave < 0){
                 ans=i+1;//1
                 amtIHave=0;
             }
         }
         if(dsum > psum){
             return -1;
         }
         return ans;
        
    }
};


