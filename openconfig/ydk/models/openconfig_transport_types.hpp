#ifndef _OPENCONFIG_TRANSPORT_TYPES_
#define _OPENCONFIG_TRANSPORT_TYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "openconfig_platform_types.hpp"

namespace ydk {
namespace openconfig_transport_types {

class Sonet_Application_CodeIdentity : public virtual Identity
{
    public:
        Sonet_Application_CodeIdentity();
        ~Sonet_Application_CodeIdentity();





}; // Sonet_Application_CodeIdentity

class Otn_Application_CodeIdentity : public virtual Identity
{
    public:
        Otn_Application_CodeIdentity();
        ~Otn_Application_CodeIdentity();





}; // Otn_Application_CodeIdentity

class Transceiver_Form_Factor_TypeIdentity : public virtual Identity
{
    public:
        Transceiver_Form_Factor_TypeIdentity();
        ~Transceiver_Form_Factor_TypeIdentity();





}; // Transceiver_Form_Factor_TypeIdentity

class Logical_Element_Protocol_TypeIdentity : public virtual Identity
{
    public:
        Logical_Element_Protocol_TypeIdentity();
        ~Logical_Element_Protocol_TypeIdentity();





}; // Logical_Element_Protocol_TypeIdentity

class Tributary_Rate_Class_TypeIdentity : public virtual Identity
{
    public:
        Tributary_Rate_Class_TypeIdentity();
        ~Tributary_Rate_Class_TypeIdentity();





}; // Tributary_Rate_Class_TypeIdentity

class Ethernet_Pmd_TypeIdentity : public virtual Identity
{
    public:
        Ethernet_Pmd_TypeIdentity();
        ~Ethernet_Pmd_TypeIdentity();





}; // Ethernet_Pmd_TypeIdentity

class Fiber_Connector_TypeIdentity : public virtual Identity
{
    public:
        Fiber_Connector_TypeIdentity();
        ~Fiber_Connector_TypeIdentity();





}; // Fiber_Connector_TypeIdentity

class Optical_ChannelIdentity : public openconfig_platform_types::Openconfig_Hardware_ComponentIdentity, virtual Identity
{
    public:
        Optical_ChannelIdentity();
        ~Optical_ChannelIdentity();




}; // Optical_ChannelIdentity

class Tributary_Protocol_TypeIdentity : public virtual Identity
{
    public:
        Tributary_Protocol_TypeIdentity();
        ~Tributary_Protocol_TypeIdentity();





}; // Tributary_Protocol_TypeIdentity

class Cfp2Identity : public openconfig_transport_types::Transceiver_Form_Factor_TypeIdentity, virtual Identity
{
    public:
        Cfp2Identity();
        ~Cfp2Identity();




}; // Cfp2Identity

class Qsfp28Identity : public openconfig_transport_types::Transceiver_Form_Factor_TypeIdentity, virtual Identity
{
    public:
        Qsfp28Identity();
        ~Qsfp28Identity();




}; // Qsfp28Identity

class Eth_40Gbase_Sr4Identity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_40Gbase_Sr4Identity();
        ~Eth_40Gbase_Sr4Identity();




}; // Eth_40Gbase_Sr4Identity

class Eth_10Gbase_LrmIdentity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_10Gbase_LrmIdentity();
        ~Eth_10Gbase_LrmIdentity();




}; // Eth_10Gbase_LrmIdentity

class Eth_4X10Gbase_SrIdentity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_4X10Gbase_SrIdentity();
        ~Eth_4X10Gbase_SrIdentity();




}; // Eth_4X10Gbase_SrIdentity

class Eth_100G_AocIdentity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_100G_AocIdentity();
        ~Eth_100G_AocIdentity();




}; // Eth_100G_AocIdentity

class Cfp4Identity : public openconfig_transport_types::Transceiver_Form_Factor_TypeIdentity, virtual Identity
{
    public:
        Cfp4Identity();
        ~Cfp4Identity();




}; // Cfp4Identity

class Sonet_UndefinedIdentity : public openconfig_transport_types::Sonet_Application_CodeIdentity, virtual Identity
{
    public:
        Sonet_UndefinedIdentity();
        ~Sonet_UndefinedIdentity();




}; // Sonet_UndefinedIdentity

class P1L1_2D2Identity : public openconfig_transport_types::Otn_Application_CodeIdentity, virtual Identity
{
    public:
        P1L1_2D2Identity();
        ~P1L1_2D2Identity();




}; // P1L1_2D2Identity

class P1L1_2D1Identity : public openconfig_transport_types::Otn_Application_CodeIdentity, virtual Identity
{
    public:
        P1L1_2D1Identity();
        ~P1L1_2D1Identity();




}; // P1L1_2D1Identity

class Trib_Rate_10GIdentity : public openconfig_transport_types::Tributary_Rate_Class_TypeIdentity, virtual Identity
{
    public:
        Trib_Rate_10GIdentity();
        ~Trib_Rate_10GIdentity();




}; // Trib_Rate_10GIdentity

class Prot_Otu2EIdentity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_Otu2EIdentity();
        ~Prot_Otu2EIdentity();




}; // Prot_Otu2EIdentity

class Eth_100Gbase_Sr4Identity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_100Gbase_Sr4Identity();
        ~Eth_100Gbase_Sr4Identity();




}; // Eth_100Gbase_Sr4Identity

class Eth_10Gbase_ZrIdentity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_10Gbase_ZrIdentity();
        ~Eth_10Gbase_ZrIdentity();




}; // Eth_10Gbase_ZrIdentity

class Sc_ConnectorIdentity : public openconfig_transport_types::Fiber_Connector_TypeIdentity, virtual Identity
{
    public:
        Sc_ConnectorIdentity();
        ~Sc_ConnectorIdentity();




}; // Sc_ConnectorIdentity

class Vsr2000_3R3Identity : public openconfig_transport_types::Sonet_Application_CodeIdentity, virtual Identity
{
    public:
        Vsr2000_3R3Identity();
        ~Vsr2000_3R3Identity();




}; // Vsr2000_3R3Identity

class Eth_100Gbase_Er4Identity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_100Gbase_Er4Identity();
        ~Eth_100Gbase_Er4Identity();




}; // Eth_100Gbase_Er4Identity

class Otn_UndefinedIdentity : public openconfig_transport_types::Otn_Application_CodeIdentity, virtual Identity
{
    public:
        Otn_UndefinedIdentity();
        ~Otn_UndefinedIdentity();




}; // Otn_UndefinedIdentity

class Eth_40Gbase_Er4Identity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_40Gbase_Er4Identity();
        ~Eth_40Gbase_Er4Identity();




}; // Eth_40Gbase_Er4Identity

class Prot_Odu2EIdentity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_Odu2EIdentity();
        ~Prot_Odu2EIdentity();




}; // Prot_Odu2EIdentity

class Eth_100G_AccIdentity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_100G_AccIdentity();
        ~Eth_100G_AccIdentity();




}; // Eth_100G_AccIdentity

class Prot_Oc768Identity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_Oc768Identity();
        ~Prot_Oc768Identity();




}; // Prot_Oc768Identity

class Eth_UndefinedIdentity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_UndefinedIdentity();
        ~Eth_UndefinedIdentity();




}; // Eth_UndefinedIdentity

class Prot_10Ge_WanIdentity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_10Ge_WanIdentity();
        ~Prot_10Ge_WanIdentity();




}; // Prot_10Ge_WanIdentity

class Eth_40Gbase_Lr4Identity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_40Gbase_Lr4Identity();
        ~Eth_40Gbase_Lr4Identity();




}; // Eth_40Gbase_Lr4Identity

class Eth_40Gbase_Psm4Identity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_40Gbase_Psm4Identity();
        ~Eth_40Gbase_Psm4Identity();




}; // Eth_40Gbase_Psm4Identity

class Trib_Rate_40GIdentity : public openconfig_transport_types::Tributary_Rate_Class_TypeIdentity, virtual Identity
{
    public:
        Trib_Rate_40GIdentity();
        ~Trib_Rate_40GIdentity();




}; // Trib_Rate_40GIdentity

class Vsr2000_3R2Identity : public openconfig_transport_types::Sonet_Application_CodeIdentity, virtual Identity
{
    public:
        Vsr2000_3R2Identity();
        ~Vsr2000_3R2Identity();




}; // Vsr2000_3R2Identity

class Prot_Stm16Identity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_Stm16Identity();
        ~Prot_Stm16Identity();




}; // Prot_Stm16Identity

class Prot_OtucnIdentity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_OtucnIdentity();
        ~Prot_OtucnIdentity();




}; // Prot_OtucnIdentity

class Cfp2_AcoIdentity : public openconfig_transport_types::Transceiver_Form_Factor_TypeIdentity, virtual Identity
{
    public:
        Cfp2_AcoIdentity();
        ~Cfp2_AcoIdentity();




}; // Cfp2_AcoIdentity

class X2Identity : public openconfig_transport_types::Transceiver_Form_Factor_TypeIdentity, virtual Identity
{
    public:
        X2Identity();
        ~X2Identity();




}; // X2Identity

class XfpIdentity : public openconfig_transport_types::Transceiver_Form_Factor_TypeIdentity, virtual Identity
{
    public:
        XfpIdentity();
        ~XfpIdentity();




}; // XfpIdentity

class Prot_1GeIdentity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_1GeIdentity();
        ~Prot_1GeIdentity();




}; // Prot_1GeIdentity

class Vsr2000_3R5Identity : public openconfig_transport_types::Sonet_Application_CodeIdentity, virtual Identity
{
    public:
        Vsr2000_3R5Identity();
        ~Vsr2000_3R5Identity();




}; // Vsr2000_3R5Identity

class Prot_100GeIdentity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_100GeIdentity();
        ~Prot_100GeIdentity();




}; // Prot_100GeIdentity

class Prot_Otu3Identity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_Otu3Identity();
        ~Prot_Otu3Identity();




}; // Prot_Otu3Identity

class Prot_Otu2Identity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_Otu2Identity();
        ~Prot_Otu2Identity();




}; // Prot_Otu2Identity

class Prot_Otu4Identity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_Otu4Identity();
        ~Prot_Otu4Identity();




}; // Prot_Otu4Identity

class Prot_EthernetIdentity : public openconfig_transport_types::Logical_Element_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_EthernetIdentity();
        ~Prot_EthernetIdentity();




}; // Prot_EthernetIdentity

class Trib_Rate_100GIdentity : public openconfig_transport_types::Tributary_Rate_Class_TypeIdentity, virtual Identity
{
    public:
        Trib_Rate_100GIdentity();
        ~Trib_Rate_100GIdentity();




}; // Trib_Rate_100GIdentity

class Prot_Stm256Identity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_Stm256Identity();
        ~Prot_Stm256Identity();




}; // Prot_Stm256Identity

class Prot_OtnIdentity : public openconfig_transport_types::Logical_Element_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_OtnIdentity();
        ~Prot_OtnIdentity();




}; // Prot_OtnIdentity

class Eth_10Gbase_LrIdentity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_10Gbase_LrIdentity();
        ~Eth_10Gbase_LrIdentity();




}; // Eth_10Gbase_LrIdentity

class Eth_100Gbase_Sr10Identity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_100Gbase_Sr10Identity();
        ~Eth_100Gbase_Sr10Identity();




}; // Eth_100Gbase_Sr10Identity

class Eth_4X10Gbase_LrIdentity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_4X10Gbase_LrIdentity();
        ~Eth_4X10Gbase_LrIdentity();




}; // Eth_4X10Gbase_LrIdentity

class Sfp_PlusIdentity : public openconfig_transport_types::Transceiver_Form_Factor_TypeIdentity, virtual Identity
{
    public:
        Sfp_PlusIdentity();
        ~Sfp_PlusIdentity();




}; // Sfp_PlusIdentity

class Non_PluggableIdentity : public openconfig_transport_types::Transceiver_Form_Factor_TypeIdentity, virtual Identity
{
    public:
        Non_PluggableIdentity();
        ~Non_PluggableIdentity();




}; // Non_PluggableIdentity

class OtherIdentity : public openconfig_transport_types::Transceiver_Form_Factor_TypeIdentity, virtual Identity
{
    public:
        OtherIdentity();
        ~OtherIdentity();




}; // OtherIdentity

class Prot_10Ge_LanIdentity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_10Ge_LanIdentity();
        ~Prot_10Ge_LanIdentity();




}; // Prot_10Ge_LanIdentity

class Prot_Oc48Identity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_Oc48Identity();
        ~Prot_Oc48Identity();




}; // Prot_Oc48Identity

class P1S1_2D2Identity : public openconfig_transport_types::Otn_Application_CodeIdentity, virtual Identity
{
    public:
        P1S1_2D2Identity();
        ~P1S1_2D2Identity();




}; // P1S1_2D2Identity

class Prot_Oc192Identity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_Oc192Identity();
        ~Prot_Oc192Identity();




}; // Prot_Oc192Identity

class Eth_100Gbase_Lr4Identity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_100Gbase_Lr4Identity();
        ~Eth_100Gbase_Lr4Identity();




}; // Eth_100Gbase_Lr4Identity

class Trib_Rate_1GIdentity : public openconfig_transport_types::Tributary_Rate_Class_TypeIdentity, virtual Identity
{
    public:
        Trib_Rate_1GIdentity();
        ~Trib_Rate_1GIdentity();




}; // Trib_Rate_1GIdentity

class Prot_40GeIdentity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_40GeIdentity();
        ~Prot_40GeIdentity();




}; // Prot_40GeIdentity

class Eth_100Gbase_Clr4Identity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_100Gbase_Clr4Identity();
        ~Eth_100Gbase_Clr4Identity();




}; // Eth_100Gbase_Clr4Identity

class QsfpIdentity : public openconfig_transport_types::Transceiver_Form_Factor_TypeIdentity, virtual Identity
{
    public:
        QsfpIdentity();
        ~QsfpIdentity();




}; // QsfpIdentity

class Mpo_ConnectorIdentity : public openconfig_transport_types::Fiber_Connector_TypeIdentity, virtual Identity
{
    public:
        Mpo_ConnectorIdentity();
        ~Mpo_ConnectorIdentity();




}; // Mpo_ConnectorIdentity

class Prot_100G_MlgIdentity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_100G_MlgIdentity();
        ~Prot_100G_MlgIdentity();




}; // Prot_100G_MlgIdentity

class Trib_Rate_2__Dot__5GIdentity : public openconfig_transport_types::Tributary_Rate_Class_TypeIdentity, virtual Identity
{
    public:
        Trib_Rate_2__Dot__5GIdentity();
        ~Trib_Rate_2__Dot__5GIdentity();




}; // Trib_Rate_2__Dot__5GIdentity

class Eth_10Gbase_SrIdentity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_10Gbase_SrIdentity();
        ~Eth_10Gbase_SrIdentity();




}; // Eth_10Gbase_SrIdentity

class Eth_100Gbase_Cwdm4Identity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_100Gbase_Cwdm4Identity();
        ~Eth_100Gbase_Cwdm4Identity();




}; // Eth_100Gbase_Cwdm4Identity

class SfpIdentity : public openconfig_transport_types::Transceiver_Form_Factor_TypeIdentity, virtual Identity
{
    public:
        SfpIdentity();
        ~SfpIdentity();




}; // SfpIdentity

class Eth_100Gbase_Psm4Identity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_100Gbase_Psm4Identity();
        ~Eth_100Gbase_Psm4Identity();




}; // Eth_100Gbase_Psm4Identity

class Eth_40Gbase_Cr4Identity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_40Gbase_Cr4Identity();
        ~Eth_40Gbase_Cr4Identity();




}; // Eth_40Gbase_Cr4Identity

class Prot_Odu3Identity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_Odu3Identity();
        ~Prot_Odu3Identity();




}; // Prot_Odu3Identity

class Prot_Odu2Identity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_Odu2Identity();
        ~Prot_Odu2Identity();




}; // Prot_Odu2Identity

class Prot_Odu4Identity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_Odu4Identity();
        ~Prot_Odu4Identity();




}; // Prot_Odu4Identity

class Eth_100Gbase_Cr4Identity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_100Gbase_Cr4Identity();
        ~Eth_100Gbase_Cr4Identity();




}; // Eth_100Gbase_Cr4Identity

class Lc_ConnectorIdentity : public openconfig_transport_types::Fiber_Connector_TypeIdentity, virtual Identity
{
    public:
        Lc_ConnectorIdentity();
        ~Lc_ConnectorIdentity();




}; // Lc_ConnectorIdentity

class Prot_Stm64Identity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_Stm64Identity();
        ~Prot_Stm64Identity();




}; // Prot_Stm64Identity

class Prot_Otu1EIdentity : public openconfig_transport_types::Tributary_Protocol_TypeIdentity, virtual Identity
{
    public:
        Prot_Otu1EIdentity();
        ~Prot_Otu1EIdentity();




}; // Prot_Otu1EIdentity

class Eth_10Gbase_ErIdentity : public openconfig_transport_types::Ethernet_Pmd_TypeIdentity, virtual Identity
{
    public:
        Eth_10Gbase_ErIdentity();
        ~Eth_10Gbase_ErIdentity();




}; // Eth_10Gbase_ErIdentity

class CfpIdentity : public openconfig_transport_types::Transceiver_Form_Factor_TypeIdentity, virtual Identity
{
    public:
        CfpIdentity();
        ~CfpIdentity();




}; // CfpIdentity


class LoopbackModeTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf NONE;
        static const Enum::YLeaf FACILITY;
        static const Enum::YLeaf TERMINAL;

};

class AdminStateTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ENABLED;
        static const Enum::YLeaf DISABLED;
        static const Enum::YLeaf MAINT;

};


}
}

#endif /* _OPENCONFIG_TRANSPORT_TYPES_ */

