#include <iostream>
#include <string>
using namespace std;
int lengthOfLongestSubstring(string s) {

    //new idea:
    //while looping through string, store both length and substring
    //each character will be ran through a loop to compare with the substring
    string temp = "";
    string max = "";
    bool dis = true;
    for(int i = 0; i < s.length()-1;i++){
        for(int j = 0; j < temp.length()-1; j++){
            if(temp.length()==0){
                break;
            }
            if(s.at(i)==temp.at(j)){
                dis = false;
                break;
            }
        }

        if(!dis){
            dis = true;
            if(temp.length() > max.length()){
                max = temp;
            }
            temp = "";
            
        }

        temp += s.at(i);
    }
    return max.size();
}
int main(){
    cout<<lengthOfLongestSubstring("abcabcbb");
}
