#pragma once
#include "sStone.h"
#include "cIndexCounter.h"

// ��Ʒ
class sItem : public sUnique
{
public:
	// ����
	bool setData(eIcon type, int id);
	// ���pro
	void setData();
	// ͼ������
	const txtIcon::sIcon* getIcon() const { return _icon; }
	// ����
	eIcon getType()const{ return _type; }
	// id
	int getId()const{ return _id; }
	// �۸�
	void setPrice(int price){ _price = price; }
	// �۸�
	int getPrice()const{ return _price; }
	// ��
	bool add(int count = 1);
	// ��
	bool sub(int count = 1);
	// ���
	void clear(){ _num = 0; }
	// ��Ч
	bool isValid() const;
	// ��Ч
	operator bool()const;
	// ����
	int getCount()const{ return _num; }
	// ����
	void toDesc(sDescs& descs)const;
	void toDesc(sDescs& descs, eStone stone)const;
	// �ɵ���
	bool isOverly() const;
	// �浵
	void save(bool price)const;
	// ����
	void load(bool price);
	// �Ա�
	bool operator!=(const sItem& it)const;
	bool operator==(const sItem& it)const;
private:
	eIcon _type = eIcon::eNone;
	int _id, _num = 0, _price = 0;
	uint _pro;
	const txtIcon::sIcon* _icon = nullptr;
	friend class cEquip;
};
typedef std::vector<sItem*> sItems;