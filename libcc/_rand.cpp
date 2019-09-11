#include "_rand.h"

static std::random_device rd;
static std::default_random_engine rng{ rd() };
float cc::gaussStandard()
{
	// mu: 0 sigma: 1
	std::normal_distribution<> norm_0_1; 
	return norm_0_1(rng);
}


float cc::gauss(float mu, float sigma)
{
	std::normal_distribution<> norm{ mu, sigma };
	return norm(rng);
}

float cc::gauss(float exp_1_5)
{
	std::normal_distribution<> norm_0_1;
	double x = norm_0_1(rng) * 0.1666667;
	// ��װ���Ա�Ųһ��
	x *= std::pow(exp_1_5, 0.25f);
	x += 0.5;
	x = std::max(x, 0.0);
	x = std::min(x, 0.9999999);
	return x;
}

float cc::gauss()
{
	// ����2.58 * sigma  99.0%
	// ����3.00 * sigma  99.7%
//	std::normal_distribution<> norm{ 0.0, sigma };
	// ���Ƿֲ�ͼ, ���Ǻ���ͼ, û������ ���Ի��Ǳ�׼��̬
//	double x = norm(rng) * 0.1666667 / sigma;
	std::normal_distribution<> norm_0_1;
	double x = norm_0_1(rng) * 0.1666667 + 0.5;
	x = std::max(x, 0.0);
	x = std::min(x, 0.9999999);
	return x;
}
