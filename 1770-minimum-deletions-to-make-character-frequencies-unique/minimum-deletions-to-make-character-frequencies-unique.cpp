class Solution {
public:
    int minDeletions(string s) {
       vector<int> char_freq(26, 0);

// Iterate through the characters of the input string s to count their frequencies.
for (char c : s) {
    char_freq[c - 'a']++; // Increment the corresponding frequency counter.
}

// Sort the frequency vector in non-decreasing order.
sort(char_freq.begin(), char_freq.end());

// Initialize a variable to keep track of the minimum number of deletions needed.
int num_deletions = 0;

// Iterate through the sorted frequency vector in reverse order.
for (int i = 24; i >= 0; i--) {
    // If the current frequency is 0, break the loop (no more characters with this frequency).
    if (char_freq[i] == 0) {
        break;
    }
    
    // Check if the current frequency is greater than or equal to the next frequency.
    if (char_freq[i] >= char_freq[i + 1]) {
        int prev = char_freq[i];
        // Reduce the current frequency to make it one less than the next frequency.
        char_freq[i] = max(0, char_freq[i + 1] - 1);
        // Update the deletion count by the difference between previous and current frequency.
        num_deletions += prev - char_freq[i];
    }
}

// Return the minimum number of deletions required to make the string "good."
return num_deletions;
        
    }
};