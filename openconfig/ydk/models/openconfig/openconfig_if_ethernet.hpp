#ifndef _OPENCONFIG_IF_ETHERNET_
#define _OPENCONFIG_IF_ETHERNET_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace openconfig_if_ethernet {

class EthernetSpeedIdentity : public virtual Identity
{
    public:
        EthernetSpeedIdentity();
        ~EthernetSpeedIdentity();


}; // EthernetSpeedIdentity

class Speed_100GbIdentity : public openconfig_if_ethernet::EthernetSpeedIdentity, virtual Identity
{
    public:
        Speed_100GbIdentity();
        ~Speed_100GbIdentity();


}; // Speed_100GbIdentity

class Speed_25GbIdentity : public openconfig_if_ethernet::EthernetSpeedIdentity, virtual Identity
{
    public:
        Speed_25GbIdentity();
        ~Speed_25GbIdentity();


}; // Speed_25GbIdentity

class Speed_1GbIdentity : public openconfig_if_ethernet::EthernetSpeedIdentity, virtual Identity
{
    public:
        Speed_1GbIdentity();
        ~Speed_1GbIdentity();


}; // Speed_1GbIdentity

class Speed_10GbIdentity : public openconfig_if_ethernet::EthernetSpeedIdentity, virtual Identity
{
    public:
        Speed_10GbIdentity();
        ~Speed_10GbIdentity();


}; // Speed_10GbIdentity

class Speed_10MbIdentity : public openconfig_if_ethernet::EthernetSpeedIdentity, virtual Identity
{
    public:
        Speed_10MbIdentity();
        ~Speed_10MbIdentity();


}; // Speed_10MbIdentity

class Speed_40GbIdentity : public openconfig_if_ethernet::EthernetSpeedIdentity, virtual Identity
{
    public:
        Speed_40GbIdentity();
        ~Speed_40GbIdentity();


}; // Speed_40GbIdentity

class Speed_UnknownIdentity : public openconfig_if_ethernet::EthernetSpeedIdentity, virtual Identity
{
    public:
        Speed_UnknownIdentity();
        ~Speed_UnknownIdentity();


}; // Speed_UnknownIdentity

class Speed_50GbIdentity : public openconfig_if_ethernet::EthernetSpeedIdentity, virtual Identity
{
    public:
        Speed_50GbIdentity();
        ~Speed_50GbIdentity();


}; // Speed_50GbIdentity

class Speed_100MbIdentity : public openconfig_if_ethernet::EthernetSpeedIdentity, virtual Identity
{
    public:
        Speed_100MbIdentity();
        ~Speed_100MbIdentity();


}; // Speed_100MbIdentity


}
}

#endif /* _OPENCONFIG_IF_ETHERNET_ */

