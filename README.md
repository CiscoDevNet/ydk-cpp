[![Build Status](https://travis-ci.org/CiscoDevNet/ydk-cpp.svg?branch=master)](https://travis-ci.org/CiscoDevNet/ydk-cpp)

![ydk-logo-128](https://cloud.githubusercontent.com/assets/16885441/24175899/2010f51e-0e56-11e7-8fb7-30a9f70fbb86.png)

# YANG Development Kit (C++)

<!-- START doctoc generated TOC please keep comment here to allow auto update -->
<!-- DON'T EDIT THIS SECTION, INSTEAD RE-RUN doctoc TO UPDATE -->
**Table of Contents**

- [Overview](#overview)
- [How to Install](#how-to-install)
  - [System Requirements](#system-requirements)
  - [Quick Install](#quick-install)
  - [Installing from source](#installing-from-source)    
    - [Building YDK](#building-ydk)
- [Documentation and Support](#documentation-and-support)
- [Release Notes](#release-notes)

<!-- END doctoc generated TOC please keep comment here to allow auto update -->

## Overview

The YANG Development Kit (YDK) is a Software Development Kit that provides API's that are modeled in YANG. The main goal of YDK is to reduce the learning curve of YANG data models by expressing the model semantics in an API and abstracting protocol/encoding details.  YDK is composed of a core package that defines services and providers, plus one or more module bundles that are based on YANG models.  

## How to Install

You can install YDK-Cpp on MacOS or Linux.  It is not currently supported on Windows.

### System Requirements

#### Linux
##### Ubuntu (Debian-based)

The following packages must be present in your system before installing YDK-Cpp:

```
$ sudo apt-get install gdebi-core python3-dev python-dev libtool-bin
$ sudo apt-get install libcurl4-openssl-dev libpcre3-dev libssh-dev libxml2-dev libxslt1-dev cmake
```

Install gcc-5 for Xenial (Ubuntu 16.04.4):

```
$ # Upgrade compiler to gcc 5.*
$ sudo apt-get install gcc-5 g++-5 -y > /dev/null
$ sudo ln -sf /usr/bin/g++-5 /usr/bin/g++
$ sudo ln -sf /usr/bin/gcc-5 /usr/bin/gcc
```

#### Centos (Fedora-based)

The following packages must be present in your system before installing YDK-Cpp:

```
$ sudo yum install epel-release
$ sudo yum install libxml2-devel libxslt-devel libssh-devel libtool gcc-c++ pcre-devel cmake

# Install gcc-5 and g++-5
$ yum install centos-release-scl -y > /dev/null
$ yum install devtoolset-4-gcc* -y > /dev/null
$ ln -sf /opt/rh/devtoolset-4/root/usr/bin/gcc /usr/bin/gcc
$ ln -sf /opt/rh/devtoolset-4/root/usr/bin/g++ /usr/bin/g++
```

#### Mac OS

It is recommended to install [homebrew](http://brew.sh) and Xcode command line tools on your system before installing YDK-Cpp:

```
$ /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
$ brew install pkg-config libssh libxml2 xml2 curl pcre cmake
$ xcode-select --install
```

#### Libssh installation

Please note that libssh-0.8.0 `does not support <http://api.libssh.org/master/libssh_tutor_threads.html>`_ separate threading library, 
which is required for YDK. Therefore, if after installation of libssh package you find that the `libssh_threads.a` library is missing, 
please downgrade the installation of libssh to version 0.7.6, or upgrade to 0.8.1 or higher. Example:

```
$ wget https://git.libssh.org/projects/libssh.git/snapshot/libssh-0.7.6.tar.gz
$ tar zxf libssh-0.7.6.tar.gz && rm -f libssh-0.7.6.tar.gz
$ mkdir libssh-0.7.6/build && cd libssh-0.7.6/build
$ cmake ..
$ sudo make install
```

### gNMI Requirements

In order to enable YDK support for gNMI protocol, which is optional, the following third party software must be installed prior to gNMI YDK component installation.

#### Install protobuf and protoc

```
    wget https://github.com/google/protobuf/releases/download/v3.5.0/protobuf-cpp-3.5.0.zip
    unzip protobuf-cpp-3.5.0.zip
    cd protobuf-3.5.0
    ./configure
    make
    make check
    sudo make install
    sudo ldconfig
```

#### Install gRPC

```
    git clone -b v1.9.1 https://github.com/grpc/grpc
    cd grpc
    git submodule update --init
    make
    sudo make install
    sudo ldconfig
    cd -
```

#### Run-time environment

There is an open issue with gRPC on Centos/Fedora, which requires an extra step before running any YDK gNMI application. See this issue on `GRPC GitHub <https://github.com/grpc/grpc/issues/10942#issuecomment-312565041>`_ 
for details. As a workaround, the YDK based application runtime environment must include setting of `LD_LIBRARY_PATH` variable:

```
    PROTO="/Your-Protobuf-and-Grpc-installation-directory"
    export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$PROTO/grpc/libs/opt:$PROTO/protobuf-3.5.0/src/.libs:/usr/local/lib64
```

### Quick Install
#### Linux
##### Ubuntu (Debian-based)

You can install the latest YDK core package using prebuilt binaries for Xenial (Ubuntu 16.04.4) and Bionic (Ubuntu 18.04.1) distributions. 
For other Ubuntu distributions it is recommended to build core libraries from source.

For Xenial:

```
$ wget https://devhub.cisco.com/artifactory/debian-ydk/0.8.2/xenial/libydk-0.8.2-1.amd64.deb
$ sudo gdebi libydk-0.8.2-1.amd64.deb
```

For Bionic:

```
$ wget https://devhub.cisco.com/artifactory/debian-ydk/0.8.2/bionic/libydk-0.8.2-1.amd64.deb
$ sudo gdebi libydk-0.8.2-1.amd64.deb
```

##### Centos (Fedora-based)

You can install the latest YDK core package using prebuilt binaries:

```
$ sudo yum install https://devhub.cisco.com/artifactory/rpm-ydk/0.8.2/libydk-0.8.2-1.x86_64.rpm
```

#### MacOS  

You can install the latest YDK core package using prebuilt binaries:

```
$ curl -O https://devhub.cisco.com/artifactory/osx-ydk/0.8.2/libydk-0.8.2-Darwin.pkg
$ sudo installer -pkg libydk-0.8.2-Darwin.pkg -target /
```

### gNMI Service Installation

#### Install gNMI service library

##### Linux

For Ubuntu/Xenial:

```
$ wget https://devhub.cisco.com/artifactory/debian-ydk/0.8.2/xenial/libydk_gnmi_0.4.0-2_amd64.deb
$ sudo gdebi libydk_gnmi_0.4.0-2_amd64.deb
```

For Ubuntu/Bionic:

```
$ wget https://devhub.cisco.com/artifactory/debian-ydk/0.8.2/bionic/libydk_gnmi_0.4.0-2_amd64.deb
$ sudo gdebi libydk_gnmi_0.4.0-2_amd64.deb
```

For CentOS

```
   sudo yum install https://devhub.cisco.com/artifactory/rpm-ydk/0.8.2/libydk_gnmi_0.4.0-2.x86_64.rpm
```

##### MacOS

```
$ curl -O https://devhub.cisco.com/artifactory/osx-ydk/0.8.2/libydk_gnmi-0.4.0-2_Darwin.pkg
$ sudo installer -pkg libydk_gnmi-0.4.0-2_Darwin.pkg -target /
```

### Installing from source
#### Building YDK

YDK uses ``cmake`` as the build system of choice. To install the core package, execute:

```
ydk-cpp$ cd core/ydk
core$ mkdir build && cd build
build$ cmake .. && make
build$ sudo make install
```

Once you have installed the core package, you can install one or more model bundles.  Note that some bundles have dependencies on other bundles.  Those dependencies are captured in the bundle packages used for quick installation. To install the `ietf` bundle, execute:

```
core$ cd ../../ietf
ietf$ mkdir build && cd build
build$ cmake .. && make
build$ sudo make install
```

To install the `openconfig` bundle, execute:

```
ietf$ cd ../openconfig
openconfig$ mkdir build && cd build
build$ cmake .. && make
build$ sudo make install
```

To install the `cisco-ios-xr` bundle, execute:

```
openconfig$ cd ../cisco-ios-xr
cisco-ios-xr$ mkdir build && cd build
build$ cmake .. && make
build$ sudo make install
```

To install the `cisco-ios-xe` bundle, execute:

```
openconfig$ cd ../cisco-ios-xe
cisco-ios-xe$ mkdir build && cd build
build$ cmake .. && make
build$ sudo make install
```

## Documentation and Support
- Read the [API documentation](http://ydk.cisco.com/cpp/docs) for details on how to use the API and specific models
- Samples can be found under the [samples directory](https://github.com/CiscoDevNet/ydk-cpp/tree/master/core/samples)
- Additional samples can be found in the [YDK-Cpp samples repository](https://github.com/CiscoDevNet/ydk-cpp-samples) (coming soon)
- Join the [YDK community](https://communities.cisco.com/community/developer/ydk) to connect with other users and with the makers of YDK
- Additional YDK information can be found at [ydk.io](http://ydk.io)

## Release Notes
The current YDK release version is 0.8.2. YDK-Cpp is licensed under the Apache 2.0 License.
