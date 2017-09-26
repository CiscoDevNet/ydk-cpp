#ifndef _OPENCONFIG_PLATFORM_TYPES_
#define _OPENCONFIG_PLATFORM_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_platform_types {

class OPENCONFIGHARDWARECOMPONENT : public virtual ydk::Identity
{
    public:
        OPENCONFIGHARDWARECOMPONENT();
        ~OPENCONFIGHARDWARECOMPONENT();


}; // OPENCONFIGHARDWARECOMPONENT

class OPENCONFIGSOFTWARECOMPONENT : public virtual ydk::Identity
{
    public:
        OPENCONFIGSOFTWARECOMPONENT();
        ~OPENCONFIGSOFTWARECOMPONENT();


}; // OPENCONFIGSOFTWARECOMPONENT

class BACKPLANE : public openconfig::openconfig_platform_types::OPENCONFIGHARDWARECOMPONENT, virtual ydk::Identity
{
    public:
        BACKPLANE();
        ~BACKPLANE();


}; // BACKPLANE

class CHASSIS : public openconfig::openconfig_platform_types::OPENCONFIGHARDWARECOMPONENT, virtual ydk::Identity
{
    public:
        CHASSIS();
        ~CHASSIS();


}; // CHASSIS

class CPU : public openconfig::openconfig_platform_types::OPENCONFIGHARDWARECOMPONENT, virtual ydk::Identity
{
    public:
        CPU();
        ~CPU();


}; // CPU

class FAN : public openconfig::openconfig_platform_types::OPENCONFIGHARDWARECOMPONENT, virtual ydk::Identity
{
    public:
        FAN();
        ~FAN();


}; // FAN

class LINECARD : public openconfig::openconfig_platform_types::OPENCONFIGHARDWARECOMPONENT, virtual ydk::Identity
{
    public:
        LINECARD();
        ~LINECARD();


}; // LINECARD

class MODULE : public openconfig::openconfig_platform_types::OPENCONFIGHARDWARECOMPONENT, virtual ydk::Identity
{
    public:
        MODULE();
        ~MODULE();


}; // MODULE

class OPERATINGSYSTEM : public openconfig::openconfig_platform_types::OPENCONFIGSOFTWARECOMPONENT, virtual ydk::Identity
{
    public:
        OPERATINGSYSTEM();
        ~OPERATINGSYSTEM();


}; // OPERATINGSYSTEM

class PORT : public openconfig::openconfig_platform_types::OPENCONFIGHARDWARECOMPONENT, virtual ydk::Identity
{
    public:
        PORT();
        ~PORT();


}; // PORT

class POWERSUPPLY : public openconfig::openconfig_platform_types::OPENCONFIGHARDWARECOMPONENT, virtual ydk::Identity
{
    public:
        POWERSUPPLY();
        ~POWERSUPPLY();


}; // POWERSUPPLY

class SENSOR : public openconfig::openconfig_platform_types::OPENCONFIGHARDWARECOMPONENT, virtual ydk::Identity
{
    public:
        SENSOR();
        ~SENSOR();


}; // SENSOR

class TRANSCEIVER : public openconfig::openconfig_platform_types::OPENCONFIGHARDWARECOMPONENT, virtual ydk::Identity
{
    public:
        TRANSCEIVER();
        ~TRANSCEIVER();


}; // TRANSCEIVER


}
}

#endif /* _OPENCONFIG_PLATFORM_TYPES_ */

