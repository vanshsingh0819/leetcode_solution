class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int s = requests.size();
        int floor = requests[0];
        for(int i =1;i<=s-1;i++){
                int diff = abs(requests[i] - requests[i-1]);
                floor += diff;
        }
        return floor;
    }
};