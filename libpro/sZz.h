#pragma once
#include "_inc.h"

struct sZz
{
	// ��������
	int atk;
	// ��������
	int def;
	// ��������
	int hp;
	// ��������
	int mana;
	// �ٶ�����
	int speed;
	// ��������
	int avoid;
	// �ɳ�
	int grow;

	sZz();

	void reset();

	bool isValid();

	void correct();


	void operator=(const txtZz::sZz& zz);

	void save()const;
	void load();
};


