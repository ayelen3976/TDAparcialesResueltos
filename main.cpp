#include <iostream>
#include "SmartTV.h"

int main() {
    SmartTV* smartTv = new SmartTV(50);
    smartTv->agregarApp("TINDER");
    smartTv->agregarApp("FACEBOOK");
    return 0;
}
