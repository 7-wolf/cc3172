#pragma once

class cDirection
{
public:
	static int getDirection4(int direction8);
	static int getDirection4(float x, float y);
	static int getDirection8(int pred, float x, float y);
	// ȡ��(����)����(����ս��ʱ��,վ����)
	static int getDirectionR(int direction);
	// ȡ��һ������(˳ʱ��/��ʱ��)
	static int getDirectionRound8(int directionLast, bool isNextOrPre);
	// ȡ��һ������(˳ʱ��/��ʱ��)
	static int getDirectionRound4(int directionLast, bool isNextOrPre);
};