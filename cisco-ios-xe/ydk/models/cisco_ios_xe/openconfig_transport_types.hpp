#ifndef _OPENCONFIG_TRANSPORT_TYPES_
#define _OPENCONFIG_TRANSPORT_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_openconfig/openconfig_platform_types.hpp"

namespace cisco_ios_xe {
namespace openconfig_transport_types {

class Tributary_Rate_Class_Type : public virtual ydk::Identity
{
    public:
        Tributary_Rate_Class_Type();
        ~Tributary_Rate_Class_Type();


}; // Tributary_Rate_Class_Type

class Ethernet_Pmd_Type : public virtual ydk::Identity
{
    public:
        Ethernet_Pmd_Type();
        ~Ethernet_Pmd_Type();


}; // Ethernet_Pmd_Type

class Sonet_Application_Code : public virtual ydk::Identity
{
    public:
        Sonet_Application_Code();
        ~Sonet_Application_Code();


}; // Sonet_Application_Code

class Fiber_Connector_Type : public virtual ydk::Identity
{
    public:
        Fiber_Connector_Type();
        ~Fiber_Connector_Type();


}; // Fiber_Connector_Type

class Logical_Element_Protocol_Type : public virtual ydk::Identity
{
    public:
        Logical_Element_Protocol_Type();
        ~Logical_Element_Protocol_Type();


}; // Logical_Element_Protocol_Type

class Transceiver_Form_Factor_Type : public virtual ydk::Identity
{
    public:
        Transceiver_Form_Factor_Type();
        ~Transceiver_Form_Factor_Type();


}; // Transceiver_Form_Factor_Type

class Tributary_Protocol_Type : public virtual ydk::Identity
{
    public:
        Tributary_Protocol_Type();
        ~Tributary_Protocol_Type();


}; // Tributary_Protocol_Type

class Otn_Application_Code : public virtual ydk::Identity
{
    public:
        Otn_Application_Code();
        ~Otn_Application_Code();


}; // Otn_Application_Code

class Optical_Channel : public openconfig::openconfig_platform_types::Openconfig_Hardware_Component, virtual ydk::Identity
{
    public:
        Optical_Channel();
        ~Optical_Channel();


}; // Optical_Channel

class Prot_Otucn : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Otucn();
        ~Prot_Otucn();


}; // Prot_Otucn

class X2 : public openconfig_transport_types::Transceiver_Form_Factor_Type, virtual ydk::Identity
{
    public:
        X2();
        ~X2();


}; // X2

class Prot_Odu2E : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Odu2E();
        ~Prot_Odu2E();


}; // Prot_Odu2E

class Xfp : public openconfig_transport_types::Transceiver_Form_Factor_Type, virtual ydk::Identity
{
    public:
        Xfp();
        ~Xfp();


}; // Xfp

class Eth_10Gbase_Zr : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_10Gbase_Zr();
        ~Eth_10Gbase_Zr();


}; // Eth_10Gbase_Zr

class Trib_Rate_40G : public openconfig_transport_types::Tributary_Rate_Class_Type, virtual ydk::Identity
{
    public:
        Trib_Rate_40G();
        ~Trib_Rate_40G();


}; // Trib_Rate_40G

class Non_Pluggable : public openconfig_transport_types::Transceiver_Form_Factor_Type, virtual ydk::Identity
{
    public:
        Non_Pluggable();
        ~Non_Pluggable();


}; // Non_Pluggable

class Qsfp : public openconfig_transport_types::Transceiver_Form_Factor_Type, virtual ydk::Identity
{
    public:
        Qsfp();
        ~Qsfp();


}; // Qsfp

class Prot_100Ge : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_100Ge();
        ~Prot_100Ge();


}; // Prot_100Ge

class Cfp4 : public openconfig_transport_types::Transceiver_Form_Factor_Type, virtual ydk::Identity
{
    public:
        Cfp4();
        ~Cfp4();


}; // Cfp4

class P1S1_2D2 : public openconfig_transport_types::Otn_Application_Code, virtual ydk::Identity
{
    public:
        P1S1_2D2();
        ~P1S1_2D2();


}; // P1S1_2D2

class Prot_Oc48 : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Oc48();
        ~Prot_Oc48();


}; // Prot_Oc48

class P1L1_2D1 : public openconfig_transport_types::Otn_Application_Code, virtual ydk::Identity
{
    public:
        P1L1_2D1();
        ~P1L1_2D1();


}; // P1L1_2D1

class Eth_100Gbase_Clr4 : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_100Gbase_Clr4();
        ~Eth_100Gbase_Clr4();


}; // Eth_100Gbase_Clr4

class P1L1_2D2 : public openconfig_transport_types::Otn_Application_Code, virtual ydk::Identity
{
    public:
        P1L1_2D2();
        ~P1L1_2D2();


}; // P1L1_2D2

class Eth_40Gbase_Er4 : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_40Gbase_Er4();
        ~Eth_40Gbase_Er4();


}; // Eth_40Gbase_Er4

class Prot_10Ge_Wan : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_10Ge_Wan();
        ~Prot_10Ge_Wan();


}; // Prot_10Ge_Wan

class Eth_100G_Aoc : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_100G_Aoc();
        ~Eth_100G_Aoc();


}; // Eth_100G_Aoc

class Prot_40Ge : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_40Ge();
        ~Prot_40Ge();


}; // Prot_40Ge

class Eth_40Gbase_Cr4 : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_40Gbase_Cr4();
        ~Eth_40Gbase_Cr4();


}; // Eth_40Gbase_Cr4

class Eth_10Gbase_Lrm : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_10Gbase_Lrm();
        ~Eth_10Gbase_Lrm();


}; // Eth_10Gbase_Lrm

class Sfp_Plus : public openconfig_transport_types::Transceiver_Form_Factor_Type, virtual ydk::Identity
{
    public:
        Sfp_Plus();
        ~Sfp_Plus();


}; // Sfp_Plus

class Prot_Otu2 : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Otu2();
        ~Prot_Otu2();


}; // Prot_Otu2

class Eth_100Gbase_Cr4 : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_100Gbase_Cr4();
        ~Eth_100Gbase_Cr4();


}; // Eth_100Gbase_Cr4

class Otn_Undefined : public openconfig_transport_types::Otn_Application_Code, virtual ydk::Identity
{
    public:
        Otn_Undefined();
        ~Otn_Undefined();


}; // Otn_Undefined

class Sfp : public openconfig_transport_types::Transceiver_Form_Factor_Type, virtual ydk::Identity
{
    public:
        Sfp();
        ~Sfp();


}; // Sfp

class Eth_100Gbase_Sr10 : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_100Gbase_Sr10();
        ~Eth_100Gbase_Sr10();


}; // Eth_100Gbase_Sr10

class Cfp2 : public openconfig_transport_types::Transceiver_Form_Factor_Type, virtual ydk::Identity
{
    public:
        Cfp2();
        ~Cfp2();


}; // Cfp2

class Prot_1Ge : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_1Ge();
        ~Prot_1Ge();


}; // Prot_1Ge

class Trib_Rate_10G : public openconfig_transport_types::Tributary_Rate_Class_Type, virtual ydk::Identity
{
    public:
        Trib_Rate_10G();
        ~Trib_Rate_10G();


}; // Trib_Rate_10G

class Trib_Rate_2__Dot__5G : public openconfig_transport_types::Tributary_Rate_Class_Type, virtual ydk::Identity
{
    public:
        Trib_Rate_2__Dot__5G();
        ~Trib_Rate_2__Dot__5G();


}; // Trib_Rate_2__Dot__5G

class Prot_Oc192 : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Oc192();
        ~Prot_Oc192();


}; // Prot_Oc192

class Eth_100Gbase_Sr4 : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_100Gbase_Sr4();
        ~Eth_100Gbase_Sr4();


}; // Eth_100Gbase_Sr4

class Cfp2_Aco : public openconfig_transport_types::Transceiver_Form_Factor_Type, virtual ydk::Identity
{
    public:
        Cfp2_Aco();
        ~Cfp2_Aco();


}; // Cfp2_Aco

class Prot_Stm16 : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Stm16();
        ~Prot_Stm16();


}; // Prot_Stm16

class Eth_100Gbase_Er4 : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_100Gbase_Er4();
        ~Eth_100Gbase_Er4();


}; // Eth_100Gbase_Er4

class Eth_Undefined : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_Undefined();
        ~Eth_Undefined();


}; // Eth_Undefined

class Prot_Otn : public openconfig_transport_types::Logical_Element_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Otn();
        ~Prot_Otn();


}; // Prot_Otn

class Eth_10Gbase_Er : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_10Gbase_Er();
        ~Eth_10Gbase_Er();


}; // Eth_10Gbase_Er

class Sc_Connector : public openconfig_transport_types::Fiber_Connector_Type, virtual ydk::Identity
{
    public:
        Sc_Connector();
        ~Sc_Connector();


}; // Sc_Connector

class Eth_40Gbase_Lr4 : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_40Gbase_Lr4();
        ~Eth_40Gbase_Lr4();


}; // Eth_40Gbase_Lr4

class Eth_40Gbase_Sr4 : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_40Gbase_Sr4();
        ~Eth_40Gbase_Sr4();


}; // Eth_40Gbase_Sr4

class Prot_Stm256 : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Stm256();
        ~Prot_Stm256();


}; // Prot_Stm256

class Eth_40Gbase_Psm4 : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_40Gbase_Psm4();
        ~Eth_40Gbase_Psm4();


}; // Eth_40Gbase_Psm4

class Prot_10Ge_Lan : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_10Ge_Lan();
        ~Prot_10Ge_Lan();


}; // Prot_10Ge_Lan

class Eth_10Gbase_Lr : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_10Gbase_Lr();
        ~Eth_10Gbase_Lr();


}; // Eth_10Gbase_Lr

class Eth_10Gbase_Sr : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_10Gbase_Sr();
        ~Eth_10Gbase_Sr();


}; // Eth_10Gbase_Sr

class Trib_Rate_1G : public openconfig_transport_types::Tributary_Rate_Class_Type, virtual ydk::Identity
{
    public:
        Trib_Rate_1G();
        ~Trib_Rate_1G();


}; // Trib_Rate_1G

class Eth_100Gbase_Psm4 : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_100Gbase_Psm4();
        ~Eth_100Gbase_Psm4();


}; // Eth_100Gbase_Psm4

class Prot_Odu4 : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Odu4();
        ~Prot_Odu4();


}; // Prot_Odu4

class Eth_4X10Gbase_Lr : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_4X10Gbase_Lr();
        ~Eth_4X10Gbase_Lr();


}; // Eth_4X10Gbase_Lr

class Other : public openconfig_transport_types::Transceiver_Form_Factor_Type, virtual ydk::Identity
{
    public:
        Other();
        ~Other();


}; // Other

class Prot_Stm64 : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Stm64();
        ~Prot_Stm64();


}; // Prot_Stm64

class Eth_4X10Gbase_Sr : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_4X10Gbase_Sr();
        ~Eth_4X10Gbase_Sr();


}; // Eth_4X10Gbase_Sr

class Trib_Rate_100G : public openconfig_transport_types::Tributary_Rate_Class_Type, virtual ydk::Identity
{
    public:
        Trib_Rate_100G();
        ~Trib_Rate_100G();


}; // Trib_Rate_100G

class Prot_Otu4 : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Otu4();
        ~Prot_Otu4();


}; // Prot_Otu4

class Prot_Otu3 : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Otu3();
        ~Prot_Otu3();


}; // Prot_Otu3

class Vsr2000_3R2 : public openconfig_transport_types::Sonet_Application_Code, virtual ydk::Identity
{
    public:
        Vsr2000_3R2();
        ~Vsr2000_3R2();


}; // Vsr2000_3R2

class Prot_Oc768 : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Oc768();
        ~Prot_Oc768();


}; // Prot_Oc768

class Eth_100Gbase_Cwdm4 : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_100Gbase_Cwdm4();
        ~Eth_100Gbase_Cwdm4();


}; // Eth_100Gbase_Cwdm4

class Vsr2000_3R3 : public openconfig_transport_types::Sonet_Application_Code, virtual ydk::Identity
{
    public:
        Vsr2000_3R3();
        ~Vsr2000_3R3();


}; // Vsr2000_3R3

class Prot_100G_Mlg : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_100G_Mlg();
        ~Prot_100G_Mlg();


}; // Prot_100G_Mlg

class Qsfp28 : public openconfig_transport_types::Transceiver_Form_Factor_Type, virtual ydk::Identity
{
    public:
        Qsfp28();
        ~Qsfp28();


}; // Qsfp28

class Sonet_Undefined : public openconfig_transport_types::Sonet_Application_Code, virtual ydk::Identity
{
    public:
        Sonet_Undefined();
        ~Sonet_Undefined();


}; // Sonet_Undefined

class Prot_Odu2 : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Odu2();
        ~Prot_Odu2();


}; // Prot_Odu2

class Eth_100G_Acc : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_100G_Acc();
        ~Eth_100G_Acc();


}; // Eth_100G_Acc

class Mpo_Connector : public openconfig_transport_types::Fiber_Connector_Type, virtual ydk::Identity
{
    public:
        Mpo_Connector();
        ~Mpo_Connector();


}; // Mpo_Connector

class Prot_Ethernet : public openconfig_transport_types::Logical_Element_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Ethernet();
        ~Prot_Ethernet();


}; // Prot_Ethernet

class Eth_100Gbase_Lr4 : public openconfig_transport_types::Ethernet_Pmd_Type, virtual ydk::Identity
{
    public:
        Eth_100Gbase_Lr4();
        ~Eth_100Gbase_Lr4();


}; // Eth_100Gbase_Lr4

class Prot_Otu2E : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Otu2E();
        ~Prot_Otu2E();


}; // Prot_Otu2E

class Vsr2000_3R5 : public openconfig_transport_types::Sonet_Application_Code, virtual ydk::Identity
{
    public:
        Vsr2000_3R5();
        ~Vsr2000_3R5();


}; // Vsr2000_3R5

class Lc_Connector : public openconfig_transport_types::Fiber_Connector_Type, virtual ydk::Identity
{
    public:
        Lc_Connector();
        ~Lc_Connector();


}; // Lc_Connector

class Prot_Odu3 : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Odu3();
        ~Prot_Odu3();


}; // Prot_Odu3

class Cfp : public openconfig_transport_types::Transceiver_Form_Factor_Type, virtual ydk::Identity
{
    public:
        Cfp();
        ~Cfp();


}; // Cfp

class Prot_Otu1E : public openconfig_transport_types::Tributary_Protocol_Type, virtual ydk::Identity
{
    public:
        Prot_Otu1E();
        ~Prot_Otu1E();


}; // Prot_Otu1E

class LoopbackModeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NONE;
        static const ydk::Enum::YLeaf FACILITY;
        static const ydk::Enum::YLeaf TERMINAL;

};

class AdminStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ENABLED;
        static const ydk::Enum::YLeaf DISABLED;
        static const ydk::Enum::YLeaf MAINT;

};


}
}

#endif /* _OPENCONFIG_TRANSPORT_TYPES_ */

