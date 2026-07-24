#include <vector>
#include <unordered_map>

class Solution {
public:
    bool divideArray(std::vector<int>& nums) {
            std::unordered_map<int, int> counts;
                    
                            // Count frequencies of each number
                                    for (int num : nums) {
                                                counts[num]++;
                                                        }
                                                                
                                                                        // Verify all counts are even
                                                                                for (auto const& [num, count] : counts) {
                                                                                            if (count % 2 != 0) {
                                                                                                            return false;
                                                                                                                        }
                                                                                                                                }
                                                                                                                                        
                                                                                                                                                return true;
                                                                                                                                                    }
                                                                                                                                                    };
                                                                                                                                                    