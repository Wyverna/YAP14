#include "stdafx.h"
#include "Log.h"
#include "Checkup.h"
#include "Parm.h"
#include "FST.h"
#include "LT.h"
#include "IT.h"
#include "iostream"
#include "iomanip"
FST::FST typeint("", 8,
	FST::NODE(1, FST::RELATION('i', 1)),
	FST::NODE(1, FST::RELATION('n', 2)),
	FST::NODE(1, FST::RELATION('t', 3)),
	FST::NODE(1, FST::RELATION('e', 4)),
	FST::NODE(1, FST::RELATION('g', 5)),
	FST::NODE(1, FST::RELATION('e', 6)),
	FST::NODE(1, FST::RELATION('r', 7)),
	FST::NODE()
);
//string
FST::FST typestring("", 7,
	FST::NODE(1, FST::RELATION('s', 1)),
	FST::NODE(1, FST::RELATION('t', 2)),
	FST::NODE(1, FST::RELATION('r', 3)),
	FST::NODE(1, FST::RELATION('i', 4)),
	FST::NODE(1, FST::RELATION('n', 5)),
	FST::NODE(1, FST::RELATION('g', 6)),
	FST::NODE()
);
//function
FST::FST typefunction("", 9,
	FST::NODE(1, FST::RELATION('f', 1)),
	FST::NODE(1, FST::RELATION('u', 2)),
	FST::NODE(1, FST::RELATION('n', 3)),
	FST::NODE(1, FST::RELATION('c', 4)),
	FST::NODE(1, FST::RELATION('t', 5)),
	FST::NODE(1, FST::RELATION('i', 6)),
	FST::NODE(1, FST::RELATION('o', 7)),
	FST::NODE(1, FST::RELATION('n', 8)),
	FST::NODE()
);
//declare
FST::FST strdeclare("", 8,
	FST::NODE(1, FST::RELATION('d', 1)),
	FST::NODE(1, FST::RELATION('e', 2)),
	FST::NODE(1, FST::RELATION('c', 3)),
	FST::NODE(1, FST::RELATION('l', 4)),
	FST::NODE(1, FST::RELATION('a', 5)),
	FST::NODE(1, FST::RELATION('r', 6)),
	FST::NODE(1, FST::RELATION('e', 7)),
	FST::NODE()
);
//return
FST::FST streturn("", 7,
	FST::NODE(1, FST::RELATION('r', 1)),
	FST::NODE(1, FST::RELATION('e', 2)),
	FST::NODE(1, FST::RELATION('t', 3)),
	FST::NODE(1, FST::RELATION('u', 4)),
	FST::NODE(1, FST::RELATION('r', 5)),
	FST::NODE(1, FST::RELATION('n', 6)),
	FST::NODE()
);
//main
FST::FST strmain("", 5,
	FST::NODE(1, FST::RELATION('m', 1)),
	FST::NODE(1, FST::RELATION('a', 2)),
	FST::NODE(1, FST::RELATION('i', 3)),
	FST::NODE(1, FST::RELATION('n', 4)),
	FST::NODE()
);
//print
FST::FST strprint("", 6,
	FST::NODE(1, FST::RELATION('p', 1)),
	FST::NODE(1, FST::RELATION('r', 2)),
	FST::NODE(1, FST::RELATION('i', 3)),
	FST::NODE(1, FST::RELATION('n', 4)),
	FST::NODE(1, FST::RELATION('t', 5)),
	FST::NODE()
);
FST::FST expression("", 2,
	FST::NODE(4,
		FST::RELATION('+', 1),
		FST::RELATION('-', 1),
		FST::RELATION('*', 1),
		FST::RELATION('/', 1)),
	FST::NODE()
);
FST::FST probel("", 2,
	FST::NODE(1, FST::RELATION(' ', 1)),
	FST::NODE()
);
FST::FST leftbrace("", 2,
	FST::NODE(1, FST::RELATION('{', 1)),
	FST::NODE()
);
FST::FST rightbrace("", 2,
	FST::NODE(1, FST::RELATION('}', 1)),
	FST::NODE()
);
FST::FST leftthesis("", 2,
	FST::NODE(1, FST::RELATION('(', 1)),
	FST::NODE()
);
FST::FST rightthesis("", 2,
	FST::NODE(1, FST::RELATION(')', 1)),
	FST::NODE()
);
FST::FST semicolon("", 2,
	FST::NODE(1, FST::RELATION(';', 1)),
	FST::NODE()
);
FST::FST comma("", 2,
	FST::NODE(1, FST::RELATION(',', 1)),
	FST::NODE()
);
FST::FST plus("", 2,
	FST::NODE(1, FST::RELATION('+', 1)),
	FST::NODE());
FST::FST minus("", 2,
	FST::NODE(1, FST::RELATION('-', 1)),
	FST::NODE());
FST::FST del("", 2,
	FST::NODE(1, FST::RELATION('/', 1)),
	FST::NODE());
FST::FST umn("", 2,
	FST::NODE(1, FST::RELATION('*', 1)),
	FST::NODE());
FST::FST ravno("", 2,
	FST::NODE(1, FST::RELATION('=', 1)),
	FST::NODE());
FST::FST Literal("", 2,
	FST::NODE(20, FST::RELATION('0', 0), FST::RELATION('1', 0), FST::RELATION('2', 0),
		FST::RELATION('3', 0), FST::RELATION('4', 0), FST::RELATION('5', 0),
		FST::RELATION('6', 0), FST::RELATION('7', 0), FST::RELATION('8', 0),
		FST::RELATION('9', 0), FST::RELATION('0', 1), FST::RELATION('1', 1),
		FST::RELATION('2', 1), FST::RELATION('3', 1), FST::RELATION('4', 1),
		FST::RELATION('5', 1), FST::RELATION('6', 1), FST::RELATION('7', 1),
		FST::RELATION('8', 1), FST::RELATION('9', 1)),
	FST::NODE()
);
FST::FST fstidenf("", 2,
	FST::NODE(54, FST::RELATION('a', 1), FST::RELATION('a', 0), FST::RELATION('b', 1), FST::RELATION('b', 0),
		FST::RELATION('c', 1), FST::RELATION('c', 0), FST::RELATION('d', 1), FST::RELATION('d', 0), FST::RELATION('e', 1), FST::RELATION('e', 0),
		FST::RELATION('f', 1), FST::RELATION('f', 0), FST::RELATION('g', 1), FST::RELATION('g', 0), FST::RELATION('h', 0), FST::RELATION('h', 1), FST::RELATION('i', 0), FST::RELATION('i', 1),
		FST::RELATION('j', 0), FST::RELATION('j', 1), FST::RELATION('k', 0), FST::RELATION('k', 1), FST::RELATION('l', 0), FST::RELATION('l', 1),
		FST::RELATION('m', 0), FST::RELATION('m', 1), FST::RELATION('n', 0), FST::RELATION('n', 1), FST::RELATION('o', 0), FST::RELATION('o', 1),
		FST::RELATION('p', 0), FST::RELATION('p', 1), FST::RELATION('q', 0), FST::RELATION('q', 1), FST::RELATION('r', 0), FST::RELATION('r', 1),
		FST::RELATION('s', 0), FST::RELATION('s', 1), FST::RELATION('t', 0), FST::RELATION('t', 1), FST::RELATION('u', 0), FST::RELATION('u', 1),
		FST::RELATION('v', 0), FST::RELATION('v', 1), FST::RELATION('w', 0), FST::RELATION('w', 1), FST::RELATION('x', 0), FST::RELATION('x', 1),
		FST::RELATION('y', 0), FST::RELATION('y', 1), FST::RELATION('z', 0), FST::RELATION('z', 1)),
		FST::NODE()
);
LT::LexTable lextab = LT::Create(LT_MAXSIZE-1);
IT::IdTable idtab = IT::Create(TI_MAXSIZE-1);
std::fstream file;
namespace Checkup
{
	bool proverka(char* m, FST::FST fst)
	{
		fst.string = m;
		return FST::execute(fst);
	}
	void zapol(int line, char m)
	{
		LT::Entry entry;
		entry.sn = line;
		entry.idxTI = LT_TI_NULLIDX;
		memset(entry.lexema, '\0', strlen(entry.lexema));
		entry.lexema[0] = m;
		Add(lextab, entry);
	}
	void Leksika(Parm::PARM parm, In::IN in)
	{
		char word[255]="";
		char word2[255]="";
		bool flagfun2 = false;
		int m = 0;//������� ��������
		int line = 1;//������� ����� 
		bool nai = false;// ���� 
		bool id1 = false;
		char sim;
		bool flag = false;//string 
		bool flag1 = false;//int
		bool id = false;
		short lit = 0;
		bool lt = false;
		bool prov = false;
		int n = 0;
		bool funflag = false;
		short kavich = 0;
		char fun[10]="global";
		char fun2[10] = "global";
		bool lt1 = false;

		for (int i = 0; i < in.size; i++)
		{
			sim = in.text[i];
			nai = false;
			if (sim == IN_CODE_ENDL)
			{
				line++;
				zapol(line, '|');
				continue;
			}
			if (sim == '\'')
			{
				kavich++;
				if (kavich == 2)
					kavich = 0;
			}
			if (kavich == 1)
			{
				word[m] = sim;
				m++;
				continue;
			}

			//������ �������� ����� �� ��������
			if (sim != ' ' && sim != ';' && sim != '-' && sim != '+' && sim != '/' && sim != '*' && sim != '\''
				&& sim != ','&&sim != ')' && sim != '(' && sim != '}' && sim != '{' && sim != IN_CODE_ENDL && sim != '=')
			{
				word[m] = sim;
				m++;
				continue;
			}
			//�������� �� �������� �����
			else
			{
				word[m] = '\0';
				m = 0;

				if (sim == IN_CODE_ENDL)
				{
					line++;
					continue;
				}
				nai = proverka(word, typestring);
				if (nai)//�������� �������� ������ string
				{
					zapol(line, LEX_STRING);
					flag = true;
				}
				if (!nai)
				{
					nai = proverka(word, typeint);
					if (nai)//�������� �������� ������ integer
					{
						flag1 = true;
						zapol(line, LEX_INTEGER);
					}
				}

				if (!nai)//�������� ����� function
				{
					nai = proverka(word, typefunction);
					if (nai)
						zapol(line, LEX_FUNCTION);
				}
				if (!nai)//�������� ����� declare
				{
					nai = proverka(word, strdeclare);
					if (nai)
						zapol(line, LEX_DECLARE);
				}
				if (!nai)//�������� ����� return
				{
					nai = proverka(word, streturn);
					if (nai)
						zapol(line, LEX_RETURN);
				}
				if (!nai)//�������� ����� main
				{
					nai = proverka(word, strmain);
					if (nai)
					{
						zapol(line, LEX_MAINFUNC);
						strcpy(fun, "main");
						strcpy(fun2, "global");
					}

				}
				if (!nai)//�������� ����� print
				{
					nai = proverka(word, strprint);
					if (nai)
						zapol(line, LEX_PRINT);
				}

				//��������� �������?
				if (word[0] == '\'')//��������� �������?
				{
					int i = 0;
					zapol(line, LEX_LITERAL);
					for (i=0; i < strlen(word); i++)
						word2[i] = word[i + 1];
					word2[i] = '\0';
					nai = true;
					lt = true;
					flag = true;
					idtab.size++;
				}
				//������������� �������?
				if (!nai)
				{
					nai = proverka(word, Literal);
					if (nai)
					{
						zapol(line, LEX_LITERAL);
						lt = true;
						flag1 = true;
						idtab.size++;
					}

				}
				if (lt && nai)
				{
					lit++;
					//��������� ������� ��������������� ���������
					idtab.table[idtab.size].id[0] = 'L';
					char o2 = (char)lit % 10;
					idtab.table[idtab.size].id[2] = o2;
					idtab.table[idtab.size].id[3] = '\0';
					idtab.table[idtab.size].idxfirstLE = line;
					idtab.table[idtab.size].idtype = IT::L;
					strcpy(idtab.table[idtab.size].fun, fun);
					if (lit - (lit % 10) <= 0)
					{
						idtab.table[idtab.size].id[1] = '0';
					}
					else
					{
						idtab.table[idtab.size].id[1] = lit - (lit % 10);
					}
					if (idtab.size > 1)
					{
						for (int u = 1; u < idtab.size && nai; u++)
						{
							if (strcmp(fun, idtab.table[u].fun) == 0)
							{
								if (idtab.table[u].idtype == 4)
								{
									if (flag1 == true)
									{
										if (atoi(word) == idtab.table[u].value.vint)
										{
											idtab.table[idtab.size].iddatatype = idtab.table[u].iddatatype;
											strcpy(idtab.table[idtab.size].id, idtab.table[u].id);
											idtab.table[idtab.size].value.vint = idtab.table[u].value.vint;
											nai = false;
											lt1 = true;
											lt = false;
											flag1 = false;
										}
									}
									if (flag == true)
									{
										if (strcmp(word2,idtab.table[u].value.vstr.str)==0)
										{
											idtab.table[idtab.size].iddatatype = idtab.table[u].iddatatype;
											strcpy(idtab.table[idtab.size].id,idtab.table[u].id);
											strcpy(idtab.table[idtab.size].value.vstr.str, idtab.table[u].value.vstr.str);
											idtab.table[idtab.size].value.vstr.len = idtab.table[u].value.vstr.len;
											nai = false;
											lt1 = true;
											lt = false;
											flag = false;
										}
									}
								}
							}
						}
					}
					if (!lt1)
					{
						lt = false;
						if (flag)
						{
							idtab.table[idtab.size].iddatatype = IT::STR;
							strcpy(idtab.table[idtab.size].value.vstr.str, word2);
							idtab.table[idtab.size].value.vstr.len = strlen(word2);
							flag = false;
						}
						if (flag1)
						{
							idtab.table[idtab.size].iddatatype = IT::INT;
							idtab.table[idtab.size].value.vint = atoi(word);
							flag1 = false;
						}
					}
					else
						lt1 = false;
				}
				//������ �� ��������, ������������
				if ((sim == ' ' && word[0] == '\0'))//���� ������
				{
					memset(word, '\0', strlen(word));
					continue;
				}

				//���� ����� ������ �� ��������, �� ����������� �� ����������� ��������������
				if (word[0] == '\0')
					nai = true;

				//����� �� �������� ��������, ��������� �� ����������� ��������������
				if (!nai)
				{

					nai = proverka(word, fstidenf);
					prov = proverka(word, fstidenf);
					if (nai || prov)
						id = true;
				}
				//����� �������� ���������������
				if (nai && id)//����� �������� ���������������
				{
					nai = false;
					id = false;
					int i = 0;
					zapol(line, LEX_ID);
					lextab.table[lextab.size].idxTI = idtab.size;
					idtab.size++;
					//��������� ������������� ��� ����������� "����������" ���������
					if (lextab.table[lextab.size - 2].lexema[0] != 'f')
					{
						if (strlen(word) < 5)
							strcpy(idtab.table[idtab.size].id, word);
						else
						{
							for (int i = 0; i < 4; i++)
							{
								idtab.table[idtab.size].id[i] = word[i];
							}
							idtab.table[idtab.size].id[4] = '\0';
						}
						idtab.table[idtab.size].idxfirstLE = line;
						strcpy(idtab.table[idtab.size].fun, fun);

					}
					else
					{
						if (strlen(word) < 5)
							strcpy(idtab.table[idtab.size].id, word);
						else
						{
							for (int i = 0; i < 4; i++)
							{
								idtab.table[idtab.size].id[i] = word[i];
							}
							idtab.table[idtab.size].id[4] = '\0';
						}
						if (idtab.table[idtab.size].idtype = IT::F)
						{
							strcpy(idtab.table[idtab.size].fun, "global");
						}
						else
						{
							strcpy(idtab.table[idtab.size].fun, fun);
						}
						idtab.table[idtab.size].idxfirstLE = line;
					}

					//�������� �� "���������" �������������"
					int u = 1;
					if (idtab.size > 1)
						for (u = 1; u < idtab.size && !nai; u++)
						{
							if (strcmp(fun, idtab.table[u].fun) == 0 || strcmp(idtab.table[u].fun,"global") == 0)
							{
								if (strcmp(idtab.table[idtab.size].id, idtab.table[u].id)==0)
								{
									idtab.table[idtab.size].iddatatype = idtab.table[u].iddatatype;
									idtab.table[idtab.size].idtype = idtab.table[u].idtype;
									strcpy(idtab.table[idtab.size].fun,idtab.table[u].fun);
									if (idtab.table[u].iddatatype == IT::INT)
									{
										idtab.table[idtab.size].value.vint = idtab.table[u].value.vint;
										flag = false;
									}
									if (idtab.table[u].iddatatype == IT::STR)
									{
										strcpy(idtab.table[idtab.size].value.vstr.str, idtab.table[u].value.vstr.str);
										idtab.table[idtab.size].value.vstr.len = idtab.table[u].value.vstr.len;
										flag1 = false;
									}
									nai = false;
									id1 = true;
								}
							}
						}
					//��� ��������������: V = 1, F = 2, P = 3, L = 4
					if (!id1)
					{
						//���������� ���������� declare integer(string) idenf;-2
						idtab.table[idtab.size].idtype = IT::V;
						//���������� ������� declare  function integer(string) idenf;
						if (lextab.table[lextab.size - 2].lexema[0] == 'f')
						{
							idtab.table[idtab.size].idtype = IT::F;
						}
						//�������� strlen(string a, int b)
						if (lextab.table[lextab.size - 3].lexema[0] == '(' || lextab.table[lextab.size - 3].lexema[0] == ',')
							idtab.table[idtab.size].idtype = IT::P;
						//������� ���������, ����� �������� �������

					//���� ����������� �������
						if (!nai)
						{
							//���������� ��������� �-�� ��� �������� ������� ���������
							if (flag)
							{
								idtab.table[idtab.size].iddatatype = IT::STR;
								strcpy(idtab.table[idtab.size].value.vstr.str, "");
								idtab.table[idtab.size].value.vstr.len = 0;
								flag = false;
							}

							if (flag1)
							{
								idtab.table[idtab.size].iddatatype = IT::INT;
								idtab.table[idtab.size].value.vint = 0;
								flag1 = false;
							}
						}
					}
					else
						id1 = false;
					nai = false;
				}
			}
			//�������� � ������ �������
			if (sim == '+' || sim == '*' || sim == '-' || sim == '/' || sim == '=')
			{
				char word2[5];
				bool nai = false;
				word2[0] = sim;
				word2[1] = '\0';

				nai = proverka(word2, umn);
				if (nai)
					zapol(line, LEX_STAR);
				if (!nai)
				{
					nai = proverka(word2, ravno);
					if (nai)
						zapol(line, LEX_RAV);
				}
				if (!nai)
				{
					nai = proverka(word2, minus);
					if (nai)
						zapol(line, LEX_MINUS);
				}
				if (!nai)
				{
					nai = proverka(word2, plus);
					if (nai)
						zapol(line, LEX_PLUS);
				}
				if (!nai)
				{
					nai = proverka(word2, del);
					if (nai)
						zapol(line, LEX_DIRSLASH);
				}


			}
			//�������-����������
			if (sim == LEX_SEMICOLON || sim == LEX_LEFTHESIS ||
				sim == LEX_RIGHTHESIS || sim == LEX_LEFTBRACE ||
				sim == LEX_BRACELET || sim == LEX_COMMA)
			{
				bool nai = false;
				memset(word, '\0', strlen(word));
				word[0] = in.text[i];
				word[1] = '\0';
				nai = proverka(word, semicolon);
				if (nai)
					zapol(line, LEX_SEMICOLON);
				if (!nai)
				{
					nai = proverka(word, leftbrace);
					if (nai)
					{
					    n = 0;
						zapol(line, LEX_LEFTBRACE);
						while (n < idtab.size && strcmp(fun,"main")!=0)
						{
							if (idtab.table[idtab.size - n].idtype == 2)
							{
								funflag = true;
								break;
							}
							n++;
						}
						if (funflag)
						{
							strcpy(fun2, fun);
							strcpy(fun, idtab.table[idtab.size - n].id);
							funflag = false;
						}
					}
				}
				if (!nai)
				{
					nai = proverka(word, rightbrace);
					if (nai)
					{
						zapol(line, LEX_BRACELET);
						strcpy(fun, fun2);
					}
				}
				if (!nai)
				{
					nai = proverka(word, comma);
					if (nai)
						zapol(line, LEX_COMMA);
				}
				if (!nai)
				{
					nai = proverka(word, leftthesis);
					if (nai)
					{
						zapol(line, LEX_LEFTHESIS);
						if (idtab.table[idtab.size].idtype == 2 && strcmp(fun,"global")==0)
						{
							strcpy(fun2, fun);
							strcpy(fun, idtab.table[idtab.size].id);
							flagfun2 = true;
						}
					}
				}
				if (!nai)
				{
					nai = proverka(word, rightthesis);
					if (nai)
					{
						zapol(line, LEX_RIGHTHESIS);
						if (flagfun2)
						{
							strcpy(fun, fun2);
							flagfun2 = false;
						}
					}
				}
			}
			//��������� ��� ��� ���� � ������ 
			memset(word, '\0', strlen(word));
		}


		std::fstream file;
		file.open(parm.log);
		if (file.fail())
		{
			throw ERROR_THROW(112);
		}
		//������ ������� ��� �����������
		for (int i = 0; i < lextab.size; i++)
		{
			if (lextab.table[i].lexema[0] == '|')
			{
				file << '\n';
				continue;
			}
			file << lextab.table[i].lexema;

		}
		file << std::setw(13) << "Name"<< std::setw(2)<<'|';
		file << std::setw(16) << "Type" << std::setw(2) << '|';
		file << std::setw(16) << "Typeid" << std::setw(2) << '|';
		file << std::setw(16) << "Line" << std::setw(2) << '|';
		file << std::setw(16) << "Value" << std::setw(2) << '|';
		file << std::setw(16) << "Length" << std::setw(2) << '|';
		file << std::setw(16) << "Area" << std::setw(2) << '|' << '\n';
		for (int i = 1; i <= idtab.size; i++)
		{
			file << std::setw(13) << idtab.table[i].id << std::setw(2)<<'|';
			if (idtab.table[i].iddatatype == IT::INT)
			{
				file << std::setw(16) << "integer" << std::setw(2) << '|';
			}
			if (idtab.table[i].iddatatype == IT::STR)
			{
				file << std::setw(16) << "string" << std::setw(2) << '|';
			}
			if (idtab.table[i].idtype == IT::F)
			{
				file << std::setw(16) << "function" << std::setw(2) << '|';
			}
			if (idtab.table[i].idtype == IT::P)
			{
				file << std::setw(16) << "parameter" << std::setw(2) << '|';
			}
			if (idtab.table[i].idtype == IT::L)
			{
				file << std::setw(16) << "literal" << std::setw(2) << '|';
			}
			if (idtab.table[i].idtype == IT::V)
			{
				file << std::setw(16) << "variable" << std::setw(2) << '|';
			}
			file << std::setw(16) << idtab.table[i].idxfirstLE << std::setw(2)<< '|';
			if (idtab.table[i].iddatatype == IT::INT)
			{
				file << std::setw(16) << idtab.table[i].value.vint<< std::setw(2)<<'|'<<std::setw(16)<<" "<< std::setw(2)<<'|';
			}
			else
			{
				file << std::setw(16) << idtab.table[i].value.vstr.str<< std::setw(2) << "|";
				file << std::setw(16) << idtab.table[i].value.vstr.len<< std::setw(2)<<'|';

			}
			file << std::setw(16) << idtab.table[i].fun << std::setw(2) << '|' << '\n';
		}
		file.close();
	}
};