#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int strfindMin(vector<string>str){
    //first convert string to minute
    vector<int>minutes;//for store all minute
    for (int i = 0; i < str.size(); i++)
    {
        string position=str[i];
        int hour=stoi(position.substr(0,2));
        int minute=stoi(position.substr(3,2));
        int totalMinute=hour*60+minute;
        minutes.push_back(totalMinute);
        //done conversion

    }
    // for (int i = 0; i < minutes.size(); i++)
    // {
    //     cout<<minutes[i]<<" ";
    // }

    //second sort it
    sort(minutes.begin(),minutes.end());

    //third compare it with its next
    int mini=INT_MAX;
        for (int i = 0; i < minutes.size()-1; i++)
    {
        // cout<<minutes[i]<<" ";
        int diff=minutes[i+1]-minutes[i];
        mini=min(diff,mini);
    }
    //fourth compare with first to last as clock is always connect (continuous)
    //why 1440 as -> lower index value is smaller and upper is bigger so eg.1440-10=1430 so after add [0]+1440-1440=sense banta hei
    //GAME YAHA HAIII
    int final=minutes[0]+1440-minutes[minutes.size()-1];
    mini=min(mini,final);
    return mini;     
    }

int main()
{
 vector<string>str{"00:00","23:59","00:00"};
int ans=strfindMin(str);
cout<<str.size()<<endl;
cout<<ans;
 return 0;
}