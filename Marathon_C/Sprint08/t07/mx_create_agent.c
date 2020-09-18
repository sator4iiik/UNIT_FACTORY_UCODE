#include "create_new_agents.h"

t_agent* mx_create_agent(char* name, int power, int strength) {
    t_agent *one = NULL;

    if(name == NULL)
        return NULL;
    one = (t_agent *)malloc(sizeof(t_agent));
    one->name = mx_strdup(name);
    one->power = power;
    one->strength = strength;
    return one;
}
