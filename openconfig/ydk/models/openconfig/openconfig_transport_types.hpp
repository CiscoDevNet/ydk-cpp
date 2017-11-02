#ifndef _OPENCONFIG_TRANSPORT_TYPES_
#define _OPENCONFIG_TRANSPORT_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "openconfig_platform_types.hpp"

namespace openconfig {
namespace openconfig_transport_types {

class TRIBUTARYPROTOCOLTYPE : public virtual ydk::Identity
{
    public:
        TRIBUTARYPROTOCOLTYPE();
        ~TRIBUTARYPROTOCOLTYPE();


}; // TRIBUTARYPROTOCOLTYPE

class TRANSCEIVERFORMFACTORTYPE : public virtual ydk::Identity
{
    public:
        TRANSCEIVERFORMFACTORTYPE();
        ~TRANSCEIVERFORMFACTORTYPE();


}; // TRANSCEIVERFORMFACTORTYPE

class FIBERCONNECTORTYPE : public virtual ydk::Identity
{
    public:
        FIBERCONNECTORTYPE();
        ~FIBERCONNECTORTYPE();


}; // FIBERCONNECTORTYPE

class ETHERNETPMDTYPE : public virtual ydk::Identity
{
    public:
        ETHERNETPMDTYPE();
        ~ETHERNETPMDTYPE();


}; // ETHERNETPMDTYPE

class SONETAPPLICATIONCODE : public virtual ydk::Identity
{
    public:
        SONETAPPLICATIONCODE();
        ~SONETAPPLICATIONCODE();


}; // SONETAPPLICATIONCODE

class OTNAPPLICATIONCODE : public virtual ydk::Identity
{
    public:
        OTNAPPLICATIONCODE();
        ~OTNAPPLICATIONCODE();


}; // OTNAPPLICATIONCODE

class TRIBUTARYRATECLASSTYPE : public virtual ydk::Identity
{
    public:
        TRIBUTARYRATECLASSTYPE();
        ~TRIBUTARYRATECLASSTYPE();


}; // TRIBUTARYRATECLASSTYPE

class LOGICALELEMENTPROTOCOLTYPE : public virtual ydk::Identity
{
    public:
        LOGICALELEMENTPROTOCOLTYPE();
        ~LOGICALELEMENTPROTOCOLTYPE();


}; // LOGICALELEMENTPROTOCOLTYPE

class OPTICALCHANNEL : public openconfig::openconfig_platform_types::OPENCONFIGHARDWARECOMPONENT, virtual ydk::Identity
{
    public:
        OPTICALCHANNEL();
        ~OPTICALCHANNEL();


}; // OPTICALCHANNEL

class PROT1GE : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROT1GE();
        ~PROT1GE();


}; // PROT1GE

class PROTOC48 : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTOC48();
        ~PROTOC48();


}; // PROTOC48

class PROTSTM16 : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTSTM16();
        ~PROTSTM16();


}; // PROTSTM16

class PROT10GELAN : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROT10GELAN();
        ~PROT10GELAN();


}; // PROT10GELAN

class PROT10GEWAN : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROT10GEWAN();
        ~PROT10GEWAN();


}; // PROT10GEWAN

class PROTOC192 : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTOC192();
        ~PROTOC192();


}; // PROTOC192

class PROTSTM64 : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTSTM64();
        ~PROTSTM64();


}; // PROTSTM64

class PROTOTU2 : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTOTU2();
        ~PROTOTU2();


}; // PROTOTU2

class PROTOTU2E : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTOTU2E();
        ~PROTOTU2E();


}; // PROTOTU2E

class PROTOTU1E : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTOTU1E();
        ~PROTOTU1E();


}; // PROTOTU1E

class PROTODU2 : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTODU2();
        ~PROTODU2();


}; // PROTODU2

class PROTODU2E : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTODU2E();
        ~PROTODU2E();


}; // PROTODU2E

class PROT40GE : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROT40GE();
        ~PROT40GE();


}; // PROT40GE

class PROTOC768 : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTOC768();
        ~PROTOC768();


}; // PROTOC768

class PROTSTM256 : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTSTM256();
        ~PROTSTM256();


}; // PROTSTM256

class PROTOTU3 : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTOTU3();
        ~PROTOTU3();


}; // PROTOTU3

class PROTODU3 : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTODU3();
        ~PROTODU3();


}; // PROTODU3

class PROT100GE : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROT100GE();
        ~PROT100GE();


}; // PROT100GE

class PROT100GMLG : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROT100GMLG();
        ~PROT100GMLG();


}; // PROT100GMLG

class PROTOTU4 : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTOTU4();
        ~PROTOTU4();


}; // PROTOTU4

class PROTOTUCN : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTOTUCN();
        ~PROTOTUCN();


}; // PROTOTUCN

class PROTODU4 : public openconfig::openconfig_transport_types::TRIBUTARYPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTODU4();
        ~PROTODU4();


}; // PROTODU4

class CFP : public openconfig::openconfig_transport_types::TRANSCEIVERFORMFACTORTYPE, virtual ydk::Identity
{
    public:
        CFP();
        ~CFP();


}; // CFP

class CFP2 : public openconfig::openconfig_transport_types::TRANSCEIVERFORMFACTORTYPE, virtual ydk::Identity
{
    public:
        CFP2();
        ~CFP2();


}; // CFP2

class CFP2ACO : public openconfig::openconfig_transport_types::TRANSCEIVERFORMFACTORTYPE, virtual ydk::Identity
{
    public:
        CFP2ACO();
        ~CFP2ACO();


}; // CFP2ACO

class CFP4 : public openconfig::openconfig_transport_types::TRANSCEIVERFORMFACTORTYPE, virtual ydk::Identity
{
    public:
        CFP4();
        ~CFP4();


}; // CFP4

class QSFP : public openconfig::openconfig_transport_types::TRANSCEIVERFORMFACTORTYPE, virtual ydk::Identity
{
    public:
        QSFP();
        ~QSFP();


}; // QSFP

class QSFP28 : public openconfig::openconfig_transport_types::TRANSCEIVERFORMFACTORTYPE, virtual ydk::Identity
{
    public:
        QSFP28();
        ~QSFP28();


}; // QSFP28

class SFP : public openconfig::openconfig_transport_types::TRANSCEIVERFORMFACTORTYPE, virtual ydk::Identity
{
    public:
        SFP();
        ~SFP();


}; // SFP

class SFPPLUS : public openconfig::openconfig_transport_types::TRANSCEIVERFORMFACTORTYPE, virtual ydk::Identity
{
    public:
        SFPPLUS();
        ~SFPPLUS();


}; // SFPPLUS

class XFP : public openconfig::openconfig_transport_types::TRANSCEIVERFORMFACTORTYPE, virtual ydk::Identity
{
    public:
        XFP();
        ~XFP();


}; // XFP

class X2 : public openconfig::openconfig_transport_types::TRANSCEIVERFORMFACTORTYPE, virtual ydk::Identity
{
    public:
        X2();
        ~X2();


}; // X2

class NONPLUGGABLE : public openconfig::openconfig_transport_types::TRANSCEIVERFORMFACTORTYPE, virtual ydk::Identity
{
    public:
        NONPLUGGABLE();
        ~NONPLUGGABLE();


}; // NONPLUGGABLE

class OTHER : public openconfig::openconfig_transport_types::TRANSCEIVERFORMFACTORTYPE, virtual ydk::Identity
{
    public:
        OTHER();
        ~OTHER();


}; // OTHER

class SCCONNECTOR : public openconfig::openconfig_transport_types::FIBERCONNECTORTYPE, virtual ydk::Identity
{
    public:
        SCCONNECTOR();
        ~SCCONNECTOR();


}; // SCCONNECTOR

class LCCONNECTOR : public openconfig::openconfig_transport_types::FIBERCONNECTORTYPE, virtual ydk::Identity
{
    public:
        LCCONNECTOR();
        ~LCCONNECTOR();


}; // LCCONNECTOR

class MPOCONNECTOR : public openconfig::openconfig_transport_types::FIBERCONNECTORTYPE, virtual ydk::Identity
{
    public:
        MPOCONNECTOR();
        ~MPOCONNECTOR();


}; // MPOCONNECTOR

class ETH10GBASELRM : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH10GBASELRM();
        ~ETH10GBASELRM();


}; // ETH10GBASELRM

class ETH10GBASELR : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH10GBASELR();
        ~ETH10GBASELR();


}; // ETH10GBASELR

class ETH10GBASEZR : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH10GBASEZR();
        ~ETH10GBASEZR();


}; // ETH10GBASEZR

class ETH10GBASEER : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH10GBASEER();
        ~ETH10GBASEER();


}; // ETH10GBASEER

class ETH10GBASESR : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH10GBASESR();
        ~ETH10GBASESR();


}; // ETH10GBASESR

class ETH40GBASECR4 : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH40GBASECR4();
        ~ETH40GBASECR4();


}; // ETH40GBASECR4

class ETH40GBASESR4 : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH40GBASESR4();
        ~ETH40GBASESR4();


}; // ETH40GBASESR4

class ETH40GBASELR4 : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH40GBASELR4();
        ~ETH40GBASELR4();


}; // ETH40GBASELR4

class ETH40GBASEER4 : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH40GBASEER4();
        ~ETH40GBASEER4();


}; // ETH40GBASEER4

class ETH40GBASEPSM4 : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH40GBASEPSM4();
        ~ETH40GBASEPSM4();


}; // ETH40GBASEPSM4

class ETH4X10GBASELR : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH4X10GBASELR();
        ~ETH4X10GBASELR();


}; // ETH4X10GBASELR

class ETH4X10GBASESR : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH4X10GBASESR();
        ~ETH4X10GBASESR();


}; // ETH4X10GBASESR

class ETH100GAOC : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH100GAOC();
        ~ETH100GAOC();


}; // ETH100GAOC

class ETH100GACC : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH100GACC();
        ~ETH100GACC();


}; // ETH100GACC

class ETH100GBASESR10 : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH100GBASESR10();
        ~ETH100GBASESR10();


}; // ETH100GBASESR10

class ETH100GBASESR4 : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH100GBASESR4();
        ~ETH100GBASESR4();


}; // ETH100GBASESR4

class ETH100GBASELR4 : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH100GBASELR4();
        ~ETH100GBASELR4();


}; // ETH100GBASELR4

class ETH100GBASEER4 : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH100GBASEER4();
        ~ETH100GBASEER4();


}; // ETH100GBASEER4

class ETH100GBASECWDM4 : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH100GBASECWDM4();
        ~ETH100GBASECWDM4();


}; // ETH100GBASECWDM4

class ETH100GBASECLR4 : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH100GBASECLR4();
        ~ETH100GBASECLR4();


}; // ETH100GBASECLR4

class ETH100GBASEPSM4 : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH100GBASEPSM4();
        ~ETH100GBASEPSM4();


}; // ETH100GBASEPSM4

class ETH100GBASECR4 : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETH100GBASECR4();
        ~ETH100GBASECR4();


}; // ETH100GBASECR4

class ETHUNDEFINED : public openconfig::openconfig_transport_types::ETHERNETPMDTYPE, virtual ydk::Identity
{
    public:
        ETHUNDEFINED();
        ~ETHUNDEFINED();


}; // ETHUNDEFINED

class VSR20003R2 : public openconfig::openconfig_transport_types::SONETAPPLICATIONCODE, virtual ydk::Identity
{
    public:
        VSR20003R2();
        ~VSR20003R2();


}; // VSR20003R2

class VSR20003R3 : public openconfig::openconfig_transport_types::SONETAPPLICATIONCODE, virtual ydk::Identity
{
    public:
        VSR20003R3();
        ~VSR20003R3();


}; // VSR20003R3

class VSR20003R5 : public openconfig::openconfig_transport_types::SONETAPPLICATIONCODE, virtual ydk::Identity
{
    public:
        VSR20003R5();
        ~VSR20003R5();


}; // VSR20003R5

class SONETUNDEFINED : public openconfig::openconfig_transport_types::SONETAPPLICATIONCODE, virtual ydk::Identity
{
    public:
        SONETUNDEFINED();
        ~SONETUNDEFINED();


}; // SONETUNDEFINED

class P1L12D1 : public openconfig::openconfig_transport_types::OTNAPPLICATIONCODE, virtual ydk::Identity
{
    public:
        P1L12D1();
        ~P1L12D1();


}; // P1L12D1

class P1S12D2 : public openconfig::openconfig_transport_types::OTNAPPLICATIONCODE, virtual ydk::Identity
{
    public:
        P1S12D2();
        ~P1S12D2();


}; // P1S12D2

class P1L12D2 : public openconfig::openconfig_transport_types::OTNAPPLICATIONCODE, virtual ydk::Identity
{
    public:
        P1L12D2();
        ~P1L12D2();


}; // P1L12D2

class OTNUNDEFINED : public openconfig::openconfig_transport_types::OTNAPPLICATIONCODE, virtual ydk::Identity
{
    public:
        OTNUNDEFINED();
        ~OTNUNDEFINED();


}; // OTNUNDEFINED

class TRIBRATE1G : public openconfig::openconfig_transport_types::TRIBUTARYRATECLASSTYPE, virtual ydk::Identity
{
    public:
        TRIBRATE1G();
        ~TRIBRATE1G();


}; // TRIBRATE1G

class TRIBRATE2DOT5G : public openconfig::openconfig_transport_types::TRIBUTARYRATECLASSTYPE, virtual ydk::Identity
{
    public:
        TRIBRATE2DOT5G();
        ~TRIBRATE2DOT5G();


}; // TRIBRATE2DOT5G

class TRIBRATE10G : public openconfig::openconfig_transport_types::TRIBUTARYRATECLASSTYPE, virtual ydk::Identity
{
    public:
        TRIBRATE10G();
        ~TRIBRATE10G();


}; // TRIBRATE10G

class TRIBRATE40G : public openconfig::openconfig_transport_types::TRIBUTARYRATECLASSTYPE, virtual ydk::Identity
{
    public:
        TRIBRATE40G();
        ~TRIBRATE40G();


}; // TRIBRATE40G

class TRIBRATE100G : public openconfig::openconfig_transport_types::TRIBUTARYRATECLASSTYPE, virtual ydk::Identity
{
    public:
        TRIBRATE100G();
        ~TRIBRATE100G();


}; // TRIBRATE100G

class PROTETHERNET : public openconfig::openconfig_transport_types::LOGICALELEMENTPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTETHERNET();
        ~PROTETHERNET();


}; // PROTETHERNET

class PROTOTN : public openconfig::openconfig_transport_types::LOGICALELEMENTPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        PROTOTN();
        ~PROTOTN();


}; // PROTOTN

class AdminStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ENABLED;
        static const ydk::Enum::YLeaf DISABLED;
        static const ydk::Enum::YLeaf MAINT;

};

class LoopbackModeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NONE;
        static const ydk::Enum::YLeaf FACILITY;
        static const ydk::Enum::YLeaf TERMINAL;

};


}
}

#endif /* _OPENCONFIG_TRANSPORT_TYPES_ */

