#ifndef _CISCO_SMI_
#define _CISCO_SMI_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace cisco_ios_xe {
namespace CISCO_SMI {

class CiscoProducts : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoProducts();
        ~CiscoProducts();


}; // CiscoProducts

class Local : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Local();
        ~Local();


}; // Local

class Temporary : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Temporary();
        ~Temporary();


}; // Temporary

class Pakmon : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Pakmon();
        ~Pakmon();


}; // Pakmon

class Workgroup : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Workgroup();
        ~Workgroup();


}; // Workgroup

class OtherEnterprises : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        OtherEnterprises();
        ~OtherEnterprises();


}; // OtherEnterprises

class CiscoSB : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoSB();
        ~CiscoSB();


}; // CiscoSB

class CiscoSMB : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoSMB();
        ~CiscoSMB();


}; // CiscoSMB

class CiscoAgentCapability : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoAgentCapability();
        ~CiscoAgentCapability();


}; // CiscoAgentCapability

class CiscoConfig : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoConfig();
        ~CiscoConfig();


}; // CiscoConfig

class CiscoMgmt : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoMgmt();
        ~CiscoMgmt();


}; // CiscoMgmt

class CiscoExperiment : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoExperiment();
        ~CiscoExperiment();


}; // CiscoExperiment

class CiscoAdmin : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoAdmin();
        ~CiscoAdmin();


}; // CiscoAdmin

class CiscoProxy : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoProxy();
        ~CiscoProxy();


}; // CiscoProxy

class CiscoRptrGroupObjectID : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoRptrGroupObjectID();
        ~CiscoRptrGroupObjectID();


}; // CiscoRptrGroupObjectID

class CiscoUnknownRptrGroup : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoUnknownRptrGroup();
        ~CiscoUnknownRptrGroup();


}; // CiscoUnknownRptrGroup

class Cisco2505RptrGroup : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Cisco2505RptrGroup();
        ~Cisco2505RptrGroup();


}; // Cisco2505RptrGroup

class Cisco2507RptrGroup : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Cisco2507RptrGroup();
        ~Cisco2507RptrGroup();


}; // Cisco2507RptrGroup

class Cisco2516RptrGroup : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Cisco2516RptrGroup();
        ~Cisco2516RptrGroup();


}; // Cisco2516RptrGroup

class CiscoWsx5020RptrGroup : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoWsx5020RptrGroup();
        ~CiscoWsx5020RptrGroup();


}; // CiscoWsx5020RptrGroup

class CiscoChipSets : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoChipSets();
        ~CiscoChipSets();


}; // CiscoChipSets

class CiscoChipSetSaint1 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoChipSetSaint1();
        ~CiscoChipSetSaint1();


}; // CiscoChipSetSaint1

class CiscoChipSetSaint2 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoChipSetSaint2();
        ~CiscoChipSetSaint2();


}; // CiscoChipSetSaint2

class CiscoChipSetSaint3 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoChipSetSaint3();
        ~CiscoChipSetSaint3();


}; // CiscoChipSetSaint3

class CiscoChipSetSaint4 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoChipSetSaint4();
        ~CiscoChipSetSaint4();


}; // CiscoChipSetSaint4

class CiscoModules : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoModules();
        ~CiscoModules();


}; // CiscoModules

class Lightstream : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Lightstream();
        ~Lightstream();


}; // Lightstream

class Ciscoworks : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscoworks();
        ~Ciscoworks();


}; // Ciscoworks

class Newport : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Newport();
        ~Newport();


}; // Newport

class CiscoPartnerProducts : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoPartnerProducts();
        ~CiscoPartnerProducts();


}; // CiscoPartnerProducts

class CiscoPolicy : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoPolicy();
        ~CiscoPolicy();


}; // CiscoPolicy

class CiscoPIB : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoPIB();
        ~CiscoPIB();


}; // CiscoPIB

class CiscoPolicyAuto : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoPolicyAuto();
        ~CiscoPolicyAuto();


}; // CiscoPolicyAuto

class CiscoPibToMib : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoPibToMib();
        ~CiscoPibToMib();


}; // CiscoPibToMib

class CiscoDomains : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoDomains();
        ~CiscoDomains();


}; // CiscoDomains

class CiscoTDomainUdpIpv4 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoTDomainUdpIpv4();
        ~CiscoTDomainUdpIpv4();


}; // CiscoTDomainUdpIpv4

class CiscoTDomainUdpIpv6 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoTDomainUdpIpv6();
        ~CiscoTDomainUdpIpv6();


}; // CiscoTDomainUdpIpv6

class CiscoTDomainTcpIpv4 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoTDomainTcpIpv4();
        ~CiscoTDomainTcpIpv4();


}; // CiscoTDomainTcpIpv4

class CiscoTDomainTcpIpv6 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoTDomainTcpIpv6();
        ~CiscoTDomainTcpIpv6();


}; // CiscoTDomainTcpIpv6

class CiscoTDomainLocal : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoTDomainLocal();
        ~CiscoTDomainLocal();


}; // CiscoTDomainLocal

class CiscoTDomainClns : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoTDomainClns();
        ~CiscoTDomainClns();


}; // CiscoTDomainClns

class CiscoTDomainCons : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoTDomainCons();
        ~CiscoTDomainCons();


}; // CiscoTDomainCons

class CiscoTDomainDdp : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoTDomainDdp();
        ~CiscoTDomainDdp();


}; // CiscoTDomainDdp

class CiscoTDomainIpx : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoTDomainIpx();
        ~CiscoTDomainIpx();


}; // CiscoTDomainIpx

class CiscoTDomainSctpIpv4 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoTDomainSctpIpv4();
        ~CiscoTDomainSctpIpv4();


}; // CiscoTDomainSctpIpv4

class CiscoTDomainSctpIpv6 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoTDomainSctpIpv6();
        ~CiscoTDomainSctpIpv6();


}; // CiscoTDomainSctpIpv6

class CiscoCIB : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoCIB();
        ~CiscoCIB();


}; // CiscoCIB

class CiscoCibMmiGroup : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoCibMmiGroup();
        ~CiscoCibMmiGroup();


}; // CiscoCibMmiGroup

class CiscoCibProvGroup : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoCibProvGroup();
        ~CiscoCibProvGroup();


}; // CiscoCibProvGroup

class CiscoPKI : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        CiscoPKI();
        ~CiscoPKI();


}; // CiscoPKI


}
}

#endif /* _CISCO_SMI_ */

