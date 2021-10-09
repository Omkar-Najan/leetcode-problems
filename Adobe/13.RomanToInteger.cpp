#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
/*
for i=0;to len:
    if(i is last index or roman[s[i]] >= romanps[i+1]):
        num = roman[str[i]] and i++;
    else
        num = roman[str[i+1]] - roman[str[i]];
        i=i+2;

    sum += num
*/
int RomanToInteger(string s){
    map<char , int> roman;
    roman.insert(make_pair('I' , 1));
    roman.insert(make_pair('V' , 5));
    roman.insert(make_pair('X' , 10));
    roman.insert(make_pair('L' , 50));
    roman.insert(make_pair('C' , 100));
    roman.insert(make_pair('D' , 500));
    roman.insert(make_pair('M' , 1000));

    int len = s.length() , num , sum = 0;

    for(int i=0;i<len;){
        num=0;
        if(i == len-1 || roman[s[i]] >= roman[s[i+1]]){
            num = roman[s[i]];
            i++;
        }else{
            num = roman[s[i+1]] - roman[s[i]];
            i+=2;
        }
        sum += num;
    }
    return sum;

}


int main(){
    string s;
    cin >> s;

    int ans = RomanToInteger(s);
    cout << ans << endl;
    return 0;
}