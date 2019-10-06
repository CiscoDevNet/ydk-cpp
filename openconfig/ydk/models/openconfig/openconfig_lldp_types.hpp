#ifndef _OPENCONFIG_LLDP_TYPES_
#define _OPENCONFIG_LLDP_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_lldp_types {

class LLDPTLV : public virtual ydk::Identity
{
    public:
        LLDPTLV();
        ~LLDPTLV();


}; // LLDPTLV

class LLDPSYSTEMCAPABILITY : public virtual ydk::Identity
{
    public:
        LLDPSYSTEMCAPABILITY();
        ~LLDPSYSTEMCAPABILITY();


}; // LLDPSYSTEMCAPABILITY

class SYSTEMNAME : public openconfig::openconfig_lldp_types::LLDPTLV, virtual ydk::Identity
{
    public:
        SYSTEMNAME();
        ~SYSTEMNAME();


}; // SYSTEMNAME

class MACBRIDGE : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        MACBRIDGE();
        ~MACBRIDGE();


}; // MACBRIDGE

class PORTDESCRIPTION : public openconfig::openconfig_lldp_types::LLDPTLV, virtual ydk::Identity
{
    public:
        PORTDESCRIPTION();
        ~PORTDESCRIPTION();


}; // PORTDESCRIPTION

class DOCSISCABLEDEVICE : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        DOCSISCABLEDEVICE();
        ~DOCSISCABLEDEVICE();


}; // DOCSISCABLEDEVICE

class REPEATER : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        REPEATER();
        ~REPEATER();


}; // REPEATER

class SYSTEMDESCRIPTION : public openconfig::openconfig_lldp_types::LLDPTLV, virtual ydk::Identity
{
    public:
        SYSTEMDESCRIPTION();
        ~SYSTEMDESCRIPTION();


}; // SYSTEMDESCRIPTION

class CVLAN : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        CVLAN();
        ~CVLAN();


}; // CVLAN

class TWOPORTMACRELAY : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        TWOPORTMACRELAY();
        ~TWOPORTMACRELAY();


}; // TWOPORTMACRELAY

class SVLAN : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        SVLAN();
        ~SVLAN();


}; // SVLAN

class TELEPHONE : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        TELEPHONE();
        ~TELEPHONE();


}; // TELEPHONE

class CHASSISID : public openconfig::openconfig_lldp_types::LLDPTLV, virtual ydk::Identity
{
    public:
        CHASSISID();
        ~CHASSISID();


}; // CHASSISID

class OTHER : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        OTHER();
        ~OTHER();


}; // OTHER

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

class ROUTER : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        ROUTER();
        ~ROUTER();


}; // ROUTER

class PORTID : public openconfig::openconfig_lldp_types::LLDPTLV, virtual ydk::Identity
{
    public:
        PORTID();
        ~PORTID();


}; // PORTID

class STATIONONLY : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        STATIONONLY();
        ~STATIONONLY();


}; // STATIONONLY

class WLANACCESSPOINT : public openconfig::openconfig_lldp_types::LLDPSYSTEMCAPABILITY, virtual ydk::Identity
{
    public:
        WLANACCESSPOINT();
        ~WLANACCESSPOINT();


}; // WLANACCESSPOINT

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

        static int get_enum_value(const std::string & name) {
            if (name == "CHASSIS_COMPONENT") return 0;
            if (name == "INTERFACE_ALIAS") return 1;
            if (name == "PORT_COMPONENT") return 2;
            if (name == "MAC_ADDRESS") return 3;
            if (name == "NETWORK_ADDRESS") return 4;
            if (name == "INTERFACE_NAME") return 5;
            if (name == "LOCAL") return 6;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "INTERFACE_ALIAS") return 0;
            if (name == "PORT_COMPONENT") return 1;
            if (name == "MAC_ADDRESS") return 2;
            if (name == "NETWORK_ADDRESS") return 3;
            if (name == "INTERFACE_NAME") return 4;
            if (name == "AGENT_CIRCUIT_ID") return 5;
            if (name == "LOCAL") return 6;
            return -1;
        }
};


}
}

#endif /* _OPENCONFIG_LLDP_TYPES_ */

