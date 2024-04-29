#include <iostream>

#include<map> //"ordered map" 
#include<unordered_map>
//#include<forward_list>
#include<list>

using namespace std;

int main()
{
    //list<int> nums; 

    //scrabble - 14 pts 
    std::map<char, int>  pointMap =
    {
        {'a', 1},
        {'b', 3}, 
        {'c', 3}, 
        {'d', 1}
    };

    pointMap.insert({ 'e', 1 });
    //cout << pointMap.find('c') << endl; 

    cout << "pointmap.size returns: " << pointMap.size() << endl;
    cout << "pointmap.count returns: " << pointMap.count('a') << endl;
    for (auto& pair : pointMap) // remember for range-based for loops, `begin` and `end` 
    {
        cout << pair.first << " - is worth: " << pair.second << " points\n";
    }
    
/*    map<pair<double, double>, string> countryMap =
    {
        {{32.34, -95.30}, "Somewhere in Tyler"}, 

        {{44.40, -69.04}, "Gouldsboro, Maine"}
    };

    cout << countryMap.at({ 32.34, -95.30 }) << endl; 
    cout << countryMap[{44.401, -69.04}] << endl*/;


    return 0;
}