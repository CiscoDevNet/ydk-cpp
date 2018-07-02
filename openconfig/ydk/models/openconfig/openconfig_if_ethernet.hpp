#ifndef _OPENCONFIG_IF_ETHERNET_
#define _OPENCONFIG_IF_ETHERNET_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_if_ethernet {

class ETHERNETSPEED : public virtual ydk::Identity
{
    public:
        ETHERNETSPEED();
        ~ETHERNETSPEED();


}; // ETHERNETSPEED

class SPEED100GB : public openconfig::openconfig_if_ethernet::ETHERNETSPEED, virtual ydk::Identity
{
    public:
        SPEED100GB();
        ~SPEED100GB();


}; // SPEED100GB

class SPEED1GB : public openconfig::openconfig_if_ethernet::ETHERNETSPEED, virtual ydk::Identity
{
    public:
        SPEED1GB();
        ~SPEED1GB();


}; // SPEED1GB

class SPEED25GB : public openconfig::openconfig_if_ethernet::ETHERNETSPEED, virtual ydk::Identity
{
    public:
        SPEED25GB();
        ~SPEED25GB();


}; // SPEED25GB

class SPEED10GB : public openconfig::openconfig_if_ethernet::ETHERNETSPEED, virtual ydk::Identity
{
    public:
        SPEED10GB();
        ~SPEED10GB();


}; // SPEED10GB

class SPEED10MB : public openconfig::openconfig_if_ethernet::ETHERNETSPEED, virtual ydk::Identity
{
    public:
        SPEED10MB();
        ~SPEED10MB();


}; // SPEED10MB

class SPEED40GB : public openconfig::openconfig_if_ethernet::ETHERNETSPEED, virtual ydk::Identity
{
    public:
        SPEED40GB();
        ~SPEED40GB();


}; // SPEED40GB

class SPEEDUNKNOWN : public openconfig::openconfig_if_ethernet::ETHERNETSPEED, virtual ydk::Identity
{
    public:
        SPEEDUNKNOWN();
        ~SPEEDUNKNOWN();


}; // SPEEDUNKNOWN

class SPEED50GB : public openconfig::openconfig_if_ethernet::ETHERNETSPEED, virtual ydk::Identity
{
    public:
        SPEED50GB();
        ~SPEED50GB();


}; // SPEED50GB

class SPEED100MB : public openconfig::openconfig_if_ethernet::ETHERNETSPEED, virtual ydk::Identity
{
    public:
        SPEED100MB();
        ~SPEED100MB();


}; // SPEED100MB


}
}

#endif /* _OPENCONFIG_IF_ETHERNET_ */

