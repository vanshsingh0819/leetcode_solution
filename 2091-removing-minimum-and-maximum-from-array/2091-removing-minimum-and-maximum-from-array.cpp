class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 1;
        int mini = *min_element(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());

        // FROM FRONT
        int maxi_front_position = -1;
        int mini_front_position = -1;
        for(int i =0;i<=n-1;i++){
            if(nums[i] == maxi){
                maxi_front_position = i;
            }
            else if(nums[i] == mini){
                mini_front_position = i;
            }            
        } 
        int front = -1;
        if(maxi_front_position > mini_front_position){
            front = maxi_front_position+1;
        }
        else{
            front = mini_front_position+1;
        }

        //FROM BACK
        int maxi_back_position = -1;
        int mini_back_position = -1;
        for(int i =n-1;i>=0;i--){
            if(nums[i] == maxi){
                maxi_back_position = i;
            }
            else if(nums[i] == mini){
                mini_back_position = i;
            } 
        }
        int back =-1;
        if(maxi_back_position < mini_back_position){
            back = n - maxi_back_position;
        }
        else{
            back = n - mini_back_position;
        }

        //  FROM BOTH SIDE
        int i =0;
        int j = n-1;
        int maxi_position = -1;
        int mini_position = -1;
        int both_side = -1;
        while(i <= j){
            if(nums[i] == mini){
                mini_position = i;
            }
            if(nums[j] == mini){
                mini_position = j;
            }
            if(nums[i] == maxi){
                maxi_position = i;
            }
            if(nums[j] == maxi){
                maxi_position = j;
            }
            i++;
            j--;
        }
       if(maxi_position < mini_position){
            both_side = (1 + maxi_position) + (n -mini_position);
       }
       else{
            both_side = (1 + mini_position) + (n-maxi_position);
       }
        return min({front,back,both_side});  
    } 
};