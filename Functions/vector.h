//
// Created by Ryzerrector on 11/18/2023.
//

#ifndef COLLECTIONS_VECTOR_H
#define COLLECTIONS_VECTOR_H

#include <iostream>
#include <vector>

using namespace std;

void createVector(vector<int> vector)
{
    std::vector<int>::iterator it = vector.begin();
    vector.insert(it, 20);
    vector.insert(it, 30);
    vector.insert(it, 50);
}

void AfficheVector(vector<int> montab) {

    montab.push_back(1);
    montab.push_back(2);
    montab.push_back(3);

    for (vector<int>::iterator it = montab.begin(); it != montab.end(); ++it) {
        cout << ' ' << *it;
    }
}

#endif //COLLECTIONS_VECTOR_H