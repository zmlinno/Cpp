//
//  HashOne.cpp
//  CPP
//
//  Created by 张木林 on 11/15/24.
//

#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<string>solution(vector<string>players,vector<string>callings)
{
    unordered_map<string,int>player_positions;
    for(int i = 0;i<players.size();i++)
    {
        player_positions[players[i]] = i;
    }
    for(const string& called_player:callings)
    {
        int current_pos = player_positions[called_player];
        if(current_pos > 0)
        {
            int prev_pos = current_pos - 1;
            string prev_player = players[prev_pos];

            swap(players[current_pos],players[prev_pos]);

            player_positions[called_player] = prev_pos;
            player_positions[prev_player] = current_pos;
        }
    }
    return players;
}
int main()
{
    //初始化选手列表
    vector<string>players = {"张","王","孙","李","郑"};

    //定义叫名顺序
    vector<string>callings = {"郑","郑"};

    //调用solution 函数获取最终排名
    vector<string>result = solution(players,callings);

    //输出结果
    cout<<"最终排名: ";
    for(const string& player:result)
    {
        cout<<player<<" ";
    }
    cout<<endl;
    return 0;
}
