class Solution {
public:
    bool winnerOfGame(string colors) {
        int as=0,bs=0;
        char c,p,n;
        for(int i=1;i<colors.size();i++)
        {
            c=colors[i];
            p=colors[i-1];
            n=colors[i+1];
            if(c=='A' && p=='A'&& n=='A') as++;
            else if(c=='B' && p=='B'&&n=='B') bs++;
        }
        return as>bs;
    }
};