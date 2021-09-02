// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> ans;
        int rows=0,rowe=r-1,cols=0,cole=c-1;
        while(rows<=rowe && cols<=cole){
            // start row
            for(int col=cols;col<=cole;col++)
                ans.push_back(matrix[rows][col]);
            rows++;
            //start col end
            for(int row=rows;row<=rowe;row++)
                ans.push_back(matrix[row][cole]);
            cole--;
            for(int col=cole;col>=cols;col--)
                ans.push_back(matrix[rowe][col]);
            rowe--;
            
            for(int row=rowe;row>=rows;row--)
                ans.push_back(matrix[row][cols]);
            cols++;    
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
