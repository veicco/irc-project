#ifndef COMMAND_HANDLERS_H
#define COMMAND_HANDLERS_H

#include "../headers/client.h"

void handle_nick(Client *, Node *, char *);
void handle_user(Client *);
void handle_list(Client *);

#endif
