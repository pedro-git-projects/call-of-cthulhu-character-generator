#ifndef CTHULLU_HEADERS_UTILS_RNG_H_
#define CTHULLU_HEADERS_UTILS_RNG_H_

#include <random>
class RNG {
	public:
		RNG();
		unsigned int generate(unsigned int min, unsigned int max);

	private:
		std::random_device random_device_;
};

#endif

