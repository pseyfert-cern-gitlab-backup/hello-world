#include "TCanvas.h"
#include <iostream>
#include "TH1F.h"

int main() {
  TH1F* h = new TH1F("h","h",20,-5.,5.);
  h->FillRandom("gaus",300);
  TCanvas* c = new TCanvas();
  h->Draw();
  auto retval = c->SaveAs("foobar.pdf");
  std::cout << "return value of SaveAs is " << retval << std::endl;
  return 0;
}
