#include "Functions/array.h"
#include "Functions/vector.h"
#include "Functions/list.h"
#include "Functions/map.h"

int main() {
    /* ========= Declarations =========*/
    list<int> list;
    map<int, int> map;
    vector<int> montab;

    /* ========= initialisations =========*/
    createMap(map);
    createList(list);
    createVector(montab);

    // inset elements in random order
    map.insert({2, 30});
    map.insert({1, 40});
    map.insert({3, 60});
    // These elements will be rejected
    map.insert({2, 20});
    map.insert({5, 50});

    /* ========= Display =========*/
    // afficheArray();
    AfficheVector(montab);
    // AfficheList(list);
    cout << "KEY\tELEMENT\n";
    AfficheMap(map);

    return 0;
}