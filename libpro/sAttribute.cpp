#include "sAttribute.h"
#include "_inc.h"

int3::int3()
{
	reset();
}

int3::operator int()
{
	return std::max(0, ori) * std::max(0, per) / 100 + std::max(0, add);
}

int3::operator const int() const
{
	return std::max(0, ori) * std::max(0, per) / 100 + std::max(0, add);
}

void int3::reset()
{
	ori = add = 0;
	per = 100;
}

void int3::reset(int _add)
{
	add = _add;
	ori = 0;
}



//////////////////////////////////////////////////////////////////////////
// const int sAttribute::cHp = 100;
// const int sAttribute::cMp = 200;
const int sAttribute::cAp = 150;
// const int sAttribute::cHit = 40;
// const int sAttribute::cAtk = 30;
sAttribute::sAttribute()
{
	reset();
}

void sAttribute::reset()
{
	hpMax.reset();
	mpMax.reset();

	// ��� ����
	hit.reset();
	// ��� �˺�
	atk.reset();
	// ��� ����
	def.reset();
	// ��� �����˺�
	mtk.reset();
	// ��� ��������
	mef.reset();
	// ��� �ٶ�
	speed.reset();
	// ��� ���
	avoid.reset();

	hpMax.ori = 256;
	mpMax.ori = 256;
	hit.ori = 64;
	atk.ori = 16;
	def.ori = 16;
	mtk.ori = 16;
	mef.ori = 16;
	speed.ori = 8;
	avoid.ori = 16;
}
