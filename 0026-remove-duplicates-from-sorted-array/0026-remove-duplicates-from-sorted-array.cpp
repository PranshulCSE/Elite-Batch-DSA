class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
             if (nums.empty()) return 0; // Handle empty edge case
        
        int i = 0; // The 'slow' pointer
        for (int j = 1; j < nums.size(); j++) { // The 'fast' pointer
            if (nums[i] != nums[j]) { 
                i++; // Move the slow pointer to the next available slot
                nums[i] = nums[j]; // Update the slot with the new unique value
            }
        }
        return i + 1; // Return the count of unique elements
   
    }
};