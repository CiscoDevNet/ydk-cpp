
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_transport_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_transport_types {

TRIBUTARYPROTOCOLTYPE::TRIBUTARYPROTOCOLTYPE()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:TRIBUTARY_PROTOCOL_TYPE")
{

}

TRIBUTARYPROTOCOLTYPE::~TRIBUTARYPROTOCOLTYPE()
{
}

TRANSCEIVERFORMFACTORTYPE::TRANSCEIVERFORMFACTORTYPE()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:TRANSCEIVER_FORM_FACTOR_TYPE")
{

}

TRANSCEIVERFORMFACTORTYPE::~TRANSCEIVERFORMFACTORTYPE()
{
}

FIBERCONNECTORTYPE::FIBERCONNECTORTYPE()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:FIBER_CONNECTOR_TYPE")
{

}

FIBERCONNECTORTYPE::~FIBERCONNECTORTYPE()
{
}

ETHERNETPMDTYPE::ETHERNETPMDTYPE()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETHERNET_PMD_TYPE")
{

}

ETHERNETPMDTYPE::~ETHERNETPMDTYPE()
{
}

SONETAPPLICATIONCODE::SONETAPPLICATIONCODE()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:SONET_APPLICATION_CODE")
{

}

SONETAPPLICATIONCODE::~SONETAPPLICATIONCODE()
{
}

OTNAPPLICATIONCODE::OTNAPPLICATIONCODE()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:OTN_APPLICATION_CODE")
{

}

OTNAPPLICATIONCODE::~OTNAPPLICATIONCODE()
{
}

TRIBUTARYRATECLASSTYPE::TRIBUTARYRATECLASSTYPE()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:TRIBUTARY_RATE_CLASS_TYPE")
{

}

TRIBUTARYRATECLASSTYPE::~TRIBUTARYRATECLASSTYPE()
{
}

LOGICALELEMENTPROTOCOLTYPE::LOGICALELEMENTPROTOCOLTYPE()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:LOGICAL_ELEMENT_PROTOCOL_TYPE")
{

}

LOGICALELEMENTPROTOCOLTYPE::~LOGICALELEMENTPROTOCOLTYPE()
{
}

OPTICALCHANNEL::OPTICALCHANNEL()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:OPTICAL_CHANNEL")
{

}

OPTICALCHANNEL::~OPTICALCHANNEL()
{
}

PROT1GE::PROT1GE()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_1GE")
{

}

PROT1GE::~PROT1GE()
{
}

PROTOC48::PROTOC48()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OC48")
{

}

PROTOC48::~PROTOC48()
{
}

PROTSTM16::PROTSTM16()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_STM16")
{

}

PROTSTM16::~PROTSTM16()
{
}

PROT10GELAN::PROT10GELAN()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_10GE_LAN")
{

}

PROT10GELAN::~PROT10GELAN()
{
}

PROT10GEWAN::PROT10GEWAN()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_10GE_WAN")
{

}

PROT10GEWAN::~PROT10GEWAN()
{
}

PROTOC192::PROTOC192()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OC192")
{

}

PROTOC192::~PROTOC192()
{
}

PROTSTM64::PROTSTM64()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_STM64")
{

}

PROTSTM64::~PROTSTM64()
{
}

PROTOTU2::PROTOTU2()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OTU2")
{

}

PROTOTU2::~PROTOTU2()
{
}

PROTOTU2E::PROTOTU2E()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OTU2E")
{

}

PROTOTU2E::~PROTOTU2E()
{
}

PROTOTU1E::PROTOTU1E()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OTU1E")
{

}

PROTOTU1E::~PROTOTU1E()
{
}

PROTODU2::PROTODU2()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_ODU2")
{

}

PROTODU2::~PROTODU2()
{
}

PROTODU2E::PROTODU2E()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_ODU2E")
{

}

PROTODU2E::~PROTODU2E()
{
}

PROT40GE::PROT40GE()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_40GE")
{

}

PROT40GE::~PROT40GE()
{
}

PROTOC768::PROTOC768()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OC768")
{

}

PROTOC768::~PROTOC768()
{
}

PROTSTM256::PROTSTM256()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_STM256")
{

}

PROTSTM256::~PROTSTM256()
{
}

PROTOTU3::PROTOTU3()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OTU3")
{

}

PROTOTU3::~PROTOTU3()
{
}

PROTODU3::PROTODU3()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_ODU3")
{

}

PROTODU3::~PROTODU3()
{
}

PROT100GE::PROT100GE()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_100GE")
{

}

PROT100GE::~PROT100GE()
{
}

PROT100GMLG::PROT100GMLG()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_100G_MLG")
{

}

PROT100GMLG::~PROT100GMLG()
{
}

PROTOTU4::PROTOTU4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OTU4")
{

}

PROTOTU4::~PROTOTU4()
{
}

PROTOTUCN::PROTOTUCN()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OTUCN")
{

}

PROTOTUCN::~PROTOTUCN()
{
}

PROTODU4::PROTODU4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_ODU4")
{

}

PROTODU4::~PROTODU4()
{
}

CFP::CFP()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:CFP")
{

}

CFP::~CFP()
{
}

CFP2::CFP2()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:CFP2")
{

}

CFP2::~CFP2()
{
}

CFP2ACO::CFP2ACO()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:CFP2_ACO")
{

}

CFP2ACO::~CFP2ACO()
{
}

CFP4::CFP4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:CFP4")
{

}

CFP4::~CFP4()
{
}

QSFP::QSFP()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:QSFP")
{

}

QSFP::~QSFP()
{
}

QSFP28::QSFP28()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:QSFP28")
{

}

QSFP28::~QSFP28()
{
}

SFP::SFP()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:SFP")
{

}

SFP::~SFP()
{
}

SFPPLUS::SFPPLUS()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:SFP_PLUS")
{

}

SFPPLUS::~SFPPLUS()
{
}

XFP::XFP()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:XFP")
{

}

XFP::~XFP()
{
}

X2::X2()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:X2")
{

}

X2::~X2()
{
}

NONPLUGGABLE::NONPLUGGABLE()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:NON_PLUGGABLE")
{

}

NONPLUGGABLE::~NONPLUGGABLE()
{
}

OTHER::OTHER()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:OTHER")
{

}

OTHER::~OTHER()
{
}

SCCONNECTOR::SCCONNECTOR()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:SC_CONNECTOR")
{

}

SCCONNECTOR::~SCCONNECTOR()
{
}

LCCONNECTOR::LCCONNECTOR()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:LC_CONNECTOR")
{

}

LCCONNECTOR::~LCCONNECTOR()
{
}

MPOCONNECTOR::MPOCONNECTOR()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:MPO_CONNECTOR")
{

}

MPOCONNECTOR::~MPOCONNECTOR()
{
}

ETH10GBASELRM::ETH10GBASELRM()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_10GBASE_LRM")
{

}

ETH10GBASELRM::~ETH10GBASELRM()
{
}

ETH10GBASELR::ETH10GBASELR()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_10GBASE_LR")
{

}

ETH10GBASELR::~ETH10GBASELR()
{
}

ETH10GBASEZR::ETH10GBASEZR()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_10GBASE_ZR")
{

}

ETH10GBASEZR::~ETH10GBASEZR()
{
}

ETH10GBASEER::ETH10GBASEER()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_10GBASE_ER")
{

}

ETH10GBASEER::~ETH10GBASEER()
{
}

ETH10GBASESR::ETH10GBASESR()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_10GBASE_SR")
{

}

ETH10GBASESR::~ETH10GBASESR()
{
}

ETH40GBASECR4::ETH40GBASECR4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_40GBASE_CR4")
{

}

ETH40GBASECR4::~ETH40GBASECR4()
{
}

ETH40GBASESR4::ETH40GBASESR4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_40GBASE_SR4")
{

}

ETH40GBASESR4::~ETH40GBASESR4()
{
}

ETH40GBASELR4::ETH40GBASELR4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_40GBASE_LR4")
{

}

ETH40GBASELR4::~ETH40GBASELR4()
{
}

ETH40GBASEER4::ETH40GBASEER4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_40GBASE_ER4")
{

}

ETH40GBASEER4::~ETH40GBASEER4()
{
}

ETH40GBASEPSM4::ETH40GBASEPSM4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_40GBASE_PSM4")
{

}

ETH40GBASEPSM4::~ETH40GBASEPSM4()
{
}

ETH4X10GBASELR::ETH4X10GBASELR()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_4X10GBASE_LR")
{

}

ETH4X10GBASELR::~ETH4X10GBASELR()
{
}

ETH4X10GBASESR::ETH4X10GBASESR()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_4X10GBASE_SR")
{

}

ETH4X10GBASESR::~ETH4X10GBASESR()
{
}

ETH100GAOC::ETH100GAOC()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100G_AOC")
{

}

ETH100GAOC::~ETH100GAOC()
{
}

ETH100GACC::ETH100GACC()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100G_ACC")
{

}

ETH100GACC::~ETH100GACC()
{
}

ETH100GBASESR10::ETH100GBASESR10()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100GBASE_SR10")
{

}

ETH100GBASESR10::~ETH100GBASESR10()
{
}

ETH100GBASESR4::ETH100GBASESR4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100GBASE_SR4")
{

}

ETH100GBASESR4::~ETH100GBASESR4()
{
}

ETH100GBASELR4::ETH100GBASELR4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100GBASE_LR4")
{

}

ETH100GBASELR4::~ETH100GBASELR4()
{
}

ETH100GBASEER4::ETH100GBASEER4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100GBASE_ER4")
{

}

ETH100GBASEER4::~ETH100GBASEER4()
{
}

ETH100GBASECWDM4::ETH100GBASECWDM4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100GBASE_CWDM4")
{

}

ETH100GBASECWDM4::~ETH100GBASECWDM4()
{
}

ETH100GBASECLR4::ETH100GBASECLR4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100GBASE_CLR4")
{

}

ETH100GBASECLR4::~ETH100GBASECLR4()
{
}

ETH100GBASEPSM4::ETH100GBASEPSM4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100GBASE_PSM4")
{

}

ETH100GBASEPSM4::~ETH100GBASEPSM4()
{
}

ETH100GBASECR4::ETH100GBASECR4()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_100GBASE_CR4")
{

}

ETH100GBASECR4::~ETH100GBASECR4()
{
}

ETHUNDEFINED::ETHUNDEFINED()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:ETH_UNDEFINED")
{

}

ETHUNDEFINED::~ETHUNDEFINED()
{
}

VSR20003R2::VSR20003R2()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:VSR2000_3R2")
{

}

VSR20003R2::~VSR20003R2()
{
}

VSR20003R3::VSR20003R3()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:VSR2000_3R3")
{

}

VSR20003R3::~VSR20003R3()
{
}

VSR20003R5::VSR20003R5()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:VSR2000_3R5")
{

}

VSR20003R5::~VSR20003R5()
{
}

SONETUNDEFINED::SONETUNDEFINED()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:SONET_UNDEFINED")
{

}

SONETUNDEFINED::~SONETUNDEFINED()
{
}

P1L12D1::P1L12D1()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:P1L1_2D1")
{

}

P1L12D1::~P1L12D1()
{
}

P1S12D2::P1S12D2()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:P1S1_2D2")
{

}

P1S12D2::~P1S12D2()
{
}

P1L12D2::P1L12D2()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:P1L1_2D2")
{

}

P1L12D2::~P1L12D2()
{
}

OTNUNDEFINED::OTNUNDEFINED()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:OTN_UNDEFINED")
{

}

OTNUNDEFINED::~OTNUNDEFINED()
{
}

TRIBRATE1G::TRIBRATE1G()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:TRIB_RATE_1G")
{

}

TRIBRATE1G::~TRIBRATE1G()
{
}

TRIBRATE2DOT5G::TRIBRATE2DOT5G()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:TRIB_RATE_2.5G")
{

}

TRIBRATE2DOT5G::~TRIBRATE2DOT5G()
{
}

TRIBRATE10G::TRIBRATE10G()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:TRIB_RATE_10G")
{

}

TRIBRATE10G::~TRIBRATE10G()
{
}

TRIBRATE40G::TRIBRATE40G()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:TRIB_RATE_40G")
{

}

TRIBRATE40G::~TRIBRATE40G()
{
}

TRIBRATE100G::TRIBRATE100G()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:TRIB_RATE_100G")
{

}

TRIBRATE100G::~TRIBRATE100G()
{
}

PROTETHERNET::PROTETHERNET()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_ETHERNET")
{

}

PROTETHERNET::~PROTETHERNET()
{
}

PROTOTN::PROTOTN()
     : Identity("http://openconfig.net/yang/transport-types", "openconfig-transport-types", "openconfig-transport-types:PROT_OTN")
{

}

PROTOTN::~PROTOTN()
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

