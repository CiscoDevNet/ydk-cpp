#ifndef _OPENCONFIG_LLDP_TYPES_
#define _OPENCONFIG_LLDP_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_lldp_types {

class LLDPSYSTEMCAPABILITY : public virtual ydk::Identity
{
    public:
        LLDPSYSTEMCAPABILITY();
        ~LLDPSYSTEMCAPABILITY();


}; // LLDPSYSTEMCAPABILITY

class LLDPTLV : public virtual ydk::Identity
{
    public:
        LLDPTLV();
        ~LLDPTLV();


}; // LLDPTLV

class OTHER : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        OTHER();
        ~OTHER();


}; // OTHER

class REPEATER : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        REPEATER();
        ~REPEATER();


}; // REPEATER

class MACBRIDGE : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        MACBRIDGE();
        ~MACBRIDGE();


}; // MACBRIDGE

class WLANACCESSPOINT : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        WLANACCESSPOINT();
        ~WLANACCESSPOINT();


}; // WLANACCESSPOINT

class ROUTER : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        ROUTER();
        ~ROUTER();


}; // ROUTER

class TELEPHONE : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        TELEPHONE();
        ~TELEPHONE();


}; // TELEPHONE

class DOCSISCABLEDEVICE : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        DOCSISCABLEDEVICE();
        ~DOCSISCABLEDEVICE();


}; // DOCSISCABLEDEVICE

class STATIONONLY : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        STATIONONLY();
        ~STATIONONLY();


}; // STATIONONLY

class CVLAN : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        CVLAN();
        ~CVLAN();


}; // CVLAN

class SVLAN : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        SVLAN();
        ~SVLAN();


}; // SVLAN

class TWOPORTMACRELAY : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        TWOPORTMACRELAY();
        ~TWOPORTMACRELAY();


}; // TWOPORTMACRELAY

class CHASSISID : public openconfig::openconfig_lldp_types::LLDPTLV, virtual ydk::Identity
{
    public:
        CHASSISID();
        ~CHASSISID();


}; // CHASSISID

class PORTID : public openconfig::openconfig_lldp_types::LLDPTLV, virtual ydk::Identity
{
    public:
        PORTID();
        ~PORTID();


}; // PORTID

class PORTDESCRIPTION : public openconfig::openconfig_lldp_types::LLDPTLV, virtual ydk::Identity
{
    public:
        PORTDESCRIPTION();
        ~PORTDESCRIPTION();


}; // PORTDESCRIPTION

class SYSTEMNAME : public openconfig::openconfig_lldp_types::LLDPTLV, virtual ydk::Identity
{
    public:
        SYSTEMNAME();
        ~SYSTEMNAME();


}; // SYSTEMNAME

class SYSTEMDESCRIPTION : public openconfig::openconfig_lldp_types::LLDPTLV, virtual ydk::Identity
{
    public:
        SYSTEMDESCRIPTION();
        ~SYSTEMDESCRIPTION();


}; // SYSTEMDESCRIPTION

class SYSTEMCAPABILITIES : public openconfig::openconfig_lldp_types::LLDPTLV, virtual ydk::Identity
{
    public:
        SYSTEMCAPABILITIES();
        ~SYSTEMCAPABILITIES();


}; // SYSTEMCAPABILITIES

class MANAGEMENTADDRESS : public openconfig::openconfig_lldp_types::LLDPTLV, virtual ydk::Identity
{
    public:
        MANAGEMENTADDRESS();
        ~MANAGEMENTADDRESS();


}; // MANAGEMENTADDRESS

class ChassisIdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf CHASSIS_COMPONENT;
        static const ydk::Enum::YLeaf INTERFACE_ALIAS;
        static const ydk::Enum::YLeaf PORT_COMPONENT;
        static const ydk::Enum::YLeaf MAC_ADDRESS;
        static const ydk::Enum::YLeaf NETWORK_ADDRESS;
        static const ydk::Enum::YLeaf INTERFACE_NAME;
        static const ydk::Enum::YLeaf LOCAL;

};

class PortIdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INTERFACE_ALIAS;
        static const ydk::Enum::YLeaf PORT_COMPONENT;
        static const ydk::Enum::YLeaf MAC_ADDRESS;
        static const ydk::Enum::YLeaf NETWORK_ADDRESS;
        static const ydk::Enum::YLeaf INTERFACE_NAME;
        static const ydk::Enum::YLeaf AGENT_CIRCUIT_ID;
        static const ydk::Enum::YLeaf LOCAL;

};


}
}

#endif /* _OPENCONFIG_LLDP_TYPES_ */

