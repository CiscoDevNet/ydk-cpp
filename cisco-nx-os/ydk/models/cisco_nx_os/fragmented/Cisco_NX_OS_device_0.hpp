#ifndef _CISCO_NX_OS_DEVICE_0_
#define _CISCO_NX_OS_DEVICE_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

class Inactive : public virtual ydk::Identity
{
    public:
        Inactive();
        ~Inactive();


}; // Inactive

class System : public ydk::Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        ydk::YLeaf currenttime; //type: string
        ydk::YLeaf systemuptime; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf name; //type: string
        class BgpItems; //type: System::BgpItems
        class SfwItems; //type: System::SfwItems
        class CapabilitiesItems; //type: System::CapabilitiesItems
        class ClockItems; //type: System::ClockItems
        class TimeItems; //type: System::TimeItems
        class NtpqItems; //type: System::NtpqItems
        class AcctItems; //type: System::AcctItems
        class RetryItems; //type: System::RetryItems
        class SpanItems; //type: System::SpanItems
        class DhcpItems; //type: System::DhcpItems
        class DnsItems; //type: System::DnsItems
        class DecommissionItems; //type: System::DecommissionItems
        class InbItems; //type: System::InbItems
        class ExtItems; //type: System::ExtItems
        class BrItems; //type: System::BrItems
        class MacItems; //type: System::MacItems
        class CdpItems; //type: System::CdpItems
        class LldpItems; //type: System::LldpItems
        class McpItems; //type: System::McpItems
        class VpcItems; //type: System::VpcItems
        class EpnsItems; //type: System::EpnsItems
        class GoldItems; //type: System::GoldItems
        class IgmpItems; //type: System::IgmpItems
        class CtrlrfwstatuscontItems; //type: System::CtrlrfwstatuscontItems
        class FwstatuscontItems; //type: System::FwstatuscontItems
        class CatfwstatuscontItems; //type: System::CatfwstatuscontItems
        class IsisItems; //type: System::IsisItems
        class LacpItems; //type: System::LacpItems
        class MgmtItems; //type: System::MgmtItems
        class MitOperItems; //type: System::MitOperItems
        class SnmpItems; //type: System::SnmpItems
        class SyslogacctItems; //type: System::SyslogacctItems
        class SyslogItems; //type: System::SyslogItems
        class MtsItems; //type: System::MtsItems
        class NatItems; //type: System::NatItems
        class OdcreqItems; //type: System::OdcreqItems
        class OdcrespItems; //type: System::OdcrespItems
        class OspfItems; //type: System::OspfItems
        class EvpnItems; //type: System::EvpnItems
        class UserextItems; //type: System::UserextItems
        class MockrootItems; //type: System::MockrootItems
        class StpItems; //type: System::StpItems
        class BdTableItems; //type: System::BdTableItems
        class GlobalConfTableItems; //type: System::GlobalConfTableItems
        class IntfTableItems; //type: System::IntfTableItems
        class MacTableItems; //type: System::MacTableItems
        class SystemTableItems; //type: System::SystemTableItems
        class TunnelIntfTableItems; //type: System::TunnelIntfTableItems
        class VlanTableItems; //type: System::VlanTableItems
        class VpcDomTableItems; //type: System::VpcDomTableItems
        class VrfTableItems; //type: System::VrfTableItems
        class AclItems; //type: System::AclItems
        class ActrlItems; //type: System::ActrlItems
        class ActrlcapprovItems; //type: System::ActrlcapprovItems
        class AnalyticsItems; //type: System::AnalyticsItems
        class HwtelemetryItems; //type: System::HwtelemetryItems
        class CoppItems; //type: System::CoppItems
        class GleanItems; //type: System::GleanItems
        class HmmItems; //type: System::HmmItems
        class IcamItems; //type: System::IcamItems
        class IpqosItems; //type: System::IpqosItems
        class MonitorItems; //type: System::MonitorItems
        class FlowItems; //type: System::FlowItems
        class NgoamItems; //type: System::NgoamItems
        class NxapiItems; //type: System::NxapiItems
        class PoeItems; //type: System::PoeItems
        class QosmItems; //type: System::QosmItems
        class SisfItems; //type: System::SisfItems
        class TmItems; //type: System::TmItems
        class TrackItems; //type: System::TrackItems
        class UdldItems; //type: System::UdldItems
        class AcllogItems; //type: System::AcllogItems
        class BdItems; //type: System::BdItems
        class TemplateTableItems; //type: System::TemplateTableItems
        class FcItems; //type: System::FcItems
        class FcoeItems; //type: System::FcoeItems
        class NpvItems; //type: System::NpvItems
        class VsanmgrItems; //type: System::VsanmgrItems
        class FmItems; //type: System::FmItems
        class FsetItems; //type: System::FsetItems
        class InstallItems; //type: System::InstallItems
        class IntfItems; //type: System::IntfItems
        class Ipv4Items; //type: System::Ipv4Items
        class Ipv6Items; //type: System::Ipv6Items
        class L1capprovItems; //type: System::L1capprovItems
        class EthpmItems; //type: System::EthpmItems
        class BreakoutItems; //type: System::BreakoutItems
        class ImItems; //type: System::ImItems
        class PcItems; //type: System::PcItems
        class L2capprovItems; //type: System::L2capprovItems
        class FcpmItems; //type: System::FcpmItems
        class L2fmItems; //type: System::L2fmItems
        class L2ribItems; //type: System::L2ribItems
        class PvlanItems; //type: System::PvlanItems
        class VlanmgrItems; //type: System::VlanmgrItems
        class EpsItems; //type: System::EpsItems
        class CtxItems; //type: System::CtxItems
        class InstItems; //type: System::InstItems
        class L3capprovItems; //type: System::L3capprovItems
        class L3vmItems; //type: System::L3vmItems
        class UribItems; //type: System::UribItems
        class U6ribItems; //type: System::U6ribItems
        class Uribv4Items; //type: System::Uribv4Items
        class Uribv6Items; //type: System::Uribv6Items
        class ConngItems; //type: System::ConngItems
        class VdcItems; //type: System::VdcItems
        class ProcsysItems; //type: System::ProcsysItems
        class ProcItems; //type: System::ProcItems
        class RegrItems; //type: System::RegrItems
        class RpmItems; //type: System::RpmItems
        class IpSrcIfItems; //type: System::IpSrcIfItems
        class SwpkgsItems; //type: System::SwpkgsItems
        class SysmgrItems; //type: System::SysmgrItems
        class ShowversionItems; //type: System::ShowversionItems
        class TcpudpItems; //type: System::TcpudpItems
        class TermlItems; //type: System::TermlItems
        class TermlogItems; //type: System::TermlogItems
        class TestRuleItems; //type: System::TestRuleItems
        class TestRsltItems; //type: System::TestRsltItems
        class TunnelItems; //type: System::TunnelItems
        class VtpItems; //type: System::VtpItems
        class NbmItems; //type: System::NbmItems
        class NbmccItems; //type: System::NbmccItems
        class NbmFlowsTableItems; //type: System::NbmFlowsTableItems
        class NbmStatsItems; //type: System::NbmStatsItems
        class BootItems; //type: System::BootItems
        class ChItems; //type: System::ChItems
        class ExtchItems; //type: System::ExtchItems
        class OpsItems; //type: System::OpsItems
        class EqptcapacityItems; //type: System::EqptcapacityItems
        class DiagItems; //type: System::DiagItems
        class LsnodeItems; //type: System::LsnodeItems
        class PltfmItems; //type: System::PltfmItems
        class SatmItems; //type: System::SatmItems
        class AdjacencyItems; //type: System::AdjacencyItems
        class ArpItems; //type: System::ArpItems
        class BfdItems; //type: System::BfdItems
        class HsrpItems; //type: System::HsrpItems
        class Icmpv4Items; //type: System::Icmpv4Items
        class Icmpv6Items; //type: System::Icmpv6Items
        class IgmpsnoopItems; //type: System::IgmpsnoopItems
        class M6ribItems; //type: System::M6ribItems
        class MacsecItems; //type: System::MacsecItems
        class McastfwdItems; //type: System::McastfwdItems
        class MldsnoopItems; //type: System::MldsnoopItems
        class MplsItems; //type: System::MplsItems
        class MplsstaticItems; //type: System::MplsstaticItems
        class LabeltableItems; //type: System::LabeltableItems
        class MribItems; //type: System::MribItems
        class MsdpItems; //type: System::MsdpItems
        class NdItems; //type: System::NdItems
        class NgmvpnItems; //type: System::NgmvpnItems
        class PimItems; //type: System::PimItems
        class Pim6Items; //type: System::Pim6Items
        class SegrtItems; //type: System::SegrtItems
        class VrrpItems; //type: System::VrrpItems
        class Vrrpv3Items; //type: System::Vrrpv3Items
        class ScrtchpdrtItems; //type: System::ScrtchpdrtItems
        class SectlItems; //type: System::SectlItems
        class CaggrItems; //type: System::CaggrItems
        class CphysItems; //type: System::CphysItems
        class ActionItems; //type: System::ActionItems
        class RtdbgexpTsSrcItems; //type: System::RtdbgexpTsSrcItems
        class RttraceroutepTrSrcItems; //type: System::RttraceroutepTrSrcItems
        class RttraceroutepTrDstItems; //type: System::RttraceroutepTrDstItems
        class RtmaintFwinstlsrcItems; //type: System::RtmaintFwinstlsrcItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems> bgp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SfwItems> sfw_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems> capabilities_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ClockItems> clock_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TimeItems> time_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NtpqItems> ntpq_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcctItems> acct_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RetryItems> retry_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems> span_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems> dhcp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DnsItems> dns_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DecommissionItems> decommission_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems> inb_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems> ext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems> br_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems> cdp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems> lldp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::McpItems> mcp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems> vpc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpnsItems> epns_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::GoldItems> gold_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems> igmp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtrlrfwstatuscontItems> ctrlrfwstatuscont_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FwstatuscontItems> fwstatuscont_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CatfwstatuscontItems> catfwstatuscont_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems> isis_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LacpItems> lacp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems> mgmt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MitOperItems> mitoper_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems> snmp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogacctItems> syslogacct_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems> syslog_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MtsItems> mts_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems> nat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OdcreqItems> odcreq_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OdcrespItems> odcresp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems> ospf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems> evpn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems> userext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MockrootItems> mockroot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems> stp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems> bdtable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::GlobalConfTableItems> globalconftable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfTableItems> intftable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacTableItems> mactable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems> systemtable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelIntfTableItems> tunnelintftable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VlanTableItems> vlantable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcDomTableItems> vpcdomtable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrfTableItems> vrftable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems> actrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlcapprovItems> actrlcapprov_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems> analytics_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems> hwtelemetry_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoppItems> copp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::GleanItems> glean_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HmmItems> hmm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IcamItems> icam_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems> ipqos_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MonitorItems> monitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems> flow_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgoamItems> ngoam_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NxapiItems> nxapi_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PoeItems> poe_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::QosmItems> qosm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SisfItems> sisf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems> tm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TrackItems> track_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UdldItems> udld_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcllogItems> acllog_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems> bd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TemplateTableItems> templatetable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcItems> fc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcoeItems> fcoe_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems> npv_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VsanmgrItems> vsanmgr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems> fm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FsetItems> fset_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstallItems> install_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv4Items> ipv4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ipv6Items> ipv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::L1capprovItems> l1capprov_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EthpmItems> ethpm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BreakoutItems> breakout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ImItems> im_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PcItems> pc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::L2capprovItems> l2capprov_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcpmItems> fcpm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::L2fmItems> l2fm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::L2ribItems> l2rib_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PvlanItems> pvlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VlanmgrItems> vlanmgr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EpsItems> eps_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtxItems> ctx_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstItems> inst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::L3capprovItems> l3capprov_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::L3vmItems> l3vm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UribItems> urib_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::U6ribItems> u6rib_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv4Items> uribv4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv6Items> uribv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ConngItems> conng_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VdcItems> vdc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcsysItems> procsys_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ProcItems> proc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RegrItems> regr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems> rpm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpSrcIfItems> ipsrcif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SwpkgsItems> swpkgs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SysmgrItems> sysmgr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ShowversionItems> showversion_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TcpudpItems> tcpudp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems> terml_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlogItems> termlog_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TestRuleItems> test_rule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TestRsltItems> test_rslt__items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems> tunnel_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VtpItems> vtp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems> nbm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmccItems> nbmcc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmFlowsTableItems> nbmflowstable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmStatsItems> nbmstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BootItems> boot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems> ch_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems> extch_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OpsItems> ops_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EqptcapacityItems> eqptcapacity_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DiagItems> diag_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LsnodeItems> lsnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems> pltfm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SatmItems> satm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems> adjacency_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems> arp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems> bfd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HsrpItems> hsrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv4Items> icmpv4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Icmpv6Items> icmpv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpsnoopItems> igmpsnoop_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::M6ribItems> m6rib_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacsecItems> macsec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::McastfwdItems> mcastfwd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MldsnoopItems> mldsnoop_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MplsItems> mpls_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MplsstaticItems> mplsstatic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LabeltableItems> labeltable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MribItems> mrib_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MsdpItems> msdp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NdItems> nd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgmvpnItems> ngmvpn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems> pim_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items> pim6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems> segrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems> vrrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Vrrpv3Items> vrrpv3_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ScrtchpdrtItems> scrtchpdrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SectlItems> sectl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaggrItems> caggr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CphysItems> cphys_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems> action_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RtdbgexpTsSrcItems> rtdbgexptssrc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RttraceroutepTrSrcItems> rttracerouteptrsrc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RttraceroutepTrDstItems> rttracerouteptrdst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RtmaintFwinstlsrcItems> rtmaintfwinstlsrc_items;
        
}; // System


class System::BgpItems : public ydk::Entity
{
    public:
        BgpItems();
        ~BgpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        class InstItems; //type: System::BgpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems> inst_items;
        
}; // System::BgpItems


class System::BgpItems::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf asn; //type: string
        ydk::YLeaf dispolbatch; //type: BgpAdminSt
        ydk::YLeaf dispolbatchv4pfxlst; //type: string
        ydk::YLeaf dispolbatchv6pfxlst; //type: string
        ydk::YLeaf createts; //type: string
        ydk::YLeaf activatets; //type: string
        ydk::YLeaf waitdonets; //type: string
        ydk::YLeaf memalert; //type: NwMemAlertLevel
        ydk::YLeaf numrtattrib; //type: uint16
        ydk::YLeaf attribdbsz; //type: uint32
        ydk::YLeaf numaspath; //type: uint16
        ydk::YLeaf aspathdbsz; //type: uint32
        ydk::YLeaf isolate; //type: BgpAdminSt
        ydk::YLeaf meddampintvl; //type: uint32
        ydk::YLeaf fabricsoo; //type: string
        ydk::YLeaf flushroutes; //type: BgpAdminSt
        ydk::YLeaf affgrpactv; //type: uint16
        ydk::YLeaf srgbminlbl; //type: uint32
        ydk::YLeaf srgbmaxlbl; //type: uint32
        ydk::YLeaf epeconfiguredpeers; //type: uint32
        ydk::YLeaf epeactivepeers; //type: uint32
        ydk::YLeaf lnkstsrvr; //type: BgpLsAdminSt
        ydk::YLeaf lnkstclnt; //type: BgpLsAdminSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class DomItems; //type: System::BgpItems::InstItems::DomItems
        class EvthistItems; //type: System::BgpItems::InstItems::EvthistItems
        class OperItems; //type: System::BgpItems::InstItems::OperItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::EvthistItems> evthist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::OperItems> oper_items;
        
}; // System::BgpItems::InstItems


class System::BgpItems::InstItems::DomItems : public ydk::Entity
{
    public:
        DomItems();
        ~DomItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DomList; //type: System::BgpItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::BgpItems::InstItems::DomItems


class System::BgpItems::InstItems::DomItems::DomList : public ydk::Entity
{
    public:
        DomList();
        ~DomList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf mode; //type: BgpMode
        ydk::YLeaf rtrid; //type: string
        ydk::YLeaf clusterid; //type: string
        ydk::YLeaf kaintvl; //type: uint16
        ydk::YLeaf holdintvl; //type: uint16
        ydk::YLeaf pfxpeertimeout; //type: uint16
        ydk::YLeaf pfxpeerwaittime; //type: uint16
        ydk::YLeaf maxaslimit; //type: uint16
        ydk::YLeaf rd; //type: string
        ydk::YLeaf bestpathintvl; //type: uint16
        ydk::YLeaf always; //type: BgpAdminSt
        ydk::YLeaf reconnintvl; //type: uint16
        ydk::YLeaf cfgsrcctrlr; //type: BgpAdminSt
        ydk::YLeaf operst; //type: BgpDomOperSt
        ydk::YLeaf operrtrid; //type: string
        ydk::YLeaf firstpeerupts; //type: string
        ydk::YLeaf numpeers; //type: uint32
        ydk::YLeaf numpeerspending; //type: uint32
        ydk::YLeaf numestpeers; //type: uint32
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vnid; //type: uint32
        ydk::YLeaf vtepip; //type: string
        ydk::YLeaf vtepvirtip; //type: string
        ydk::YLeaf routermac; //type: string
        ydk::YLeaf localasn; //type: string
        class RtctrlItems; //type: System::BgpItems::InstItems::DomItems::DomList::RtctrlItems
        class PathctrlItems; //type: System::BgpItems::InstItems::DomItems::DomList::PathctrlItems
        class ConfedItems; //type: System::BgpItems::InstItems::DomItems::DomList::ConfedItems
        class AfItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems
        class BmpItems; //type: System::BgpItems::InstItems::DomItems::DomList::BmpItems
        class GrItems; //type: System::BgpItems::InstItems::DomItems::DomList::GrItems
        class PeerItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems
        class PeercontItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeercontItems
        class SessioncontItems; //type: System::BgpItems::InstItems::DomItems::DomList::SessioncontItems
        class PolicycontItems; //type: System::BgpItems::InstItems::DomItems::DomList::PolicycontItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::RtctrlItems> rtctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PathctrlItems> pathctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::ConfedItems> confed_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems> af_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::BmpItems> bmp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::GrItems> gr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems> peer_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeercontItems> peercont_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::SessioncontItems> sessioncont_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PolicycontItems> policycont_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList


class System::BgpItems::InstItems::DomItems::DomList::RtctrlItems : public ydk::Entity
{
    public:
        RtctrlItems();
        ~RtctrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supprrt; //type: BgpAdminSt
        ydk::YLeaf logneighborchanges; //type: BgpAdminSt
        ydk::YLeaf enforcefirstas; //type: BgpAdminSt
        ydk::YLeaf fibaccelerate; //type: BgpAdminSt

}; // System::BgpItems::InstItems::DomItems::DomList::RtctrlItems


class System::BgpItems::InstItems::DomItems::DomList::PathctrlItems : public ydk::Entity
{
    public:
        PathctrlItems();
        ~PathctrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alwayscompmed; //type: BgpAdminSt
        ydk::YLeaf aspathmultipathrelax; //type: BgpAdminSt
        ydk::YLeaf aspathignore; //type: BgpAdminSt
        ydk::YLeaf comprtrid; //type: BgpAdminSt
        ydk::YLeaf compnbrid; //type: BgpAdminSt
        ydk::YLeaf costcommunityignore; //type: BgpAdminSt
        ydk::YLeaf medconfed; //type: BgpAdminSt
        ydk::YLeaf medmissingasworst; //type: BgpAdminSt
        ydk::YLeaf mednondeter; //type: BgpAdminSt

}; // System::BgpItems::InstItems::DomItems::DomList::PathctrlItems


class System::BgpItems::InstItems::DomItems::DomList::ConfedItems : public ydk::Entity
{
    public:
        ConfedItems();
        ~ConfedItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn; //type: string
        class PeerItems; //type: System::BgpItems::InstItems::DomItems::DomList::ConfedItems::PeerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::ConfedItems::PeerItems> peer_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::ConfedItems


class System::BgpItems::InstItems::DomItems::DomList::ConfedItems::PeerItems : public ydk::Entity
{
    public:
        PeerItems();
        ~PeerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConfederationPeerList; //type: System::BgpItems::InstItems::DomItems::DomList::ConfedItems::PeerItems::ConfederationPeerList

        ydk::YList confederationpeer_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::ConfedItems::PeerItems


class System::BgpItems::InstItems::DomItems::DomList::ConfedItems::PeerItems::ConfederationPeerList : public ydk::Entity
{
    public:
        ConfederationPeerList();
        ~ConfederationPeerList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::ConfedItems::PeerItems::ConfederationPeerList


class System::BgpItems::InstItems::DomItems::DomList::AfItems : public ydk::Entity
{
    public:
        AfItems();
        ~AfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomAfList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList

        ydk::YList domaf_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList : public ydk::Entity
{
    public:
        DomAfList();
        ~DomAfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpAfT
        ydk::YLeaf maxecmp; //type: uint8
        ydk::YLeaf maxextecmp; //type: uint8
        ydk::YLeaf maxextintecmp; //type: uint8
        ydk::YLeaf maxmxdecmp; //type: uint8
        ydk::YLeaf tmrbstpthdfr; //type: uint32
        ydk::YLeaf tmrmax; //type: uint32
        ydk::YLeaf tblmap; //type: string
        ydk::YLeaf tblmapfltr; //type: BgpAdminSt
        ydk::YLeaf vniethtag; //type: BgpAdminSt
        ydk::YLeaf advsysmac; //type: BgpAdminSt
        ydk::YLeaf bestpathsigts; //type: string
        ydk::YLeaf bestpathcmpltts; //type: string
        ydk::YLeaf critnhtimeout; //type: uint32
        ydk::YLeaf noncritnhtimeout; //type: uint32
        ydk::YLeaf tblver; //type: uint32
        ydk::YLeaf nhrtmap; //type: string
        ydk::YLeaf clreflection; //type: BgpAdminSt
        ydk::YLeaf advertl2vpnevpn; //type: BgpAdvertL2vpnEvpn
        ydk::YLeaf alloclblall; //type: BgpAdminSt
        ydk::YLeaf alloclblrtmap; //type: string
        ydk::YLeaf lblallocmod; //type: BgpAdminSt
        ydk::YLeaf retainrttrtmap; //type: string
        ydk::YLeaf retainrttall; //type: BgpAdminSt
        ydk::YLeaf defmetric; //type: string
        ydk::YLeaf tblid; //type: uint32
        ydk::YLeaf tblst; //type: BgpDomOperSt
        ydk::YLeaf numpeers; //type: uint32
        ydk::YLeaf numpeersactive; //type: uint32
        ydk::YLeaf numroutes; //type: uint32
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf numnetworks; //type: uint32
        ydk::YLeaf numaggregates; //type: uint32
        ydk::YLeaf definforiginate; //type: BgpAdminSt
        ydk::YLeaf definforigrd; //type: string
        ydk::YLeaf definforigrtt; //type: string
        ydk::YLeaf igpmetric; //type: uint16
        ydk::YLeaf supprinactive; //type: BgpAdminSt
        ydk::YLeaf cfgsrcctrlr; //type: BgpAdminSt
        ydk::YLeaf advpip; //type: BgpAdminSt
        ydk::YLeaf exportgwip; //type: BgpAdminSt
        ydk::YLeaf name; //type: string
        class CtrlItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::CtrlItems
        class AdminDistItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::AdminDistItems
        class DampeningItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DampeningItems
        class PrefixItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PrefixItems
        class AggaddrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::AggaddrItems
        class AddlpathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::AddlpathItems
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems
        class VpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems
        class LblrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems
        class LsrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems
        class EvpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems
        class MvpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems
        class ImportedrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems
        class SelforigrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::SelforigrtItems
        class InjectedrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjectedrtItems
        class ExportedrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ExportedrtItems
        class RcvdpathsrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RcvdpathsrtItems
        class RtmapItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtmapItems
        class FltrlistItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems
        class PfxlistItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems
        class DamppathsrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems
        class DamphstpathsrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems
        class RttypeItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems
        class VnidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems
        class MacItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems
        class RdItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems
        class PfxItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems
        class EsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems
        class NhItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems
        class MrttypeItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems
        class DefrtleakItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DefrtleakItems
        class InterleakItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems
        class InjnameItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::CtrlItems> ctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::AdminDistItems> admindist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DampeningItems> dampening_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PrefixItems> prefix_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::AggaddrItems> aggaddr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::AddlpathItems> addlpath_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems> rt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems> vpnrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems> lblrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems> lsrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems> evpnrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems> mvpnrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems> importedrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::SelforigrtItems> selforigrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjectedrtItems> injectedrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ExportedrtItems> exportedrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RcvdpathsrtItems> rcvdpathsrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtmapItems> rtmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::FltrlistItems> fltrlist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxlistItems> pfxlist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamppathsrtItems> damppathsrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems> damphstpathsrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems> rttype_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems> vnid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems> rd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxItems> pfx_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EsidItems> esid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems> nh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems> mrttype_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DefrtleakItems> defrtleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems> interleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems> injname_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::CtrlItems : public ydk::Entity
{
    public:
        CtrlItems();
        ~CtrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VpnCtrlPList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::CtrlItems::VpnCtrlPList

        ydk::YList vpnctrlp_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::CtrlItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::CtrlItems::VpnCtrlPList : public ydk::Entity
{
    public:
        VpnCtrlPList();
        ~VpnCtrlPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpAfT
        ydk::YLeaf name; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::CtrlItems::VpnCtrlPList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::AdminDistItems : public ydk::Entity
{
    public:
        AdminDistItems();
        ~AdminDistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf edist; //type: uint16
        ydk::YLeaf idist; //type: uint16
        ydk::YLeaf localdist; //type: uint16

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::AdminDistItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DampeningItems : public ydk::Entity
{
    public:
        DampeningItems();
        ~DampeningItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf halflife; //type: uint8
        ydk::YLeaf reuse; //type: uint16
        ydk::YLeaf suppress; //type: uint16
        ydk::YLeaf maxsupprpenalty; //type: uint32
        ydk::YLeaf maxsuppresstime; //type: uint8

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DampeningItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PrefixItems : public ydk::Entity
{
    public:
        PrefixItems();
        ~PrefixItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdvPrefixList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PrefixItems::AdvPrefixList

        ydk::YList advprefix_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PrefixItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PrefixItems::AdvPrefixList : public ydk::Entity
{
    public:
        AdvPrefixList();
        ~AdvPrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf rtmap; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::PrefixItems::AdvPrefixList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::AggaddrItems : public ydk::Entity
{
    public:
        AggaddrItems();
        ~AggaddrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AggAddrList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::AggaddrItems::AggAddrList

        ydk::YList aggaddr_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::AggaddrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::AggaddrItems::AggAddrList : public ydk::Entity
{
    public:
        AggAddrList();
        ~AggAddrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf advermap; //type: string
        ydk::YLeaf attrmap; //type: string
        ydk::YLeaf asset; //type: BgpAsSet
        ydk::YLeaf summaryonly; //type: BgpSummaryOnly
        ydk::YLeaf supprmap; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::AggaddrItems::AggAddrList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::AddlpathItems : public ydk::Entity
{
    public:
        AddlpathItems();
        ~AddlpathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf capability; //type: string
        ydk::YLeaf rtmap; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::AddlpathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList : public ydk::Entity
{
    public:
        RouteList();
        ~RouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf rtrmac; //type: string
        class RtItems_; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_ : public ydk::Entity
{
    public:
        RtItems_();
        ~RtItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RtItems::RouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems : public ydk::Entity
{
    public:
        VpnrtItems();
        ~VpnrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VpnRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList

        ydk::YList vpnroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList : public ydk::Entity
{
    public:
        VpnRouteList();
        ~VpnRouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf rd; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf rtrmac; //type: string
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems : public ydk::Entity
{
    public:
        LblrtItems();
        ~LblrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LblRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList

        ydk::YList lblroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList : public ydk::Entity
{
    public:
        LblRouteList();
        ~LblRouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf rd; //type: string
        ydk::YLeaf rtlblafflags; //type: string
        ydk::YLeaf rtlblafver; //type: uint32
        ydk::YLeaf loclbl; //type: uint32
        ydk::YLeaf pfxlblholddowndelts; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf rtrmac; //type: string
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems : public ydk::Entity
{
    public:
        LsrtItems();
        ~LsrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList

        ydk::YList lnkstroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList : public ydk::Entity
{
    public:
        LnkStRouteList();
        ~LnkStRouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf nlritype; //type: BgpLsNlriType
        ydk::YLeaf protoid; //type: BgpLsProtoId
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf rtrmac; //type: string
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems : public ydk::Entity
{
    public:
        EvpnrtItems();
        ~EvpnrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EvpnRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList

        ydk::YList evpnroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList : public ydk::Entity
{
    public:
        EvpnRouteList();
        ~EvpnRouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf rd; //type: string
        ydk::YLeaf rttype; //type: BgpEvpnRtType
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf rtrmac; //type: string
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems : public ydk::Entity
{
    public:
        MvpnrtItems();
        ~MvpnrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MvpnRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList

        ydk::YList mvpnroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList : public ydk::Entity
{
    public:
        MvpnRouteList();
        ~MvpnRouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf rd; //type: string
        ydk::YLeaf rttype; //type: BgpMvpnRtType
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf rtrmac; //type: string
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems : public ydk::Entity
{
    public:
        ImportedrtItems();
        ~ImportedrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems
        class VpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::VpnrtItems
        class LblrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::LblrtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems> rt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::VpnrtItems> vpnrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::LblrtItems> lblrt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList : public ydk::Entity
{
    public:
        RouteList();
        ~RouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::ImportedrtItems::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

class VrrpPreempt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class NwAdminStIfStatIcmpRedirect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class FlowSamplerMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf flow;
        static const ydk::Enum::YLeaf pkts;

};

class NgmvpnAfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class AaaKeyEncLdapProviderKeyEnc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;
        static const ydk::Enum::YLeaf inherit_from_global;

};

class RelnStateQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf mismatch_target;
        static const ydk::Enum::YLeaf default_target;

};

class AnalyticsFltType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf ce;

};

class SatmOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf failed;

};

class MribMultipathMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf nbm;
        static const ydk::Enum::YLeaf null;
        static const ydk::Enum::YLeaf s_g_hash;
        static const ydk::Enum::YLeaf legacy;
        static const ydk::Enum::YLeaf resilient;
        static const ydk::Enum::YLeaf s_g_hash_next_hop;

};

class IgmpsnoopEhType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igmp_snoop_internal;
        static const ydk::Enum::YLeaf mfdm;
        static const ydk::Enum::YLeaf mfdm_sum;
        static const ydk::Enum::YLeaf rib;
        static const ydk::Enum::YLeaf vlan;
        static const ydk::Enum::YLeaf vlan_events;
        static const ydk::Enum::YLeaf vpc;

};

class StpSimulate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class FsetAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf installed;
        static const ydk::Enum::YLeaf uninstalled;

};

class SatmFpFsmSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf created;
        static const ydk::Enum::YLeaf discovered;
        static const ydk::Enum::YLeaf configured;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf connecting;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf incompatible;
        static const ydk::Enum::YLeaf disconnected;
        static const ydk::Enum::YLeaf id_mismatch;

};

class BgpMajNotifErr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf hdr_err;
        static const ydk::Enum::YLeaf open_msg_err;
        static const ydk::Enum::YLeaf upd_msg_err;
        static const ydk::Enum::YLeaf hold_timer_exp;
        static const ydk::Enum::YLeaf fsm_err;
        static const ydk::Enum::YLeaf cease_err;
        static const ydk::Enum::YLeaf cap_msg_err;
        static const ydk::Enum::YLeaf process_restart_err;
        static const ydk::Enum::YLeaf fd_read_err;
        static const ydk::Enum::YLeaf fd_ioctl_err;
        static const ydk::Enum::YLeaf peer_close_sess_err;
        static const ydk::Enum::YLeaf rcvd_notif_err;
        static const ydk::Enum::YLeaf rcvd_dup_conn_req;
        static const ydk::Enum::YLeaf dyn_cap_no_buf;

};

class AggregateAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class NdStAdjOperStQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf subnet_mismatch;
        static const ydk::Enum::YLeaf invalid_mac;
        static const ydk::Enum::YLeaf invalid_ip;
        static const ydk::Enum::YLeaf invalid_vrf;
        static const ydk::Enum::YLeaf own_mac;
        static const ydk::Enum::YLeaf if_down;
        static const ydk::Enum::YLeaf up;

};

class SnmpTcpSessionAuthT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf tcpSess;
        static const ydk::Enum::YLeaf tcpSessAuth;

};

class NvoEncapT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf vxlan;
        static const ydk::Enum::YLeaf vxlan_tun_ctrl_frame;
        static const ydk::Enum::YLeaf vxlan_tun_ctrl_frame_lacp;
        static const ydk::Enum::YLeaf vxlan_tun_ctrl_frame_stp;
        static const ydk::Enum::YLeaf dot1q;
        static const ydk::Enum::YLeaf dot1q_tun_ctrl_frame;
        static const ydk::Enum::YLeaf dot1q_tun_ctrl_frame_lacp;
        static const ydk::Enum::YLeaf dot1q_tun_ctrl_frame_stp;

};

class EqptcapConnT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf sc;
        static const ydk::Enum::YLeaf fc1_copper;
        static const ydk::Enum::YLeaf fc2_copper;
        static const ydk::Enum::YLeaf bnc_tnc;
        static const ydk::Enum::YLeaf fc_coax;
        static const ydk::Enum::YLeaf fiber_jack;
        static const ydk::Enum::YLeaf lc;
        static const ydk::Enum::YLeaf mt_rj;
        static const ydk::Enum::YLeaf mu;
        static const ydk::Enum::YLeaf sg;
        static const ydk::Enum::YLeaf optical_pigtail;
        static const ydk::Enum::YLeaf mpo;
        static const ydk::Enum::YLeaf hssdc_2;
        static const ydk::Enum::YLeaf copper_pigtail;
        static const ydk::Enum::YLeaf rj45;

};

class EpmEpOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class TelemetryProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UDP;
        static const ydk::Enum::YLeaf TCP;
        static const ydk::Enum::YLeaf gRPC;
        static const ydk::Enum::YLeaf HTTP;

};

class IpAddrT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

};

class TunnelifTunnelOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class IsisLvlT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf l1;
        static const ydk::Enum::YLeaf l2;

};

class TunnelTunnelQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ivxlan;
        static const ydk::Enum::YLeaf vxlan;

};

class NdConfigErr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noerror;
        static const ydk::Enum::YLeaf managedConfigFlag;
        static const ydk::Enum::YLeaf otherConfigFlag;
        static const ydk::Enum::YLeaf raIntvl;
        static const ydk::Enum::YLeaf raLifetime;
        static const ydk::Enum::YLeaf suppressRa;
        static const ydk::Enum::YLeaf macExtract;

};

class OpflexDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class ActrlOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class IgmpDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf route;

};

class InbandTelemetryFltType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf ce;

};

class VpcTosCfgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noCfg;
        static const ydk::Enum::YLeaf tos_byte;
        static const ydk::Enum::YLeaf tos_value;
        static const ydk::Enum::YLeaf tos_type;
        static const ydk::Enum::YLeaf precedence_type;
        static const ydk::Enum::YLeaf precedence_value;

};

class AggregateHostReachabilityMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf floodAndLearn;
        static const ydk::Enum::YLeaf controller;
        static const ydk::Enum::YLeaf bgp;

};

class BgpMinNotifErr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf unspecified_msg_hdr_err;
        static const ydk::Enum::YLeaf conn_not_synced;
        static const ydk::Enum::YLeaf bad_msg_len;
        static const ydk::Enum::YLeaf bad_msg_type;
        static const ydk::Enum::YLeaf unknown_msg_hdr_err;
        static const ydk::Enum::YLeaf unspecified_open_err;
        static const ydk::Enum::YLeaf unsupp_version;
        static const ydk::Enum::YLeaf bad_peer_as;
        static const ydk::Enum::YLeaf bad_peer_rtrid;
        static const ydk::Enum::YLeaf unsupp_opt_param;
        static const ydk::Enum::YLeaf auth_err;
        static const ydk::Enum::YLeaf bad_holdtime;
        static const ydk::Enum::YLeaf unsupp_cap;
        static const ydk::Enum::YLeaf unknown_open_hdr_err;
        static const ydk::Enum::YLeaf unspecified_update_err;
        static const ydk::Enum::YLeaf malformed_attr_list;
        static const ydk::Enum::YLeaf unrecognized_wellknown_attr;
        static const ydk::Enum::YLeaf missing_wellknown_attr;
        static const ydk::Enum::YLeaf attr_flags_err;
        static const ydk::Enum::YLeaf attr_len_err;
        static const ydk::Enum::YLeaf invalid_origin_attr;
        static const ydk::Enum::YLeaf as_loop_err;
        static const ydk::Enum::YLeaf invalid_nh_attr;
        static const ydk::Enum::YLeaf opt_attr_err;
        static const ydk::Enum::YLeaf invalid_nw_field;
        static const ydk::Enum::YLeaf bad_as_path;
        static const ydk::Enum::YLeaf unknown_update_hdr_err;
        static const ydk::Enum::YLeaf unspecified_cease_err;
        static const ydk::Enum::YLeaf max_pfx_count_err;
        static const ydk::Enum::YLeaf admin_shut;
        static const ydk::Enum::YLeaf peer_decfg;
        static const ydk::Enum::YLeaf session_cleared;
        static const ydk::Enum::YLeaf conn_rej;
        static const ydk::Enum::YLeaf other_cfg_chg;
        static const ydk::Enum::YLeaf conn_coll_resolution;
        static const ydk::Enum::YLeaf out_of_rsrc;
        static const ydk::Enum::YLeaf dyn_cap_cfg_chg;
        static const ydk::Enum::YLeaf ttl_cfg_chg;
        static const ydk::Enum::YLeaf ttl_security_cfg_chg;
        static const ydk::Enum::YLeaf passive_neighbor_cfg_chg;
        static const ydk::Enum::YLeaf af_cfg_chg;
        static const ydk::Enum::YLeaf rr_cfg_chg;
        static const ydk::Enum::YLeaf rtrid_cfg_chg;
        static const ydk::Enum::YLeaf confed_id_chg;
        static const ydk::Enum::YLeaf confed_membership_change;
        static const ydk::Enum::YLeaf gr_cfg_chg;
        static const ydk::Enum::YLeaf soft_recfg_chg;
        static const ydk::Enum::YLeaf updatesrc_if_chg;
        static const ydk::Enum::YLeaf localas_chg;
        static const ydk::Enum::YLeaf unknown_cease_err;
        static const ydk::Enum::YLeaf unspecified_cap_msg_err;
        static const ydk::Enum::YLeaf unknown_seq_num;
        static const ydk::Enum::YLeaf invalid_cap_len;
        static const ydk::Enum::YLeaf bad_cap_val;
        static const ydk::Enum::YLeaf unsupp_cap_code;
        static const ydk::Enum::YLeaf unknown_cap_err;

};

class MitTreeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mit_running;
        static const ydk::Enum::YLeaf mit_candidate;

};

class AaaAuthenticationProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pap;
        static const ydk::Enum::YLeaf chap;
        static const ydk::Enum::YLeaf mschap;
        static const ydk::Enum::YLeaf mschapv2;
        static const ydk::Enum::YLeaf ascii;

};

class EqptSlotLoc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf front;
        static const ydk::Enum::YLeaf rear;

};

class AggregateTunnelType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf vxlanipv4;
        static const ydk::Enum::YLeaf vxlanipv6;
        static const ydk::Enum::YLeaf nvgre;

};

class SnmpAuthType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hmac_md5_96;
        static const ydk::Enum::YLeaf hmac_sha1_96;

};

class QospCtrlMeth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dynamic;

};

class BgpAsSet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class McastVer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;

};

class NgmvpnDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mroute;
        static const ydk::Enum::YLeaf saroute;
        static const ydk::Enum::YLeaf l2route;

};

class AaaRealm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf ldap;

};

class IpqosPrec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf routine;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;

};

class PcChannelingSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf channeling;
        static const ydk::Enum::YLeaf individual;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf suspended;
        static const ydk::Enum::YLeaf hot_standby;

};

class PcPoType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf hif_pc;
        static const ydk::Enum::YLeaf non_hif_pc;

};

class SpanDestEncapT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gre;

};

class EqptdiagAllGrpsT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf sys_mem;
        static const ydk::Enum::YLeaf cpu;
        static const ydk::Enum::YLeaf peripherals;
        static const ydk::Enum::YLeaf internal_conn;
        static const ydk::Enum::YLeaf asic;
        static const ydk::Enum::YLeaf port;

};

class L3VrfOperStateQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf admin_down_pending;
        static const ydk::Enum::YLeaf delete_holddown;
        static const ydk::Enum::YLeaf delete_pending;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf create_pending;

};

class AaaLoggingLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Emergency;
        static const ydk::Enum::YLeaf Alert;
        static const ydk::Enum::YLeaf Critical;
        static const ydk::Enum::YLeaf Error;
        static const ydk::Enum::YLeaf Warning;
        static const ydk::Enum::YLeaf Notif;
        static const ydk::Enum::YLeaf Inform;
        static const ydk::Enum::YLeaf Debug;

};

class NwAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class PkiCsyncActivationStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};

class EqptLedOpSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf blinking;
        static const ydk::Enum::YLeaf fail;

};

class L1LinkTransmitReset : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class L1SpanMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_a_span_dest;
        static const ydk::Enum::YLeaf span_dest;
        static const ydk::Enum::YLeaf span_dest_fwd;
        static const ydk::Enum::YLeaf span_dest_fwd_learn;

};

class NbmNbmOperationalMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UNDEFINED;
        static const ydk::Enum::YLeaf PIM_ACTIVE;

};

class SnmpVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v1;
        static const ydk::Enum::YLeaf v2c;
        static const ydk::Enum::YLeaf v3;

};

class ActrlcapSubj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf rule_namespace;
        static const ydk::Enum::YLeaf scope_namespace;

};

class TerminalTermParity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf odd;
        static const ydk::Enum::YLeaf even;

};

class CoppExcep : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Undefined;
        static const ydk::Enum::YLeaf glean;
        static const ydk::Enum::YLeaf mtu_failure;
        static const ydk::Enum::YLeaf ttl_failure;
        static const ydk::Enum::YLeaf nat_flow;
        static const ydk::Enum::YLeaf sflow;

};

class NwAdminStProcessStatStaticDisc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class BgpPasswdSet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class SpanErSpanVer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ver1;
        static const ydk::Enum::YLeaf ver2;

};

class IsisAdjOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf gr_init;

};

class Ipv6IPv6EventLogSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf small;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf large;

};

class RtextcomType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rttarget;
        static const ydk::Enum::YLeaf generic;

};

class TunnelLayerT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2;
        static const ydk::Enum::YLeaf l3;

};

class VpcDualActiveSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class SatmHpOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf fail;

};

class TunnelifSnmpTrapSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class AaaNoRolePolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_login;
        static const ydk::Enum::YLeaf assign_default_role;

};

class MonitorDestEncapT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gre;

};

class L2MacType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf gateway;
        static const ydk::Enum::YLeaf overlay;
        static const ydk::Enum::YLeaf primary_vpc_peer;
        static const ydk::Enum::YLeaf control_plane;
        static const ydk::Enum::YLeaf vsan;

};

class MitLockStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mit_unlocked;
        static const ydk::Enum::YLeaf mit_locked;

};

class RtleakScope : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf intra;
        static const ydk::Enum::YLeaf inter;
        static const ydk::Enum::YLeaf defrt;

};

class Ipv6ConfigErr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noerror;
        static const ydk::Enum::YLeaf nghbrAddress;
        static const ydk::Enum::YLeaf useLinkLocalOnly;
        static const ydk::Enum::YLeaf forward;

};

class PkiKeyringState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf started;
        static const ydk::Enum::YLeaf created;
        static const ydk::Enum::YLeaf reqCreated;
        static const ydk::Enum::YLeaf tpSet;
        static const ydk::Enum::YLeaf completed;

};

class InstallerUpgStatusType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pre_upgrade;
        static const ydk::Enum::YLeaf in_progress;
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf not_compatible;
        static const ydk::Enum::YLeaf none;

};

class NwAdminSt_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class VrrpAuthType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf simple;

};

class AggregateMacType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;

};

class StpGuard : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf root;
        static const ydk::Enum::YLeaf loop;
        static const ydk::Enum::YLeaf none;

};

class EqptCOpSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf inserted;
        static const ydk::Enum::YLeaf absent;
        static const ydk::Enum::YLeaf mismatch;
        static const ydk::Enum::YLeaf fail;
        static const ydk::Enum::YLeaf present;
        static const ydk::Enum::YLeaf removed;
        static const ydk::Enum::YLeaf online;
        static const ydk::Enum::YLeaf offline;
        static const ydk::Enum::YLeaf pwr_up;
        static const ydk::Enum::YLeaf pwr_down;
        static const ydk::Enum::YLeaf err_pwr_down;
        static const ydk::Enum::YLeaf testing;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf reg_failure;
        static const ydk::Enum::YLeaf dnld;
        static const ydk::Enum::YLeaf upg;
        static const ydk::Enum::YLeaf srg_fail;
        static const ydk::Enum::YLeaf ha_seq_fail;

};

class OpflexEpTransitionStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf attached;
        static const ydk::Enum::YLeaf detached;

};

class VpcPrecType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf routine;

};

class BgpMaxPfxAct : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf log;
        static const ydk::Enum::YLeaf shut;
        static const ydk::Enum::YLeaf restart;

};

class AggregateVpcKeepaliveStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf VpcOobUnknown;
        static const ydk::Enum::YLeaf VpcOobDisabled;
        static const ydk::Enum::YLeaf VpcOobPeerAlive;
        static const ydk::Enum::YLeaf VpcOobPeerNotAlive;
        static const ydk::Enum::YLeaf VpcOobPeerAliveDomainMismatch;
        static const ydk::Enum::YLeaf VpcOobSuspended;
        static const ydk::Enum::YLeaf VpcOobNotOperational;
        static const ydk::Enum::YLeaf VpcOobSuspendedVrf;
        static const ydk::Enum::YLeaf VpcOobMisconfig;

};

class L2EtherType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf arp;
        static const ydk::Enum::YLeaf trill;
        static const ydk::Enum::YLeaf mpls_ucast;
        static const ydk::Enum::YLeaf mac_security;
        static const ydk::Enum::YLeaf fcoe;
        static const ydk::Enum::YLeaf ip;

};

class CdpOperStQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf if_down;
        static const ydk::Enum::YLeaf unsupported;

};

class CdpVer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v1;
        static const ydk::Enum::YLeaf v2;

};

class NwAdminStProcessStatAutoDiscAdd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class RtmapCriteria : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exact;
        static const ydk::Enum::YLeaf sub_group;

};

class EqptFcotDomLane : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf basic;
        static const ydk::Enum::YLeaf extGlobal;
        static const ydk::Enum::YLeaf extOptical;

};

class IpOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf failed;

};

class L2TrafficMapCfgSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf config_success;
        static const ydk::Enum::YLeaf config_failure;

};

class FlowExportVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf v5;
        static const ydk::Enum::YLeaf v9;
        static const ydk::Enum::YLeaf cisco1;

};

class BgpLogNbrSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class LldpPortIdSubType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf long_;
        static const ydk::Enum::YLeaf short_;

};

class ActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf reload;
        static const ydk::Enum::YLeaf locate;
        static const ydk::Enum::YLeaf install;
        static const ydk::Enum::YLeaf test;
        static const ydk::Enum::YLeaf collect;
        static const ydk::Enum::YLeaf interface_in_service;

};

class L1DiagsT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf dom;
        static const ydk::Enum::YLeaf ddm;

};

class IsisAuthT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf md5;

};

class CoppMcast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Undefined;
        static const ydk::Enum::YLeaf dest_miss;
        static const ydk::Enum::YLeaf rpf_failure;
        static const ydk::Enum::YLeaf sg_rpf_failure;
        static const ydk::Enum::YLeaf ipv6_dest_miss;
        static const ydk::Enum::YLeaf ipv6_rpf_failure;
        static const ydk::Enum::YLeaf ipv6_sg_rpf_failure;

};

class RtdmcPolicyDirType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class IpUrpfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf loose;
        static const ydk::Enum::YLeaf loose_allow_default;

};

class OspfAlways : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

};

class NgmvpnEhType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf mrib;
        static const ydk::Enum::YLeaf m2rib;
        static const ydk::Enum::YLeaf m6rib;
        static const ydk::Enum::YLeaf pim;
        static const ydk::Enum::YLeaf pim6;
        static const ydk::Enum::YLeaf hmm;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ha;

};

class SpanSrcT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf port;
        static const ydk::Enum::YLeaf encap;
        static const ydk::Enum::YLeaf port_encap;

};

class CapRuleT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf limit;

};

class NdMacExtract : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf nud_phase;
        static const ydk::Enum::YLeaf exclude_nud_phase;

};

class SisfRaGuardDeviceRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf host;
        static const ydk::Enum::YLeaf router;
        static const ydk::Enum::YLeaf switch_;
        static const ydk::Enum::YLeaf monitor;

};

class L1AllowMultiTag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class NwAdminStProcessStatAutoPuntBcast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class Icmpv6EventLogSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf small;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf large;

};

class HmmFwdMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf anycastGW;
        static const ydk::Enum::YLeaf proxyGW;

};

class SegrtAfType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class DhcpDAILogType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf inone;

};

class OspfNwT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf bcast;

};

class RtmapRoutePervasive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf non_pervasive;
        static const ydk::Enum::YLeaf pervasive;
        static const ydk::Enum::YLeaf pervasive_non_ext_bd;

};

class RtmapMetricT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type_1;
        static const ydk::Enum::YLeaf type_2;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf external;

};

class BgpPeerFabType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fabric_internal;
        static const ydk::Enum::YLeaf fabric_external;
        static const ydk::Enum::YLeaf fabric_border_leaf;

};

class EqptSock : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;

};

class MonitorOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf failed;

};

class RtpfxCriteria : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exact;
        static const ydk::Enum::YLeaf inexact;

};

class PcSummOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf module_removed;
        static const ydk::Enum::YLeaf individual;
        static const ydk::Enum::YLeaf suspended;
        static const ydk::Enum::YLeaf hot_standby;

};

class BgpPathSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deleted;
        static const ydk::Enum::YLeaf staled;
        static const ydk::Enum::YLeaf valid;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf history;
        static const ydk::Enum::YLeaf suppressed;
        static const ydk::Enum::YLeaf dampened;

};

class SegrtSrDpType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf ipv6;

};

class EthpmFcotFlags : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf access_failed;
        static const ydk::Enum::YLeaf checksum_failed;
        static const ydk::Enum::YLeaf vendor_crc_failed;
        static const ydk::Enum::YLeaf sfp_speed_mismatch;
        static const ydk::Enum::YLeaf eth_compalint_failed;
        static const ydk::Enum::YLeaf unknown_xcvr_type;
        static const ydk::Enum::YLeaf emphasis_checksum_failed;
        static const ydk::Enum::YLeaf init_failed;
        static const ydk::Enum::YLeaf ok_auth_success_no_md5;
        static const ydk::Enum::YLeaf auth_failed;
        static const ydk::Enum::YLeaf ok_delayed_auth_success;
        static const ydk::Enum::YLeaf delayed_auth_failed;
        static const ydk::Enum::YLeaf ok_no_md5;
        static const ydk::Enum::YLeaf ok;

};

class SatmExtChOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf discovered;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf registering;
        static const ydk::Enum::YLeaf registered;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf online_seq;
        static const ydk::Enum::YLeaf online;
        static const ydk::Enum::YLeaf offline_req;
        static const ydk::Enum::YLeaf offline_seq;
        static const ydk::Enum::YLeaf offline;
        static const ydk::Enum::YLeaf img_download;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf removed;
        static const ydk::Enum::YLeaf hl_upg_seq;
        static const ydk::Enum::YLeaf chk_upg_seq;
        static const ydk::Enum::YLeaf upg_start;
        static const ydk::Enum::YLeaf hl_upg_idle;
        static const ydk::Enum::YLeaf chk_ins_seq;
        static const ydk::Enum::YLeaf hl_upg_fail;
        static const ydk::Enum::YLeaf aa_upg_rdy;
        static const ydk::Enum::YLeaf aa_upg_idle;
        static const ydk::Enum::YLeaf aa_upg_done;
        static const ydk::Enum::YLeaf aa_upg_fail;
        static const ydk::Enum::YLeaf aa_ver_mismatch;
        static const ydk::Enum::YLeaf ch_type_mismatch;

};

class EqptAirDir : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf front2back;
        static const ydk::Enum::YLeaf back2front;

};

class SysmgrFwMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf recovery;
        static const ydk::Enum::YLeaf regular;

};

class Icmpv6OperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf failed;

};

class VsanOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class AggregateBfdStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf up;

};

class EqptAsicT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf northstar;
        static const ydk::Enum::YLeaf alpine;
        static const ydk::Enum::YLeaf bcm;
        static const ydk::Enum::YLeaf davos;
        static const ydk::Enum::YLeaf sugarbowl;
        static const ydk::Enum::YLeaf homewood;

};

class ImBreakoutProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf Y_50g_2x_only;

};

class OspfHelperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_helping;
        static const ydk::Enum::YLeaf helping;

};

class CoppBurstUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf bytes;
        static const ydk::Enum::YLeaf kbytes;
        static const ydk::Enum::YLeaf mbytes;
        static const ydk::Enum::YLeaf packets;
        static const ydk::Enum::YLeaf us;
        static const ydk::Enum::YLeaf ms;

};

class FvImmediacy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf lazy;

};

class Pim6EhType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf assertRcv;
        static const ydk::Enum::YLeaf bidir;
        static const ydk::Enum::YLeaf hello;
        static const ydk::Enum::YLeaf joinPrune;
        static const ydk::Enum::YLeaf nullReg;
        static const ydk::Enum::YLeaf packet;
        static const ydk::Enum::YLeaf pim6Internal;
        static const ydk::Enum::YLeaf rp;
        static const ydk::Enum::YLeaf vrf;
        static const ydk::Enum::YLeaf jpSum;

};

class L1VoiceVlanType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf tagged;
        static const ydk::Enum::YLeaf dot1p;
        static const ydk::Enum::YLeaf untagged;

};

class IsisBwRefUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mbps;
        static const ydk::Enum::YLeaf gbps;

};

class AaaMonitorServerType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};

class OspfAdjChangeLogLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf brief;
        static const ydk::Enum::YLeaf detail;

};

class StpLinkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf shared;

};

class NwMemAlertLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf critical;

};

class RelnTargetType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf name;
        static const ydk::Enum::YLeaf mo;
        static const ydk::Enum::YLeaf all;

};

class QospSchedAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wrr;
        static const ydk::Enum::YLeaf sp;

};

class HsrpGrpIpObtainMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admin;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf learn;

};

class ArpAdjOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf incomplete;
        static const ydk::Enum::YLeaf normal;

};

class OspfGrCtrl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf planned_only;
        static const ydk::Enum::YLeaf complete;
        static const ydk::Enum::YLeaf disabled;

};

class AaaRuleScopeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf feature;
        static const ydk::Enum::YLeaf feature_group;
        static const ydk::Enum::YLeaf oid;

};

class AggregateIntfType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf port;
        static const ydk::Enum::YLeaf port_channel;
        static const ydk::Enum::YLeaf tunnel;
        static const ydk::Enum::YLeaf loopback;
        static const ydk::Enum::YLeaf svi;

};

class CoppAffix : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf prefix;
        static const ydk::Enum::YLeaf suffix;

};

class M6ribHoldAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class SisfRaGuardRouterPreferenceMaximum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf nocheck;

};

class DatetimeMonth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf january;
        static const ydk::Enum::YLeaf february;
        static const ydk::Enum::YLeaf march;
        static const ydk::Enum::YLeaf april;
        static const ydk::Enum::YLeaf may;
        static const ydk::Enum::YLeaf june;
        static const ydk::Enum::YLeaf july;
        static const ydk::Enum::YLeaf august;
        static const ydk::Enum::YLeaf september;
        static const ydk::Enum::YLeaf october;
        static const ydk::Enum::YLeaf november;
        static const ydk::Enum::YLeaf december;

};

class L3VrfAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf shutdown;
        static const ydk::Enum::YLeaf admin_up;

};

class CoppIrUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf bps;
        static const ydk::Enum::YLeaf pps;
        static const ydk::Enum::YLeaf kbps;
        static const ydk::Enum::YLeaf mbps;
        static const ydk::Enum::YLeaf gbps;

};

class EqptChOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_operational;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf online;

};

class BgpAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class EqptSlotOpSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf empty;
        static const ydk::Enum::YLeaf inserted;

};

class UdldAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class AaaAccountStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf inactive;

};

class EqptParity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf even;
        static const ydk::Enum::YLeaf odd;

};

class SnmpBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

};

class RtextcomScope : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf transitive;
        static const ydk::Enum::YLeaf non_transitive;

};

class L2Disablefka : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf set;

};

class OspfMaxLsaAct : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reject;
        static const ydk::Enum::YLeaf restart;
        static const ydk::Enum::YLeaf log;

};

class DatetimeNtpSrvStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf not_running;
        static const ydk::Enum::YLeaf not_synchronized;
        static const ydk::Enum::YLeaf synced_local_clock;
        static const ydk::Enum::YLeaf synced_local_hw_refclk;
        static const ydk::Enum::YLeaf synced_remote_server;

};

class CompHostState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maintenance;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf noresponse;
        static const ydk::Enum::YLeaf disconnected;
        static const ydk::Enum::YLeaf poweredOn;
        static const ydk::Enum::YLeaf poweredOff;
        static const ydk::Enum::YLeaf standBy;
        static const ydk::Enum::YLeaf suspended;
        static const ydk::Enum::YLeaf unknown;

};

class BootPoap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class SnmpSnmpTrapSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class ImModeHwProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf undefined;
        static const ydk::Enum::YLeaf Y_4C;
        static const ydk::Enum::YLeaf Y_2C__PLUS__4Q;
        static const ydk::Enum::YLeaf Y_18C;
        static const ydk::Enum::YLeaf Y_4C__PLUS__28Q;
        static const ydk::Enum::YLeaf Y_6C__PLUS__24Q;

};

class OspfSgmntRtgMplsOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Disabled;
        static const ydk::Enum::YLeaf Enabled;

};

class OspfHelperExitQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf in_progress;
        static const ydk::Enum::YLeaf completed;
        static const ydk::Enum::YLeaf timed_out;
        static const ydk::Enum::YLeaf topology_changed;

};

class EqptOpSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf fail;
        static const ydk::Enum::YLeaf absent;
        static const ydk::Enum::YLeaf shut;
        static const ydk::Enum::YLeaf mismatch;

};

class SyslogTimeStampFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf microseconds;
        static const ydk::Enum::YLeaf milliseconds;
        static const ydk::Enum::YLeaf seconds;

};

class CoppExceedAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Undefined;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf drop;

};

class L2DomType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bd_regular;
        static const ydk::Enum::YLeaf bd_reserved;
        static const ydk::Enum::YLeaf bd_control;
        static const ydk::Enum::YLeaf bd_external;
        static const ydk::Enum::YLeaf ckt_vlan;
        static const ydk::Enum::YLeaf ckt_vxlan;

};

class StpProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf mstp;
        static const ydk::Enum::YLeaf rstp;

};

class MsdpDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf route;
        static const ydk::Enum::YLeaf source;

};

class AggregateVpcPeerLinkStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf VpcPeerNolink;
        static const ydk::Enum::YLeaf VpcPeerLinkDown;
        static const ydk::Enum::YLeaf VpcPeerOk;
        static const ydk::Enum::YLeaf VpcPeerNotfound;

};

class CoppViolateAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Undefined;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf drop;

};

class L1VdcSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_created;
        static const ydk::Enum::YLeaf created;
        static const ydk::Enum::YLeaf cleanup;

};

class PcHashDist : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf adaptive;
        static const ydk::Enum::YLeaf fixed;

};

class OspfAuthT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf simple;
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf unspecified;

};

class OspfMaxLsaOperStQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf overload;
        static const ydk::Enum::YLeaf sleep;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf perm_sleep;

};

class VpcSummRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf election_not_done;
        static const ydk::Enum::YLeaf cfg_master_oper_master;
        static const ydk::Enum::YLeaf cfg_master_oper_slave;
        static const ydk::Enum::YLeaf cfg_slave_oper_master;
        static const ydk::Enum::YLeaf cfg_slave_oper_slave;

};

class BgpEvpnRtType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf a_d;
        static const ydk::Enum::YLeaf mac_ip;
        static const ydk::Enum::YLeaf imet;
        static const ydk::Enum::YLeaf eth_seg;
        static const ydk::Enum::YLeaf ip_pfx;

};

class LacpTxRate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf fast;

};

class L1FECModePhysIfOperFECMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf rs_fec;
        static const ydk::Enum::YLeaf fc_fec;
        static const ydk::Enum::YLeaf fec_off;
        static const ydk::Enum::YLeaf rs_ieee;
        static const ydk::Enum::YLeaf rs_cons16;
        static const ydk::Enum::YLeaf not_available;

};

class PlatformBufferMonitorMd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf None;
        static const ydk::Enum::YLeaf Unicast;
        static const ydk::Enum::YLeaf Multicast;

};

class ActrlRuleT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tenant;
        static const ydk::Enum::YLeaf mgmt;
        static const ydk::Enum::YLeaf snmp;
        static const ydk::Enum::YLeaf bd_flood;
        static const ydk::Enum::YLeaf vrf_default;
        static const ydk::Enum::YLeaf infra;

};

class AggregateConfigSourceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf controller;

};

class RtmapSetT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reg_community;
        static const ydk::Enum::YLeaf ext_gen_community;
        static const ydk::Enum::YLeaf rtt_community;
        static const ydk::Enum::YLeaf rt_tag;
        static const ydk::Enum::YLeaf rt_weight;
        static const ydk::Enum::YLeaf local_pref;
        static const ydk::Enum::YLeaf metric;
        static const ydk::Enum::YLeaf ospf_nssa;
        static const ydk::Enum::YLeaf ospf_fwd_addr;
        static const ydk::Enum::YLeaf ip_nh;
        static const ydk::Enum::YLeaf metric_type;
        static const ydk::Enum::YLeaf rt_dist;
        static const ydk::Enum::YLeaf nh_pa;
        static const ydk::Enum::YLeaf origin;
        static const ydk::Enum::YLeaf list_community;
        static const ydk::Enum::YLeaf dampening;
        static const ydk::Enum::YLeaf extcommunity_cost;
        static const ydk::Enum::YLeaf ip_prec;
        static const ydk::Enum::YLeaf continue_;
        static const ydk::Enum::YLeaf rt_index;
        static const ydk::Enum::YLeaf list_extcommunity;
        static const ydk::Enum::YLeaf ipv6_prec;
        static const ydk::Enum::YLeaf prepend;
        static const ydk::Enum::YLeaf lastas;
        static const ydk::Enum::YLeaf as_pathtag;

};

class EthpmFcotState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf inserted;
        static const ydk::Enum::YLeaf removed;
        static const ydk::Enum::YLeaf hw_failure;
        static const ydk::Enum::YLeaf inserted_initializing;

};

class BgpAdvtMapCondition : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf exist;
        static const ydk::Enum::YLeaf non_exist;

};

class SwpkgsPackageAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf add;
        static const ydk::Enum::YLeaf activate;
        static const ydk::Enum::YLeaf add_activate;
        static const ydk::Enum::YLeaf deactivate;
        static const ydk::Enum::YLeaf commit;
        static const ydk::Enum::YLeaf remove;

};

class CompInstType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf phys;
        static const ydk::Enum::YLeaf virt;
        static const ydk::Enum::YLeaf hv;

};

class AaaUserRolePrivType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noDataPriv;
        static const ydk::Enum::YLeaf readPriv;
        static const ydk::Enum::YLeaf writePriv;

};

class ActionOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf scheduled;
        static const ydk::Enum::YLeaf processing;
        static const ydk::Enum::YLeaf completed;
        static const ydk::Enum::YLeaf cancelled;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf indeterminate;
        static const ydk::Enum::YLeaf suspended;
        static const ydk::Enum::YLeaf crashsuspect;

};

class M6ribEhType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf mdt;
        static const ydk::Enum::YLeaf mfdmDebugs;
        static const ydk::Enum::YLeaf mfdmEvents;
        static const ydk::Enum::YLeaf mfdmStats;
        static const ydk::Enum::YLeaf notyClients;
        static const ydk::Enum::YLeaf rib;
        static const ydk::Enum::YLeaf ribSum;
        static const ydk::Enum::YLeaf urib;
        static const ydk::Enum::YLeaf vrf;

};

class NdSolicitAcceptValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf no_accept;

};

class SegrtOperStQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf shut;
        static const ydk::Enum::YLeaf srgb_cleanup_in_progress;
        static const ydk::Enum::YLeaf srgb_cleanup_failed;
        static const ydk::Enum::YLeaf srgb_alloc_in_progress;
        static const ydk::Enum::YLeaf srgb_alloc_failed;

};

class BgpPathT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf confederation;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf aggregate;
        static const ydk::Enum::YLeaf redistribute;
        static const ydk::Enum::YLeaf injected;

};

class ProcOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class NdRtPrefForCmd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf high;

};

class SnmpCommAcessT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ro;
        static const ydk::Enum::YLeaf rw;
        static const ydk::Enum::YLeaf unspecified;

};

class SegrtSRGBOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf in_use;
        static const ydk::Enum::YLeaf alloc_in_progress;
        static const ydk::Enum::YLeaf alloc_failed;
        static const ydk::Enum::YLeaf cleanup_in_progress;
        static const ydk::Enum::YLeaf cleanup_failed;

};

class UdldPortEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf port_enabled;
        static const ydk::Enum::YLeaf port_fiber_disabled;
        static const ydk::Enum::YLeaf port_default;

};

class AnalyticsModeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf analytics;
        static const ydk::Enum::YLeaf netflow;

};

class IgmpEhType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igmpInternal;
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf groupDebugs;
        static const ydk::Enum::YLeaf groupEvents;
        static const ydk::Enum::YLeaf ha;
        static const ydk::Enum::YLeaf intfDebugs;
        static const ydk::Enum::YLeaf intfEvents;
        static const ydk::Enum::YLeaf mtrace;
        static const ydk::Enum::YLeaf mvr;
        static const ydk::Enum::YLeaf policy;
        static const ydk::Enum::YLeaf vrf;
        static const ydk::Enum::YLeaf nbm;

};

class L1LayerAggrIfLayer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Layer2;
        static const ydk::Enum::YLeaf Layer3;
        static const ydk::Enum::YLeaf pltfmDfltLayer;

};

class L2capSubj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf vxlan_namespace;
        static const ydk::Enum::YLeaf nvgre_namespace;
        static const ydk::Enum::YLeaf domain_namespace;
        static const ydk::Enum::YLeaf tunnel_namespace;

};

class IpUnnumberedOperStQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf parent_unnumbered;
        static const ydk::Enum::YLeaf child_numbered;
        static const ydk::Enum::YLeaf invalid_source;
        static const ydk::Enum::YLeaf invalid_interface;
        static const ydk::Enum::YLeaf intf_self_referential;

};

class L1OperStQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf link_down;
        static const ydk::Enum::YLeaf fail;
        static const ydk::Enum::YLeaf no_license;
        static const ydk::Enum::YLeaf link_up;
        static const ydk::Enum::YLeaf hw_fail;
        static const ydk::Enum::YLeaf sw_fail;
        static const ydk::Enum::YLeaf err_disabled;
        static const ydk::Enum::YLeaf sfp_missing;
        static const ydk::Enum::YLeaf loopback_diag_failure;
        static const ydk::Enum::YLeaf udld_unidir_detected;
        static const ydk::Enum::YLeaf udld_tx_rx_loop;
        static const ydk::Enum::YLeaf udld_neighbor_mismatch;
        static const ydk::Enum::YLeaf udld_empty_echo;
        static const ydk::Enum::YLeaf udld_aggressive_mode_link_failed;
        static const ydk::Enum::YLeaf link_flap_err;
        static const ydk::Enum::YLeaf err_disabled_ip_conflict;
        static const ydk::Enum::YLeaf ipqos_dcbxp_compat_failure;
        static const ydk::Enum::YLeaf link_failure;
        static const ydk::Enum::YLeaf offline;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf channel_admin_down;
        static const ydk::Enum::YLeaf channel_err_disabled;
        static const ydk::Enum::YLeaf suspended;
        static const ydk::Enum::YLeaf proto_port_suspend;
        static const ydk::Enum::YLeaf channel_membership_update_in_progress;
        static const ydk::Enum::YLeaf parent_down;
        static const ydk::Enum::YLeaf parent_admin_down;
        static const ydk::Enum::YLeaf interface_removed;
        static const ydk::Enum::YLeaf fcot_no_present;
        static const ydk::Enum::YLeaf fcot_vendor_not_supported;
        static const ydk::Enum::YLeaf incompatible_admin_mode;
        static const ydk::Enum::YLeaf incompatible_admin_speed;
        static const ydk::Enum::YLeaf suspended_by_mode;
        static const ydk::Enum::YLeaf suspended_by_speed;
        static const ydk::Enum::YLeaf domain_max_retransmission_failure;
        static const ydk::Enum::YLeaf loopback_isolation;
        static const ydk::Enum::YLeaf upgrade_in_progress;
        static const ydk::Enum::YLeaf port_channel_members_down;
        static const ydk::Enum::YLeaf ethernet_link_down;
        static const ydk::Enum::YLeaf ethernet_interface_down;
        static const ydk::Enum::YLeaf admin_config_change;
        static const ydk::Enum::YLeaf module_removed;
        static const ydk::Enum::YLeaf vrf_unusable;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf xcvr_initializing;
        static const ydk::Enum::YLeaf cap_absent;
        static const ydk::Enum::YLeaf sfp_eth_compliant_err;
        static const ydk::Enum::YLeaf sdp_timeout;
        static const ydk::Enum::YLeaf sat_incompat_topo;
        static const ydk::Enum::YLeaf sat_not_configured;
        static const ydk::Enum::YLeaf auth_fail;
        static const ydk::Enum::YLeaf auth_pending;
        static const ydk::Enum::YLeaf suspended_due_to_minlinks;
        static const ydk::Enum::YLeaf suspended_due_to_no_lacp_pdus;
        static const ydk::Enum::YLeaf sat_fabric_if_down;
        static const ydk::Enum::YLeaf invalid_sat_fabric_if;
        static const ydk::Enum::YLeaf fex_sfp_invalid;
        static const ydk::Enum::YLeaf suspend_by_mtu;
        static const ydk::Enum::YLeaf suspend_by_vpc;
        static const ydk::Enum::YLeaf router_mac_failure;
        static const ydk::Enum::YLeaf xcvr_auth_failed;
        static const ydk::Enum::YLeaf non_sticky_externally_disabled;
        static const ydk::Enum::YLeaf sfp_speed_mismatch;
        static const ydk::Enum::YLeaf fcot_chksum_err;
        static const ydk::Enum::YLeaf xcvr_invalid;
        static const ydk::Enum::YLeaf vpc_peer_link_down;
        static const ydk::Enum::YLeaf vpc_cfg_in_progress;
        static const ydk::Enum::YLeaf vpc_no_response_from_peer;
        static const ydk::Enum::YLeaf bpdu_guard_err_disable;
        static const ydk::Enum::YLeaf hot_standby_in_bundle;
        static const ydk::Enum::YLeaf handshake_fail_errdisable;
        static const ydk::Enum::YLeaf non_participating;
        static const ydk::Enum::YLeaf rcf_in_progress;
        static const ydk::Enum::YLeaf elp_failure_isolation;
        static const ydk::Enum::YLeaf esc_failure_isolation;
        static const ydk::Enum::YLeaf domain_overlap_isolation;
        static const ydk::Enum::YLeaf domain_addr_assign_failure_isolation;
        static const ydk::Enum::YLeaf domain_other_side_eport_isolated;
        static const ydk::Enum::YLeaf domain_invalid_rcf_received;
        static const ydk::Enum::YLeaf domain_manager_disabled;
        static const ydk::Enum::YLeaf zone_merge_failure_isolation;
        static const ydk::Enum::YLeaf vsan_mismatch_isolation;
        static const ydk::Enum::YLeaf src_port_not_bound;
        static const ydk::Enum::YLeaf suspended_by_wwn;
        static const ydk::Enum::YLeaf epp_failure;
        static const ydk::Enum::YLeaf port_vsan_mismatch_isolation;
        static const ydk::Enum::YLeaf incompatible_admin_rxbbcredit;
        static const ydk::Enum::YLeaf incompatible_admin_rxbufsize;
        static const ydk::Enum::YLeaf zone_remote_no_resp_isolation;
        static const ydk::Enum::YLeaf osm_e_port_up;
        static const ydk::Enum::YLeaf osm_non_e_port_up;
        static const ydk::Enum::YLeaf peer_fcip_closed_tcp_connection;
        static const ydk::Enum::YLeaf peer_fcip_reset_tcp_connection;
        static const ydk::Enum::YLeaf tcp_max_retransmissions;
        static const ydk::Enum::YLeaf tcp_keep_alive_timer_expired;
        static const ydk::Enum::YLeaf tcp_persist_timer_expired;
        static const ydk::Enum::YLeaf tunnel_src_port_removed;
        static const ydk::Enum::YLeaf tunnel_src_module_not_online;
        static const ydk::Enum::YLeaf invalid_config;
        static const ydk::Enum::YLeaf port_bind_failure;
        static const ydk::Enum::YLeaf fabric_bind_failure;
        static const ydk::Enum::YLeaf no_trunk_oper_vsans_isolation;
        static const ydk::Enum::YLeaf ficon_vsan_down;
        static const ydk::Enum::YLeaf invalid_attachment;
        static const ydk::Enum::YLeaf port_blocked;
        static const ydk::Enum::YLeaf incompatible_admin_rxbbcredit_performance_buf;
        static const ydk::Enum::YLeaf too_many_invalid_flogis;
        static const ydk::Enum::YLeaf denied_due_to_port_binding;
        static const ydk::Enum::YLeaf elp_failure_revision_mismatch;
        static const ydk::Enum::YLeaf elp_failure_classf_param_err;
        static const ydk::Enum::YLeaf elp_failure_classn_param_err;
        static const ydk::Enum::YLeaf elp_failure_unknown_flow_ctl_code;
        static const ydk::Enum::YLeaf elp_failure_invalid_flow_ctl_param;
        static const ydk::Enum::YLeaf elp_failure_invalid_port_name;
        static const ydk::Enum::YLeaf elp_failure_invalid_switch_name;
        static const ydk::Enum::YLeaf elp_failure_ratov_edtov_mismatch;
        static const ydk::Enum::YLeaf elp_failure_loopback_detected;
        static const ydk::Enum::YLeaf elp_failure_invalid_tx_bbcredit;
        static const ydk::Enum::YLeaf elp_failure_invalid_payload_size;
        static const ydk::Enum::YLeaf bundle_miscfg;
        static const ydk::Enum::YLeaf bit_err_rt_thres_exceeded;
        static const ydk::Enum::YLeaf link_fail_link_reset;
        static const ydk::Enum::YLeaf link_fail_port_init_failed;
        static const ydk::Enum::YLeaf link_fail_port_unusable;
        static const ydk::Enum::YLeaf link_fail_loss_of_signal;
        static const ydk::Enum::YLeaf link_fail_loss_of_sync;
        static const ydk::Enum::YLeaf link_fail_nos_rcvd;
        static const ydk::Enum::YLeaf link_fail_ols_rcvd;
        static const ydk::Enum::YLeaf link_fail_debounce_timeout;
        static const ydk::Enum::YLeaf link_fail_lr_rcvd_b2b;
        static const ydk::Enum::YLeaf link_fail_credit_loss;
        static const ydk::Enum::YLeaf link_fail_rx_que_overflow;
        static const ydk::Enum::YLeaf link_fail_too_many_intr;
        static const ydk::Enum::YLeaf link_fail_lip_rcvd_b2b;
        static const ydk::Enum::YLeaf link_fail_credit_loss_b2b;
        static const ydk::Enum::YLeaf link_fail_opny_tmo_b2b;
        static const ydk::Enum::YLeaf link_fail_opny_ret_b2b;
        static const ydk::Enum::YLeaf link_fail_lip_f8_rcvd;
        static const ydk::Enum::YLeaf link_fail_line_card_port_shutdown;
        static const ydk::Enum::YLeaf fcsp_authent_failure;
        static const ydk::Enum::YLeaf ohms_external_lb_test;
        static const ydk::Enum::YLeaf invalid_fabric_binding_exchange;
        static const ydk::Enum::YLeaf tov_mismatch;
        static const ydk::Enum::YLeaf ficon_not_enabled;
        static const ydk::Enum::YLeaf ficon_no_portnumber;
        static const ydk::Enum::YLeaf ficon_being_enabled;
        static const ydk::Enum::YLeaf eport_prohibited;
        static const ydk::Enum::YLeaf trunk_not_fully_active;
        static const ydk::Enum::YLeaf fabric_binding_swwn_not_found;
        static const ydk::Enum::YLeaf fabric_binding_domain_invalid;
        static const ydk::Enum::YLeaf fabric_binding_database_mismatch;
        static const ydk::Enum::YLeaf fabric_binding_peer_not_responding;
        static const ydk::Enum::YLeaf tracked_port_down;
        static const ydk::Enum::YLeaf ec_suspended_for_loop;
        static const ydk::Enum::YLeaf isolate_bundle_miscfg;
        static const ydk::Enum::YLeaf peer_not_support_bundles;
        static const ydk::Enum::YLeaf port_bringup_isolation;
        static const ydk::Enum::YLeaf domain_not_allowed_isolation;
        static const ydk::Enum::YLeaf virtual_ivr_domain_overlap_isolation;
        static const ydk::Enum::YLeaf out_of_service;
        static const ydk::Enum::YLeaf bundle_stdby;
        static const ydk::Enum::YLeaf port_cap_fc_port_connector_type_err;
        static const ydk::Enum::YLeaf error_disabled_reinit_limit_reached;
        static const ydk::Enum::YLeaf ficon_vsan_duplicate_portnum;
        static const ydk::Enum::YLeaf internal_rcf_in_progress;
        static const ydk::Enum::YLeaf two_switches_with_same_wwn;
        static const ydk::Enum::YLeaf invalid_other_princ_efp_req_recd;
        static const ydk::Enum::YLeaf domain_isolation_unknown_reason;
        static const ydk::Enum::YLeaf elp_failure_all_zero_peer_wwn_rcvd;
        static const ydk::Enum::YLeaf prefered_path_isolation;
        static const ydk::Enum::YLeaf fc_redirect_isolation;
        static const ydk::Enum::YLeaf port_act_license_not_available;
        static const ydk::Enum::YLeaf sdm_isolation;
        static const ydk::Enum::YLeaf fcid_allocation_failed;
        static const ydk::Enum::YLeaf externally_disabled;
        static const ydk::Enum::YLeaf fcot_read_error;
        static const ydk::Enum::YLeaf port_guard_down_on_link_failure;
        static const ydk::Enum::YLeaf incomplete_config;
        static const ydk::Enum::YLeaf incomplete_tunnel_config;
        static const ydk::Enum::YLeaf hw_programming_failed;
        static const ydk::Enum::YLeaf tunnel_dest_not_reachable;
        static const ydk::Enum::YLeaf sfp_invalid;
        static const ydk::Enum::YLeaf tunnel_vrf_mismatch;
        static const ydk::Enum::YLeaf tunnel_vrf_fw_ref;
        static const ydk::Enum::YLeaf duplicate_tunnel_cfg;
        static const ydk::Enum::YLeaf primary_vlan_down;
        static const ydk::Enum::YLeaf dot1x_security_errdisable;
        static const ydk::Enum::YLeaf vf_tagging_capability_err;
        static const ydk::Enum::YLeaf port_disabled;
        static const ydk::Enum::YLeaf tunnel_mode_not_configured;
        static const ydk::Enum::YLeaf tunnel_source_not_configured;
        static const ydk::Enum::YLeaf tunnel_destination_not_configured;
        static const ydk::Enum::YLeaf tunnel_unable2resolve_source_ipaddress;
        static const ydk::Enum::YLeaf tunnel_unable2resolve_destination_ipaddress;
        static const ydk::Enum::YLeaf tunnel_vrf_is_down;
        static const ydk::Enum::YLeaf sif_admin_down;
        static const ydk::Enum::YLeaf phy_intf_down;
        static const ydk::Enum::YLeaf intf_sif_limit_exceeded;
        static const ydk::Enum::YLeaf insufficient_power;
        static const ydk::Enum::YLeaf no_fcoe;
        static const ydk::Enum::YLeaf dcx_compat_mismatch;
        static const ydk::Enum::YLeaf isolate_bundle_limit_exceeded;
        static const ydk::Enum::YLeaf sif_not_bound;
        static const ydk::Enum::YLeaf err_disable_lacp_miscfg;
        static const ydk::Enum::YLeaf errdisabled_pkt_err;
        static const ydk::Enum::YLeaf vlan_vsan_mapping_not_enabled;
        static const ydk::Enum::YLeaf stp_not_forwarding_in_fcoe_mapped_vlan;
        static const ydk::Enum::YLeaf module_offline;
        static const ydk::Enum::YLeaf stp_inconsist_vpc_peerlink_errdisable;
        static const ydk::Enum::YLeaf set_port_state_failed_errdisable;
        static const ydk::Enum::YLeaf tunnel_source_down;
        static const ydk::Enum::YLeaf cdp_info_not_avail;
        static const ydk::Enum::YLeaf fcot_clk_rate_mismatch;
        static const ydk::Enum::YLeaf port_guard_down_on_trustsec_violation;
        static const ydk::Enum::YLeaf wait_for_flogi;
        static const ydk::Enum::YLeaf npiv_not_enabled_in_upstream;
        static const ydk::Enum::YLeaf vsan_mismatch_with_upstream_switch_port;
        static const ydk::Enum::YLeaf port_guard_bit_error_rate;
        static const ydk::Enum::YLeaf port_guard_signal_loss;
        static const ydk::Enum::YLeaf port_guard_sync_loss;
        static const ydk::Enum::YLeaf port_guard_link_reset;
        static const ydk::Enum::YLeaf port_guard_credit_loss;
        static const ydk::Enum::YLeaf ipqos_mgr_policy_app_failed;
        static const ydk::Enum::YLeaf pause_rate_limit_errdisable;
        static const ydk::Enum::YLeaf lstgrp_uplink_down;
        static const ydk::Enum::YLeaf sticky_down_on_link_failure;
        static const ydk::Enum::YLeaf dcx_multiple_msap_ids_errdisable;
        static const ydk::Enum::YLeaf dcx_100_pdus_rcvd_noack_errdisable;
        static const ydk::Enum::YLeaf enm_sat_incompat_uplink;
        static const ydk::Enum::YLeaf enm_loop_detected;
        static const ydk::Enum::YLeaf sub_group_id_not_assigned;
        static const ydk::Enum::YLeaf vem_unlicensed;
        static const ydk::Enum::YLeaf profile_not_found;
        static const ydk::Enum::YLeaf vlan_does_not_exist;
        static const ydk::Enum::YLeaf vlan_type;
        static const ydk::Enum::YLeaf vlan_down;
        static const ydk::Enum::YLeaf vpc_peer_upgrade;
        static const ydk::Enum::YLeaf non_cisco_hba_vftag;
        static const ydk::Enum::YLeaf domain_id_config_mismatch;
        static const ydk::Enum::YLeaf xcvr_absent;
        static const ydk::Enum::YLeaf vfc_binding_invalid;
        static const ydk::Enum::YLeaf vlan_not_fcoe_enabled;
        static const ydk::Enum::YLeaf pvlan_native_vlan_err;
        static const ydk::Enum::YLeaf eth_l2_vlan_down;
        static const ydk::Enum::YLeaf eth_intf_invalid_binding;
        static const ydk::Enum::YLeaf pmon_failure;
        static const ydk::Enum::YLeaf l3_not_ready;
        static const ydk::Enum::YLeaf speed_mismatch;
        static const ydk::Enum::YLeaf flowcontrol_mismatch;
        static const ydk::Enum::YLeaf vdc_mode;
        static const ydk::Enum::YLeaf enm_pin_fail_link_down;
        static const ydk::Enum::YLeaf inactive_m1_port_fpath_access_vlan;

};

class FirmwareType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf controller;
        static const ydk::Enum::YLeaf switch_;
        static const ydk::Enum::YLeaf catalog;

};

class DatetimeLoggingLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emergency;
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf notif;
        static const ydk::Enum::YLeaf inform;
        static const ydk::Enum::YLeaf debug;

};

class FcoeAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class MonitorDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf none;

};

class MonitorMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf access;
        static const ydk::Enum::YLeaf fabric;

};

class BgpPrivateASControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf remove_exclusive;
        static const ydk::Enum::YLeaf remove_all;
        static const ydk::Enum::YLeaf replace_as;

};

class RtcomMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf regex;

};

class AggregateBooleanFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

};

class OamEpT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ep;
        static const ydk::Enum::YLeaf vtep_ep;
        static const ydk::Enum::YLeaf node;

};

class IpqosPolicyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf qos;
        static const ydk::Enum::YLeaf queuing;

};

class L2EnfPref : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sw;
        static const ydk::Enum::YLeaf hw;

};

class IsisDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ls;
        static const ydk::Enum::YLeaf rt;
        static const ydk::Enum::YLeaf nh;
        static const ydk::Enum::YLeaf mcgrp;
        static const ydk::Enum::YLeaf fn;
        static const ydk::Enum::YLeaf dtep;

};

class L1TrunkLog : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class IgmpLimitSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf below_thresh;
        static const ydk::Enum::YLeaf above_thresh;
        static const ydk::Enum::YLeaf exhausted;

};

class MribHoldAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class L1Medium : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf p2p;

};

class RibDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rt;
        static const ydk::Enum::YLeaf nh;
        static const ydk::Enum::YLeaf adj;

};

class CapScope : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf policy_domain;
        static const ydk::Enum::YLeaf fabric;

};

class Icmpv6LoggingLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Emergency;
        static const ydk::Enum::YLeaf Alert;
        static const ydk::Enum::YLeaf Critical;
        static const ydk::Enum::YLeaf Error;
        static const ydk::Enum::YLeaf Warning;
        static const ydk::Enum::YLeaf Notice;
        static const ydk::Enum::YLeaf Informational;
        static const ydk::Enum::YLeaf Debug;

};

class L1SwitchportMacLearn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class LacpSysRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

};

class NwAdminStProcessStatAutoDisc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class SnmpNotificationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf traps;
        static const ydk::Enum::YLeaf informs;

};

class AnalyticsOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class MribModeAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class EqptPsRdnM : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf not_supp;
        static const ydk::Enum::YLeaf rdn;
        static const ydk::Enum::YLeaf comb;
        static const ydk::Enum::YLeaf n_rdn;
        static const ydk::Enum::YLeaf ps_rdn;
        static const ydk::Enum::YLeaf insrc_rdn;
        static const ydk::Enum::YLeaf sinin_rdn;
        static const ydk::Enum::YLeaf comb_force;

};

class ActionAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf start;
        static const ydk::Enum::YLeaf stop;
        static const ydk::Enum::YLeaf suspend;

};

class BgpRtCtrlOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unresolved;
        static const ydk::Enum::YLeaf resolved;

};

class L1PhyLayer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf sup_inband;
        static const ydk::Enum::YLeaf eobc;
        static const ydk::Enum::YLeaf mgmt;
        static const ydk::Enum::YLeaf max;

};

class RtleakProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf direct;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf ospfv3;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf host;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf amt;
        static const ydk::Enum::YLeaf lisp;
        static const ydk::Enum::YLeaf hmm;
        static const ydk::Enum::YLeaf am;

};

class AaaLdapSSLStrictnessLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf permissive;

};

class PcPortChannelProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf lacp;

};

class InstallerInstType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf disruptive;
        static const ydk::Enum::YLeaf non_disruptive;

};

class L2MacInfo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf svi_down_flood;
        static const ydk::Enum::YLeaf sup_inband_cfsoe;
        static const ydk::Enum::YLeaf vpc_peer_link;
        static const ydk::Enum::YLeaf nve;
        static const ydk::Enum::YLeaf sup_eth;

};

class NvoVniTypeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf L2;
        static const ydk::Enum::YLeaf L3;

};

class ArpEventType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf client_events;
        static const ydk::Enum::YLeaf client_errors;
        static const ydk::Enum::YLeaf control_events;
        static const ydk::Enum::YLeaf internal_events;
        static const ydk::Enum::YLeaf internal_errors;
        static const ydk::Enum::YLeaf high_availability;
        static const ydk::Enum::YLeaf ip_sync;
        static const ydk::Enum::YLeaf local_cache_events;
        static const ydk::Enum::YLeaf local_cache_errors;
        static const ydk::Enum::YLeaf pkt_messages;
        static const ydk::Enum::YLeaf snmp;
        static const ydk::Enum::YLeaf suppress_events;
        static const ydk::Enum::YLeaf suppress_errors;
        static const ydk::Enum::YLeaf sync;
        static const ydk::Enum::YLeaf arp_controller_errors;
        static const ydk::Enum::YLeaf arp_dme_event;
        static const ydk::Enum::YLeaf adjacency_control;
        static const ydk::Enum::YLeaf adjacency_errors;
        static const ydk::Enum::YLeaf adjacency_ipc_events;
        static const ydk::Enum::YLeaf adjacency_stats;
        static const ydk::Enum::YLeaf adjacency_high_availability;
        static const ydk::Enum::YLeaf adjacency_cli;
        static const ydk::Enum::YLeaf adjacency_sdb;
        static const ydk::Enum::YLeaf adjacency_snmp;
        static const ydk::Enum::YLeaf adjacency_netbroker;
        static const ydk::Enum::YLeaf am_dme_event;
        static const ydk::Enum::YLeaf am_event;

};

class NbmNbmLinkRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf EXTERNAL_LINK;
        static const ydk::Enum::YLeaf FABRIC_LINK;

};

class PoePoePortmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Default;
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf static_;

};

class RtmapRpTypeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf ASM;
        static const ydk::Enum::YLeaf Bidir;

};

class SnmpV3SecLvl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf noauth;
        static const ydk::Enum::YLeaf auth;
        static const ydk::Enum::YLeaf priv;

};

class BgpMvpnRtType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf interas_ipmsi_ad;
        static const ydk::Enum::YLeaf intraas_ipmsi_ad;
        static const ydk::Enum::YLeaf spmsi_ad;
        static const ydk::Enum::YLeaf leaf_ad;
        static const ydk::Enum::YLeaf sa_ad;
        static const ydk::Enum::YLeaf shared_c_mcast;
        static const ydk::Enum::YLeaf source_c_mcast;

};

class MonitorSrcT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf port;
        static const ydk::Enum::YLeaf encap;
        static const ydk::Enum::YLeaf port_encap;

};

class VpcPeerStQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf uplinks_down;
        static const ydk::Enum::YLeaf route_down;
        static const ydk::Enum::YLeaf peer_unrch;
        static const ydk::Enum::YLeaf compat_fail;
        static const ydk::Enum::YLeaf election_err;
        static const ydk::Enum::YLeaf oob_not_up;

};

class FlowDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;
        static const ydk::Enum::YLeaf both;

};

class BgpPeerOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf illegal;
        static const ydk::Enum::YLeaf shut;
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf connect;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf open_sent;
        static const ydk::Enum::YLeaf open_confirm;
        static const ydk::Enum::YLeaf established;
        static const ydk::Enum::YLeaf closing;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf unknown;

};

class MitOperType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf commit_verify;
        static const ydk::Enum::YLeaf commit_normal;
        static const ydk::Enum::YLeaf commit_confirm_start;
        static const ydk::Enum::YLeaf commit_confirm_end;
        static const ydk::Enum::YLeaf commit_reset_timeout;
        static const ydk::Enum::YLeaf commit_confirm_cancel;

};

class RtctrlRtCtrlDir : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class ClimodeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf EXEC;
        static const ydk::Enum::YLeaf CONFIG;

};

class RelnClassId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf cdpIf;
        static const ydk::Enum::YLeaf cnwAggrIf;
        static const ydk::Enum::YLeaf cnwPhysIf;
        static const ydk::Enum::YLeaf connIf;
        static const ydk::Enum::YLeaf datetimeNtpSrcIf;
        static const ydk::Enum::YLeaf dhcpClientIf;
        static const ydk::Enum::YLeaf dhcpDAIIf;
        static const ydk::Enum::YLeaf dhcpIpsgIf;
        static const ydk::Enum::YLeaf dhcpPseudoIf;
        static const ydk::Enum::YLeaf dhcpRelayIf;
        static const ydk::Enum::YLeaf dhcpServerIf;
        static const ydk::Enum::YLeaf dhcpSnoopIf;
        static const ydk::Enum::YLeaf dhcpSourceIf;
        static const ydk::Enum::YLeaf dhcpSrcIf;
        static const ydk::Enum::YLeaf dhcpV6SourceIf;
        static const ydk::Enum::YLeaf dhcpV6SrcIf;
        static const ydk::Enum::YLeaf egressIf;
        static const ydk::Enum::YLeaf ingressIf;
        static const ydk::Enum::YLeaf ipSrcIf;
        static const ydk::Enum::YLeaf l1EthIf;
        static const ydk::Enum::YLeaf l1PhysIf;
        static const ydk::Enum::YLeaf l2BrIf;
        static const ydk::Enum::YLeaf l2ExtIf;
        static const ydk::Enum::YLeaf l2InbandIf;
        static const ydk::Enum::YLeaf l2VfcIf;
        static const ydk::Enum::YLeaf l3If;
        static const ydk::Enum::YLeaf l3LbRtdIf;
        static const ydk::Enum::YLeaf lldpIf;
        static const ydk::Enum::YLeaf mcpIf;
        static const ydk::Enum::YLeaf mgmtMgmtIf;
        static const ydk::Enum::YLeaf mgmtRtdMgmtIf;
        static const ydk::Enum::YLeaf nwIf;
        static const ydk::Enum::YLeaf ospfIf;
        static const ydk::Enum::YLeaf ospfv3If;
        static const ydk::Enum::YLeaf pcAggrIf;
        static const ydk::Enum::YLeaf pktOnPassiveIf;
        static const ydk::Enum::YLeaf regressIf;
        static const ydk::Enum::YLeaf rsactiveIf;
        static const ydk::Enum::YLeaf rtactiveIf;
        static const ydk::Enum::YLeaf rtlsNodeToIf;
        static const ydk::Enum::YLeaf srcIf;
        static const ydk::Enum::YLeaf tunnelIf;
        static const ydk::Enum::YLeaf vpcIf;
        static const ydk::Enum::YLeaf l3Inst;
        static const ydk::Enum::YLeaf l3EncRtdIf;
        static const ydk::Enum::YLeaf rtregcomRule;
        static const ydk::Enum::YLeaf rtpfxRule;
        static const ydk::Enum::YLeaf rtmapMatchRtDst;

};

class EthpmErrDisEvent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf event_link_flap;
        static const ydk::Enum::YLeaf event_udld;
        static const ydk::Enum::YLeaf event_bpduguard;
        static const ydk::Enum::YLeaf event_loopback;
        static const ydk::Enum::YLeaf event_storm_ctrl;
        static const ydk::Enum::YLeaf event_dhcp_rate_lim;
        static const ydk::Enum::YLeaf event_arp_inspection;
        static const ydk::Enum::YLeaf event_sec_violation;
        static const ydk::Enum::YLeaf event_psec_violation;
        static const ydk::Enum::YLeaf event_stp_inconsist_vpc_peerlink;
        static const ydk::Enum::YLeaf event_set_port_state_failed;
        static const ydk::Enum::YLeaf event_debug_1;
        static const ydk::Enum::YLeaf event_debug_2;
        static const ydk::Enum::YLeaf event_debug_3;
        static const ydk::Enum::YLeaf event_debug_4;
        static const ydk::Enum::YLeaf event_debug_5;
        static const ydk::Enum::YLeaf event_ip_addr_conflict;
        static const ydk::Enum::YLeaf event_ipqos_mgr_error;
        static const ydk::Enum::YLeaf event_ethpm;
        static const ydk::Enum::YLeaf event_ipqos_dcbxp_compat_failure;
        static const ydk::Enum::YLeaf event_syserr_based;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf event_mcp_loop;
        static const ydk::Enum::YLeaf event_ep_move;
        static const ydk::Enum::YLeaf event_dcbx_no_ack;

};

class PlatformQosMinBuffer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf default_;

};

class EqptRdSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf standby;

};

class OspfIfOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf loopback;
        static const ydk::Enum::YLeaf waiting;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf dr;
        static const ydk::Enum::YLeaf bdr;
        static const ydk::Enum::YLeaf dr_other;

};

class L1Duplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf half;

};

class AggregateAfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_ucast;
        static const ydk::Enum::YLeaf vpnv4_ucast;
        static const ydk::Enum::YLeaf ipv6_ucast;
        static const ydk::Enum::YLeaf vpnv6_ucast;
        static const ydk::Enum::YLeaf l2_evpn;

};

class ArpSuppressArpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf l2suppressarp;
        static const ydk::Enum::YLeaf l2l3suppressarp;
        static const ydk::Enum::YLeaf invalid;

};

class L1DceMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf core;
        static const ydk::Enum::YLeaf edge;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf off;

};

class L1OperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf link_up;

};

class ArpLoggingLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emergency;
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf notification;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf debug;

};

class OspfBfdControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class StpPortFast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf trunk;
        static const ydk::Enum::YLeaf disable;

};

class OspfEventType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf adj;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf ha;
        static const ydk::Enum::YLeaf lsa_flood;
        static const ydk::Enum::YLeaf lsa;
        static const ydk::Enum::YLeaf spf;
        static const ydk::Enum::YLeaf redist;
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf mpls_te;
        static const ydk::Enum::YLeaf hello;
        static const ydk::Enum::YLeaf rib;
        static const ydk::Enum::YLeaf spf_trigger;
        static const ydk::Enum::YLeaf cli;

};

class BgpSoftReconfigBackup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf inbound;
        static const ydk::Enum::YLeaf inbound_always;

};

class StpRoot : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

};

class OpflexDeviceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf n1kv;
        static const ydk::Enum::YLeaf hyperv;
        static const ydk::Enum::YLeaf ovs;

};

class UdldOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class SisfRaGuardOtherConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf nocheck;

};

class RtfltAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class BgpLsAttrEntryType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf peer_node_sid;
        static const ydk::Enum::YLeaf peer_adj_sid;
        static const ydk::Enum::YLeaf peer_set_sid;

};

class CoppProfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf moderate;
        static const ydk::Enum::YLeaf dense;
        static const ydk::Enum::YLeaf lenient;

};

class BgpTblSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class IsisIsT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l1;
        static const ydk::Enum::YLeaf l2;
        static const ydk::Enum::YLeaf l12;

};

class ArpStAdjOperStQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf subnet_mismatch;
        static const ydk::Enum::YLeaf invalid_mac;
        static const ydk::Enum::YLeaf invalid_ip;
        static const ydk::Enum::YLeaf invalid_vrf;
        static const ydk::Enum::YLeaf own_mac;
        static const ydk::Enum::YLeaf if_down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf invalid_if;
        static const ydk::Enum::YLeaf invalid_clidata;
        static const ydk::Enum::YLeaf no_memory;

};

class SyslogSeverityLevelSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emergencies;
        static const ydk::Enum::YLeaf alerts;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf errors;
        static const ydk::Enum::YLeaf warnings;
        static const ydk::Enum::YLeaf notifications;
        static const ydk::Enum::YLeaf information;
        static const ydk::Enum::YLeaf debugging;
        static const ydk::Enum::YLeaf unspecified;

};

class ArpOpcode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf req;
        static const ydk::Enum::YLeaf reply;

};

class TelemetryAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;

};

class VrrpBfdSessionSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf deleted;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf active;

};

class EthpmShareState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dedicated;
        static const ydk::Enum::YLeaf shared;

};

class OspfOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class InstallerInstErr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf preupg_err1;
        static const ydk::Enum::YLeaf preupg_err2;
        static const ydk::Enum::YLeaf user_abort;

};

class AaaRulePermissionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf deny;

};

class NdRtPrefForNdRt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf high;

};

class FirmwareRunningMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf recovery;

};

class NvoPeerStateT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Up;
        static const ydk::Enum::YLeaf Down;

};

class TrackProbeState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reachability;
        static const ydk::Enum::YLeaf state;

};

class PcLastSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf successful;
        static const ydk::Enum::YLeaf failed;

};

class IpmcJoinType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_1;

};

class L1SwitchportVirtualEthernetBridge : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class InstallerInstOper : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf install;
        static const ydk::Enum::YLeaf impact;
        static const ydk::Enum::YLeaf abort;

};

class AggregateReplicationModeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf replicationServer;
        static const ydk::Enum::YLeaf ingressReplication;
        static const ydk::Enum::YLeaf ipMulticast;

};

class L1AutoNeg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf Y_25G;

};

class PoePoePolice : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Default;
        static const ydk::Enum::YLeaf errdisable;
        static const ydk::Enum::YLeaf log;

};

class SpanMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf access;
        static const ydk::Enum::YLeaf fabric;

};

class HsrpBiaScopeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf global;
        static const ydk::Enum::YLeaf local;

};

class NdStAdjOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class CdpDevIdT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf mac;
        static const ydk::Enum::YLeaf serialNum;
        static const ydk::Enum::YLeaf sysName;

};

class NvoIngReplProtoT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf static_;

};

class SisfDeviceRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf switch_;

};

class AggregateRttPType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf import;
        static const ydk::Enum::YLeaf export_;

};

class NwAddrF : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf mac;

};

class RtdmcAuthT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ah_md5;

};

class IpqosPolicyDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ingress;
        static const ydk::Enum::YLeaf egress;
        static const ydk::Enum::YLeaf both;

};

class TunnelifTunnelSrcDirect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class AggregateConfigStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf configReady;
        static const ydk::Enum::YLeaf configNotReady;
        static const ydk::Enum::YLeaf configPurgeInProgress;

};

class SegrtOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf ha_in_progress;

};

class MonAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class MplsstaticAfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_ucast;
        static const ydk::Enum::YLeaf ipv6_ucast;

};

class TrackRouteOwner : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf hmm;

};

class VsanAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf suspended;

};

class FcCreateState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf created;
        static const ydk::Enum::YLeaf removed;

};

class QosPrio : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf level3;
        static const ydk::Enum::YLeaf level2;
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf policy_plane;
        static const ydk::Enum::YLeaf control_plane;
        static const ydk::Enum::YLeaf span;

};

class IsisOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf failed;

};

class NbmNbmRcvOwner : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IGMP;
        static const ydk::Enum::YLeaf STATIC;
        static const ydk::Enum::YLeaf PIM;

};

class TrackIntfProtocolType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4_routing;
        static const ydk::Enum::YLeaf ipv6_routing;
        static const ydk::Enum::YLeaf line_protocol;

};

class MsdpOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf connecting;
        static const ydk::Enum::YLeaf listening;
        static const ydk::Enum::YLeaf established;

};

class L1AdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class L3CtxT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oob_mgmt;
        static const ydk::Enum::YLeaf inb_mgmt;
        static const ydk::Enum::YLeaf tenant;

};

class AdjacencyDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipv6;

};

class AaaKeyEncUserPass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf Encrypt;

};

class L3VrfGsdbCtxType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vrf;
        static const ydk::Enum::YLeaf if_;
        static const ydk::Enum::YLeaf table;
        static const ydk::Enum::YLeaf if_table;
        static const ydk::Enum::YLeaf if_list;
        static const ydk::Enum::YLeaf purge;
        static const ydk::Enum::YLeaf vpnid;
        static const ydk::Enum::YLeaf source_of_origin;
        static const ydk::Enum::YLeaf route_limits;

};

class PimBfdInstSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf none;

};

class ArpDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf supcache;

};

class ConftmplTemplateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf vrf;
        static const ydk::Enum::YLeaf vlan;
        static const ydk::Enum::YLeaf intf;

};

class L1Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf access;
        static const ydk::Enum::YLeaf trunk;
        static const ydk::Enum::YLeaf fex_fabric;
        static const ydk::Enum::YLeaf dot1q_tunnel;
        static const ydk::Enum::YLeaf promiscuous;
        static const ydk::Enum::YLeaf host;
        static const ydk::Enum::YLeaf trunk_secondary;
        static const ydk::Enum::YLeaf trunk_promiscuous;

};

class L2BridgeMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf mac;

};

class VpcOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf noCfg;

};

class ImMode100M : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};

class RtcomComT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf regular;
        static const ydk::Enum::YLeaf extended;

};

class L2DomMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf CE;
        static const ydk::Enum::YLeaf FabricPath;

};

class PlatformSwitchingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DEFAULT;
        static const ydk::Enum::YLeaf STORE_FORWARD;

};

class BgpAsnPropagation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf no_prepend;
        static const ydk::Enum::YLeaf replace_as;
        static const ydk::Enum::YLeaf dual_as;

};

class IpqosStatsState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class BgpDomOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class TelemetryCompression : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf gzip;

};

class BgpPfxSidAttrEntryType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf label_index;
        static const ydk::Enum::YLeaf ipv6_sid;
        static const ydk::Enum::YLeaf origin_srgb;

};

class EqptLedType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf status;
        static const ydk::Enum::YLeaf system;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf power;
        static const ydk::Enum::YLeaf battery;
        static const ydk::Enum::YLeaf lc_status;
        static const ydk::Enum::YLeaf sup_status;
        static const ydk::Enum::YLeaf fc_status;
        static const ydk::Enum::YLeaf fan_status;
        static const ydk::Enum::YLeaf pwr_status;

};

class PlatformFabricSpeed : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DEFAULT;
        static const ydk::Enum::YLeaf FABRIC_SPEED_40G;

};

class McastFiltMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf include;
        static const ydk::Enum::YLeaf exclude;

};

class NbmNbmGroupRangeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ASM;
        static const ydk::Enum::YLeaf SSM;

};

class StpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mst;
        static const ydk::Enum::YLeaf pvrst;

};

class AaaRuleAccessType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf read;
        static const ydk::Enum::YLeaf read_write;
        static const ydk::Enum::YLeaf command;

};

class SnmpPrivTypeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf des;
        static const ydk::Enum::YLeaf aes128;

};

class RtctrlRttPType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf import;
        static const ydk::Enum::YLeaf export_;

};

class OspfPassiveControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class ProcOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf intr_sleep;
        static const ydk::Enum::YLeaf stopped;
        static const ydk::Enum::YLeaf unintr_sleep;
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf dead;
        static const ydk::Enum::YLeaf defunct;

};

class NwAdminStIfStatPortUnreach : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class InstallerInstEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf yes;
        static const ydk::Enum::YLeaf no;

};

class BgpAsSegT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sequence;
        static const ydk::Enum::YLeaf set;

};

class DatetimeNTPPeerMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf symmetricActive;
        static const ydk::Enum::YLeaf symmetricPassive;
        static const ydk::Enum::YLeaf client;
        static const ydk::Enum::YLeaf server;
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf reservedControl;
        static const ydk::Enum::YLeaf reservedPrivate;

};

class VpcParamType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf type_1;
        static const ydk::Enum::YLeaf type_2;

};

class AaaBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

};

class AnalyticsCollVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v5;
        static const ydk::Enum::YLeaf v9;
        static const ydk::Enum::YLeaf cisco_v1;

};

class CoppIcmp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Undefined;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf unreachable;

};

class MonitorDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipep_resolve;

};

class IpqosBurstRateUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf bytes;
        static const ydk::Enum::YLeaf kbytes;
        static const ydk::Enum::YLeaf mbytes;
        static const ydk::Enum::YLeaf ms;
        static const ydk::Enum::YLeaf us;
        static const ydk::Enum::YLeaf packets;

};

class L1capSubj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf pc_namespace;
        static const ydk::Enum::YLeaf ethport;

};

class AggregateFabFwdMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf anycastgw;
        static const ydk::Enum::YLeaf proxygw;

};

class BgpRtCtrlDir : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class IpLoadShareFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf destPort;
        static const ydk::Enum::YLeaf srcDest;
        static const ydk::Enum::YLeaf srcDestGre;
        static const ydk::Enum::YLeaf srcDestPort;
        static const ydk::Enum::YLeaf source;
        static const ydk::Enum::YLeaf srcDestGTPU;

};

class AaaRealmDomainAuthRealm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf none;

};

class EqptSensorT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cpu;
        static const ydk::Enum::YLeaf inlet;
        static const ydk::Enum::YLeaf outlet;
        static const ydk::Enum::YLeaf hotswap;
        static const ydk::Enum::YLeaf dimm;
        static const ydk::Enum::YLeaf phy;
        static const ydk::Enum::YLeaf sfp;
        static const ydk::Enum::YLeaf qsfp;
        static const ydk::Enum::YLeaf asic;
        static const ydk::Enum::YLeaf pch;
        static const ydk::Enum::YLeaf cpu_crm;
        static const ydk::Enum::YLeaf asic_vrm;
        static const ydk::Enum::YLeaf x86;
        static const ydk::Enum::YLeaf arm;
        static const ydk::Enum::YLeaf die;

};

class SysmgrSupSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf hot_stdby;
        static const ydk::Enum::YLeaf cold_stdby;
        static const ydk::Enum::YLeaf offline;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf non_dis_upg;

};

class L1LinkLog : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class L1EEEState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf disagreed;
        static const ydk::Enum::YLeaf not_applicable;

};

class EthpmTrunkStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf trunking;
        static const ydk::Enum::YLeaf fabricpath;
        static const ydk::Enum::YLeaf not_trunking;
        static const ydk::Enum::YLeaf trunk_bundle;
        static const ydk::Enum::YLeaf fabric_bundle;
        static const ydk::Enum::YLeaf no_trunk_bundle;

};

class StpPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_4096;
        static const ydk::Enum::YLeaf Y_8192;
        static const ydk::Enum::YLeaf Y_12288;
        static const ydk::Enum::YLeaf Y_16384;
        static const ydk::Enum::YLeaf Y_20480;
        static const ydk::Enum::YLeaf Y_24576;
        static const ydk::Enum::YLeaf Y_28672;
        static const ydk::Enum::YLeaf Y_32768;
        static const ydk::Enum::YLeaf Y_36864;
        static const ydk::Enum::YLeaf Y_40960;
        static const ydk::Enum::YLeaf Y_45056;
        static const ydk::Enum::YLeaf Y_49152;
        static const ydk::Enum::YLeaf Y_53248;
        static const ydk::Enum::YLeaf Y_57344;
        static const ydk::Enum::YLeaf Y_61440;

};

class IpAddrOperStQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf subnet_overlap;
        static const ydk::Enum::YLeaf no_primary;
        static const ydk::Enum::YLeaf if_down;
        static const ydk::Enum::YLeaf addr_exists;
        static const ydk::Enum::YLeaf invalid_vrf;
        static const ydk::Enum::YLeaf static_rt_nh;
        static const ydk::Enum::YLeaf lb_addr;
        static const ydk::Enum::YLeaf invalid_ll_use;
        static const ydk::Enum::YLeaf no_glbl_addr;
        static const ydk::Enum::YLeaf no_ll_addr;
        static const ydk::Enum::YLeaf dad_in_progress;
        static const ydk::Enum::YLeaf dad_failed;
        static const ydk::Enum::YLeaf invalid_mask_len;
        static const ydk::Enum::YLeaf l2_intf_err;
        static const ydk::Enum::YLeaf super_intf_err;
        static const ydk::Enum::YLeaf invalid_ll;
        static const ydk::Enum::YLeaf if_init_err;
        static const ydk::Enum::YLeaf ifindex_err;
        static const ydk::Enum::YLeaf invalid_eui64;
        static const ydk::Enum::YLeaf lladdr_create_fail;
        static const ydk::Enum::YLeaf DAD_tentative;
        static const ydk::Enum::YLeaf DAD_lcl_duplicate;
        static const ydk::Enum::YLeaf DAD_duplicate;
        static const ydk::Enum::YLeaf DAD_preferred;
        static const ydk::Enum::YLeaf DAD_deprecated;
        static const ydk::Enum::YLeaf DAD_invalid;
        static const ydk::Enum::YLeaf multiple_lladdr;
        static const ydk::Enum::YLeaf invalid_tunnel;
        static const ydk::Enum::YLeaf lladdr_invalid_tunnel;

};

class SnmpPrivType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf des;
        static const ydk::Enum::YLeaf aes_128;

};

class NpvExtIfFsmSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_transition;
        static const ydk::Enum::YLeaf no_change;
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf preinit_done;
        static const ydk::Enum::YLeaf wait_flogi_response;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf flogi_failed;
        static const ydk::Enum::YLeaf wait_fcid_add;
        static const ydk::Enum::YLeaf wait_fcid_del;
        static const ydk::Enum::YLeaf wait_ns_registration;
        static const ydk::Enum::YLeaf flogi_fail_retry;
        static const ydk::Enum::YLeaf wait_for_vsan_up;
        static const ydk::Enum::YLeaf wait_lc_port_config;
        static const ydk::Enum::YLeaf pc_member_add;
        static const ydk::Enum::YLeaf pc_member_del;

};

class BfdTrkMbrLnk : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class OspfAdjOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf attempt;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf two_way;
        static const ydk::Enum::YLeaf exstart;
        static const ydk::Enum::YLeaf exchange;
        static const ydk::Enum::YLeaf loading;
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf self;

};

class FvImmediacy_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf lazy;

};

class AaaKeyEncTacacsPlusProviderKeyEnc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;
        static const ydk::Enum::YLeaf inherit_from_global;

};

class OspfBwRefUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mbps;
        static const ydk::Enum::YLeaf gbps;

};

class InbandTelemetryModeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbandtelemetry;

};

class IsisHelloPadT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf transient;
        static const ydk::Enum::YLeaf never;

};

class TunnelifTunnelMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gre__FWD_SLASH__ip;
        static const ydk::Enum::YLeaf gre__FWD_SLASH__ipv6;
        static const ydk::Enum::YLeaf ipip__FWD_SLASH__ip;
        static const ydk::Enum::YLeaf ipip__FWD_SLASH__ipv6;
        static const ydk::Enum::YLeaf ipip__FWD_SLASH__dcapany__FWD_SLASH__ip;
        static const ydk::Enum::YLeaf ipip__FWD_SLASH__dcapany__FWD_SLASH__ipv6;
        static const ydk::Enum::YLeaf ipv6ip;
        static const ydk::Enum::YLeaf ipv6ip__FWD_SLASH__dcapany;
        static const ydk::Enum::YLeaf ipv6ipv6;
        static const ydk::Enum::YLeaf ipv6ipv6__FWD_SLASH__dcapany;

};

class RtdmcDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rp;
        static const ydk::Enum::YLeaf grange;
        static const ydk::Enum::YLeaf route;
        static const ydk::Enum::YLeaf dynrpsrc;
        static const ydk::Enum::YLeaf gstats;
        static const ydk::Enum::YLeaf vrf;
        static const ydk::Enum::YLeaf ifrec;
        static const ydk::Enum::YLeaf grpoif;
        static const ydk::Enum::YLeaf group;
        static const ydk::Enum::YLeaf ifstats;
        static const ydk::Enum::YLeaf peer;

};

class NdRouterPreference : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Medium;
        static const ydk::Enum::YLeaf High;
        static const ydk::Enum::YLeaf Reserved;
        static const ydk::Enum::YLeaf Low;

};

class BgpEgressPeerEng : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf enabled_adj_sid;

};

class TopNodeRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unsupported;
        static const ydk::Enum::YLeaf controller;
        static const ydk::Enum::YLeaf leaf;
        static const ydk::Enum::YLeaf spine;
        static const ydk::Enum::YLeaf vleaf;
        static const ydk::Enum::YLeaf vip;
        static const ydk::Enum::YLeaf protection_chain;

};

class SviMedium : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bcast;
        static const ydk::Enum::YLeaf p2p;

};

class TunnelifTunnelPMTUD : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class PlatformBufferMonitorSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Enable;
        static const ydk::Enum::YLeaf Disable;

};

class InstallerInstModType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nxos_supervisor;
        static const ydk::Enum::YLeaf lc;
        static const ydk::Enum::YLeaf fex;
        static const ydk::Enum::YLeaf bios;
        static const ydk::Enum::YLeaf lcn9k;
        static const ydk::Enum::YLeaf unknown;

};

class SisfSecurityLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf glean;
        static const ydk::Enum::YLeaf inspect;
        static const ydk::Enum::YLeaf guard;

};

class SisfDhcpflag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;

};

class PlatformInfraVlanForce : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Disable;
        static const ydk::Enum::YLeaf Enable;

};

class SnmpSmplType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf delta;

};

class AnalyticsDefPolicyT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf deny;

};

class SpanDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipep_resolve;

};

class VrrpGroupSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf backup;
        static const ydk::Enum::YLeaf master;

};

class EthpmSyslogInfo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf info_1;

};

class VsanLbType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf src_dst_id;
        static const ydk::Enum::YLeaf src_dst_ox_id;

};

class OspfLsaLeakOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Inactive;
        static const ydk::Enum::YLeaf active;

};

class L1PortTypeFabric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

};

class RtleakCtrl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf withdraw;

};

class PcOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf bringup_in_progress;
        static const ydk::Enum::YLeaf module_removed;

};

class AaaKeyEncRadiusProviderKeyEnc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;
        static const ydk::Enum::YLeaf inherit_from_global;

};

class TelemetryEncoding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf GPB;
        static const ydk::Enum::YLeaf JSON;
        static const ydk::Enum::YLeaf XML;

};

class CoppRdrct : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Undefined;
        static const ydk::Enum::YLeaf arp_inspect;
        static const ydk::Enum::YLeaf dhcp_snoop;

};

class EqptMemT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unk;
        static const ydk::Enum::YLeaf dimm;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf sprom;

};

class CapRaiseFaultState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nominal;
        static const ydk::Enum::YLeaf ruleHasLess;
        static const ydk::Enum::YLeaf ruleHasMore;

};

class BgpPeerType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ibgp;
        static const ydk::Enum::YLeaf ebgp;

};

class PlatformRoutingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DEFAULT;
        static const ydk::Enum::YLeaf NON_HIER_DEFAULT;
        static const ydk::Enum::YLeaf NON_HIER_MAX_L3;
        static const ydk::Enum::YLeaf MAX_HOST;
        static const ydk::Enum::YLeaf TOR_MAX_L3;
        static const ydk::Enum::YLeaf DEFAULT_64B;
        static const ydk::Enum::YLeaf NON_HIER_MAX_L3_64B;
        static const ydk::Enum::YLeaf TOR_MAX_L3_64B;
        static const ydk::Enum::YLeaf TOR_MAX_L2;
        static const ydk::Enum::YLeaf TOR_MAX_L2L3;
        static const ydk::Enum::YLeaf TOR_TEMPLATE_OVL_HOST_SCALE;
        static const ydk::Enum::YLeaf TEMPLATE_LPM_HEAVY;
        static const ydk::Enum::YLeaf TOR_TEMPLATE_LPM_SCALE_V6_64;
        static const ydk::Enum::YLeaf TOR_TEMPLATE_DUAL_STACK_HOST_SCALE;
        static const ydk::Enum::YLeaf TEMPLATE_DYNAMIC_TRIE_SCALE;
        static const ydk::Enum::YLeaf TEMPLATE_MULTICAST_HEAVY;
        static const ydk::Enum::YLeaf TEMPLATE_VXLAN_SCALE;
        static const ydk::Enum::YLeaf TEMPLATE_MPLS_SCALE;
        static const ydk::Enum::YLeaf TEMPLATE_IPV6_LPM_HEAVY;

};

class IpqosRateUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf bps;
        static const ydk::Enum::YLeaf kbps;
        static const ydk::Enum::YLeaf mbps;
        static const ydk::Enum::YLeaf gbps;
        static const ydk::Enum::YLeaf pps;
        static const ydk::Enum::YLeaf pct;

};

class MplsOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class NbmNbmPermit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UNDEFINED;
        static const ydk::Enum::YLeaf DENIED;
        static const ydk::Enum::YLeaf ALLOWED;

};

class FmInstOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled_not_running;

};

class PimIfdbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stats;
        static const ydk::Enum::YLeaf adj;
        static const ydk::Enum::YLeaf prop;

};

class L2CreateState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf created;
        static const ydk::Enum::YLeaf removed;
        static const ydk::Enum::YLeaf deleted_and_stale;

};

class VpcTosType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

};

class IpmcVer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf Y_2;
        static const ydk::Enum::YLeaf Y_3;

};

class NbmNbmEndpointRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UNKNOWN;
        static const ydk::Enum::YLeaf ARP;
        static const ydk::Enum::YLeaf RECEIVER;
        static const ydk::Enum::YLeaf RECEIVER_ARP;
        static const ydk::Enum::YLeaf SENDER;
        static const ydk::Enum::YLeaf SENDER_ARP;
        static const ydk::Enum::YLeaf SENDER_RECEIVER;
        static const ydk::Enum::YLeaf SENDER_RECEIVER_ARP;

};

class SisfNdpflag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;

};

class AggregateCtrlrType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf l2_vxlan;
        static const ydk::Enum::YLeaf vxlan;

};

class RtdmcBfdOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf rem_pend;
        static const ydk::Enum::YLeaf up;

};

class SrteEncapsulationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;

};

class FmOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class L1Beacon : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;

};

class BgpPmsiTunType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ingress_repl;

};

class AaaClear : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

};

class RegressEnumT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf val1;
        static const ydk::Enum::YLeaf val2;
        static const ydk::Enum::YLeaf val3;

};

class EqptVSrc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf Y_110v;
        static const ydk::Enum::YLeaf Y_220v;

};

class AggregateConfTmplStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf failed;

};

class RibDomOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down_pending;
        static const ydk::Enum::YLeaf purged;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf del_pending;
        static const ydk::Enum::YLeaf deleted;

};

class IpqosProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf arp;
        static const ydk::Enum::YLeaf bridging;
        static const ydk::Enum::YLeaf cdp;
        static const ydk::Enum::YLeaf dhcp;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf fcoe;

};

class BfdAfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class AaaRadSrvUseType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Auth;
        static const ydk::Enum::YLeaf Author;
        static const ydk::Enum::YLeaf Acc;
        static const ydk::Enum::YLeaf All;

};

class OspfBfdOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class StpPathcostOp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf short_;
        static const ydk::Enum::YLeaf long_;

};

class EqptSlotT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf supslot;
        static const ydk::Enum::YLeaf lcslot;
        static const ydk::Enum::YLeaf fcslot;
        static const ydk::Enum::YLeaf scslot;
        static const ydk::Enum::YLeaf extchslot;
        static const ydk::Enum::YLeaf psuslot;
        static const ydk::Enum::YLeaf fantray;
        static const ydk::Enum::YLeaf bslot;
        static const ydk::Enum::YLeaf nslot;

};

class L1TxT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf LL;
        static const ydk::Enum::YLeaf SN;
        static const ydk::Enum::YLeaf LC;
        static const ydk::Enum::YLeaf EL;
        static const ydk::Enum::YLeaf Y_10GBASE_SR;
        static const ydk::Enum::YLeaf Y_10GBASE_LR;
        static const ydk::Enum::YLeaf Y_10GBASE_ER;
        static const ydk::Enum::YLeaf Y_10GBASE_LX4;
        static const ydk::Enum::YLeaf Y_10GBASE_SW;
        static const ydk::Enum::YLeaf Y_10GBASE_LW;
        static const ydk::Enum::YLeaf Y_10GBASE_EW;

};

class ArpEventLogSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf small;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf large;

};

class VpcRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf election_not_done;
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf slave;

};

class McpOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class RtdmcAdjOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf inactive;

};

class BgpPeerGrSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf na;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf up;

};

class BgpAdvertL2vpnEvpn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class MribEhType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf mdt;
        static const ydk::Enum::YLeaf mfdmDebugs;
        static const ydk::Enum::YLeaf mfdmEvents;
        static const ydk::Enum::YLeaf mfdmStats;
        static const ydk::Enum::YLeaf notyClients;
        static const ydk::Enum::YLeaf rib;
        static const ydk::Enum::YLeaf ribSum;
        static const ydk::Enum::YLeaf urib;
        static const ydk::Enum::YLeaf vrf;
        static const ydk::Enum::YLeaf nbm;

};

class AaaProviderState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf operable;
        static const ydk::Enum::YLeaf inoperable;

};

class AclActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf divert;
        static const ydk::Enum::YLeaf redirect;

};

class MonitorErSpanVer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ver2;
        static const ydk::Enum::YLeaf ver3;

};

class StpVpcState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf vPCPeerlink;
        static const ydk::Enum::YLeaf vPC;

};

class DhcpClIfOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf discover;
        static const ydk::Enum::YLeaf requesting;
        static const ydk::Enum::YLeaf addr_rcvd;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf request_timedout;
        static const ydk::Enum::YLeaf down;

};

class NgoamXcPortState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf errDisabled;

};

class AaaPwdPolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class TunnelEncapT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf vxlan;
        static const ydk::Enum::YLeaf ivxlan;
        static const ydk::Enum::YLeaf nvgre;

};

class OspfVrfLiteControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf l3vpn;
        static const ydk::Enum::YLeaf evpn;

};

class PlatformPcLbAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PC_LB_ALGO_DLB;
        static const ydk::Enum::YLeaf PC_LB_ALGO_RTAG7;
        static const ydk::Enum::YLeaf PC_LB_ALGO_RTAG7_MURMUR;
        static const ydk::Enum::YLeaf PC_LB_ALGO_RTAG7_LOCAL_CRC;
        static const ydk::Enum::YLeaf PC_LB_ALGO_DYNAMIC_PIN;

};

class NdDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf adj;

};

class BgpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fabric;
        static const ydk::Enum::YLeaf external;

};

class RtmapAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class BfdOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf up;

};

class CoppMatchT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Undefined;
        static const ydk::Enum::YLeaf access_group;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf exception;
        static const ydk::Enum::YLeaf protocol;

};

class TunnelifTunnelOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf del_on_fail;
        static const ydk::Enum::YLeaf usr_cfg_mtu;

};

class IsisMetricStyle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf narrow;
        static const ydk::Enum::YLeaf wide;
        static const ydk::Enum::YLeaf transition;

};

class QosTenantPrio : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf level3;
        static const ydk::Enum::YLeaf level2;
        static const ydk::Enum::YLeaf level1;

};

class RtmapRouteT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf ospf_inter_area;
        static const ydk::Enum::YLeaf ospf_intra_area;
        static const ydk::Enum::YLeaf isis_l1;
        static const ydk::Enum::YLeaf isis_l2;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf ospf_nssa_external;
        static const ydk::Enum::YLeaf ospf_type1;
        static const ydk::Enum::YLeaf ospf_type2;

};

class PcPortChannelType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;

};

class NbmNbmFlowOperEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NOOP;
        static const ydk::Enum::YLeaf ROUTE_ADD;
        static const ydk::Enum::YLeaf ROUTE_DEL;
        static const ydk::Enum::YLeaf UPD_ADD_OIF;
        static const ydk::Enum::YLeaf UPD_DEL_OIF;
        static const ydk::Enum::YLeaf LOC_ADD_OIF;
        static const ydk::Enum::YLeaf LOC_DEL_OIF;
        static const ydk::Enum::YLeaf UPD_IIF;
        static const ydk::Enum::YLeaf DENY_POLICY_SRC;
        static const ydk::Enum::YLeaf SRC_DISCOVERY;
        static const ydk::Enum::YLeaf SRC_DISC_STOP;
        static const ydk::Enum::YLeaf Y_11;
        static const ydk::Enum::YLeaf Y_12;
        static const ydk::Enum::YLeaf Y_13_UNUSED;
        static const ydk::Enum::YLeaf Y_14;
        static const ydk::Enum::YLeaf ALLOW_POLICY_SRC;
        static const ydk::Enum::YLeaf DENY_POLICY_RCV;
        static const ydk::Enum::YLeaf ALLOW_POLICY_RCV;
        static const ydk::Enum::YLeaf Y_18;
        static const ydk::Enum::YLeaf Y_19;
        static const ydk::Enum::YLeaf Y_20;

};

class NvoMultisiteIngReplStateT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class McastfwdEhType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf packet;
        static const ydk::Enum::YLeaf vrf;
        static const ydk::Enum::YLeaf l2;

};

class MonTransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf tls;

};

class NpvSrvIfFsmSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_transition;
        static const ydk::Enum::YLeaf no_change;
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf if_down;
        static const ydk::Enum::YLeaf wait_ext_if;
        static const ydk::Enum::YLeaf wait_flogi;
        static const ydk::Enum::YLeaf if_up;
        static const ydk::Enum::YLeaf flogi_cleanup;
        static const ydk::Enum::YLeaf wait_fc_add;
        static const ydk::Enum::YLeaf wait_fc_del;
        static const ydk::Enum::YLeaf wait_ext_if_stable;

};

class SysmgrSupT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

};

class IsisOverloadAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf always_on;
        static const ydk::Enum::YLeaf bootup;
        static const ydk::Enum::YLeaf bgp_converge;
        static const ydk::Enum::YLeaf bgp_converge_max_wait;

};

class AggregateIngressRepProtocolType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf bgp;

};

class MsdpEhType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf events;
        static const ydk::Enum::YLeaf msdpInternal;
        static const ydk::Enum::YLeaf routes;
        static const ydk::Enum::YLeaf tcp;

};

class BgpLsNlriType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf ipv4_topo;
        static const ydk::Enum::YLeaf ipv6_topo;

};

class RtmapSetCriteria : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf append;
        static const ydk::Enum::YLeaf replace;
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf pre_bestpath;

};

class EqptSensorOpSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fail;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf absent;
        static const ydk::Enum::YLeaf bad_asic;

};

class SpanOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf partial;

};

class BgpLsAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf active;

};

class BgpPwdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_3;
        static const ydk::Enum::YLeaf Y_7;
        static const ydk::Enum::YLeaf LINE;

};

class SisfRaGuardManagedConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf nocheck;

};

class BgpShutStQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf admin;
        static const ydk::Enum::YLeaf no_mem;
        static const ydk::Enum::YLeaf exceeded_pfxlimit;
        static const ydk::Enum::YLeaf admin_up;
        static const ydk::Enum::YLeaf no_affinity;

};

class AnalyticsDirectionT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;
        static const ydk::Enum::YLeaf both;

};

class TunnelAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class QospOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class StpPortState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf discarding;
        static const ydk::Enum::YLeaf learning;
        static const ydk::Enum::YLeaf forwarding;
        static const ydk::Enum::YLeaf disabled;

};

class BgpLsProtoId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf isis_l1;
        static const ydk::Enum::YLeaf isis_l2;
        static const ydk::Enum::YLeaf ospf_v2;
        static const ydk::Enum::YLeaf direct;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf ospf_v3;
        static const ydk::Enum::YLeaf epe;

};

class FsetOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf installed;
        static const ydk::Enum::YLeaf uninstalled;

};

class DatetimeProvT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peer;
        static const ydk::Enum::YLeaf server;
        static const ydk::Enum::YLeaf invalid;

};

class GoldResult : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf untested;
        static const ydk::Enum::YLeaf failure;
        static const ydk::Enum::YLeaf not_complete;
        static const ydk::Enum::YLeaf aborted;
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf error_disabled;
        static const ydk::Enum::YLeaf error_ignore;
        static const ydk::Enum::YLeaf error_disabled_w_no;
        static const ydk::Enum::YLeaf unavailable;

};

class NwAdminStProcessStatNullBcast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CoppMatchOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf MatchAny;
        static const ydk::Enum::YLeaf MatchAll;

};

class OspfAreaT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf regular;
        static const ydk::Enum::YLeaf stub;
        static const ydk::Enum::YLeaf nssa;

};

class ActrlDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf uni_dir;
        static const ydk::Enum::YLeaf bi_dir;

};

class IpmcsnoopFwdMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf mac;

};

class L1Module : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lc;
        static const ydk::Enum::YLeaf sup;

};

class AdjacencyAdjOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf incomplete;
        static const ydk::Enum::YLeaf normal;

};

class NvoMultisiteTrackingT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf dci;
        static const ydk::Enum::YLeaf fabric;

};

class L2fmLearning : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class StpAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class AggregateResourceStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf vlanCreated;
        static const ydk::Enum::YLeaf vlanFailed;
        static const ydk::Enum::YLeaf vnidCreated;
        static const ydk::Enum::YLeaf vnidFailed;
        static const ydk::Enum::YLeaf vlansCarved;
        static const ydk::Enum::YLeaf vlansNotCarved;
        static const ydk::Enum::YLeaf vnidCreationReceived;
        static const ydk::Enum::YLeaf myTEPIPPublished;
        static const ydk::Enum::YLeaf controllerIntfNotCarved;
        static const ydk::Enum::YLeaf controllerIntfCarved;

};

class EqptcapXcvrT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf gbic;
        static const ydk::Enum::YLeaf solder;
        static const ydk::Enum::YLeaf sfp;
        static const ydk::Enum::YLeaf xbi;
        static const ydk::Enum::YLeaf xenpak;
        static const ydk::Enum::YLeaf xfp;
        static const ydk::Enum::YLeaf xff;
        static const ydk::Enum::YLeaf xfp_e;
        static const ydk::Enum::YLeaf xpak;
        static const ydk::Enum::YLeaf x2;
        static const ydk::Enum::YLeaf dwdm_sfp;
        static const ydk::Enum::YLeaf qsfp;

};

class ImBreakoutMapT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_breakout;
        static const ydk::Enum::YLeaf Y_10g_4x;
        static const ydk::Enum::YLeaf Y_10g_2x;
        static const ydk::Enum::YLeaf Y_25g_4x;
        static const ydk::Enum::YLeaf Y_50g_2x;

};

class IpSwitchPktTarget : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf lla;

};

class InstallerStage : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf preupg_copy_image;
        static const ydk::Enum::YLeaf preupg_initializing;
        static const ydk::Enum::YLeaf preupg_verifying_images;
        static const ydk::Enum::YLeaf preupg_runtime_check;
        static const ydk::Enum::YLeaf preupg_sync_image;
        static const ydk::Enum::YLeaf upgrade_upg_fex;
        static const ydk::Enum::YLeaf upgrade_upg_lc;
        static const ydk::Enum::YLeaf preupg_conf_sync;
        static const ydk::Enum::YLeaf preupg_set_boot;
        static const ydk::Enum::YLeaf preupg_force_dnld;
        static const ydk::Enum::YLeaf preupg_wait_mod;
        static const ydk::Enum::YLeaf preupg_convert_startup;
        static const ydk::Enum::YLeaf preupg_save_sup_state;
        static const ydk::Enum::YLeaf upgrade_kexec;
        static const ydk::Enum::YLeaf preupg_pre_upg_notif;
        static const ydk::Enum::YLeaf preupg_mod_support_check;
        static const ydk::Enum::YLeaf preupg_Checks;
        static const ydk::Enum::YLeaf upgrade_upg_bios;
        static const ydk::Enum::YLeaf upgrade_upg_cmp;
        static const ydk::Enum::YLeaf upgrade_notification;
        static const ydk::Enum::YLeaf preupg_save_mts_state;
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf not_started;
        static const ydk::Enum::YLeaf upgrade_sup_state_verification;
        static const ydk::Enum::YLeaf upgrade_switchover_notif;
        static const ydk::Enum::YLeaf upgrade_standby_container_start;
        static const ydk::Enum::YLeaf user_abort;

};

class OspfIfType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf loopback;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf p2mp;
        static const ydk::Enum::YLeaf nbma;
        static const ydk::Enum::YLeaf bcast;

};

class NwEntOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf failed;

};

class PlatformLatencyMonitorSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Enable;
        static const ydk::Enum::YLeaf Disable;

};

class QospECN : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};

class NgoamOamChannel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf tissa;

};

class TunnelifTunnelOperStQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf initing;
        static const ydk::Enum::YLeaf incomp_conf;
        static const ydk::Enum::YLeaf dup_conf;
        static const ydk::Enum::YLeaf no_mode;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf src_down;
        static const ydk::Enum::YLeaf src_unres;
        static const ydk::Enum::YLeaf no_dest;
        static const ydk::Enum::YLeaf desip_unres;
        static const ydk::Enum::YLeaf dest_unreach;
        static const ydk::Enum::YLeaf vrf_mismatch;
        static const ydk::Enum::YLeaf vrf_fwdref;
        static const ydk::Enum::YLeaf vrf_down;
        static const ydk::Enum::YLeaf mtu_error;
        static const ydk::Enum::YLeaf hwprog_fail;
        static const ydk::Enum::YLeaf no_src;

};

class AggregateIntfAssignMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dedicated;
        static const ydk::Enum::YLeaf shared;

};

class Icmpv6EventType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf errors;
        static const ydk::Enum::YLeaf highAvailability;
        static const ydk::Enum::YLeaf icmpv6_internal;
        static const ydk::Enum::YLeaf ipv6SyncEvent;
        static const ydk::Enum::YLeaf mldDebug;
        static const ydk::Enum::YLeaf mldEvent;
        static const ydk::Enum::YLeaf nd;
        static const ydk::Enum::YLeaf sync_event;
        static const ydk::Enum::YLeaf vrf;

};

class GoldBootLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bypass;
        static const ydk::Enum::YLeaf complete;

};

class EqptPoweroffSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

};

class SwpkgsPackageActionResult : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf not_available;

};

class NvoCfgSrcT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf controller;

};

class NbmNbmBwUnitEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UNSPECIFIED;
        static const ydk::Enum::YLeaf KBPS;
        static const ydk::Enum::YLeaf MBPS;
        static const ydk::Enum::YLeaf GBPS;

};

class VrrpAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};

class StpBPDUGuard : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class EqptAdSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class L1Layer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Layer2;
        static const ydk::Enum::YLeaf Layer3;

};

class ScrtchpdAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf create;
        static const ydk::Enum::YLeaf delete_;

};

class IpqosQueueLimitUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf packets;
        static const ydk::Enum::YLeaf bytes;
        static const ydk::Enum::YLeaf kbytes;
        static const ydk::Enum::YLeaf mbytes;
        static const ydk::Enum::YLeaf gbytes;
        static const ydk::Enum::YLeaf ms;
        static const ydk::Enum::YLeaf us;
        static const ydk::Enum::YLeaf perc;

};

class AnalyticsCModeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aci;
        static const ydk::Enum::YLeaf standalone;

};

class TestOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fail;
        static const ydk::Enum::YLeaf indeterminate;
        static const ydk::Enum::YLeaf interrupted;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf not_supp;
        static const ydk::Enum::YLeaf not_acc;
        static const ydk::Enum::YLeaf pass;
        static const ydk::Enum::YLeaf not_tested;

};

class BgpOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf incomplete;

};

class GoldModuleDiagStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fail;
        static const ydk::Enum::YLeaf pass;
        static const ydk::Enum::YLeaf untested;

};

class NvoSuppressARPT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class EpmDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ep;

};

class LldpAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class IpqosThreshUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf packets;
        static const ydk::Enum::YLeaf bytes;
        static const ydk::Enum::YLeaf kbytes;
        static const ydk::Enum::YLeaf mbytes;

};

class OspfEventLogSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf small;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf large;

};

class NbmNbmPolicyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf SENDER;
        static const ydk::Enum::YLeaf RECEIVER;
        static const ydk::Enum::YLeaf PIM;

};

class NgoamXcState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Active;
        static const ydk::Enum::YLeaf DB;
        static const ydk::Enum::YLeaf HB;
        static const ydk::Enum::YLeaf RD;
        static const ydk::Enum::YLeaf LD;
        static const ydk::Enum::YLeaf DB__FWD_SLASH__HB;
        static const ydk::Enum::YLeaf RD__FWD_SLASH__HB;
        static const ydk::Enum::YLeaf DB__FWD_SLASH__HB__FWD_SLASH__RD;
        static const ydk::Enum::YLeaf DB__FWD_SLASH__LD;
        static const ydk::Enum::YLeaf HB__FWD_SLASH__LD;
        static const ydk::Enum::YLeaf DB__FWD_SLASH__HB__FWD_SLASH__LD;
        static const ydk::Enum::YLeaf RD__FWD_SLASH__LD;
        static const ydk::Enum::YLeaf DB__FWD_SLASH__RD__FWD_SLASH__LD;
        static const ydk::Enum::YLeaf HB__FWD_SLASH__RD__FWD_SLASH__LD;
        static const ydk::Enum::YLeaf DB__FWD_SLASH__HB__FWD_SLASH__RD__FWD_SLASH__LD;

};

class SwpkgsOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf activated;
        static const ydk::Enum::YLeaf deactivated;
        static const ydk::Enum::YLeaf committed;

};

class NwAdminStIfStatDirectBcast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CompInstType_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf phys;
        static const ydk::Enum::YLeaf virt;
        static const ydk::Enum::YLeaf hv;

};

class BgpStReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf no_mem;

};

class OpflexHbStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf invalid_dvs;
        static const ydk::Enum::YLeaf valid_dvs;

};

class AclHttpOptionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf get;
        static const ydk::Enum::YLeaf put;
        static const ydk::Enum::YLeaf head;
        static const ydk::Enum::YLeaf post;
        static const ydk::Enum::YLeaf delete_;
        static const ydk::Enum::YLeaf trace;
        static const ydk::Enum::YLeaf connect;
        static const ydk::Enum::YLeaf invalid;

};

class BgpBmpSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class RtleakRtCtrlDir : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class IpmcsnoopMrouteType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf fabpath;
        static const ydk::Enum::YLeaf vpc;
        static const ydk::Enum::YLeaf coLearned;
        static const ydk::Enum::YLeaf peerLearned;
        static const ydk::Enum::YLeaf userConf;

};

class L1EEELatency : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf variable;
        static const ydk::Enum::YLeaf constant;

};

class VpcPeerSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noCfg;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class NwAdminStIfStatLocalProxyArp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class RtdmcBfdInstSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf none;

};

class IpmcsnoopMacType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y__STAR__;
        static const ydk::Enum::YLeaf G;
        static const ydk::Enum::YLeaf R;
        static const ydk::Enum::YLeaf O;
        static const ydk::Enum::YLeaf IGMP;

};

class SysmgrFwT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bios;
        static const ydk::Enum::YLeaf kickstart;
        static const ydk::Enum::YLeaf system;

};

class IpqosPoliceAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf set_cos_transmit;
        static const ydk::Enum::YLeaf set_dscp_transmit;
        static const ydk::Enum::YLeaf set_prec_transmit;
        static const ydk::Enum::YLeaf set_qos_transmit;

};

class PkiCsyncElementType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exclude;
        static const ydk::Enum::YLeaf include;

};

class L2DomAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf suspend;
        static const ydk::Enum::YLeaf active;

};

class AggregateVpcOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class EqptPwrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf multi_boot_fail;

};

class NvoHostLearnModeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DP;
        static const ydk::Enum::YLeaf CP;
        static const ydk::Enum::YLeaf Ctrlr;

};

class AggregateOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class OpflexEppDownloadHint : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf optimal;

};

class SnmpLogEnableType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

};

class IsisPassiveIntfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l1;
        static const ydk::Enum::YLeaf l2;
        static const ydk::Enum::YLeaf l12;
        static const ydk::Enum::YLeaf inherit;

};

class SysmgrOperDataMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf publish;
        static const ydk::Enum::YLeaf done;

};

class NdVaddrClientState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ICMPV6_CLIENT_STATE_INACTIVE;
        static const ydk::Enum::YLeaf ICMPV6_CLIENT_STATE_ACTIVE;
        static const ydk::Enum::YLeaf ICMPV6_CLIENT_STATE_ANYCAST_INACTIVE;

};

class PlatformPoweroffSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

};

class OspfSegRtControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf disable;

};

class ProcCpuHistoryDurationName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf last60seconds;

};

class OspfDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ls;
        static const ydk::Enum::YLeaf rt;
        static const ydk::Enum::YLeaf nh;

};

class BdDefaultSVIAutoState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class RtmapOriginT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf incomplete;

};

class DatetimeAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class EqptArchCPUArch : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf x86_32;
        static const ydk::Enum::YLeaf x86_64;
        static const ydk::Enum::YLeaf any;

};

class MsdpAuthT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf md5;

};

class RtmapAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class RtmapPrecName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf routine;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;

};

class AaaKeyEnc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class NvoHostReachT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Flood_and_learn;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf controller;
        static const ydk::Enum::YLeaf openflow;
        static const ydk::Enum::YLeaf openflowIR;

};

class SviOperStQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf admin_shut;
        static const ydk::Enum::YLeaf no_vlan;
        static const ydk::Enum::YLeaf bad_vlan_t;
        static const ydk::Enum::YLeaf vlan_down;
        static const ydk::Enum::YLeaf hwprog_flfm;
        static const ydk::Enum::YLeaf hwprog_fles;
        static const ydk::Enum::YLeaf oos;
        static const ydk::Enum::YLeaf reinit;
        static const ydk::Enum::YLeaf mtuprog_fail;
        static const ydk::Enum::YLeaf vrf_unusable;
        static const ydk::Enum::YLeaf l2st_change;
        static const ydk::Enum::YLeaf suspended;
        static const ydk::Enum::YLeaf macalloc_fail;
        static const ydk::Enum::YLeaf nonrouted_vdc;
        static const ydk::Enum::YLeaf int_vlan_create_fail;
        static const ydk::Enum::YLeaf inbMgmt_cfg_fail;

};

class SyslogSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emergencies;
        static const ydk::Enum::YLeaf alerts;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf errors;
        static const ydk::Enum::YLeaf warnings;
        static const ydk::Enum::YLeaf notifications;
        static const ydk::Enum::YLeaf information;
        static const ydk::Enum::YLeaf debugging;

};

class L1BufferBoost : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class BfdDiagCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf detect_timeout;
        static const ydk::Enum::YLeaf echo_fail;
        static const ydk::Enum::YLeaf nbr_signal_down;
        static const ydk::Enum::YLeaf fwd_plane_reset;
        static const ydk::Enum::YLeaf path_down;
        static const ydk::Enum::YLeaf concat_path_down;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf rev_concat_path_down;

};

class TunnelOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class PlatformHwProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Default;
        static const ydk::Enum::YLeaf QS_PORT_MODE_64X10G;
        static const ydk::Enum::YLeaf QS_PORT_MODE_48X10G_4X40G;
        static const ydk::Enum::YLeaf QS_PORT_MODE_52X10G_3X40g;
        static const ydk::Enum::YLeaf QS_PORT_MODE_56X10G_2X40G;
        static const ydk::Enum::YLeaf QS_PORT_MODE_60X10G_1X40G;
        static const ydk::Enum::YLeaf QS_PORT_MODE;
        static const ydk::Enum::YLeaf QG_PORT_MODE_32X10G_8X40G;
        static const ydk::Enum::YLeaf QG_PORT_MODE_16X40G;
        static const ydk::Enum::YLeaf QG_PORT_MODE_16X10G_12X40G;
        static const ydk::Enum::YLeaf QG_PORT_MODE_8X10G_14X40G;
        static const ydk::Enum::YLeaf NEP_PORT_MODE_32X40G;
        static const ydk::Enum::YLeaf NEP_PORT_MODE_24X40G;
        static const ydk::Enum::YLeaf NEP_PORT_MODE_26X40G;
        static const ydk::Enum::YLeaf NEP_PORT_MODE_32X40G_FIXED;
        static const ydk::Enum::YLeaf QI2_PORT_MODE_72X10G;
        static const ydk::Enum::YLeaf QI2_PORT_MODE_48X10G_6x40G;
        static const ydk::Enum::YLeaf QI2_PORT_MODE_BKOUT;
        static const ydk::Enum::YLeaf DV_PORT_MODE_48X25G_4X100G;
        static const ydk::Enum::YLeaf DV_PORT_MODE_48X25G_2X100G_4X40G;
        static const ydk::Enum::YLeaf PB_PORT_MODE_48X10G_6X100G;
        static const ydk::Enum::YLeaf PB_PORT_MODE_48X10G_4X100G_2X40G;
        static const ydk::Enum::YLeaf FOST_PORT_MODE_28X40G_4X100G;
        static const ydk::Enum::YLeaf FOST_PORT_MODE_18X100G;
        static const ydk::Enum::YLeaf FOST_PORT_MODE_24X40G_6X100G;
        static const ydk::Enum::YLeaf TET_PORT_MODE_64X100G;
        static const ydk::Enum::YLeaf TET_PORT_MODE_96X25G_32X100G;
        static const ydk::Enum::YLeaf TET_PORT_MODE_128X25G;

};

class PcPCHashDist : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf adaptive;
        static const ydk::Enum::YLeaf fixed;

};

class L1SwitchingSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};

class NwAdminStIfStatIpUnreach : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class OspfNssaTransRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf candidate;
        static const ydk::Enum::YLeaf never;

};

class IpqosStatsType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf matchCMap;
        static const ydk::Enum::YLeaf MTU;
        static const ydk::Enum::YLeaf setAction;
        static const ydk::Enum::YLeaf pause;
        static const ydk::Enum::YLeaf bw;
        static const ydk::Enum::YLeaf bwRem;
        static const ydk::Enum::YLeaf shape;
        static const ydk::Enum::YLeaf prio;
        static const ydk::Enum::YLeaf randomDetect;
        static const ydk::Enum::YLeaf queuing;
        static const ydk::Enum::YLeaf police;
        static const ydk::Enum::YLeaf qlimit;
        static const ydk::Enum::YLeaf microburst;

};

class M6ribDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf client;
        static const ydk::Enum::YLeaf memest;
        static const ydk::Enum::YLeaf vrf;

};

class CdpDuplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf half;
        static const ydk::Enum::YLeaf full;

};

class RelnState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unformed;
        static const ydk::Enum::YLeaf formed;
        static const ydk::Enum::YLeaf missing_target;
        static const ydk::Enum::YLeaf invalid_target;

};

class AaaProviderGroupProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf ldap;

};

class L2AssocOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oper;
        static const ydk::Enum::YLeaf non_oper;

};

class ProcProcessType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf non_sysmgr;
        static const ydk::Enum::YLeaf vdc_local;
        static const ydk::Enum::YLeaf vdc_global;
        static const ydk::Enum::YLeaf vdc_unaware;
        static const ydk::Enum::YLeaf not_running;
        static const ydk::Enum::YLeaf terminated_etc;

};

class HsrpGroupAf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class NvoMultisiteStateT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;

};

class NwAdminStIfStatMRouting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class PkiModulus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mod512;
        static const ydk::Enum::YLeaf mod1024;
        static const ydk::Enum::YLeaf mod1536;
        static const ydk::Enum::YLeaf mod2048;

};

class NbmNbmFaultType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NONE;
        static const ydk::Enum::YLeaf POLICYDENIED;
        static const ydk::Enum::YLeaf POLICYDENIEDSENDER;
        static const ydk::Enum::YLeaf POLICYDENIEDRECEIVER;
        static const ydk::Enum::YLeaf RESOURCEUNAVAIL;
        static const ydk::Enum::YLeaf POLICERUNAVAIL;
        static const ydk::Enum::YLeaf BWUNAVAIL;
        static const ydk::Enum::YLeaf EXTBWUNAVAIL;
        static const ydk::Enum::YLeaf FLOWPOLUNAVAIL;
        static const ydk::Enum::YLeaf NOUCASTROUTE;
        static const ydk::Enum::YLeaf FLOWLIMITREACHED;
        static const ydk::Enum::YLeaf EXTFLOWLIMITREACHED;
        static const ydk::Enum::YLeaf EXTPOLICYDENIED;
        static const ydk::Enum::YLeaf EXTPOLICERUNAVAIL;

};

class StpBpdufilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class Vrrpv3VrAf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class L1OperStQual_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf link_down;
        static const ydk::Enum::YLeaf fail;
        static const ydk::Enum::YLeaf no_license;
        static const ydk::Enum::YLeaf link_up;
        static const ydk::Enum::YLeaf hw_fail;
        static const ydk::Enum::YLeaf sw_fail;
        static const ydk::Enum::YLeaf err_disabled;
        static const ydk::Enum::YLeaf sfp_missing;
        static const ydk::Enum::YLeaf loopback_diag_failure;
        static const ydk::Enum::YLeaf udld_unidir_detected;
        static const ydk::Enum::YLeaf udld_tx_rx_loop;
        static const ydk::Enum::YLeaf udld_neighbor_mismatch;
        static const ydk::Enum::YLeaf udld_empty_echo;
        static const ydk::Enum::YLeaf udld_aggressive_mode_link_failed;
        static const ydk::Enum::YLeaf link_flap_err;
        static const ydk::Enum::YLeaf err_disabled_ip_conflict;
        static const ydk::Enum::YLeaf ipqos_dcbxp_compat_failure;
        static const ydk::Enum::YLeaf link_failure;
        static const ydk::Enum::YLeaf offline;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf channel_admin_down;
        static const ydk::Enum::YLeaf channel_err_disabled;
        static const ydk::Enum::YLeaf suspended;
        static const ydk::Enum::YLeaf proto_port_suspend;
        static const ydk::Enum::YLeaf channel_membership_update_in_progress;
        static const ydk::Enum::YLeaf parent_down;
        static const ydk::Enum::YLeaf parent_admin_down;
        static const ydk::Enum::YLeaf interface_removed;
        static const ydk::Enum::YLeaf fcot_no_present;
        static const ydk::Enum::YLeaf fcot_vendor_not_supported;
        static const ydk::Enum::YLeaf incompatible_admin_mode;
        static const ydk::Enum::YLeaf incompatible_admin_speed;
        static const ydk::Enum::YLeaf suspended_by_mode;
        static const ydk::Enum::YLeaf suspended_by_speed;
        static const ydk::Enum::YLeaf domain_max_retransmission_failure;
        static const ydk::Enum::YLeaf loopback_isolation;
        static const ydk::Enum::YLeaf upgrade_in_progress;
        static const ydk::Enum::YLeaf port_channel_members_down;
        static const ydk::Enum::YLeaf ethernet_link_down;
        static const ydk::Enum::YLeaf ethernet_interface_down;
        static const ydk::Enum::YLeaf admin_config_change;
        static const ydk::Enum::YLeaf module_removed;
        static const ydk::Enum::YLeaf vrf_unusable;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf xcvr_initializing;
        static const ydk::Enum::YLeaf cap_absent;
        static const ydk::Enum::YLeaf sfp_eth_compliant_err;
        static const ydk::Enum::YLeaf sdp_timeout;
        static const ydk::Enum::YLeaf sat_incompat_topo;
        static const ydk::Enum::YLeaf sat_not_configured;
        static const ydk::Enum::YLeaf auth_fail;
        static const ydk::Enum::YLeaf auth_pending;
        static const ydk::Enum::YLeaf suspended_due_to_minlinks;
        static const ydk::Enum::YLeaf suspended_due_to_no_lacp_pdus;
        static const ydk::Enum::YLeaf sat_fabric_if_down;
        static const ydk::Enum::YLeaf invalid_sat_fabric_if;
        static const ydk::Enum::YLeaf fex_sfp_invalid;
        static const ydk::Enum::YLeaf suspend_by_mtu;
        static const ydk::Enum::YLeaf suspend_by_vpc;
        static const ydk::Enum::YLeaf router_mac_failure;
        static const ydk::Enum::YLeaf xcvr_auth_failed;
        static const ydk::Enum::YLeaf non_sticky_externally_disabled;
        static const ydk::Enum::YLeaf sfp_speed_mismatch;
        static const ydk::Enum::YLeaf fcot_chksum_err;
        static const ydk::Enum::YLeaf xcvr_invalid;
        static const ydk::Enum::YLeaf vpc_peer_link_down;
        static const ydk::Enum::YLeaf vpc_cfg_in_progress;
        static const ydk::Enum::YLeaf vpc_no_response_from_peer;
        static const ydk::Enum::YLeaf bpdu_guard_err_disable;
        static const ydk::Enum::YLeaf hot_standby_in_bundle;
        static const ydk::Enum::YLeaf handshake_fail_errdisable;
        static const ydk::Enum::YLeaf non_participating;
        static const ydk::Enum::YLeaf rcf_in_progress;
        static const ydk::Enum::YLeaf elp_failure_isolation;
        static const ydk::Enum::YLeaf esc_failure_isolation;
        static const ydk::Enum::YLeaf domain_overlap_isolation;
        static const ydk::Enum::YLeaf domain_addr_assign_failure_isolation;
        static const ydk::Enum::YLeaf domain_other_side_eport_isolated;
        static const ydk::Enum::YLeaf domain_invalid_rcf_received;
        static const ydk::Enum::YLeaf domain_manager_disabled;
        static const ydk::Enum::YLeaf zone_merge_failure_isolation;
        static const ydk::Enum::YLeaf vsan_mismatch_isolation;
        static const ydk::Enum::YLeaf src_port_not_bound;
        static const ydk::Enum::YLeaf suspended_by_wwn;
        static const ydk::Enum::YLeaf epp_failure;
        static const ydk::Enum::YLeaf port_vsan_mismatch_isolation;
        static const ydk::Enum::YLeaf incompatible_admin_rxbbcredit;
        static const ydk::Enum::YLeaf incompatible_admin_rxbufsize;
        static const ydk::Enum::YLeaf zone_remote_no_resp_isolation;
        static const ydk::Enum::YLeaf osm_e_port_up;
        static const ydk::Enum::YLeaf osm_non_e_port_up;
        static const ydk::Enum::YLeaf peer_fcip_closed_tcp_connection;
        static const ydk::Enum::YLeaf peer_fcip_reset_tcp_connection;
        static const ydk::Enum::YLeaf tcp_max_retransmissions;
        static const ydk::Enum::YLeaf tcp_keep_alive_timer_expired;
        static const ydk::Enum::YLeaf tcp_persist_timer_expired;
        static const ydk::Enum::YLeaf tunnel_src_port_removed;
        static const ydk::Enum::YLeaf tunnel_src_module_not_online;
        static const ydk::Enum::YLeaf invalid_config;
        static const ydk::Enum::YLeaf port_bind_failure;
        static const ydk::Enum::YLeaf fabric_bind_failure;
        static const ydk::Enum::YLeaf no_trunk_oper_vsans_isolation;
        static const ydk::Enum::YLeaf ficon_vsan_down;
        static const ydk::Enum::YLeaf invalid_attachment;
        static const ydk::Enum::YLeaf port_blocked;
        static const ydk::Enum::YLeaf incompatible_admin_rxbbcredit_performance_buf;
        static const ydk::Enum::YLeaf too_many_invalid_flogis;
        static const ydk::Enum::YLeaf denied_due_to_port_binding;
        static const ydk::Enum::YLeaf elp_failure_revision_mismatch;
        static const ydk::Enum::YLeaf elp_failure_classf_param_err;
        static const ydk::Enum::YLeaf elp_failure_classn_param_err;
        static const ydk::Enum::YLeaf elp_failure_unknown_flow_ctl_code;
        static const ydk::Enum::YLeaf elp_failure_invalid_flow_ctl_param;
        static const ydk::Enum::YLeaf elp_failure_invalid_port_name;
        static const ydk::Enum::YLeaf elp_failure_invalid_switch_name;
        static const ydk::Enum::YLeaf elp_failure_ratov_edtov_mismatch;
        static const ydk::Enum::YLeaf elp_failure_loopback_detected;
        static const ydk::Enum::YLeaf elp_failure_invalid_tx_bbcredit;
        static const ydk::Enum::YLeaf elp_failure_invalid_payload_size;
        static const ydk::Enum::YLeaf bundle_miscfg;
        static const ydk::Enum::YLeaf bit_err_rt_thres_exceeded;
        static const ydk::Enum::YLeaf link_fail_link_reset;
        static const ydk::Enum::YLeaf link_fail_port_init_failed;
        static const ydk::Enum::YLeaf link_fail_port_unusable;
        static const ydk::Enum::YLeaf link_fail_loss_of_signal;
        static const ydk::Enum::YLeaf link_fail_loss_of_sync;
        static const ydk::Enum::YLeaf link_fail_nos_rcvd;
        static const ydk::Enum::YLeaf link_fail_ols_rcvd;
        static const ydk::Enum::YLeaf link_fail_debounce_timeout;
        static const ydk::Enum::YLeaf link_fail_lr_rcvd_b2b;
        static const ydk::Enum::YLeaf link_fail_credit_loss;
        static const ydk::Enum::YLeaf link_fail_rx_que_overflow;
        static const ydk::Enum::YLeaf link_fail_too_many_intr;
        static const ydk::Enum::YLeaf link_fail_lip_rcvd_b2b;
        static const ydk::Enum::YLeaf link_fail_credit_loss_b2b;
        static const ydk::Enum::YLeaf link_fail_opny_tmo_b2b;
        static const ydk::Enum::YLeaf link_fail_opny_ret_b2b;
        static const ydk::Enum::YLeaf link_fail_lip_f8_rcvd;
        static const ydk::Enum::YLeaf link_fail_line_card_port_shutdown;
        static const ydk::Enum::YLeaf fcsp_authent_failure;
        static const ydk::Enum::YLeaf ohms_external_lb_test;
        static const ydk::Enum::YLeaf invalid_fabric_binding_exchange;
        static const ydk::Enum::YLeaf tov_mismatch;
        static const ydk::Enum::YLeaf ficon_not_enabled;
        static const ydk::Enum::YLeaf ficon_no_portnumber;
        static const ydk::Enum::YLeaf ficon_being_enabled;
        static const ydk::Enum::YLeaf eport_prohibited;
        static const ydk::Enum::YLeaf trunk_not_fully_active;
        static const ydk::Enum::YLeaf fabric_binding_swwn_not_found;
        static const ydk::Enum::YLeaf fabric_binding_domain_invalid;
        static const ydk::Enum::YLeaf fabric_binding_database_mismatch;
        static const ydk::Enum::YLeaf fabric_binding_peer_not_responding;
        static const ydk::Enum::YLeaf tracked_port_down;
        static const ydk::Enum::YLeaf ec_suspended_for_loop;
        static const ydk::Enum::YLeaf isolate_bundle_miscfg;
        static const ydk::Enum::YLeaf peer_not_support_bundles;
        static const ydk::Enum::YLeaf port_bringup_isolation;
        static const ydk::Enum::YLeaf domain_not_allowed_isolation;
        static const ydk::Enum::YLeaf virtual_ivr_domain_overlap_isolation;
        static const ydk::Enum::YLeaf out_of_service;
        static const ydk::Enum::YLeaf bundle_stdby;
        static const ydk::Enum::YLeaf port_cap_fc_port_connector_type_err;
        static const ydk::Enum::YLeaf error_disabled_reinit_limit_reached;
        static const ydk::Enum::YLeaf ficon_vsan_duplicate_portnum;
        static const ydk::Enum::YLeaf internal_rcf_in_progress;
        static const ydk::Enum::YLeaf two_switches_with_same_wwn;
        static const ydk::Enum::YLeaf invalid_other_princ_efp_req_recd;
        static const ydk::Enum::YLeaf domain_isolation_unknown_reason;
        static const ydk::Enum::YLeaf elp_failure_all_zero_peer_wwn_rcvd;
        static const ydk::Enum::YLeaf prefered_path_isolation;
        static const ydk::Enum::YLeaf fc_redirect_isolation;
        static const ydk::Enum::YLeaf port_act_license_not_available;
        static const ydk::Enum::YLeaf sdm_isolation;
        static const ydk::Enum::YLeaf fcid_allocation_failed;
        static const ydk::Enum::YLeaf externally_disabled;
        static const ydk::Enum::YLeaf fcot_read_error;
        static const ydk::Enum::YLeaf port_guard_down_on_link_failure;
        static const ydk::Enum::YLeaf incomplete_config;
        static const ydk::Enum::YLeaf incomplete_tunnel_config;
        static const ydk::Enum::YLeaf hw_programming_failed;
        static const ydk::Enum::YLeaf tunnel_dest_not_reachable;
        static const ydk::Enum::YLeaf sfp_invalid;
        static const ydk::Enum::YLeaf tunnel_vrf_mismatch;
        static const ydk::Enum::YLeaf tunnel_vrf_fw_ref;
        static const ydk::Enum::YLeaf duplicate_tunnel_cfg;
        static const ydk::Enum::YLeaf primary_vlan_down;
        static const ydk::Enum::YLeaf dot1x_security_errdisable;
        static const ydk::Enum::YLeaf vf_tagging_capability_err;
        static const ydk::Enum::YLeaf port_disabled;
        static const ydk::Enum::YLeaf tunnel_mode_not_configured;
        static const ydk::Enum::YLeaf tunnel_source_not_configured;
        static const ydk::Enum::YLeaf tunnel_destination_not_configured;
        static const ydk::Enum::YLeaf tunnel_unable2resolve_source_ipaddress;
        static const ydk::Enum::YLeaf tunnel_unable2resolve_destination_ipaddress;
        static const ydk::Enum::YLeaf tunnel_vrf_is_down;
        static const ydk::Enum::YLeaf sif_admin_down;
        static const ydk::Enum::YLeaf phy_intf_down;
        static const ydk::Enum::YLeaf intf_sif_limit_exceeded;
        static const ydk::Enum::YLeaf insufficient_power;
        static const ydk::Enum::YLeaf no_fcoe;
        static const ydk::Enum::YLeaf dcx_compat_mismatch;
        static const ydk::Enum::YLeaf isolate_bundle_limit_exceeded;
        static const ydk::Enum::YLeaf sif_not_bound;
        static const ydk::Enum::YLeaf err_disable_lacp_miscfg;
        static const ydk::Enum::YLeaf errdisabled_pkt_err;
        static const ydk::Enum::YLeaf vlan_vsan_mapping_not_enabled;
        static const ydk::Enum::YLeaf stp_not_forwarding_in_fcoe_mapped_vlan;
        static const ydk::Enum::YLeaf module_offline;
        static const ydk::Enum::YLeaf stp_inconsist_vpc_peerlink_errdisable;
        static const ydk::Enum::YLeaf set_port_state_failed_errdisable;
        static const ydk::Enum::YLeaf tunnel_source_down;
        static const ydk::Enum::YLeaf cdp_info_not_avail;
        static const ydk::Enum::YLeaf fcot_clk_rate_mismatch;
        static const ydk::Enum::YLeaf port_guard_down_on_trustsec_violation;
        static const ydk::Enum::YLeaf wait_for_flogi;
        static const ydk::Enum::YLeaf npiv_not_enabled_in_upstream;
        static const ydk::Enum::YLeaf vsan_mismatch_with_upstream_switch_port;
        static const ydk::Enum::YLeaf port_guard_bit_error_rate;
        static const ydk::Enum::YLeaf port_guard_signal_loss;
        static const ydk::Enum::YLeaf port_guard_sync_loss;
        static const ydk::Enum::YLeaf port_guard_link_reset;
        static const ydk::Enum::YLeaf port_guard_credit_loss;
        static const ydk::Enum::YLeaf ipqos_mgr_policy_app_failed;
        static const ydk::Enum::YLeaf pause_rate_limit_errdisable;
        static const ydk::Enum::YLeaf lstgrp_uplink_down;
        static const ydk::Enum::YLeaf sticky_down_on_link_failure;
        static const ydk::Enum::YLeaf dcx_multiple_msap_ids_errdisable;
        static const ydk::Enum::YLeaf dcx_100_pdus_rcvd_noack_errdisable;
        static const ydk::Enum::YLeaf enm_sat_incompat_uplink;
        static const ydk::Enum::YLeaf enm_loop_detected;
        static const ydk::Enum::YLeaf sub_group_id_not_assigned;
        static const ydk::Enum::YLeaf vem_unlicensed;
        static const ydk::Enum::YLeaf profile_not_found;
        static const ydk::Enum::YLeaf vlan_does_not_exist;
        static const ydk::Enum::YLeaf vlan_type;
        static const ydk::Enum::YLeaf vlan_down;
        static const ydk::Enum::YLeaf vpc_peer_upgrade;
        static const ydk::Enum::YLeaf non_cisco_hba_vftag;
        static const ydk::Enum::YLeaf domain_id_config_mismatch;
        static const ydk::Enum::YLeaf xcvr_absent;
        static const ydk::Enum::YLeaf vfc_binding_invalid;
        static const ydk::Enum::YLeaf vlan_not_fcoe_enabled;
        static const ydk::Enum::YLeaf pvlan_native_vlan_err;
        static const ydk::Enum::YLeaf eth_l2_vlan_down;
        static const ydk::Enum::YLeaf eth_intf_invalid_binding;
        static const ydk::Enum::YLeaf pmon_failure;
        static const ydk::Enum::YLeaf l3_not_ready;
        static const ydk::Enum::YLeaf speed_mismatch;
        static const ydk::Enum::YLeaf flowcontrol_mismatch;
        static const ydk::Enum::YLeaf vdc_mode;
        static const ydk::Enum::YLeaf enm_pin_fail_link_down;
        static const ydk::Enum::YLeaf inactive_m1_port_fpath_access_vlan;

};

class RtmapMatchT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reg_community;
        static const ydk::Enum::YLeaf ext_community;
        static const ydk::Enum::YLeaf rt_dst;
        static const ydk::Enum::YLeaf rt_nh;
        static const ydk::Enum::YLeaf rt_src;
        static const ydk::Enum::YLeaf rt_type;
        static const ydk::Enum::YLeaf rt_tag;
        static const ydk::Enum::YLeaf rt_pervasive;
        static const ydk::Enum::YLeaf as_path;
        static const ydk::Enum::YLeaf rt_dst_v6;
        static const ydk::Enum::YLeaf rt_asn;
        static const ydk::Enum::YLeaf rt_if;
        static const ydk::Enum::YLeaf rt_metric;
        static const ydk::Enum::YLeaf src_proto;
        static const ydk::Enum::YLeaf rt_ospf;
        static const ydk::Enum::YLeaf rt_nh_v6;
        static const ydk::Enum::YLeaf rt_src_v6;
        static const ydk::Enum::YLeaf rt_ipv4_mcast;
        static const ydk::Enum::YLeaf rt_ipv6_mcast;

};

class L3capSubj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf vrf_namespace;
        static const ydk::Enum::YLeaf lb_namespace;
        static const ydk::Enum::YLeaf rdnn_namespace;

};

class VpcCompatSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pass;
        static const ydk::Enum::YLeaf fail;
        static const ydk::Enum::YLeaf notDone;

};

class MockMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Repeated;
        static const ydk::Enum::YLeaf Once;

};

class L1PktT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bcast;
        static const ydk::Enum::YLeaf unk_ucast;
        static const ydk::Enum::YLeaf mcast;
        static const ydk::Enum::YLeaf all;

};

class SpanDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;
        static const ydk::Enum::YLeaf both;

};

class L2PvlanTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf community;
        static const ydk::Enum::YLeaf isolated;

};

class EqptColor : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_color;
        static const ydk::Enum::YLeaf green;
        static const ydk::Enum::YLeaf yellow;
        static const ydk::Enum::YLeaf amber;
        static const ydk::Enum::YLeaf red;
        static const ydk::Enum::YLeaf blue;

};

class L1Mdix : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf mdi;
        static const ydk::Enum::YLeaf mdi_x;

};

class TrackRouteState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reachability;

};

class QospCongAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wred;
        static const ydk::Enum::YLeaf tail_drop;

};

class HmmBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

};

class L1FECMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf rs_fec;
        static const ydk::Enum::YLeaf fc_fec;
        static const ydk::Enum::YLeaf fec_off;
        static const ydk::Enum::YLeaf rs_ieee;
        static const ydk::Enum::YLeaf rs_cons16;

};

class EqptAcc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf read_only;
        static const ydk::Enum::YLeaf read_write;

};

class BgpSummaryOnly : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class PoePoePriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf high;

};

class L1Dot1qEtherType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0x8100;
        static const ydk::Enum::YLeaf Y_0x88A8;
        static const ydk::Enum::YLeaf Y_0x9100;
        static const ydk::Enum::YLeaf any;

};

class DatetimeClockProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf ptp;
        static const ydk::Enum::YLeaf ntp;
        static const ydk::Enum::YLeaf none;

};

class L2XConnect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class L1EEELpi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aggressive;
        static const ydk::Enum::YLeaf normal;

};

class ConftmplOperationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf create;
        static const ydk::Enum::YLeaf delete_;

};

class TrackListObj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf and_;
        static const ydk::Enum::YLeaf or_;
        static const ydk::Enum::YLeaf percentage;
        static const ydk::Enum::YLeaf weight;

};

class NvoVniStateT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Up;
        static const ydk::Enum::YLeaf Down;

};

class UdldPktDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send;
        static const ydk::Enum::YLeaf recv;

};

class NwOSSum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf resetting;
        static const ydk::Enum::YLeaf degraded;
        static const ydk::Enum::YLeaf ok;

};

class SisfDhcpGuardDeviceRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf client;
        static const ydk::Enum::YLeaf server;
        static const ydk::Enum::YLeaf monitor;

};

class CdpOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class Ipv6IPv6EventType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv6Event;
        static const ydk::Enum::YLeaf bfdEvent;
        static const ydk::Enum::YLeaf syslog;
        static const ydk::Enum::YLeaf ipc;
        static const ydk::Enum::YLeaf snmp;
        static const ydk::Enum::YLeaf highAvailability;
        static const ydk::Enum::YLeaf sdb;

};

class TraceroutePathT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;

};

class StpIfMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf edge;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf trunk;

};

class RelnResolverType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mo;
        static const ydk::Enum::YLeaf service;
        static const ydk::Enum::YLeaf local;

};

class L2Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf F;
        static const ydk::Enum::YLeaf NP;
        static const ydk::Enum::YLeaf E;
        static const ydk::Enum::YLeaf TF;
        static const ydk::Enum::YLeaf TNP;

};

class SisfNonGlobalTracking : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class SviOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf shutdown;
        static const ydk::Enum::YLeaf out_of_srvc;

};

class PcMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf mac_pin;

};

class DatetimeClockFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_24hours;
        static const ydk::Enum::YLeaf Y_12hours;

};

class EqptEjSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf open;
        static const ydk::Enum::YLeaf closed;

};

class L1RouterMacIpv6Extract : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class IpqosQoSMatchType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_any;
        static const ydk::Enum::YLeaf match_all;
        static const ydk::Enum::YLeaf match_first;

};

class HsrpAuthT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf simple;
        static const ydk::Enum::YLeaf md5;

};

class TestTrig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf on_demand;
        static const ydk::Enum::YLeaf boot;
        static const ydk::Enum::YLeaf forever;

};

class StpPortRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf root;
        static const ydk::Enum::YLeaf alternate;
        static const ydk::Enum::YLeaf designated;
        static const ydk::Enum::YLeaf backup;
        static const ydk::Enum::YLeaf master;

};

class CompNicState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class SegrtSidValueType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf index_;
        static const ydk::Enum::YLeaf absolute;

};

class PlatformTuple : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Disable;
        static const ydk::Enum::YLeaf Enable;

};

class L1Speed : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf Y_100M;
        static const ydk::Enum::YLeaf Y_1G;
        static const ydk::Enum::YLeaf Y_10G;
        static const ydk::Enum::YLeaf Y_40G;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf auto_100M;
        static const ydk::Enum::YLeaf auto_100M_1G;
        static const ydk::Enum::YLeaf Y_100G;
        static const ydk::Enum::YLeaf Y_25G;
        static const ydk::Enum::YLeaf Y_10M;
        static const ydk::Enum::YLeaf Y_50G;

};

class StpModeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf edge;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf normal;

};

class EthpmFcotType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf xfp;
        static const ydk::Enum::YLeaf x2;
        static const ydk::Enum::YLeaf dummy;
        static const ydk::Enum::YLeaf sfp;
        static const ydk::Enum::YLeaf qsfp;
        static const ydk::Enum::YLeaf cfp_40g;
        static const ydk::Enum::YLeaf cfp_100g;
        static const ydk::Enum::YLeaf cfp;
        static const ydk::Enum::YLeaf qsfp28;

};

class VrrpGroupStQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf no_primary_vip;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf interface_down;
        static const ydk::Enum::YLeaf no_intf_ip_cfgd;
        static const ydk::Enum::YLeaf no_vrf_info_for_intf;
        static const ydk::Enum::YLeaf bd_not_allocated;
        static const ydk::Enum::YLeaf vmac_not_added;
        static const ydk::Enum::YLeaf invalid_vip;
        static const ydk::Enum::YLeaf IfIp_vip_subnet_mismatch;
        static const ydk::Enum::YLeaf internal_error;

};

class AaaCmdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf config;
        static const ydk::Enum::YLeaf exec;

};

class BgpAfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_ucast;
        static const ydk::Enum::YLeaf ipv4_mcast;
        static const ydk::Enum::YLeaf vpnv4_ucast;
        static const ydk::Enum::YLeaf ipv6_ucast;
        static const ydk::Enum::YLeaf ipv6_mcast;
        static const ydk::Enum::YLeaf vpnv6_ucast;
        static const ydk::Enum::YLeaf l2vpn_evpn;
        static const ydk::Enum::YLeaf ipv4_lucast;
        static const ydk::Enum::YLeaf ipv6_lucast;
        static const ydk::Enum::YLeaf lnkstate;
        static const ydk::Enum::YLeaf ipv4_mvpn;
        static const ydk::Enum::YLeaf ipv6_mvpn;
        static const ydk::Enum::YLeaf l2vpn_vpls;
        static const ydk::Enum::YLeaf ipv4_mdt;
        static const ydk::Enum::YLeaf vpnv6_mcast;

};

class TrackAf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class EqptExtChSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf discovered;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf reg;
        static const ydk::Enum::YLeaf regDone;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf onlSeq;
        static const ydk::Enum::YLeaf online;
        static const ydk::Enum::YLeaf offReq;
        static const ydk::Enum::YLeaf offSeq;
        static const ydk::Enum::YLeaf offline;
        static const ydk::Enum::YLeaf imgDld;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf removed;
        static const ydk::Enum::YLeaf hlUpgSeq;
        static const ydk::Enum::YLeaf chkUpgSeq;
        static const ydk::Enum::YLeaf svStates;
        static const ydk::Enum::YLeaf hlUpgIdle;
        static const ydk::Enum::YLeaf chkInsSeq;
        static const ydk::Enum::YLeaf hlUpgFail;
        static const ydk::Enum::YLeaf aaUpgRdy;
        static const ydk::Enum::YLeaf aaUpgIdle;
        static const ydk::Enum::YLeaf aaUpgOver;
        static const ydk::Enum::YLeaf aaUpgFail;
        static const ydk::Enum::YLeaf aaVersMismatch;
        static const ydk::Enum::YLeaf ExtChTypeMismatch;

};

class TelemetryDataSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DME;
        static const ydk::Enum::YLeaf NX_API;
        static const ydk::Enum::YLeaf YANG;
        static const ydk::Enum::YLeaf DEFAULT;

};

class FcAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

};

class SnmpAuthTypeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha;

};

class FmAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class SpanOperStQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf no_hw_res;
        static const ydk::Enum::YLeaf no_oper_src_dst;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf no_src;
        static const ydk::Enum::YLeaf no_dst;
        static const ydk::Enum::YLeaf no_src_dst;
        static const ydk::Enum::YLeaf shut;
        static const ydk::Enum::YLeaf invalid_dst_mode;
        static const ydk::Enum::YLeaf invalid_src_mode;
        static const ydk::Enum::YLeaf invalid_vrf;
        static const ydk::Enum::YLeaf invalid_ip;
        static const ydk::Enum::YLeaf no_route;
        static const ydk::Enum::YLeaf no_eg_intf;
        static const ydk::Enum::YLeaf hw_err;

};

class OspfPathT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf intra;
        static const ydk::Enum::YLeaf discard_int;
        static const ydk::Enum::YLeaf inter;
        static const ydk::Enum::YLeaf discard_ext;
        static const ydk::Enum::YLeaf ext1;
        static const ydk::Enum::YLeaf nssa1;
        static const ydk::Enum::YLeaf ext2;
        static const ydk::Enum::YLeaf nssa2;

};

class OspfMaxLsaOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf threshold_exceeded;

};

class L1IntfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf phy;
        static const ydk::Enum::YLeaf phy_shared;

};

class L2NativeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf regular;
        static const ydk::Enum::YLeaf native;
        static const ydk::Enum::YLeaf untagged;

};

class OpflexDevOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf online;
        static const ydk::Enum::YLeaf offline;
        static const ydk::Enum::YLeaf identified;
        static const ydk::Enum::YLeaf compatible;
        static const ydk::Enum::YLeaf incompatible;

};

class BgpEhType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf events;
        static const ydk::Enum::YLeaf periodic;
        static const ydk::Enum::YLeaf detail;
        static const ydk::Enum::YLeaf errors;
        static const ydk::Enum::YLeaf objstore;

};

class L2TrunkMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf auto_;

};

class SrteMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf te;
        static const ydk::Enum::YLeaf igp;

};

class AclVAclActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf forward;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf redirect;

};

class EqptPortT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf eobc;
        static const ydk::Enum::YLeaf mgmt;
        static const ydk::Enum::YLeaf fab;
        static const ydk::Enum::YLeaf leaf;
        static const ydk::Enum::YLeaf extchhp;
        static const ydk::Enum::YLeaf extchfp;

};

class OspfLsaT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf router;
        static const ydk::Enum::YLeaf nw;
        static const ydk::Enum::YLeaf summary;
        static const ydk::Enum::YLeaf asbr;
        static const ydk::Enum::YLeaf ext;
        static const ydk::Enum::YLeaf nssa;
        static const ydk::Enum::YLeaf link_opq;
        static const ydk::Enum::YLeaf area_opq;
        static const ydk::Enum::YLeaf as_opq;

};

class SysmgrCfgMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf replay;
        static const ydk::Enum::YLeaf done;

};

class ArpStAdjOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf unspecified;

};

class L1SpeedGroup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf Y_1000;
        static const ydk::Enum::YLeaf Y_25000;
        static const ydk::Enum::YLeaf Y_10000;
        static const ydk::Enum::YLeaf Y_40000;
        static const ydk::Enum::YLeaf auto_;

};

class OspfNssaTransSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf elected;
        static const ydk::Enum::YLeaf disabled;

};

class L2DomOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf unknown;

};

class EqptBaudRate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_300;
        static const ydk::Enum::YLeaf Y_1200;
        static const ydk::Enum::YLeaf Y_2400;
        static const ydk::Enum::YLeaf Y_4800;
        static const ydk::Enum::YLeaf Y_9600;
        static const ydk::Enum::YLeaf Y_38400;
        static const ydk::Enum::YLeaf Y_57600;
        static const ydk::Enum::YLeaf Y_115200;

};

class AcBankT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf even;
        static const ydk::Enum::YLeaf Odd;

};

class FvPcEnfPref : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enforced;
        static const ydk::Enum::YLeaf unenforced;

};

class SyslogFacility : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf kern;
        static const ydk::Enum::YLeaf user;
        static const ydk::Enum::YLeaf mail;
        static const ydk::Enum::YLeaf daemon;
        static const ydk::Enum::YLeaf auth;
        static const ydk::Enum::YLeaf syslog;
        static const ydk::Enum::YLeaf lpr;
        static const ydk::Enum::YLeaf news;
        static const ydk::Enum::YLeaf uucp;
        static const ydk::Enum::YLeaf cron;
        static const ydk::Enum::YLeaf authpriv;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf local0;
        static const ydk::Enum::YLeaf local1;
        static const ydk::Enum::YLeaf local2;
        static const ydk::Enum::YLeaf local3;
        static const ydk::Enum::YLeaf local4;
        static const ydk::Enum::YLeaf local5;
        static const ydk::Enum::YLeaf local6;
        static const ydk::Enum::YLeaf local7;

};

class HsrpHsrpVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v1;
        static const ydk::Enum::YLeaf v2;

};

class NvoEvpnMcastStT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;

};

class EqptCardT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf supervisor;
        static const ydk::Enum::YLeaf linecard;
        static const ydk::Enum::YLeaf fabriccard;
        static const ydk::Enum::YLeaf sysctrlcard;
        static const ydk::Enum::YLeaf extchcard;
        static const ydk::Enum::YLeaf fan_tray;
        static const ydk::Enum::YLeaf power_supply;

};

class L3VrfOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class NvoReplModeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf replicationServer;
        static const ydk::Enum::YLeaf ingressReplication;

};

class IpmcsnoopDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf group;
        static const ydk::Enum::YLeaf fabric_mcgrp;
        static const ydk::Enum::YLeaf querier;
        static const ydk::Enum::YLeaf mrouter;
        static const ydk::Enum::YLeaf snoopstats;
        static const ydk::Enum::YLeaf policy;
        static const ydk::Enum::YLeaf snoop;
        static const ydk::Enum::YLeaf exptrack;
        static const ydk::Enum::YLeaf stats;
        static const ydk::Enum::YLeaf mac;
        static const ydk::Enum::YLeaf macoif;

};

class CoppConformAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Undefined;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf drop;

};

class PimEhType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf assert;
        static const ydk::Enum::YLeaf bidir;
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf dataRegRecv;
        static const ydk::Enum::YLeaf hello;
        static const ydk::Enum::YLeaf joinPrune;
        static const ydk::Enum::YLeaf mrib;
        static const ydk::Enum::YLeaf nullReg;
        static const ydk::Enum::YLeaf packet;
        static const ydk::Enum::YLeaf nbm;
        static const ydk::Enum::YLeaf pimInternal;
        static const ydk::Enum::YLeaf pimLib;
        static const ydk::Enum::YLeaf rp;
        static const ydk::Enum::YLeaf txlist;
        static const ydk::Enum::YLeaf vpc;
        static const ydk::Enum::YLeaf vrf;
        static const ydk::Enum::YLeaf jpSum;
        static const ydk::Enum::YLeaf jpTw;

};

class NwAdminStIfStatProxyArp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class FmcastOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf inactive;

};

class FirmwareRunningOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf ver_mismatch;

};

class SyslogOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf available;
        static const ydk::Enum::YLeaf errored;

};

class L1SnmpTrapSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class NdAdjOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf incomplete;
        static const ydk::Enum::YLeaf normal;

};

class NbmNbmNoYes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NO;
        static const ydk::Enum::YLeaf YES;

};

class BfdAuthT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf met_sha1;

};


}
}

#endif /* _CISCO_NX_OS_DEVICE_0_ */

