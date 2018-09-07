#include <iostream>>
#include "LT.h"
#include "Error.h"
namespace LT
{
	LexTable Create(int size)
	{
		LexTable table;
		if (!size < LT_MAXSIZE)
		{
			throw ERROR_THROW(113);
		}
		table.maxsize = size;
		table.size = 0;
		return table;
	}
	void Add(LexTable& lextable, Entry entry)
	{
		if (lextable.size + 1 > lextable.maxsize)
		{
			throw ERROR_THROW(114);
		}
		if ((lextable.size) == 0)
		{
			lextable.table = &entry;
			lextable.size +=1;
		}
	}
}