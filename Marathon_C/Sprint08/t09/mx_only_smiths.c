#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength){
    int len = 0;
    t_agent **one = NULL;
    int i = 0;
    int len1 = 0;

    while (agents[len1]){
        len1++;
    }
    one = (t_agent **)malloc(sizeof(t_agent)*len1);
    while (agents[len]) {
        if(mx_strcmp("Smith",agents[len]->name) == 0){
            if(agents[len]->strength < strength){
                one[i] = agents[len];
                i++;
            }
        }
        len++;
    }
    mx_exterminate_agents(&agents);
    return one;
}


