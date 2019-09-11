#pragma once
#include "_inc.h"

class uiMod;
class uiPetHeaders;
class uiPetAttr;
class uiPet : public Node
{
public:
	static uiPet* create(sRole* role);

protected:
	bool init(sRole* role);

public:
	void load(sRole* role);

	void load(int select);

	void load(const std::string& name);

	uiMod* getMod() const { return _mod; }
	uiPetHeaders* getHeaders() const { return _headers; }

protected:
	sPet* getPet(const sProperty* pro, bool checkTeam);

	int _select;
	sRole* _role = nullptr;

	cLabel* _labelName = nullptr;
	uiMod* _mod = nullptr;
	uiPetHeaders* _headers = nullptr;
	uiPetAttr* _attr = nullptr;

	cButton* _buttonFight = nullptr;
public:
	// ָ�� ս��
	// std::function<bool(const sPet*, const std::string&)> onName = nullptr;
	// ָ�� ���� �ɿ� ս��
	// std::function<bool(const sRole*, int)> onFight = nullptr;
	
	std::function<void(const sProperty*, const sRole*)> onHeader = nullptr;
};