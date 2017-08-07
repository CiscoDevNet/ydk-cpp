#ifndef _OPENCONFIG_PLATFORM_TYPES_
#define _OPENCONFIG_PLATFORM_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_platform_types {

class Openconfig_Software_Component : public virtual ydk::Identity
{
    public:
        Openconfig_Software_Component();
        ~Openconfig_Software_Component();


}; // Openconfig_Software_Component

class Openconfig_Hardware_Component : public virtual ydk::Identity
{
    public:
        Openconfig_Hardware_Component();
        ~Openconfig_Hardware_Component();


}; // Openconfig_Hardware_Component

class Transceiver : public openconfig_platform_types::Openconfig_Hardware_Component, virtual ydk::Identity
{
    public:
        Transceiver();
        ~Transceiver();


}; // Transceiver

class Backplane : public openconfig_platform_types::Openconfig_Hardware_Component, virtual ydk::Identity
{
    public:
        Backplane();
        ~Backplane();


}; // Backplane

class Power_Supply : public openconfig_platform_types::Openconfig_Hardware_Component, virtual ydk::Identity
{
    public:
        Power_Supply();
        ~Power_Supply();


}; // Power_Supply

class Operating_System : public openconfig_platform_types::Openconfig_Software_Component, virtual ydk::Identity
{
    public:
        Operating_System();
        ~Operating_System();


}; // Operating_System

class Cpu : public openconfig_platform_types::Openconfig_Hardware_Component, virtual ydk::Identity
{
    public:
        Cpu();
        ~Cpu();


}; // Cpu

class Module : public openconfig_platform_types::Openconfig_Hardware_Component, virtual ydk::Identity
{
    public:
        Module();
        ~Module();


}; // Module

class Chassis : public openconfig_platform_types::Openconfig_Hardware_Component, virtual ydk::Identity
{
    public:
        Chassis();
        ~Chassis();


}; // Chassis

class Fan : public openconfig_platform_types::Openconfig_Hardware_Component, virtual ydk::Identity
{
    public:
        Fan();
        ~Fan();


}; // Fan

class Linecard : public openconfig_platform_types::Openconfig_Hardware_Component, virtual ydk::Identity
{
    public:
        Linecard();
        ~Linecard();


}; // Linecard

class Port : public openconfig_platform_types::Openconfig_Hardware_Component, virtual ydk::Identity
{
    public:
        Port();
        ~Port();


}; // Port

class Sensor : public openconfig_platform_types::Openconfig_Hardware_Component, virtual ydk::Identity
{
    public:
        Sensor();
        ~Sensor();


}; // Sensor


}
}

#endif /* _OPENCONFIG_PLATFORM_TYPES_ */

