#ifndef _CONSOLE_H_
#define _CONSOLE_H_

void cls_console();
char getchr(char min, char max);
int  is_param(wchar_t *name);
void clean_cmd_line();

wchar_t *get_param(wchar_t *name);

int s_gets(char *buff, int size);
int s_wgets(wchar_t *buff, int size);

#endif