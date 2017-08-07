#ifndef _CISCO_ETHERNET_
#define _CISCO_ETHERNET_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace cisco_ethernet {

class EthIfSpeed : public virtual ydk::Identity
{
    public:
        EthIfSpeed();
        ~EthIfSpeed();


}; // EthIfSpeed

class EthIfSpeed40Gb : public cisco_ethernet::EthIfSpeed, virtual ydk::Identity
{
    public:
        EthIfSpeed40Gb();
        ~EthIfSpeed40Gb();


}; // EthIfSpeed40Gb

class EthIfSpeed100Gb : public cisco_ethernet::EthIfSpeed, virtual ydk::Identity
{
    public:
        EthIfSpeed100Gb();
        ~EthIfSpeed100Gb();


}; // EthIfSpeed100Gb

class EthIfSpeed100Mb : public cisco_ethernet::EthIfSpeed, virtual ydk::Identity
{
    public:
        EthIfSpeed100Mb();
        ~EthIfSpeed100Mb();


}; // EthIfSpeed100Mb

class EthIfSpeed1Gb : public cisco_ethernet::EthIfSpeed, virtual ydk::Identity
{
    public:
        EthIfSpeed1Gb();
        ~EthIfSpeed1Gb();


}; // EthIfSpeed1Gb

class EthIfSpeed10Gb : public cisco_ethernet::EthIfSpeed, virtual ydk::Identity
{
    public:
        EthIfSpeed10Gb();
        ~EthIfSpeed10Gb();


}; // EthIfSpeed10Gb

class EthIfSpeed10Mb : public cisco_ethernet::EthIfSpeed, virtual ydk::Identity
{
    public:
        EthIfSpeed10Mb();
        ~EthIfSpeed10Mb();


}; // EthIfSpeed10Mb


}
}

#endif /* _CISCO_ETHERNET_ */

