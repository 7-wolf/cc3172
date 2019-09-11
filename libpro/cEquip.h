#pragma once
#include "sItem.h"

class cEquip
{
public:
	enum class eProPerty
	{
		// Ϊ������������
		eNone = -1,
		hp,
		atk,
		def,
		avoid,
		mp,
		mtk,
		mef,
		hit,
		speed,
	};
	struct sProperty
	{
		eProPerty pro = eProPerty::eNone;
		int value = 0;
		operator bool() const;
		std::string toString(const std::string& str = " ") const;
	};
	typedef std::vector<sProperty> sPropertys;
#pragma pack (push)
#pragma pack (1)
	union sPro
	{
		uint pro;
		struct
		{
			// ������
			uint pro1 : 8;
			uint pro2 : 8;
			// ����
			uint easy : 1;
			// ����
			uint delicate : 1;
			// ����
			uint spurting : 1;
			// ��Ѫ�
			uint zhuiji : 1;
			// ʯͷ +1
			uint stone : 4;
			// �ؼ� +1
			uint special : 4;
			// ׷�� +1
			uint zhuijia : 4;
		};

		void apply(eIcon type);
	};
#pragma pack (pop)
	struct sHead
	{
		eStone stone = eStone::eNone;
		bool isSpurting, isZhuiji;
		eSki specail, zhuijia;
	};
	// ����/����
	static bool isEquip(eIcon type);
	// ����
	static bool isWeapon(eIcon type);
	// ����
	static bool isArmor(eIcon type);
	// ͷ��
//	static bool isHelmet(eIcon type);
	// ����
//	static bool isNeck(eIcon type);
	// ����
	static bool isBracer(eIcon type);
	// ����
	static bool isClothes(eIcon type);
	// ����
//	static bool isBelt(eIcon type);
	// Ь��
	static bool isShoe(eIcon type);

	static void apply(const sItem* equip, sPropertys& pros);
	static void apply(const sItem* equip, sDescs& descs);
	// Я���ȼ�
	static int getTakeLv(const sItem* equip);
	// װ���ȼ�
	static int getLv(const sItem* equip);
	// ȡװ��������
	static int getIdx(eIcon type);
	// ȡװ������
	static std::vector<eIcon>& getTypes();
	// ȡװ��byװ��������
	static eIcon getType(int idx);
	// ��Ѫ� ���Ĳ��� �ؼ� ׷��
	static sHead getHead(const sItem* equip);
	// ��Ƕ��ʯ
	static void setStone(eIcon type, std::vector<eStone>& stones);
	// ��Ƕ��ʯ
	static void setStone(eStone stone, sPropertys& pros);
	// ��Ƕ��ʯ
	static void setStone(sItem* equip, eStone stone);
	// װ�����˺�
	int getAtk(const sItems& equips, sStone* stone);
	// ����
	static std::string getName(eProPerty epro);
	// ��װc3��Ч
	static const int c2, c4;
};