#include "pipex_bonus.h"

void    freeall(t_data data)
{
    freecmd(data.cmd);
    freesplit(data.cmdpath);
}