//
// Created by Ryzerrector on 11/18/2023.
//

#ifndef COLLECTIONS_ARRAY_H
#define COLLECTIONS_ARRAY_H

#include <iostream>
#include <array>

using namespace std;

void afficheArray() {
    array<int, 4> tab = {4, 7, 1, 5};

    cout << tab.size() << endl;

    for (int i = 0; i < tab.size(); ++i) {
        cout << tab[i] << " ";
        if (i == tab.size() - 1) {
            cout << endl;
        }
    }

    for (int i = 0; i < tab.size(); ++i) {
        cout << tab.at(i) << " ";
        if (i == tab.size() - 1) {
            cout << endl;
        }
    }
}

#endif //COLLECTIONS_ARRAY_H