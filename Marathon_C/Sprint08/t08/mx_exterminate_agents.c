#include "exterminate_agents.h"

void mx_exterminate_agents(t_agent ***agents){
    t_agent **del_str = *agents;
    for (int i = 0; del_str[i]; i++) {
        free(del_str[i]->name);
        free(del_str[i]);
    }
    free(*agents);
    *agents = NULL;
}
