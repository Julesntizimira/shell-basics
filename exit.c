/**
 *  _exit_ - exit
 *  @envp: *envp[]
 *  @cmds: *cmds[][]
 */
void _exit_(char *envp[], char *cmds[])
{
	(void)enp;

	_free(cmds);
	exit(0);
}
