#include<iostream>
#include<map>
#include<string>
#include<list>
using namespace std;
int main()
{
    map<string, list<string>> pokedex;

    /*list is created 
    this list is going to be paired keys i.e: Pikachu, Charmander... 
    in map*/

    list <string> pikachuAttacks {"thunder shock", "tail whip", "quick attacks" };
    list <string> charmanderAttacks {"flame thrower", "scary face" };
    list <string> chikoritaAttacks {"razor leaf", "poison powder" };

    pokedex.insert(pair<string, list<string>>("Pikachu", pikachuAttacks));
    pokedex.insert(pair<string, list<string>>("Charmander", charmanderAttacks));
    pokedex.insert(pair<string, list<string>>("Chikorita", chikoritaAttacks));
    
    for(auto pair: pokedex){
        cout<<pair.first<<" - " ;
        // for list elements corresponds to their key
        for(auto attack: pair.second){
            cout<<attack<<", ";

           
        }
         cout<<endl; 
    }
    
    
    return 0;
}