#include "Page.cpp"
#include "Page.h"
#include <iostream>
using namespace std;

int main()
{
  Page page1;
  Page page2;
  Page page3;
  Page page4;

  Page* p1 = &page1;
  Page* p2 = &page2;
  Page* p3 = &page3;
  Page* p4 = &page4;

  page1.addLink(&page2);
  page1.addLink(&page3);

  page2.addLink(&page3);

  page3.addLink(&page4);

  page4.addLink(&page1);
  page4.addLink(&page3);
}
