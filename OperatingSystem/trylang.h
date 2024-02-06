#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

struct p {
    int bt;
    int at;
    int tt;
    int wt;
    int n;
    int ft;
};

vector<p> pro(string arriva, string burss) {
    float att, awt, sum_tt = 0, sum_wt = 0;
    string s, s1;

    stringstream ss1(arriva);
    stringstream ss2(burss);

    // Vector to store processes
    vector<p> id;  // Using a non-dynamic vector

    p temp;

    // Process input until there are no more tokens in the stringstream
    while (getline(ss1, s, ' ') && getline(ss2, s1, ' ')) {
        temp.at = stoi(s);
        temp.bt = stoi(s1);
        temp.n = id.size() + 1;
        id.push_back(temp);
    }

    // Sorting processes based on arrival time
    for (int i = 0; i < id.size() - 1; i++) {
        for (int a = 0; a < id.size() - i - 1; a++) {
            if (id[a].at > id[a + 1].at) {
                temp = id[a];
                id[a] = id[a + 1];
                id[a + 1] = temp;
            }
        }
    }

    // Gantt chart and completion time calculation
    for (int i = 0; i < id.size(); i++) {
        if (i == 0) {
            id[i].ft = id[i].at + id[i].bt;
        }
        else if (id[i].at > id[i - 1].ft) {
            int waiting_time = id[i].at - id[i - 1].ft;
            id[i].ft = id[i - 1].ft + id[i].bt + waiting_time;
        }
        else {
            id[i].ft = id[i - 1].ft + id[i].bt;
        }
    }

    // Turnaround time and waiting time calculation
    for (int i = 0; i < id.size(); i++) {
        id[i].tt = id[i].ft - id[i].at;
        id[i].wt = id[i].tt - id[i].bt;
    }

    // Displaying the results;
    for (int i = 0; i < id.size(); i++) {
        sum_tt += id[i].tt;
        sum_wt += id[i].wt;
    }

    // Calculating average turnaround time and average waiting time
    att = sum_tt / id.size();
    awt = sum_wt / id.size();




    return id;
}

