class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        
        for (int i = 0; i < nums1.size();i++) {
                merge.push_back(nums1[i]);
            }

        for (int i = 0; i < nums2.size();i++) {
                merge.push_back(nums2[i]);
            }
        
        sort(merge.begin(), merge.end());
        double mediana;
        int tam = merge.size();
        if (tam %2 !=0) {
            int indice = tam/2;
            mediana = merge[indice];
        } else {
            int meio = tam/2; 
            mediana = (merge[meio] + merge[meio-1]) /2.0;
        }
        return static_cast<double>(mediana);
    }

       
};