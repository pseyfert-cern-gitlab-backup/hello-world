#include "TCanvas.h"
#include <iostream>
#include "TH1F.h"

int main() {
  TH1F* h = new TH1F("h","h",20,-5.,5.);
  h->FillRandom("gaus",300);
  TCanvas* c = new TCanvas();
  h->Draw();
  c->SaveAs("foobar.pdf");
  std::cout << "h has " << h->GetSumOfWeights() << " as sum of weights" << std::endl;
  return 0;
}
