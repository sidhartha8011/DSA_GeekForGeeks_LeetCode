class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        // Code here
        int Rmax[n];
        int lmax[n];
        
        lmax[0]=arr[0];
        Rmax[n-1]=arr[n-1];
        for(int i=1;i<n;i++)
        {
            if(lmax[i-1]<arr[i])
                lmax[i]=arr[i];
                
            else
                lmax[i]=lmax[i-1];
        }
        
        for(int i=n-2;i>=0;i--)
        {
            if(Rmax[i+1]<arr[i])
                Rmax[i]=arr[i];
                
            else
                Rmax[i]=Rmax[i+1];
        }
        
        int water_ele=0;
        
        for(int i=0;i<n;i++)
        {
            water_ele+=min(lmax[i],Rmax[i])-arr[i];
            
        }
        
        return water_ele;
        
        
    }
};
