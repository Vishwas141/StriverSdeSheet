#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int n=matrix.size();
	int m=matrix[0].size();
	vector<pair<int,int>>ans;
	for(int i=0;i<matrix.size();i++)
	{
		
		for(int j=0;j<matrix[i].size();j++)
		{
			if(matrix[i][j]==0)
			{
		
				ans.push_back({i,j});
			}
		}

	}

	for(int i=0;i<ans.size();i++)
	{
		int a=ans[i].first;
		int b=ans[i].second;
		for(int j=0;j<m;j++)
		{
                 matrix[a][j]=0;
		}
		for(int j=0;j<n;j++)
		{
			    matrix[j][b]=0;
		}
	}
}