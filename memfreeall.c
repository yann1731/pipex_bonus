#include "pipex_bonus.h"

void    memfreeall(t_data data)
{
    memfreecmd(data.cmd);
    memfreecmdpath(data.cmdpath);
    memfreecmdpath(data.path);
}