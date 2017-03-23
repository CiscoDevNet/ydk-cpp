#ifndef _OPENCONFIG_PLATFORM_TYPES_
#define _OPENCONFIG_PLATFORM_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace openconfig_platform_types {

class Openconfig_Hardware_ComponentIdentity : public virtual Identity
{
    public:
        Openconfig_Hardware_ComponentIdentity();
        ~Openconfig_Hardware_ComponentIdentity();





}; // Openconfig_Hardware_ComponentIdentity

class Openconfig_Software_ComponentIdentity : public virtual Identity
{
    public:
        Openconfig_Software_ComponentIdentity();
        ~Openconfig_Software_ComponentIdentity();





}; // Openconfig_Software_ComponentIdentity

class Operating_SystemIdentity : public openconfig_platform_types::Openconfig_Software_ComponentIdentity, virtual Identity
{
    public:
        Operating_SystemIdentity();
        ~Operating_SystemIdentity();




}; // Operating_SystemIdentity

class LinecardIdentity : public openconfig_platform_types::Openconfig_Hardware_ComponentIdentity, virtual Identity
{
    public:
        LinecardIdentity();
        ~LinecardIdentity();




}; // LinecardIdentity

class ModuleIdentity : public openconfig_platform_types::Openconfig_Hardware_ComponentIdentity, virtual Identity
{
    public:
        ModuleIdentity();
        ~ModuleIdentity();




}; // ModuleIdentity

class CpuIdentity : public openconfig_platform_types::Openconfig_Hardware_ComponentIdentity, virtual Identity
{
    public:
        CpuIdentity();
        ~CpuIdentity();




}; // CpuIdentity

class TransceiverIdentity : public openconfig_platform_types::Openconfig_Hardware_ComponentIdentity, virtual Identity
{
    public:
        TransceiverIdentity();
        ~TransceiverIdentity();




}; // TransceiverIdentity

class ChassisIdentity : public openconfig_platform_types::Openconfig_Hardware_ComponentIdentity, virtual Identity
{
    public:
        ChassisIdentity();
        ~ChassisIdentity();




}; // ChassisIdentity

class FanIdentity : public openconfig_platform_types::Openconfig_Hardware_ComponentIdentity, virtual Identity
{
    public:
        FanIdentity();
        ~FanIdentity();




}; // FanIdentity

class BackplaneIdentity : public openconfig_platform_types::Openconfig_Hardware_ComponentIdentity, virtual Identity
{
    public:
        BackplaneIdentity();
        ~BackplaneIdentity();




}; // BackplaneIdentity

class SensorIdentity : public openconfig_platform_types::Openconfig_Hardware_ComponentIdentity, virtual Identity
{
    public:
        SensorIdentity();
        ~SensorIdentity();




}; // SensorIdentity

class PortIdentity : public openconfig_platform_types::Openconfig_Hardware_ComponentIdentity, virtual Identity
{
    public:
        PortIdentity();
        ~PortIdentity();




}; // PortIdentity

class Power_SupplyIdentity : public openconfig_platform_types::Openconfig_Hardware_ComponentIdentity, virtual Identity
{
    public:
        Power_SupplyIdentity();
        ~Power_SupplyIdentity();




}; // Power_SupplyIdentity


}
}

#endif /* _OPENCONFIG_PLATFORM_TYPES_ */

