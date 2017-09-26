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

class EthIfSpeed100gb : public cisco_ios_xe::cisco_ethernet::EthIfSpeed, virtual ydk::Identity
{
    public:
        EthIfSpeed100gb();
        ~EthIfSpeed100gb();


}; // EthIfSpeed100gb

class EthIfSpeed100mb : public cisco_ios_xe::cisco_ethernet::EthIfSpeed, virtual ydk::Identity
{
    public:
        EthIfSpeed100mb();
        ~EthIfSpeed100mb();


}; // EthIfSpeed100mb

class EthIfSpeed10gb : public cisco_ios_xe::cisco_ethernet::EthIfSpeed, virtual ydk::Identity
{
    public:
        EthIfSpeed10gb();
        ~EthIfSpeed10gb();


}; // EthIfSpeed10gb

class EthIfSpeed10mb : public cisco_ios_xe::cisco_ethernet::EthIfSpeed, virtual ydk::Identity
{
    public:
        EthIfSpeed10mb();
        ~EthIfSpeed10mb();


}; // EthIfSpeed10mb

class EthIfSpeed1gb : public cisco_ios_xe::cisco_ethernet::EthIfSpeed, virtual ydk::Identity
{
    public:
        EthIfSpeed1gb();
        ~EthIfSpeed1gb();


}; // EthIfSpeed1gb

class EthIfSpeed40gb : public cisco_ios_xe::cisco_ethernet::EthIfSpeed, virtual ydk::Identity
{
    public:
        EthIfSpeed40gb();
        ~EthIfSpeed40gb();


}; // EthIfSpeed40gb


}
}

#endif /* _CISCO_ETHERNET_ */

