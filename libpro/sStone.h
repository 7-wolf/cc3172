#pragma once
#include "_inc.h"

typedef txtIcon::eStone eStone;
// װ���ӳ�
struct sStone
{
	std::vector<int> idxs;

	sStone();
	eStone correct(int idx, bool add);
	void correct();
	eStone getStone(int idx);
	eStone switchStone(int idx);

	void save() const;
	void load();
};