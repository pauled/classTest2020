#include <iostream>
#include "Example.h"

int main() {
    //Example stck1=Example();//broken because the default construtor only works if none are written
    Example stck2=Example(3);
    Example stck3=stck2;

    Example *hp1=new Example(3);
    Example *hp2=hp1;
    Example *hp3=new Example(hp1);

    return 0;
}
