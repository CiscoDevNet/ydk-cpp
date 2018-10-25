#!/bin/bash

function print_msg {
	echo -e "${MSG_COLOR}*** $(date): dependencies_osx.sh | $@ ${NOCOLOR}"
}

# Terminal colors
NOCOLOR="\033[0m"
YELLOW='\033[1;33m'
MSG_COLOR=$YELLOW

print_msg "Installing libssh-0.7.6"
brew reinstall openssl
export OPENSSL_ROOT_DIR=/usr/local/opt/openssl
wget https://git.libssh.org/projects/libssh.git/snapshot/libssh-0.7.6.tar.gz
tar zxf libssh-0.7.6.tar.gz
cd libssh-0.7.6
mkdir build && cd build
cmake ..
sudo make install
cd ../../
