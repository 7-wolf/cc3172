#pragma once
#include "cIndexCounter.h"
#include "sMod.h"
#include "sPoint.h"
#include "sXl.h"
#include "sItem.h"
#include "cSki.h"
#include "sExp.h"
#include "sZz.h"

// ������
struct sProperty : public sUnique
{
	// �Ƿ񱦱�
	bool ispet;
	// ģ��
	sMod mod;
	// ����
	eMenpai menpai = eMenpai::eNone;
	// ����
	std::string name;
	// �ȼ�
	int lv = 0;
	// ��Ѫ
	int hp;
	// ħ��
	int mp;
	// ��ŭ
	int ap = 0;
	// ���Ե�
	sPoint point;
	// װ��
	sItems equips;
	// ����
	sXl xl;
	// ����
	eSkis eskis;
	// ����
	sExp exp;
	// ����
	sZz zz;

	// ����
	sProperty();
protected:
	sProperty(bool ispet);
public:
	void reset(bool ispet);
	// �жϼ���
	bool isSki(eSki e);
	// ���ܵȼ�
	virtual int getSkiLv(eSki eski = eSki::eNone) const;
	// ����
	bool lvup(bool onlyCheck);

	void lvupEasy(int lv);

	// ��������
	virtual void save()const;
	virtual void load();
};