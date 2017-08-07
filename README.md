[![Build Status](https://travis-ci.org/CiscoDevNet/ydk-cpp.svg?branch=master)](https://travis-ci.org/CiscoDevNet/ydk-cpp)

![ydk-logo-128](https://cloud.githubusercontent.com/assets/16885441/24175899/2010f51e-0e56-11e7-8fb7-30a9f70fbb86.png)

# YANG Development Kit (C++)

<!-- START doctoc generated TOC please keep comment here to allow auto update -->
<!-- DON'T EDIT THIS SECTION, INSTEAD RE-RUN doctoc TO UPDATE -->
**Table of Contents**

- [Overview](#overview)
- [How to Install](#how-to-install)
  - [Quick Install](#quick-install)
  - [Installing from source](#installing-from-source)
    - [System Requirements](#system-requirements)
    - [Building YDK](#building-ydk)
- [Documentation and Support](#documentation-and-support)
- [Release Notes](#release-notes)

<!-- END doctoc generated TOC please keep comment here to allow auto update -->

## Overview

The YANG Development Kit (YDK) is a Software Development Kit that provides API's that are modeled in YANG. The main goal of YDK is to reduce the learning curve of YANG data models by expressing the model semantics in an API and abstracting protocol/encoding details.  YDK is composed of a core package that defines services and providers, plus one or more module bundles that are based on YANG models.  

## How to Install

You can install YDK-Cpp on macOS or Linux.  It is not currently supported on Windows.

### Quick Install

#### Linux
##### Ubuntu (Debian-based):
```
   $ sudo apt-get install gdebi-core python3-dev python-dev libtool-bin
```
The prebuilt binaries for ydk core and the `ietf`, `openconfig`, `cisco-ios-xr` and `cisco-ios-xe` bundles are available at the [Artifactory Repository Browser](https://devhub.cisco.com/artifactory/webapp/#/artifacts/browse/tree/General/debian-ydk/0.6.0).
To install the prebuilt binaries for ydk `core`, execute:
```
   $ wget https://devhub.cisco.com/artifactory/debian-ydk/0.6.0/libydk_0.6.0-1_amd64.deb
   $ sudo gdebi libydk_0.6.0-1_amd64.deb
```
Similarly, to install the prebuilt binaries for ydk `ietf` bundle, execute:
```
   $ wget https://devhub.cisco.com/artifactory/debian-ydk/0.6.0/libydk-ietf_0.1.3-1_amd64.deb
   $ sudo gdebi libydk-ietf_0.1.3-1_amd64.deb
```

##### Centos (Fedora-based):
```
   $ sudo yum install epel-release libssh-devel gcc-c++
```
The prebuilt binaries for ydk core and the `ietf`, `openconfig`, `cisco-ios-xr` and `cisco-ios-xe` bundles are available at the [Artifactory Repository Browser](https://devhub.cisco.com/artifactory/webapp/#/artifacts/browse/tree/General/rpm-ydk/0.6.0).
To install the prebuilt binaries for ydk `core`, execute:
```
   $ sudo yum install https://devhub.cisco.com/artifactory/rpm-ydk/0.6.0/libydk-0.6.0-1.x86_64.rpm
```
Similarly, to install the prebuilt binaries for ydk `ietf` bundle, execute:
```
   $ sudo yum install https://devhub.cisco.com/artifactory/rpm-ydk/0.6.0/libydk-ietf-0.1.3-1.x86_64.rpm
```

#### macOS

It is recommended to install [homebrew](http://brew.sh) and Xcode command line tools on your system before installing YDK-Cpp:
```
   $ xcode-select --install
   $ /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
   $ brew install pkg-config libssh xml2 curl pcre cmake
```

The prebuilt binaries for ydk core and the `ietf`, `openconfig`, `cisco-ios-xr` and `cisco-ios-xe` bundles are available at the [Artifactory Repository Browser](https://devhub.cisco.com/artifactory/webapp/#/artifacts/browse/tree/General/osx-ydk/0.6.0).
To install the prebuilt binaries for ydk `core`, execute:
```
   $ curl -O https://devhub.cisco.com/artifactory/osx-ydk/0.6.0/libydk-0.6.0-Darwin.pkg
   $ sudo installer -pkg libydk-0.6.0-Darwin.pkg -target /
```
Similarly, to install the prebuilt binaries for ydk `ietf` bundle, execute:
```
   $ curl -O https://devhub.cisco.com/artifactory/osx-ydk/0.6.0/libydk-ietf-0.1.3-Darwin.pkg
   $ sudo installer -pkg libydk-ietf-0.1.3-Darwin.pkg -target /
```

### Installing from source
#### System Requirements
**Linux**  
Ubuntu (Debian-based) - The following packages must be present in your system before installing YDK-Cpp:
```
$ sudo apt-get install libcurl4-openssl-dev libpcre3-dev libssh-dev libxml2-dev libxslt1-dev libtool-bin cmake
```

Centos (Fedora-based) - The following packages must be present in your system before installing YDK-Cpp:
```
$ sudo yum install epel-release
$ sudo yum install libxml2-devel libxslt-devel libssh-devel libtool gcc-c++ pcre-devel cmake3 clang libcurl-devel
$ sudo ln –fs $(which cmake3) /usr/bin/cmake && export PATH=/usr/bin:$PATH
```

**Mac**  
It is recommended to install [homebrew](http://brew.sh) and Xcode command line tools on your system before installing YDK-Cpp:
```
$ /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
$ brew install pkg-config libssh xml2 curl pcre cmake
$ xcode-select --install
```
#### Building YDK
YDK uses ``cmake`` as the build system of choice. To install the ``core`` package, execute:
```
$ ydk-cpp$ cd core/ydk
$ core$ mkdir build && cd build
$ build$ cmake .. && make
$ build$ sudo make install
```

Once you have installed the ``core`` package, you can install one or more model bundles.  Note that some bundles have dependencies on other bundles.  Those dependencies are captured in the bundle packages used for quick installation. To install the `ietf` bundle, execute:
```
$ core$ cd ../../ietf
$ ietf$ mkdir build && cd build
$ build$ cmake .. && make
$ build$ sudo make install
```

To install the `openconfig` bundle, execute:
```
$ ietf$ cd ../openconfig
$ openconfig$ mkdir build && cd build
$ build$ cmake .. && make
$ build$ sudo make install
```

To install the `cisco-ios-xr` bundle, execute:
```
$ openconfig$ cd ../cisco-ios-xr
$ cisco-ios-xr$ mkdir build && cd build
$ build$ cmake .. && make
$ build$ sudo make install
$ build$ cd ../..
```

### Documentation and Support
- Read the [API documentation](http://ydk.cisco.com/cpp/docs) for details on how to use the API and specific models
- Samples can be found under the [samples directory](https://github.com/CiscoDevNet/ydk-cpp/tree/master/core/samples)
- Additional samples can be found in the [YDK-Cpp samples repository](https://github.com/CiscoDevNet/ydk-cpp-samples)
- Join the [YDK community](https://communities.cisco.com/community/developer/ydk) to connect with other users and with the makers of YDK

### Release Notes
The current YDK release version is 0.6.0 (alpha). YDK-Cpp is licensed under the Apache 2.0 License.
