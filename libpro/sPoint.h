#pragma once

enum class ePoint
{
	// ǿ�ư��ӵ�����, ��ΪҪ������������
	eNone = -1,
	// ����
	body ,
	// ����
	mana,
	// ����
	str,
	// ����
	dex,
	// ����
	agi,
	// ʣ��
	remain,
};


// ���Ե�
struct sPoint
{
	// ����
	int body;
	// ����
	int mana;
	// ����
	int str;
	// ����
	int dex;
	// ����
	int agi;
	// ʣ��
	int remain;

	sPoint();
	// ����
	bool reset(int initPoint = 0);
	// ȡ��
	int& get(ePoint e);
	// ���(�ȼ�)
	bool check(int lv)const;
	void correct(int lv);
	void correctRemain(int lv);
	// �ӵ�
	bool add(ePoint e, bool onlyCheck);
	// ����
	bool sub(ePoint e, bool onlyCheck);
	// ����
	void lvup(int per = 1);
	// ����
	bool lvdown(bool onlyCheck, int per = 1);

	// ����remian
	void operator+=(const sPoint& point);
	// ����remian
	sPoint operator+(const sPoint& point) const ;
	// ����remian
	void operator+=(int point);
	// ����remian
	sPoint operator+(int point) const;
	// ����(����remian)
	void operator*=(int point);
	// ����(����remian)
	sPoint operator*(int point) const;


	void save() const;
	void load();

	static const int cInit, cRemain;
};