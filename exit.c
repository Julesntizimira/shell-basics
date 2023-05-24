# include "main.h"

/**
 *  _exit_ - exit
 *  @cmds: *cmds[][]
 */
void _exit_(char *cmds[])
{
	int i;

	if (cmds[1] == NULL)
	{
		_free(cmds);
		_free(evar);
		exit(0);
	}
	else
	{
		i = atoi(cmds[1]);
		_free(cmds);
		_free(evar);
		exit(i);
	}
}
