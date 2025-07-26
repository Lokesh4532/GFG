class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        for(int i=arr.size()-1;i>=0;i--){
            //int maxi=arr.size()-1;
            for(int j=0;j<i;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
            //swap(arr[maxi],arr[i]);
        }
    }
};