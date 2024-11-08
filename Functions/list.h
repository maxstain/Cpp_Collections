//
// Created by Ryzerrector on 12/2/2023.
//

#ifndef COLLECTIONS_LIST_H
#define COLLECTIONS_LIST_H

#include <iostream>
#include <list>

using namespace std;

void createList(list<int> &montab)
{
    montab.push_back(1);
    montab.push_back(2);
    montab.push_back(2);
}

void AfficheList(list<int> montab)
{
    montab.push_back(1);

    for (list<int>::iterator it = montab.begin(); it != montab.end(); ++it) {
        cout << ' ' << *it;
    }
    cout << "\n";
}

#endif //COLLECTIONS_LIST_H