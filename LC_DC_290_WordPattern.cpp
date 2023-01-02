#include <bits/stdc++.h>

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {

        // First, converting the given word strings into distinct words in a vector.
        string word = "";
        s = s + " ";

        vector<string> words;
        for (char c : s)
        {
            if (c == ' ')
            {
                words.push_back(word);
                word = "";
            }
            else
            {
                word = word + c;
            }
        }

        // If the lengths are not equal, it means we cannot map every character from the   pattern with the words of the string, so return false;
        if (pattern.size() != words.size())
            return false;

        // Creating a map for pattern char value to word strings.
        map<char, string> mapCharToWord;
        set<string> mappedStrings;

        for (int i = 0; i < pattern.size(); i++)
        {

            // if(mapCharToWord.find(pattern[i])==mapCharToWord.end()){
            //   mapCharToWord[pattern[i]]=words[i];
            // }
            // else{
            //     if(mappedStrings.find(words[i])==mappedStrings.end()){
            //         mappedStrings.insert(words[i]);
            //         continue;
            //     }
            //     else{
            //         return false;
            //     }
            // }

            // Checking if the char from the pattern exists in map or not, if it exists,
            // check if the value of this existing key is same as the current word value, if both are same, means we are mapping this word correctly, else return false.
            if (mapCharToWord.find(pattern[i]) != mapCharToWord.end())
            {
                if (mapCharToWord[pattern[i]] != words[i])
                {
                    return false;
                }
            }
            // Following the above, if the char from the pattern doesn't exists, then the word should also not present, so it must not be present in the set string, so checking if the word exists or not, if exists means we are incorrectly mapping this word, else simply add the char of the pattern in the map and also the current word in the set.
            else
            {
                // if(mappedStrings.find(words[i])!=mappedStrings.end()){
                if (mappedStrings.count(words[i]) > 0)
                {
                    return false;
                }
                mapCharToWord[pattern[i]] = words[i];
                mappedStrings.insert(words[i]);
            }
        }
        // Return true if everything is fine till this end.
        return true;
    }
};