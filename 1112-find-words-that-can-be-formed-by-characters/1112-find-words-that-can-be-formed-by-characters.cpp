class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        // First store the frequency of characters given in string "chars"
        // Use a map or a 26 sized array

        vector<int> charCount(26, 0);

        for(char &ch : chars){
            charCount[ch - 'a']++; // index
        }

        int result = 0;

        for(string &word : words){

            // Now check if this word is good
            vector<int> wordCount(26, 0);
            for(char &ch : word){
                wordCount[ch - 'a']++;
            }

            bool ok = true;
            for(int i = 0; i<26; i++){
                if(wordCount[i] > charCount[i]){
                    ok = false;
                    break;
                }
            }

            if(ok == true){
                result += word.length();
            }
        }

        return result;
    }
};