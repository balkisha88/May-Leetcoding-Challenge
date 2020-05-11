//easiest recursion

class Solution {
public:
    
     vector<vector<int>> Fill(vector<vector<int>>& image, int sr, int sc, int newColor,int val)
     {
        if(sr<0||sr>=image.size()||sc<0||sc>=image[0].size()||image[sr][sc]!=val||image[sr][sc]==newColor)
                return image;
      
        val=image[sr][sc];
        image[sr][sc]=newColor;
        

        image=Fill(image,sr-1,sc,newColor,val);
        image=Fill(image,sr+1,sc,newColor,val); //easiest recursion
        image=Fill(image,sr,sc-1,newColor,val);
        image=Fill(image,sr,sc+1,newColor,val); 
         
        return image;
     }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int val=image[sr][sc];
        if(val==newColor)
            return image;
        image=Fill(image,sr,sc,newColor,val);
        
        
        return image;
        
        
        
    }
};



//new trick to call recursion

class Solution {
public:
    
     vector<vector<int>> Fill(vector<vector<int>>& image, int sr, int sc, int newColor,int val)
     {
        if(sr<0||sr>=image.size()||sc<0||sc>=image[0].size()||image[sr][sc]!=val||image[sr][sc]==newColor)
                return image;
        // if(image[sr][sc]!=val)
        //     return image;
         
        val=image[sr][sc];
        image[sr][sc]=newColor;
        
        int arr1[4]={-1,0,1,0}; int arr2[4]={0,-1,0,1};
         
        for(int i=0;i<4;i++)
        {
            image=Fill(image,sr+arr1[i],sc+arr2[i],newColor,val);
        }
        
        // image=Fill(image,sr-1,sc,newColor,val);
        // image=Fill(image,sr+1,sc,newColor,val); //easiest recursion
        // image=Fill(image,sr,sc-1,newColor,val);
        // image=Fill(image,sr,sc+1,newColor,val); 
         
        return image;
     }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int val=image[sr][sc];
        if(val==newColor)
            return image;
        image=Fill(image,sr,sc,newColor,val);
        
        
        return image;
        
        
        
    }
};

//DFS

class Solution {
public:
    
     void Fill(vector<vector<int>>& image, int sr, int sc, int newColor,int val)
     {
       
        if(image[sr][sc]!=val)
            return ;
         
        val=image[sr][sc];
        image[sr][sc]=newColor;
        
        
        if(sr>=1)
            Fill(image,sr-1,sc,newColor,val);
        if(sr+1<image.size())
            Fill(image,sr+1,sc,newColor,val); //easiest recursion
        if(sc>=1)
            Fill(image,sr,sc-1,newColor,val);
        if(sc+1<image[0].size())
            Fill(image,sr,sc+1,newColor,val); 
         
        return ;
     }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int val=image[sr][sc];
        if(val==newColor)
            return image;
      Fill(image,sr,sc,newColor,val);
        
        
        return image;
        
        
        
    }
};





