class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++)
        {
                int a=0,b=image[i].size()-1,c;
                while(a<b)
                {
                    c=image[i][a];
                    image[i][a]=image[i][b];
                    image[i][b]=c;
                    a++;
                    b--;
                }
                
        }
        for(int i=0;i<image.size();i++)
        {
            for(int j=0;j<image[i].size();j++)
            {
                if(image[i][j]==0)
                {
                    image[i][j]=1;
                }
                else if(image[i][j]==1)
                {
                    image[i][j]=0;
                }
            }
        }
        return image;
    }
};