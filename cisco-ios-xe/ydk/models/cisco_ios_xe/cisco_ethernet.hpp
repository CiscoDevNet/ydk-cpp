#ifndef _CISCO_ETHERNET_
#define _CISCO_ETHERNET_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace cisco_ethernet {

class EthIfSpeedIdentity : public virtual Identity
{
    public:
        EthIfSpeedIdentity();
        ~EthIfSpeedIdentity();


}; // EthIfSpeedIdentity

class EthIfSpeed1GbIdentity : public cisco_ethernet::EthIfSpeedIdentity, virtual Identity
{
    public:
        EthIfSpeed1GbIdentity();
        ~EthIfSpeed1GbIdentity();


}; // EthIfSpeed1GbIdentity

class EthIfSpeed40GbIdentity : public cisco_ethernet::EthIfSpeedIdentity, virtual Identity
{
    public:
        EthIfSpeed40GbIdentity();
        ~EthIfSpeed40GbIdentity();


}; // EthIfSpeed40GbIdentity

class EthIfSpeed10MbIdentity : public cisco_ethernet::EthIfSpeedIdentity, virtual Identity
{
    public:
        EthIfSpeed10MbIdentity();
        ~EthIfSpeed10MbIdentity();


}; // EthIfSpeed10MbIdentity

class EthIfSpeed10GbIdentity : public cisco_ethernet::EthIfSpeedIdentity, virtual Identity
{
    public:
        EthIfSpeed10GbIdentity();
        ~EthIfSpeed10GbIdentity();


}; // EthIfSpeed10GbIdentity

class EthIfSpeed100GbIdentity : public cisco_ethernet::EthIfSpeedIdentity, virtual Identity
{
    public:
        EthIfSpeed100GbIdentity();
        ~EthIfSpeed100GbIdentity();


}; // EthIfSpeed100GbIdentity

class EthIfSpeed100MbIdentity : public cisco_ethernet::EthIfSpeedIdentity, virtual Identity
{
    public:
        EthIfSpeed100MbIdentity();
        ~EthIfSpeed100MbIdentity();


}; // EthIfSpeed100MbIdentity


}
}

#endif /* _CISCO_ETHERNET_ */

