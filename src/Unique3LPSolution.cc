#include "Unique3LPSolution.h"
#include <unordered_map>
#include <unordered_set>

using namespace std;

int Unique3LPSolution::Unique3LPalindromes(string s){
    int count = 0;
    std::unordered_map<char, vector<int>> idx;
    std::unordered_map<char, std::unordered_set<char>> pair;
    for(int i = 0; i < s.size(); i++){
        idx[s[i]].push_back(i);
    }

    for(const auto& c : idx){
        int start = c.second.front(), end = c.second.back();

        if(end-start <= 1) continue;

        for(int i = start+1; i < end; i++){
            pair[c.first].insert(s[i]);
        }
    }

    // for(int i = 0; i < s.size() - 2; i++){
    //     auto pos = s.substr(i+1).find_last_of(s[i]);
    //     if(pos == string::npos) continue;
    //     pos += i+1;
    //     for(int j = i+1; j < pos; j++){
    //         pair[s[pos]].insert(s[j]);
    //     }
    // }

    for(const auto& d : pair){
        count += d.second.size();
    }

    return count;
}