# Script para instalação do tko e dependencias no WSL

WSL significa Windows Subsystem for Linux, é um ambiente de execução de aplicativos Linux no Windows.

```bash

# instalando o wsl, digite sim para as perguntar, depois de instalar, reinicie a máquina
wsl --install

```

Abra o aplicativo do ubuntu no windows para ter acesso ao terminal do wsl

```bash

sudo apt update
git config --global user.email "${EMAIL}"
git config --global user.name "${NAME}"

# instalando o pipx
sudo apt install -y pipx build-essential python3-dev python3-venv python3-pip

# instalando o tko
pipx install tko

# adicioando o path
echo "export PATH=\"$DIR:\$PATH\"" >> ~/.bashrc

```

## Ferramentas do typescript

```bash

echo -n "Feito!\nInstalando esbuild... "
sudo apt install -y esbuild >> /dev/null 2>&1

echo -n "Feito!\nInstalando nodejs... "
sudo apt install -y nodejs >> /dev/null 2>&1
```