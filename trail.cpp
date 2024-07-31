#include <iostream>
using namespace std;

int minTimeToUpdateServers(int req1, int req2, int t1, int t2) {
    int s1 = 0, s2 = 0;

    for (int i = 1; i < 1e5; i++) {
        if(i % req1 == 0 && i % req2 == 0) continue;//both server 1 and server 2 gets request so no update
        if (i % req1 == 0 && s2 < t2) {
            s2++;
        } else if (i % req2 == 0 && s1 < t1) {
            s1++;
        }
        else if (i % req1 != 0 && i % req2 != 0){
            if (s1 < t1) { 
                s1++;
            } else if (s2 < t2) {
                s2++;
            }
        }

        if (s1 == t1 && s2 == t2) {
            return i;
        }
    }
    return 0;
}

int main() {
    int req1 = 2, req2 = 3, t1 = 3, t2 = 1 ;
    int minTime = minTimeToUpdateServers(req1, req2, t1, t2);
    cout << "Minimum time to update servers: " << minTime << endl;
    return 0;
}