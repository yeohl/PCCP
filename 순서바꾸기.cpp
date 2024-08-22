#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    for(int i = n; i<num_list.size(); i++){
        answer.push_back(num_list[i]);
    }
    for(int j = 0; j<=n-1; j++){
        answer.push_back(num_list[j]);
    }
    
    return answer;
}
