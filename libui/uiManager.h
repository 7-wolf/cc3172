#pragma once
#include "_inc.h"

class uiManager;
namespace ccu
{
	uiManager* getManager();
	void setManager(uiManager* ui);
}

class uiAddpointer;
class uiChannel;
class uiChat;
class uiDialog;
class uiDye;
class uiHeader;
class uiInput;
class uiItem;
class uiJob;
class uiMenu;
class uiModSelect;
class uiRole;
class uiPets;
class uiPetSelector;
class uiSee;
class uiShichen;
class uiShop;
class uiSkiSelect;
class uiSmap;
// ui������
class uiManager : public Node
{
public:
	CREATE_FUNC(uiManager);

protected:
	bool init();

public:
	void load(sRole* role);

public:
	uiAddpointer* getAddpointer() { return _addpointer; }
protected:
	uiAddpointer* _addpointer = nullptr;
 
	// ���Ƶ��(Ƶ������, ����, �ı�)
	// #0~#119 ����
	// #W #Y #R #G #B #M #O ��ɫ
public:
	void addChannel(const std::string& name, const std::string& text);
	void addChannel(const std::string& text);
	void addChannelSys(const std::string& text);

	uiChannel* getChannel() { return _channel; }
protected:
	uiChannel* _channel = nullptr;
	cButton* _buttonMsg = nullptr;
public:
	uiChat* getChat() { return _chat; }
protected:
	uiChat* _chat = nullptr;

	// �Ի�
public:
	uiDialog* getDialog(){ return _dialog; }
protected:
	uiDialog* _dialog = nullptr;

	// ���Ͻǵ�ͷ���Ѫ��
public:
	uiHeader* getHeader(bool pet) { return pet ? _headerPet : _headerRole; }
protected:
	uiHeader* _headerRole = nullptr;
	uiHeader* _headerPet = nullptr;

	// ����
public:
	uiInput* getInput() { return _input; }
protected:
	uiInput* _input = nullptr;

	//��Ʒ
public:
	uiItem* getItem() { return _item; }
protected:
	uiItem* _item = nullptr;

	// �������(����, ����)
	// �ظ��ı���ᱻ��Ϊ��������
public:
	void addJob(const std::string& title, const std::string& text);
protected:
	uiJob* _job = nullptr;

	// �˵� �����·���һ��ͼ��
public:
	uiMenu* getMenu(){ return _menu; }
protected:
	uiMenu* _menu = nullptr;

public:
	uiModSelect* getModSelect() { return _modSelect; }
protected:
	uiModSelect* _modSelect = nullptr;

	// ����
public:
	uiPets* getPet(){ return _pet; }
protected:
	uiPets* _pet = nullptr;

public:
	uiPetSelector* getPetSelector() { return _petSelector; }
protected:
	uiPetSelector* _petSelector = nullptr;
	// ��ɫ
public:
	uiRole* getRole() { return _uirole; }
protected:
	uiRole* _uirole = nullptr;

	// �鿴
public:
	uiSee* getSee(){ return _see; }
protected:
	uiSee* _see = nullptr;

	// ʱ�� ���Ͻ�
public:
	uiShichen* getShichen(){ return _shichen; }
protected:
	uiShichen* _shichen = nullptr;

	// ����
public:
	uiShop* getShop(){ return _shop; }
protected:
	uiShop* _shop = nullptr;

	// ����ѡ��
public:
	uiSkiSelect* getSkiSelect(){ return _skillSelect; }
protected:
	uiSkiSelect* _skillSelect = nullptr;

 	// С��ͼ
public:
	uiSmap* getSmap(){ return _smap; }
protected:
	uiSmap* _smap = nullptr;


	// �����ʾ(�ı�, ͣ��:��)
public:
	void toast(const std::string& text, float second = 5);

public:
	void show(bool shown);

	bool isFight();

protected:
	bool _isShown = true;
	sRole* _role = nullptr;
public:
	std::function<bool()> onFight = nullptr;
};