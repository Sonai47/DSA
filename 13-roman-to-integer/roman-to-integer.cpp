class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman;
    roman['I']=1;
    roman['V']=5;
    roman['X']=10;
    roman['L']=50;
    roman['C']=100;
    roman['D']=500;
    roman['M']=1000;

    int value=0;
    int final_value=0;
    
    for (int i=s.length()-1;i>=0;i--)
    {
        cout << s[i] << endl;
        if (roman[s[i]] < roman[s[i+1]])
        {
            value=roman[s[i]];
            cout << value << endl;
            final_value -= value;
            cout << final_value << endl;
        } else {
            value = roman[s[i]];
            cout << value << endl;
            final_value += value;
            cout<<final_value<< endl;
        }
    }

    return final_value;
        
    }
};