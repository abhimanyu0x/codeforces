#include <bits/stdc++.h>  
using namespace std;
int main()  
{  
    multimap<int, int> mp;  
  
    // these insert functions which we have written below help us  
    // with creating a multimap holding the values inserted below!  
    mp.insert({ 12, 130 });  
    mp.insert({ 11, 140 });  
    mp.insert({ 12, 160 });  
    mp.insert({ 31, 210 });
    mp.insert({ 11, 501 });  
    mp.insert({ 14, 510 }); 
    mp.insert({ 31, 210 }); 
  
    // elements which we are going to display on the Output screen are  
    cout << "The elements from position 3 in multimap are : \n";  
    cout << "Key\telements : \n";  
  
    // here we are writing the for loop, which contains the auto code  
    // functionality containing the find() function at position 3  
    for (auto itr = mp.find(31); itr != mp.end(); itr++)  
        cout << itr->first  
            << '\t' << itr->second << '\n';  
  
    return 0;  
    // The main driver code functionality ends from here!  
}  