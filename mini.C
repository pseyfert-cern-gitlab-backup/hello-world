void mini() {
  TH1F* h = new TH1F("h","h",20,-5.,5.);
  h->FillRandom("gaus",300);
  TCanvas* c = new TCanvas();
  h->Draw();
  c->SaveAs("foobar.png");
}
