class Solution {
public:
    bool binarySearch(vector<int> arr , int target){
        int left = 0;
        int right = arr.size()-1;
        while(left <= right){
            int mid = (left+right)/2;
            if(arr[mid] == target){
                return true;
            }
            arr[mid] > target ? right = mid-1 : left=mid+1;
        }

        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int matSize = matrix[0].size() -1;
        for(int i = 0; i < matrix.size(); i++){
            if(matrix[i][matSize] >= target){
                vector<int> currArr = matrix[i];
                return binarySearch(currArr,target);
            }
        }


        return false;
    }
};
