# include "main.h"
/**
 *  _env_var_print - exit
 *  @envp: *envp[]
 *  @cmds: *cmds[][]
 */
void _env_var_print(char *envp[], char *cmds[])
{
	char *envvar = NULL;

	(void)envp;

	envvar = cmds[1];
	envvar++;
	printstr(_getenv(envvar));
	_putchar('\n');
	_free(cmds);
}
