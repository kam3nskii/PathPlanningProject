#ifndef SEARCHRESULT_H
#define SEARCHRESULT_H
#include <list>

#include "node.h"

struct SearchResult {
    bool pathfound;
    float pathlength;
    const std::list<Node>* lppath;
    const std::list<Node>* hppath;
    unsigned int nodescreated;
    unsigned int numberofsteps;
    double time;
    SearchResult() {
        pathfound = false;
        lppath = nullptr;
        hppath = nullptr;
        pathlength = 0;
        nodescreated = 0;
        numberofsteps = 0;
        time = 0;
    }
};

#endif
