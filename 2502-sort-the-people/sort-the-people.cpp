class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> sorted_names = {};

        int n = heights.size();

        for (int i=n-1;i>=0;i--){
            for(int j=0;j<=i-1;j++){
                if(heights[j]<heights[j+1]){
                    int temp_height = heights[j];
                    heights[j]=heights[j+1];
                    heights[j+1]=temp_height;

                    string temp_name = names[j];
                    names[j]=names[j+1];
                    names[j+1]=temp_name;
                }
            }
        }


        return names;
    }
};