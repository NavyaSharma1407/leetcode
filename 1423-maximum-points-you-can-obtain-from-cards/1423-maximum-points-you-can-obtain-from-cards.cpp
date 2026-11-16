class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = accumulate(cardPoints.begin(),cardPoints.end(),0);
        int windSize = n - k;
        int windSum = 0;
        for(int i=0;i<windSize;i++){
            windSum += cardPoints[i];
        }
        int i = 0 , j = windSize;
        int miniSum = windSum;
        while(j < n){
            windSum += cardPoints[j] - cardPoints[i];
            miniSum = min(miniSum , windSum);
            i++; j++;
        }
        return sum - miniSum;
    }
};