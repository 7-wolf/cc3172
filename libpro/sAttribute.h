#pragma once

// ��������
struct int3
{
	// ԭʼ
	int ori;
	// �ٷֱ� (����:ǿ��/ڤ˼)
	int per;
	// ���� (����: ǿ׳)
	int add;

	int3();
	operator int();
	operator const int() const;

	void reset();
	// per����
	void reset(int add);
};

// ��������
struct sAttribute
{
	// ��Ѫ����
	int3 hpMax;
	// ħ������
	int3 mpMax;

	// ��� ����
	int3 hit;
	// ��� �˺�
	int3 atk;
	// ��� ����
	int3 def;
	// ��� �����˺�
	int3 mtk;
	// ��� ��������
	int3 mef;
	// ��� �ٶ�
	int3 speed;
	// ��� ���
	int3 avoid;

	sAttribute();

	void reset();

	static const int /*cHp, cMp, */cAp/*, cHit, cAtk*/;
};


