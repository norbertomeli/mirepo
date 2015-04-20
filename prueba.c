#include <stdio.h>
#include <stdlib.h>
int main()
{
pid_t pid;
if ((pid = fork()) < 0)
exit(1);
else if (pid == 0)
exit(0);
sleep(120);
exit(0);
}
