#include "shell.h"

/**
 *free_1 - frees malloc'd dupli blocks
 *@dupli: dupli size allocation
 *
 *Return: Nothing
 */
void free_1(char *dupli)
{
	static char *du;

	if (!dupli)
	{
		if (du)
			free(du);
	}
	if (dupli)
	{
		if (du)
			free(du);
		du = dupli;
	}
}


/**
 *free_2 - frees malloc'd line and command block
 *@line: pointer to line
 *@command: command
 *
 *Return: Nothing
 */
void free_2(char *line, char **command)
{
	static char *l;
	static char **cmd;

	if (!line && !command)
	{
		{
			if (l)
				free(l);
			if (cmd)
				free(cmd);
		}
		if (line)
		{
			if (l)
				free(l);
			l = line;
		}
		if (command)
		{
			if (cmd)
				free(cmd);
			cmd = command;
		}
	}
}



/**
 *free_3 - frees malloc'd combine and directory block
 *@dir: directory
 *@combine: combine
 *
 *Return: Nothing
 */
void free_3(char **dir, char *combine)
{
	static char **di;
	static char *co;

	if (!dir && !combine)
	{
		if (di)
			free(di);
		if (co)
			free(co);
	}
	if (dir)
	{
		if (di)
			free(di);
		di = dir;
	}
	if (combine)
	{
		if (co)
			free(co);
		co = combine;
	}
}
/**
 *free_4 - frees malloc'd token and buffer block
 *@tokens: tokens
 *@buf: buffer
 *
 *Return: Nothing
 */
void free_4(char **tokens, char *buf)
{
	static char **tokn;
	static char *bu;

	if (!tokens && !buf)
	{
		if (tokn)
			free(tokn);
		if (bu)
			free(bu);
	}
	if (tokens)
	{
		if (tokn)
			free(tokn);
		tokn = tokens;
	}
	if (buf)
	{
		if (bu)
			free(bu);
		bu = buf;
	}
}


/**
 *free_5 - frees malloc'd tok and buf2 blocks
 *@tok: token
 *@buf2: buffer
 *
 *Return: Nothing
 */
void free_5(char **tok, char *buf2)
{
	static char **to;
	static char *b2;

	if (!tok && !buf2)
	{
		if (to)
			free(to);
		if (b2)
			free(b2);
	}
	if (tok)
	{
		if (to)
			free(to);
		to = tok;
	}
	if (buf2)
	{
		if (b2)
			free(b2);
		b2 = buf2;
	}
}
