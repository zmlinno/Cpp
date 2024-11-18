//
//  HashOne.hpp
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
//solution函数，用于计算每张照片的总追忆分数
vector<int>solution(vector<string> name,vector<int>yearning,vector<vector<string>>photo)
{
    //1.创建哈希表来存储每个人的追忆分数
    unordered_map<string,int>score_map;
    for(int i = 0;i<name.size();++i)
    {
        score_map[name[i]] = yearning[i];
    }
    
    //2.遍历每张照片，计算每张照片的追忆分数
    vector<int>answer;
    for(const auto& people_in_photo : photo)
    {
        int total_score = 0;
        for(const string& person:people_in_photo)
        {
            total_score += score_map[person];
            //如果person不在map中，默认为0
        }
        answer.push_back(total_score);
    }
    return answer;
}
int main()
{
    vector<string>name = {"may","kain","coni","don"};
    vector<int>yearning = {5,10,1,7};
    
    //初始化 photo数组，包含每张照片中的人名
    vector<vector<string>>photo = {{"may","kain","coni"},
        {"kain"},
        {"may","coni"}
    };
    
    //调用solution函数
    vector<int> result = solution(name,yearning,photo);
    
    //输出每张照片的总追忆分数
    cout<<"每张照片的总追忆分数:"<<endl;
    for(int score: result)
    {
        cout<<score<<" ";
    }
    cout<<endl;
    return 0;
}
