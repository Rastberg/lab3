#include "math.h"
struct Agent
{
   int x;
   int y;
};

struct Agent newagent(int x,int y)
{
    struct Agent agent;
    agent.x = x;
    agent.y = y;
    return agent;
};

void north(struct Agent *a)
{
    (a->y)++;
}

void south(struct Agent *a)
{
    (a->y)--;
}

void east(struct Agent *a)
{
    (a->x)++;
}

void west(struct Agent *a)
{
    (a->x)--;
}

double distance(struct Agent a,struct Agent b)
{
    int deltax = a.x - b.x;
    int deltay = a.y - b.y;
    double dist = sqrt(deltax*deltax+deltay*deltay);
    return dist;
}
