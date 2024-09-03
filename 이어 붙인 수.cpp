#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string a = 0, b = 0;
    for(int i = 0; i<num_list.size(); i++){
        if(num_list[i] % 2 == 0){
            a += num_list[i];
        }else{
            b += num_list[i];
        }
        answer = a+b;
    }
    return answer;
}
