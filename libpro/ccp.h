#pragma once
#include "cEquip.h"
#include "sPropertyInfo.h"
#include "sAttribute.h"
#include "sPet.h"
#include "sRole.h"

namespace ccp
{
	struct sZhuijia 
	{ 
		eSki e = eSki::eNone; 
		int rate = 0, lvGap;
		operator bool()const 
		{
			return e != eSki::eNone && rate > 0;
		}
	};
	typedef std::vector<sZhuijia> sZhuijias;
}
struct sPropertys
{
	int spurting = 0, zhuiji = 0;
	sPropertyInfo info;
	sAttribute attr;
	ccp::sZhuijias zhuijias;
	eSkis specials;
};
// ���Լ���
namespace ccp
{
	static const int cFF = 0xFF;
	// ������� 
	void apply(sAttribute& attr, cEquip::eProPerty epro, int skilv);
	void apply(sAttribute& attr, const sPoint& point);
	void apply(sAttribute& attr, const sPoint& point, const sZz& zz, int lv);
	void apply(sAttribute& attr, const cEquip::sPropertys& pros);
	// ��������
	void apply(sPropertyInfo& info, eMenpai menpai);
	void apply(sPropertyInfo& info, const sXl& xl);
	// װ��
	void apply(sPropertys& pr, const sItems& equips, sStone* stone);
	// ��������
	void apply(sPropertyInfo& info, sAttribute& attr, eSki eski);
	// ���⼼��
	void apply(std::set<eSki>& mutexs, const eSkis& eskis);
	// ������
	void apply(sPropertys& pros, const sProperty* pro);
	// ����
	void fillHpMp(sProperty* pro);
	// ����
	bool lvup(sProperty* pro, bool onlyCheck);
	// ����
	bool lvdown(sProperty* pro, bool onlyCheck);
	// ����Ȳ�Ҫ�� �߼����Ǿɵ�
	bool lvdown(sRole* role);
	// ���ɼ���
	bool addSki(eSkis& eskis, eMenpai mp);
	// ��Ӽ���
	bool addSki(eSkis& eskis, eSki eski, int idx = cFF);
	// �ϱ���
	sPet* compose(const sPet* pet1, const sPet* pet2);
};