#pragma once
#include "_inc.h"

typedef std::vector<eSki> eSkis;
// ����
class cSki
{
public:
	// ����
	static bool toDescs(eSki eski, sDescs& descs);
	// ѧϰ����
	static int getExp(int lv);
	// ѧϰ��Ǯ
	static int getMoney(int lv);

	static const int cGap;
};