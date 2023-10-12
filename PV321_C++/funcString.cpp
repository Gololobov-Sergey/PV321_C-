#include "funcString.h"
#include<iostream>


char* delSubStr(const char* str, const char* old)
{
	const char* temp = str;
	int len = strlen(str);
	char* res = new char[len + 1];
	res[0] = '\0';
	const char* p = strstr(temp, old);
	while (p != nullptr)
	{
		strncat_s(res, len + 1, temp, p - temp);
		temp = p + strlen(old);
		p = strstr(temp, old);
	}

	strcat_s(res, len + 1, temp);
	return res;
}

int countWord(const char* str)
{
	int word = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			word++;
		}
		i++;
	}
	return word;
}

char* replaceSymbol(const char* str, char old, char _new)
{
	int len = strlen(str);
	char* res = new char[len + 1];
	for (size_t i = 0; i < len + 1; i++)
	{
		if (str[i] == old)
		{
			res[i] = _new;
		}
		else
		{
			res[i] = str[i];
		}
	}
	return res;
}
