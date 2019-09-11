#pragma once
#include "_inc.h"

class uiPad;
class uiHeader : public Node
{
public:
	static uiHeader* create(bool pet){ CREATE(uiHeader, pet); }

	bool init(bool pet);

	void load(const sProperty* pro, int hpMax, int mpMax);
	void load(ulong head);
	void load(const sProperty* pro, const sRole* role);

	uiPad* createPad();
protected:
	const sProperty* _pro = nullptr;
	const sRole* _role = nullptr;
	// ͷ����
	cSprite1* _spriteHead = nullptr;
	Sprite* _spriteHp = nullptr;
	Sprite* _spriteMp = nullptr;
	Sprite* _spriteAp = nullptr;
	Sprite* _spriteExp = nullptr;
	Size _sizeBar, _sizeBack;

public:
	// ����� sProperty*
	std::function<void(const sProperty*, const sRole*, bool)> onClick = nullptr;
	// ���� ս�� ����� sProperty* 
	std::function<bool(const sProperty*, const sRole*)> onFill = nullptr;
};