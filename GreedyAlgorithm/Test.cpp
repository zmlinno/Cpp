//
//  Test.cpp
//  CPP
//
//  Created by 张木林 on 11/18/24.
//

#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iostream>
using namespace std;

int solution(vector<int>picks,vector<string>minerals)
{
    int answer = 0;
    
    //1.将每个矿石分为5组
    vector<vector<string>>groups;
    for(int i = 0;i<minerals.size();i+=5)
    {
        vector<string>group;
        for(int j = i;j<i+5 && j<minerals.size();++j)
        {
            group.push_back(minerals[j]);
        }
        groups.push_back(group);
    }
    
    //2.计算每组矿石的疲劳值
    vector<pair<int,vector<int>>>fatigue;
    for(auto& group:groups)
    {
        int dia_fatigue = 0,iron_fatigue = 0,stone_fatigue = 0;
        for(auto& minerals:group)
        {
            if(minerals == "diamond")
            {
                dia_fatigue += 1;
                iron_fatigue += 5;
                stone_fatigue += 25;
            }
            else if(minerals == "iron")
            {
                dia_fatigue += 1;
                iron_fatigue += 1;
                stone_fatigue += 5;
            }
            else if(minerals == "stone")
            {
                dia_fatigue += 1;
                iron_fatigue += 1;
                stone_fatigue += 1;
            }
        }
        fatigue.push_back({dia_fatigue + iron_fatigue + stone_fatigue,{dia_fatigue,iron_fatigue,stone_fatigue}});
        
    }
    // 3. 按疲劳值的总和排序（贪心）
    sort(fatigue.begin(), fatigue.end(), [](const pair<int, vector<int>>& a, const pair<int, vector<int>>& b) {
        return a.first > b.first; // 按总疲劳值降序排序
    });
    
    //4.贪心选择矿镐挖掘每组矿石
    for(auto& f:fatigue)
    {
        if(picks[0]>[0])
        {
            answer += f.second[0];
            picks[0]--;
        }
        else if(picks[1]>[0])
        {
            answer += f.seconde[1];
            picks[1]--;
        }
        else if(picks[2]>[0])
        {
            answer += f.second[2];
            picks[2]--;
        }
        else
        {
            break;
        }
    }
    return answer;
}


int main() {
    vector<int> picks = {1, 3, 2};
    vector<string> minerals = {"diamond", "diamond", "diamond", "iron", "iron", "diamond", "iron", "stone"};
    int result = solution(picks, minerals);
    cout << "结果: " << result << endl; // 输出: 12
    return 0;
}
