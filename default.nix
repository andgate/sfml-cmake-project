with import <nixpkgs> {}; {
  testgameEnv = stdenv.mkDerivation {
    name = "testgame";
    buildInputs = [ stdenv cmake pkgconfig sfml ];
  };
}
