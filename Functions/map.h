//
// Created by Ryzerrector on 12/2/2023.
//

#ifndef COLLECTIONS_MAP_H
#define COLLECTIONS_MAP_H

#include <iostream>
#include <map>

using namespace std;

void createMap(map<int, int> &map) {
    map[1] = 10;
    map[2] = 20;
    map[3] = 30;
}

void AfficheMap(const map<int, int>& map) {
    for (auto & it : map) {
        cout << it.first << "\t" << it.second << "\n";
    }
}

#endif //COLLECTIONS_MAP_H