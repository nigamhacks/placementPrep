#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string , string >myDictionary;
    myDictionary.insert(pair<string , string >("apple" , "der apfel"));
    myDictionary.insert(pair<string , string >("banana" , "dir banane"));
    myDictionary.insert(pair<string , string >("orange" , "die orange, die apfelsine"));
    myDictionary.insert(pair<string , string >("strawberry" , "die erdbeere"));

    for(auto pair:myDictionary){
        cout<<pair.first<<"-" <<pair.second<<endl;
    }
    cout<<myDictionary.size();
    return 0;
}