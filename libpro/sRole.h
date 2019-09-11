#pragma once
#include "sPet.h"
#include "sObject.h"
#include "sStone.h"

// ��������
struct sRole : public sProperty, public sObject
{
	// Ǯ
	sExp money;
	// ����
	std::vector<int> skilvs;
	// ��ʯ(װ���ӳ�)
	sStone stone;
	// ������
	sXl xlbb;
	// ����(װ��)
	sItems items;
	// �ֿ�(�޾�)
	sItems stores;
	// ����(ָ��?)
	sPets pets;
	// ��ս����
	int fight = cc::_1;

	int teamIdx;

	sRole();
	// ���ɼ��ܵȼ�
	int getSkiLv(eSki eski = eSki::eNone) const;
	// 
	bool addPet(sPet* pet);
	// ��Ϣ
	void unPet();
	// ����
	bool removePet(int index, bool del);
	// 
	sPet* getPet(int index);
	sPet* getPet();
	// ��ս
	bool setPet(int fight, bool onlyCheck);

	bool isControllabel() const;

	bool isTeam() const;

	void save()const;
	void load();
};