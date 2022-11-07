#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {

    pair<string, int> doter1= {"batride", 6000};
    pair<string, int> doter2 = {"pudge", 9500};
    pair<string, int> doter3 = {"puck", 13200};
    pair<string, int> doter4 = {"alwayswannafly", 9100};
    pair<string, int> doter5 = {"alohadance", 666666};

    vector<pair<string,int> > dream_team = {doter1, doter2, doter3, doter4, doter5};

   

    sort(dream_team.begin(),dream_team.end(),[](auto a, auto b){ return a.second < b.second; });

  

    for (int i = 0; i < dream_team.size(); ++i)
        cout << dream_team[i].first << ' ' << dream_team[i].second << endl;


} 
