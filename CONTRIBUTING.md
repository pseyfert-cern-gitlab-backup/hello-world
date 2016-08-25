Do whatever you recon necessary to get the CI running.

NB: we're talking about 6 lines of code, 5 lines of Makefile, 2 lines
    of environment setup. Anything more complex than 6+5+2 = 13 lines will be
    frowned upon and considered an embarassing failure of the CI infrastructure.
    The 12 lines of making the environment setup portable to the gitlab CI
    runnersare already pretty close to threshold...