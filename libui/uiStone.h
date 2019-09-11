#pragma once
#include "_inc.h"

class uiStone : public Node
{
public:
	static uiStone* create(const sRole* role);

protected:
	bool init(const sRole* role);

public:
	void load(const sRole* role);

	void loadStone(int k, bool check);

protected:
	const sRole* _role = nullptr;

	std::vector<cSprite1*> _sprites;
	std::vector<cLabel*> _labels;
public:
	// ��ɫ ���� ս��
	std::function<bool(const sRole*, int)> onStone = nullptr;
	static const int c72;
};

