#include <iostream>
#include <string>
#include <array>
using namespace std;

bool checkInclusion( string s1,  string s2) {
    int s1Len = s1.length();
    int s2Len = s2.length();
    
    if (s1Len > s2Len) {
        return false;
    }
    
    array<int, 26> s1Freq = {0};
    array<int, 26> s2Freq = {0};
    
    // Calculate frequency of characters in s1
    for (char ch : s1) {
        s1Freq[ch - 'a']++;
    }
    
    // Initialize the frequency of characters in the sliding window of s2
    for (int i = 0; i < s1Len; ++i) {
        s2Freq[s2[i] - 'a']++;
    }
    
    // Check if the initial window in s2 contains a permutation of s1
    if (s1Freq == s2Freq) {
        return true;
    }
    
    // Slide the window through s2 and update frequencies
    for (int i = s1Len; i < s2Len; ++i) {
        // Remove leftmost character from the window
        s2Freq[s2[i - s1Len] - 'a']--;
        // Add the new character to the window
        s2Freq[s2[i] - 'a']++;
        
        // Check if the current window contains a permutation of s1
        if (s1Freq == s2Freq) {
            return true;
        }
    }
    
    return false;
}

int main() {
    string s1 = "abc";
    string s2 = "eidbaooo";
    
    if (checkInclusion(s1, s2)) {
        cout << "True, s2 contains a permutation of s1." << std::endl;
    } else {
        cout << "False, s2 does not contain a permutation of s1." << std::endl;
    }
    
    return 0;
}
