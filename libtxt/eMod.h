#pragma once

enum class eMod
{
	eNone = -1,
	// 0
	e0,
	// ������
	jianxiake = e0,
	// ��ͷ��
	hutouguai,
	// �׺���
	leiheizi,
	// �ۺ�
	huihai,
	// ����
	jiangjun,
	// ����⨺�
	liuermihou,
	// ������
//	leizhenzi,
	e0end = liuermihou, //leizhenzi,
	// 5
	e5,
	// ��ë��
	haimaochong = e5,
	// ����
	zhangyu,
	// ��
	li,
	// Ұ��
	yezhu,
	// ɽ��
	shangzei,
	// ǿ��
	qiangdao,
	// ����
	huwei,
	e5end = huwei,
	// 15
	e15,
	// ���ù�
	kulouguai = e15,
	// ����
	huayao,
	// ����
	erha,
	e15end = erha,
	// 25
	e25,
	// Ұ��
	yegui = e25,
	// Ϻ��
	xiabing,
	// з��
	xiejiang,
	e25end = xiejiang,
	// 35
	e35,
	// ��ʬ
	jiangshi = e35,
	// ţͷ
	niutou,
	// ����
	mamian,
	e35end = mamian,
	// 45
	e45,
	// ������
	leiniaoren = e45,
	// ����
	ruishou,
	e45end = ruishou,
	// 55
	e55,
	// ���
	tianbing = e55,
	// �콫
	tianjiang,
	// ����ս��
	diyuzhanshen,
	e55end = diyuzhanshen,
	// 65
	e65,
	// ����
	jiaolong = e65,
	// ���
	fenghuang,
	e65end = fenghuang,

	// �ܺ���

	// Сëͷ
	xiaomaotou,
	// Сħͷ
	xiaomotou,
	// С����
	xiaoxianling,
	// СѾѾ
	xiaoyaya,
	// С��Ů
	xiaoxiannv,
	// С����
	xiaojingling,

	// ����
	paopao,
	// ����
	baize,
	// С��
	xiaoxiang,

	eEnd = xiaoxiang,
};
