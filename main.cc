#include "TCanvas.h"
#include "TH1F.h"

int main() {
  TH1F* h = new TH1F("h","h",20,-5.,5.);
  h->FillRandom("gaus",300);
  TCanvas* c = new TCanvas();
  h->Draw();
  c->SaveAs("foobar.pdf");
  return 0;
}