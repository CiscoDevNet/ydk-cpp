
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_transport_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_transport_types {

Sonet_Application_Code::Sonet_Application_Code()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:SONET_APPLICATION_CODE")
{
}

Sonet_Application_Code::~Sonet_Application_Code()
{
}

Transceiver_Form_Factor_Type::Transceiver_Form_Factor_Type()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:TRANSCEIVER_FORM_FACTOR_TYPE")
{
}

Transceiver_Form_Factor_Type::~Transceiver_Form_Factor_Type()
{
}

Fiber_Connector_Type::Fiber_Connector_Type()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:FIBER_CONNECTOR_TYPE")
{
}

Fiber_Connector_Type::~Fiber_Connector_Type()
{
}

Tributary_Protocol_Type::Tributary_Protocol_Type()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:TRIBUTARY_PROTOCOL_TYPE")
{
}

Tributary_Protocol_Type::~Tributary_Protocol_Type()
{
}

Tributary_Rate_Class_Type::Tributary_Rate_Class_Type()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:TRIBUTARY_RATE_CLASS_TYPE")
{
}

Tributary_Rate_Class_Type::~Tributary_Rate_Class_Type()
{
}

Ethernet_Pmd_Type::Ethernet_Pmd_Type()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETHERNET_PMD_TYPE")
{
}

Ethernet_Pmd_Type::~Ethernet_Pmd_Type()
{
}

Otn_Application_Code::Otn_Application_Code()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:OTN_APPLICATION_CODE")
{
}

Otn_Application_Code::~Otn_Application_Code()
{
}

Logical_Element_Protocol_Type::Logical_Element_Protocol_Type()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:LOGICAL_ELEMENT_PROTOCOL_TYPE")
{
}

Logical_Element_Protocol_Type::~Logical_Element_Protocol_Type()
{
}

Optical_Channel::Optical_Channel()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:OPTICAL_CHANNEL")
{
}

Optical_Channel::~Optical_Channel()
{
}

Vsr2000_3R5::Vsr2000_3R5()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:VSR2000_3R5")
{
}

Vsr2000_3R5::~Vsr2000_3R5()
{
}

Eth_100Gbase_Sr10::Eth_100Gbase_Sr10()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100GBASE_SR10")
{
}

Eth_100Gbase_Sr10::~Eth_100Gbase_Sr10()
{
}

Prot_Otu4::Prot_Otu4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OTU4")
{
}

Prot_Otu4::~Prot_Otu4()
{
}

Eth_10Gbase_Lrm::Eth_10Gbase_Lrm()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_10GBASE_LRM")
{
}

Eth_10Gbase_Lrm::~Eth_10Gbase_Lrm()
{
}

Eth_40Gbase_Cr4::Eth_40Gbase_Cr4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_40GBASE_CR4")
{
}

Eth_40Gbase_Cr4::~Eth_40Gbase_Cr4()
{
}

Trib_Rate_100G::Trib_Rate_100G()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:TRIB_RATE_100G")
{
}

Trib_Rate_100G::~Trib_Rate_100G()
{
}

Xfp::Xfp()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:XFP")
{
}

Xfp::~Xfp()
{
}

Prot_Odu2E::Prot_Odu2E()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_ODU2E")
{
}

Prot_Odu2E::~Prot_Odu2E()
{
}

Prot_Otn::Prot_Otn()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OTN")
{
}

Prot_Otn::~Prot_Otn()
{
}

Vsr2000_3R3::Vsr2000_3R3()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:VSR2000_3R3")
{
}

Vsr2000_3R3::~Vsr2000_3R3()
{
}

Eth_100G_Aoc::Eth_100G_Aoc()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100G_AOC")
{
}

Eth_100G_Aoc::~Eth_100G_Aoc()
{
}

Eth_Undefined::Eth_Undefined()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_UNDEFINED")
{
}

Eth_Undefined::~Eth_Undefined()
{
}

Prot_40Ge::Prot_40Ge()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_40GE")
{
}

Prot_40Ge::~Prot_40Ge()
{
}

Prot_Stm16::Prot_Stm16()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_STM16")
{
}

Prot_Stm16::~Prot_Stm16()
{
}

Eth_40Gbase_Er4::Eth_40Gbase_Er4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_40GBASE_ER4")
{
}

Eth_40Gbase_Er4::~Eth_40Gbase_Er4()
{
}

Eth_10Gbase_Sr::Eth_10Gbase_Sr()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_10GBASE_SR")
{
}

Eth_10Gbase_Sr::~Eth_10Gbase_Sr()
{
}

Eth_100Gbase_Psm4::Eth_100Gbase_Psm4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100GBASE_PSM4")
{
}

Eth_100Gbase_Psm4::~Eth_100Gbase_Psm4()
{
}

Trib_Rate_1G::Trib_Rate_1G()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:TRIB_RATE_1G")
{
}

Trib_Rate_1G::~Trib_Rate_1G()
{
}

Trib_Rate_2__Dot__5G::Trib_Rate_2__Dot__5G()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:TRIB_RATE_2.5G")
{
}

Trib_Rate_2__Dot__5G::~Trib_Rate_2__Dot__5G()
{
}

Eth_40Gbase_Lr4::Eth_40Gbase_Lr4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_40GBASE_LR4")
{
}

Eth_40Gbase_Lr4::~Eth_40Gbase_Lr4()
{
}

Eth_4X10Gbase_Sr::Eth_4X10Gbase_Sr()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_4X10GBASE_SR")
{
}

Eth_4X10Gbase_Sr::~Eth_4X10Gbase_Sr()
{
}

Sc_Connector::Sc_Connector()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:SC_CONNECTOR")
{
}

Sc_Connector::~Sc_Connector()
{
}

Non_Pluggable::Non_Pluggable()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:NON_PLUGGABLE")
{
}

Non_Pluggable::~Non_Pluggable()
{
}

Eth_4X10Gbase_Lr::Eth_4X10Gbase_Lr()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_4X10GBASE_LR")
{
}

Eth_4X10Gbase_Lr::~Eth_4X10Gbase_Lr()
{
}

Prot_Oc768::Prot_Oc768()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OC768")
{
}

Prot_Oc768::~Prot_Oc768()
{
}

X2::X2()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:X2")
{
}

X2::~X2()
{
}

Prot_Oc48::Prot_Oc48()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OC48")
{
}

Prot_Oc48::~Prot_Oc48()
{
}

Eth_100Gbase_Clr4::Eth_100Gbase_Clr4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100GBASE_CLR4")
{
}

Eth_100Gbase_Clr4::~Eth_100Gbase_Clr4()
{
}

Prot_100Ge::Prot_100Ge()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_100GE")
{
}

Prot_100Ge::~Prot_100Ge()
{
}

Sfp::Sfp()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:SFP")
{
}

Sfp::~Sfp()
{
}

Qsfp28::Qsfp28()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:QSFP28")
{
}

Qsfp28::~Qsfp28()
{
}

Mpo_Connector::Mpo_Connector()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:MPO_CONNECTOR")
{
}

Mpo_Connector::~Mpo_Connector()
{
}

Eth_100G_Acc::Eth_100G_Acc()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100G_ACC")
{
}

Eth_100G_Acc::~Eth_100G_Acc()
{
}

Prot_10Ge_Lan::Prot_10Ge_Lan()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_10GE_LAN")
{
}

Prot_10Ge_Lan::~Prot_10Ge_Lan()
{
}

Prot_1Ge::Prot_1Ge()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_1GE")
{
}

Prot_1Ge::~Prot_1Ge()
{
}

Cfp::Cfp()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:CFP")
{
}

Cfp::~Cfp()
{
}

Cfp2_Aco::Cfp2_Aco()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:CFP2_ACO")
{
}

Cfp2_Aco::~Cfp2_Aco()
{
}

Cfp2::Cfp2()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:CFP2")
{
}

Cfp2::~Cfp2()
{
}

Trib_Rate_10G::Trib_Rate_10G()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:TRIB_RATE_10G")
{
}

Trib_Rate_10G::~Trib_Rate_10G()
{
}

Eth_10Gbase_Lr::Eth_10Gbase_Lr()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_10GBASE_LR")
{
}

Eth_10Gbase_Lr::~Eth_10Gbase_Lr()
{
}

Cfp4::Cfp4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:CFP4")
{
}

Cfp4::~Cfp4()
{
}

Prot_10Ge_Wan::Prot_10Ge_Wan()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_10GE_WAN")
{
}

Prot_10Ge_Wan::~Prot_10Ge_Wan()
{
}

Trib_Rate_40G::Trib_Rate_40G()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:TRIB_RATE_40G")
{
}

Trib_Rate_40G::~Trib_Rate_40G()
{
}

Eth_100Gbase_Cr4::Eth_100Gbase_Cr4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100GBASE_CR4")
{
}

Eth_100Gbase_Cr4::~Eth_100Gbase_Cr4()
{
}

Qsfp::Qsfp()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:QSFP")
{
}

Qsfp::~Qsfp()
{
}

Prot_Odu3::Prot_Odu3()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_ODU3")
{
}

Prot_Odu3::~Prot_Odu3()
{
}

Prot_Otucn::Prot_Otucn()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OTUCN")
{
}

Prot_Otucn::~Prot_Otucn()
{
}

Eth_40Gbase_Psm4::Eth_40Gbase_Psm4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_40GBASE_PSM4")
{
}

Eth_40Gbase_Psm4::~Eth_40Gbase_Psm4()
{
}

Other::Other()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:OTHER")
{
}

Other::~Other()
{
}

Vsr2000_3R2::Vsr2000_3R2()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:VSR2000_3R2")
{
}

Vsr2000_3R2::~Vsr2000_3R2()
{
}

Prot_Stm256::Prot_Stm256()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_STM256")
{
}

Prot_Stm256::~Prot_Stm256()
{
}

Lc_Connector::Lc_Connector()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:LC_CONNECTOR")
{
}

Lc_Connector::~Lc_Connector()
{
}

Prot_Stm64::Prot_Stm64()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_STM64")
{
}

Prot_Stm64::~Prot_Stm64()
{
}

Prot_Odu2::Prot_Odu2()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_ODU2")
{
}

Prot_Odu2::~Prot_Odu2()
{
}

Prot_Otu2E::Prot_Otu2E()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OTU2E")
{
}

Prot_Otu2E::~Prot_Otu2E()
{
}

Prot_Oc192::Prot_Oc192()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OC192")
{
}

Prot_Oc192::~Prot_Oc192()
{
}

Otn_Undefined::Otn_Undefined()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:OTN_UNDEFINED")
{
}

Otn_Undefined::~Otn_Undefined()
{
}

Prot_Otu1E::Prot_Otu1E()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OTU1E")
{
}

Prot_Otu1E::~Prot_Otu1E()
{
}

Sfp_Plus::Sfp_Plus()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:SFP_PLUS")
{
}

Sfp_Plus::~Sfp_Plus()
{
}

P1L1_2D1::P1L1_2D1()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:P1L1_2D1")
{
}

P1L1_2D1::~P1L1_2D1()
{
}

Eth_40Gbase_Sr4::Eth_40Gbase_Sr4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_40GBASE_SR4")
{
}

Eth_40Gbase_Sr4::~Eth_40Gbase_Sr4()
{
}

P1S1_2D2::P1S1_2D2()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:P1S1_2D2")
{
}

P1S1_2D2::~P1S1_2D2()
{
}

Prot_100G_Mlg::Prot_100G_Mlg()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_100G_MLG")
{
}

Prot_100G_Mlg::~Prot_100G_Mlg()
{
}

Eth_100Gbase_Er4::Eth_100Gbase_Er4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100GBASE_ER4")
{
}

Eth_100Gbase_Er4::~Eth_100Gbase_Er4()
{
}

Prot_Otu2::Prot_Otu2()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OTU2")
{
}

Prot_Otu2::~Prot_Otu2()
{
}

Eth_10Gbase_Er::Eth_10Gbase_Er()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_10GBASE_ER")
{
}

Eth_10Gbase_Er::~Eth_10Gbase_Er()
{
}

Eth_10Gbase_Zr::Eth_10Gbase_Zr()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_10GBASE_ZR")
{
}

Eth_10Gbase_Zr::~Eth_10Gbase_Zr()
{
}

Prot_Otu3::Prot_Otu3()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OTU3")
{
}

Prot_Otu3::~Prot_Otu3()
{
}

Eth_100Gbase_Cwdm4::Eth_100Gbase_Cwdm4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100GBASE_CWDM4")
{
}

Eth_100Gbase_Cwdm4::~Eth_100Gbase_Cwdm4()
{
}

Prot_Ethernet::Prot_Ethernet()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_ETHERNET")
{
}

Prot_Ethernet::~Prot_Ethernet()
{
}

Eth_100Gbase_Sr4::Eth_100Gbase_Sr4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100GBASE_SR4")
{
}

Eth_100Gbase_Sr4::~Eth_100Gbase_Sr4()
{
}

Eth_100Gbase_Lr4::Eth_100Gbase_Lr4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100GBASE_LR4")
{
}

Eth_100Gbase_Lr4::~Eth_100Gbase_Lr4()
{
}

P1L1_2D2::P1L1_2D2()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:P1L1_2D2")
{
}

P1L1_2D2::~P1L1_2D2()
{
}

Prot_Odu4::Prot_Odu4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_ODU4")
{
}

Prot_Odu4::~Prot_Odu4()
{
}

Sonet_Undefined::Sonet_Undefined()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:SONET_UNDEFINED")
{
}

Sonet_Undefined::~Sonet_Undefined()
{
}

const Enum::YLeaf AdminStateType::ENABLED {0, "ENABLED"};
const Enum::YLeaf AdminStateType::DISABLED {1, "DISABLED"};
const Enum::YLeaf AdminStateType::MAINT {2, "MAINT"};

const Enum::YLeaf LoopbackModeType::NONE {0, "NONE"};
const Enum::YLeaf LoopbackModeType::FACILITY {1, "FACILITY"};
const Enum::YLeaf LoopbackModeType::TERMINAL {2, "TERMINAL"};


}
}

