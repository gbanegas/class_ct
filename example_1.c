#include "poison.h"


int compute(unsigned char secret[32]) {
    if (secret[0] == 0) {
        return 0;
    } else {
        return 1;
    }
}

int main(){

    unsigned char buf[32];
    for (int i = 0; i < 32; ++i)
        buf[i] = 0;
    poison(buf, 32);
    compute(buf);

	return 0;

}
