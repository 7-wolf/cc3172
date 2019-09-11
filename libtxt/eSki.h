#pragma once

// �Լ�,����,�Է�
enum class eSkiSelect { self, owner, other };
// ��ʾ: ����,��,�ײ�, ����
enum class eSkiPos{ top, mid, z1, z_1, screen };
// ��,��ӡ,����,����,��
enum class eSkiBuff { eNone = -1, seal, good, bad, poison, other };
// ��������
struct sSkiCost 
{ 
	int hp = 0, mp = 0, ap = 0;
	operator bool() const
	{
		return hp > 0 || mp > 0 || ap > 0;
	}
};
// ����
enum class eSki
{
	eNone = -1,
	e0,
	// ��������
	eSkied0 = e0,
	// ������
	eAtkd0 = eSkied0, 
	// ����
	fanji = eAtkd0,
	// ����
	fanzhen,
	// ��Ѫ
	xixue,
	// ����
	lianji,
	// ��ɱ
	bisha,
	// ����
	yinshen,
	// ͵Ϯ
	touxi,
	eAtkdEnd = touxi,
	// ��������
	eMagicd0,
	// ħ֮��
	mozhixin = eMagicd0,
	// ��������
	fashulianji,
	// ��������
	fashubaoji,
	eMagicdEnd = fashubaoji,
	// ����
	shenyou,
	// ��֪
	ganzhi,
	// ����
	minjie,
	// �ٶ�
	chidun,
	// ��������
	leixishou,
	tuxishou,
	huoxishou,
	shuixishou,
	eSkiedEnd = shuixishou,
	// ��������
	ePet0,
	// �׻�
	leiji = ePet0,
	// ������
	benleizhou,
	// ����
	luoyan,
	// ̩ɽѹ��
	taishanyading,
	// ˮ��
	shuigong,
	// ˮ����ɽ
	shuimanjinshan,
	// �һ�
	liehuo,
	// �����һ�
	diyuliehuo,
	// �����ٻ�
	siwangzhaohuan,
	// ������ɽ
	lipihuashan,
	// �ƶ��б�
	shaneyoubao,
	// ��������
	fashufangyu,
	ePetEnd = fashufangyu,
	// ׷��
	eZhuijia0, 
	// �ұ�֮��
	luanbingzhiji = eZhuijia0,
	// �����ķ�
	jiandangsifang,
	// ��Ҷ����
	luoyexiaoxiao,
	// �콵���
	tianjianglinghu,
	// ��ӿ����
	diyongjinlian,
	eZhuijiaEnd = diyongjinlian,
	// ����
	ePhysics0,
	// ��ɨǧ��
	hengsaoqianjun = ePhysics0,
	// ������
	houfazhiren,
	// �Ƹ�����
	pofuchenzhou,
	// ʨ��
	shibo,
	// ��ӿ
	langyong,
	ePhysicsEnd = langyong,
	// ��ʦ
	eMagic0,
	// �������
	longjuanyuji = eMagic0,
	// ˫��Ϸ��
	shuanglongxizhu,
	// Ϻ��
	xiabing,
	// з��
	xiejiang,
	// Ѫ��
	xueyu,
	// �׻�
	yanhu,
	eMagicEnd = yanhu,
	// ����
	eTreat0,
	// ߴߴ����
	jijiwaiwai = eTreat0,
	// ����
	hufa,
	// �ⶾ
	jiedu,
	// �ն�
	pudu,
	// ��������
	tuiqiguogong,
	// ������
	duomingzhou,
	eTreatEnd = duomingzhou,
	// ����
	eAssist0,
	// �������
	leitingwanjun = eAssist0,
	// ����ն
	tianleizhan,
	// ���׺䶥
	wuleihongding,
	// ʬ����
	shifudu,
	// ��������
	xiuluoyinshen,
	// ��ڤ����
	youmingguiyan,
	eAssistEnd = youmingguiyan,
	// �ؼ�
	eSpecial0,
	// ��Ѫ��
	poxuekuanggong,
	// �����
	jingqingjue = eSpecial0,
	// �޺�����
	luohanjinzhong,
	// �Ⱥ��ն�
	cihangpudu,
	eSpecialEnd = cihangpudu,
	eBoss0,
	// �������
	sanmeizhenhuo = eBoss0,
	// �����
	longjuanfeng,
	eBossEnd = longjuanfeng,
	// ��ͨ����
	normalAtk,
	// ��������
	criAtk,
	// �Ʊ�
	shanbao,
	// �콵���1
	tianjianglinghu1,
	// �콵���23
	tianjianglinghu2,
	// ��������
	yangliuganlin,
	// �����ķ�
	zizaixinfa,
	// ҩƷ��
	medicineHp,
	// ҩƷ��
	medicineMp,
	// ҩƷ���
	medicineSeal,
	// ����
	defense,
	// ����
	protect,
	// �ٻ�
	summon,
	// ��׽
	grasp,
	// ����
	escape,
};
