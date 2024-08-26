#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string a_str = to_string(a);
    string b_str = to_string(b);
    
    if(a_str+b_str > b_str+a_str){
        string answer_str = a_str+b_str;
        answer = stoi(answer_str);
    }else {
        string answer_str = b_str+a_str;
        answer = stoi(answer_str);
    }
        
    if(a_str+b_str == b_str+a_str){
        string answer_str = a_str+b_str;
        answer = stoi(answer_str);
    } 
    
    return answer;
}
