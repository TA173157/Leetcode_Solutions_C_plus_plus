class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
      const int original_size = arr.size(); 

    for (int i = 0; i < original_size; i++) {
        // We check the element at the index 'i' relative to the original state.
        // If we are looking at a *newly inserted* 0, we skip it.
        if (arr[i] == 0) {
            // Find the position *after* the current zero (i.e., i+1)
            auto it = arr.begin();
            std::advance(it, i + 1); 
            
            // Insert the new zero
            arr.insert(it, 0); 

            // Increment i by 1 to skip over the newly inserted zero
            i++; 
        }
    }

    // Crucial step: Truncate the array back to its original size
    arr.resize(original_size);
    }
};