#ifndef _OPENCONFIG_IF_ETHERNET_
#define _OPENCONFIG_IF_ETHERNET_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace openconfig_if_ethernet {

class Ethernet_Speed : public virtual ydk::Identity
{
    public:
        Ethernet_Speed();
        ~Ethernet_Speed();


}; // Ethernet_Speed

class Speed_1Gb : public openconfig_if_ethernet::Ethernet_Speed, virtual ydk::Identity
{
    public:
        Speed_1Gb();
        ~Speed_1Gb();


}; // Speed_1Gb

class Speed_40Gb : public openconfig_if_ethernet::Ethernet_Speed, virtual ydk::Identity
{
    public:
        Speed_40Gb();
        ~Speed_40Gb();


}; // Speed_40Gb

class Speed_Unknown : public openconfig_if_ethernet::Ethernet_Speed, virtual ydk::Identity
{
    public:
        Speed_Unknown();
        ~Speed_Unknown();


}; // Speed_Unknown

class Speed_50Gb : public openconfig_if_ethernet::Ethernet_Speed, virtual ydk::Identity
{
    public:
        Speed_50Gb();
        ~Speed_50Gb();


}; // Speed_50Gb

class Speed_10Mb : public openconfig_if_ethernet::Ethernet_Speed, virtual ydk::Identity
{
    public:
        Speed_10Mb();
        ~Speed_10Mb();


}; // Speed_10Mb

class Speed_25Gb : public openconfig_if_ethernet::Ethernet_Speed, virtual ydk::Identity
{
    public:
        Speed_25Gb();
        ~Speed_25Gb();


}; // Speed_25Gb

class Speed_100Gb : public openconfig_if_ethernet::Ethernet_Speed, virtual ydk::Identity
{
    public:
        Speed_100Gb();
        ~Speed_100Gb();


}; // Speed_100Gb

class Speed_100Mb : public openconfig_if_ethernet::Ethernet_Speed, virtual ydk::Identity
{
    public:
        Speed_100Mb();
        ~Speed_100Mb();


}; // Speed_100Mb

class Speed_10Gb : public openconfig_if_ethernet::Ethernet_Speed, virtual ydk::Identity
{
    public:
        Speed_10Gb();
        ~Speed_10Gb();


}; // Speed_10Gb


}
}

#endif /* _OPENCONFIG_IF_ETHERNET_ */

