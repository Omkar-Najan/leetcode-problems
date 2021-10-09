#include<iostream>
#include <vector>
using namespace std;


vector<vector<int>> merge(vector<vector<int>> intervals){
    vector<vector<int>> ans(intervals.size());
    for(int i=0 ;i<intervals.size();i++){
        
    }
}



int main(){
    int n,m;
    cin >> n >> m;

    vector<vector<int>> intervals(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> intervals[i][j];
        }
    }

    vector<vector<int>> ans = merge(intervals);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout << ans[i][j] <<" ";
        }
        cout << endl;
    }


}