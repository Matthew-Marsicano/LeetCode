#include<n2053.hpp>
string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> umap;
        for (int i = 0; i <= arr.size(); i++) {
            int counter = 0;
            if (umap.count(arr[i])){
                if (umap.count(arr[i]) < 2){
                counter--;
                }
                umap[arr[i]] = i;
            }
            else {
                counter++;
            }
        }
        for (const auto& pair : umap) {
            std::cout << pair.first << " " << pair.second << std::endl;
        }
        return "test";
    }
