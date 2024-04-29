#include <iostream>
#include <map>

#include<unordered_map>

using namespace std;

int main()
{
    //using stringIntUNOrderedMap = std::unordered_map<string, int>;
    ////an alias (since type name is “unwieldy”)
    ////auto is used in a few slides for a similar purpose
    //stringIntUNOrderedMap UNorderedNatoMap;

    //UNorderedNatoMap["bravo"] = 2; //Note the insertion order
    //UNorderedNatoMap["alpha"] = 1;
    //UNorderedNatoMap["charlie"] = 3;

    //UNorderedNatoMap["delta"] = 4;


    //UNorderedNatoMap["echo"] = 5;

    //for (auto& pair : UNorderedNatoMap)
    //{
    //    cout << pair.first << "\t" << pair.second << "\n";
    //}

    map<string, vector<string>> homonymDefinitions;
    vector<string> definitionsOfBark =
    {
        "a sound that a dog (or seal) makes",
        "the stuff on the outside of a tree"
    };

    //insert a first homonym:
    homonymDefinitions["bark"] = definitionsOfBark;


    homonymDefinitions["date"] =
    {
        "a particular month, day, and year",
        "an activity that aims to assess a potential partner",
        "a (rather unpopular) fruit",
    };




    return 0;
}