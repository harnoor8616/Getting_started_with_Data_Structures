class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<string>::iterator it=sentences.begin();
        int max_words=0;
        int words=1;
        while(it!=sentences.end())
        {
            words=1;
            for(int i=0;i<it->length();i++)
            {
                if((*it)[i]==' ')
                {
                    words+=1;
                }
            }
            if(words>max_words)
            {
                max_words=words;
            }
            it++;
        }
        return max_words;
    }
};