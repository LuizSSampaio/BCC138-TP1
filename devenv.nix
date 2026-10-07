{ pkgs, lib, config, inputs, ... }:

{
  # https://devenv.sh/packages/
  packages = [
    pkgs.git
    pkgs.clang
    pkgs.clang-tools
  ];

  # https://devenv.sh/languages/
  languages.cplusplus = {
    enable = true;
    lsp.package = pkgs.clang;
  };

  languages.texlive.enable = true;

  # Set compiler environment variables to Clang
  env.CXX = "clang++";
  env.CC = "clang";

  # https://devenv.sh/git-hooks/
  # git-hooks.hooks = {
  #   clang-format.enable = true;
  #   clang-tidy.enable = true;
  # };

  # See full reference at https://devenv.sh/reference/options/
}
