#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution( string t,  string p) {
    int answer = 0;
    int p_len = p.length();

    
    for (size_t i = 0; i <= t.length() - p_len; i++) {
        string sub_str = t.substr(i, p_len);  
        
        if (sub_str <= p) {
            answer++; 
        }
    }

    return answer;
}
