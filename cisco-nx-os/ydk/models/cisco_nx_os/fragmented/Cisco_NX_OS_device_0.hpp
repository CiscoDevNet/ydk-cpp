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

        ydk::YLeaf name; //type: string
        ydk::YLeaf currenttime; //type: one of uint64, string
        ydk::YLeaf systemuptime; //type: one of uint64, string
        ydk::YLeaf serial; //type: string
        class BgpItems; //type: System::BgpItems
        class CallhomeItems; //type: System::CallhomeItems
        class CaploglevelItems; //type: System::CaploglevelItems
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
        class ItdItems; //type: System::ItdItems
        class LacpItems; //type: System::LacpItems
        class MgmtItems; //type: System::MgmtItems
        class SnmpItems; //type: System::SnmpItems
        class SyslogacctItems; //type: System::SyslogacctItems
        class SyslogItems; //type: System::SyslogItems
        class MtsItems; //type: System::MtsItems
        class NatItems; //type: System::NatItems
        class OdcreqItems; //type: System::OdcreqItems
        class OdcrespItems; //type: System::OdcrespItems
        class OspfItems; //type: System::OspfItems
        class EvpnItems; //type: System::EvpnItems
        class CommItems; //type: System::CommItems
        class UserextItems; //type: System::UserextItems
        class SecurityItems; //type: System::SecurityItems
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
        class SlaItems; //type: System::SlaItems
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
        class IpfibItems; //type: System::IpfibItems
        class L3vmItems; //type: System::L3vmItems
        class UribItems; //type: System::UribItems
        class U6ribItems; //type: System::U6ribItems
        class Uribv4Items; //type: System::Uribv4Items
        class Uribv6Items; //type: System::Uribv6Items
        class MmodeItems; //type: System::MmodeItems
        class ConngItems; //type: System::ConngItems
        class VdcItems; //type: System::VdcItems
        class PktmgrItems; //type: System::PktmgrItems
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
        class WedgeItems; //type: System::WedgeItems
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
        class LcmItems; //type: System::LcmItems
        class LsnodeItems; //type: System::LsnodeItems
        class PltfmItems; //type: System::PltfmItems
        class SatmItems; //type: System::SatmItems
        class AdjacencyItems; //type: System::AdjacencyItems
        class ArpItems; //type: System::ArpItems
        class BfdItems; //type: System::BfdItems
        class CfsItems; //type: System::CfsItems
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
        class Ospfv3Items; //type: System::Ospfv3Items
        class PimItems; //type: System::PimItems
        class Pim6Items; //type: System::Pim6Items
        class SegrtItems; //type: System::SegrtItems
        class VrrpItems; //type: System::VrrpItems
        class Vrrpv3Items; //type: System::Vrrpv3Items
        class ScrtchpdrtItems; //type: System::ScrtchpdrtItems
        class SectlItems; //type: System::SectlItems
        class CaggrItems; //type: System::CaggrItems
        class CphysItems; //type: System::CphysItems
        class ClialiasItems; //type: System::ClialiasItems
        class ActionItems; //type: System::ActionItems
        class RtdbgexpTsSrcItems; //type: System::RtdbgexpTsSrcItems
        class RttraceroutepTrSrcItems; //type: System::RttraceroutepTrSrcItems
        class RttraceroutepTrDstItems; //type: System::RttraceroutepTrDstItems
        class RtmaintFwinstlsrcItems; //type: System::RtmaintFwinstlsrcItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems> bgp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CallhomeItems> callhome_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaploglevelItems> caploglevel_items;
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
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ItdItems> itd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LacpItems> lacp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MgmtItems> mgmt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems> snmp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogacctItems> syslogacct_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems> syslog_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MtsItems> mts_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems> nat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OdcreqItems> odcreq_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OdcrespItems> odcresp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems> ospf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::EvpnItems> evpn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CommItems> comm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems> userext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SecurityItems> security_items;
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
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SlaItems> sla_items;
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
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpfibItems> ipfib_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::L3vmItems> l3vm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UribItems> urib_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::U6ribItems> u6rib_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv4Items> uribv4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Uribv6Items> uribv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MmodeItems> mmode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ConngItems> conng_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VdcItems> vdc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PktmgrItems> pktmgr_items;
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
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::WedgeItems> wedge_items;
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
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LcmItems> lcm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LsnodeItems> lsnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems> pltfm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SatmItems> satm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems> adjacency_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems> arp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems> bfd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CfsItems> cfs_items;
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
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Ospfv3Items> ospfv3_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PimItems> pim_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items> pim6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems> segrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems> vrrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Vrrpv3Items> vrrpv3_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ScrtchpdrtItems> scrtchpdrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SectlItems> sectl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CaggrItems> caggr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CphysItems> cphys_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ClialiasItems> clialias_items;
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
        ydk::YLeaf adminst; //type: NwAdminSt___
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
        ydk::YLeaf createts; //type: one of uint64, string
        ydk::YLeaf activatets; //type: one of uint64, string
        ydk::YLeaf waitdonets; //type: one of uint64, string
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
        ydk::YLeaf nhsupprdefres; //type: BgpAdminSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
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
        ydk::YLeaf bestpathintvl; //type: uint16
        ydk::YLeaf always; //type: BgpAdminSt
        ydk::YLeaf reconnintvl; //type: uint16
        ydk::YLeaf operst; //type: BgpDomOperSt
        ydk::YLeaf operrtrid; //type: string
        ydk::YLeaf firstpeerupts; //type: one of uint64, string
        ydk::YLeaf numpeers; //type: uint32
        ydk::YLeaf numpeerspending; //type: uint32
        ydk::YLeaf numestpeers; //type: uint32
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vnid; //type: uint32
        ydk::YLeaf vtepip; //type: string
        ydk::YLeaf vtepvirtip; //type: string
        ydk::YLeaf routermac; //type: string
        ydk::YLeaf localasn; //type: string
        ydk::YLeaf allocindex; //type: uint32
        class RtctrlItems; //type: System::BgpItems::InstItems::DomItems::DomList::RtctrlItems
        class PathctrlItems; //type: System::BgpItems::InstItems::DomItems::DomList::PathctrlItems
        class ConfedItems; //type: System::BgpItems::InstItems::DomItems::DomList::ConfedItems
        class AfItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems
        class BmpItems; //type: System::BgpItems::InstItems::DomItems::DomList::BmpItems
        class GrItems; //type: System::BgpItems::InstItems::DomItems::DomList::GrItems
        class GsItems; //type: System::BgpItems::InstItems::DomItems::DomList::GsItems
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
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::GsItems> gs_items;
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
        ydk::YLeaf igpmetricignore; //type: BgpAdminSt

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
        ydk::YLeaf bestpathsigts; //type: one of uint64, string
        ydk::YLeaf bestpathcmpltts; //type: one of uint64, string
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
        ydk::YLeaf advpip; //type: BgpAdminSt
        ydk::YLeaf exportgwip; //type: BgpAdminSt
        ydk::YLeaf waitigpconv; //type: BgpAdminSt
        ydk::YLeaf alloclbloptb; //type: BgpAdminSt
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
        ydk::YLeaf numimported; //type: uint16
        ydk::YLeaf importedlst; //type: string
        ydk::YLeaf importedsrc; //type: string
        ydk::YLeaf origimportedsrc; //type: string
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
        ydk::YLeaf numimported; //type: uint16
        ydk::YLeaf importedlst; //type: string
        ydk::YLeaf importedsrc; //type: string
        ydk::YLeaf origimportedsrc; //type: string
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
        ydk::YLeaf pfxlblholddowndelts; //type: one of uint64, string
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
        ydk::YLeaf numimported; //type: uint16
        ydk::YLeaf importedlst; //type: string
        ydk::YLeaf importedsrc; //type: string
        ydk::YLeaf origimportedsrc; //type: string
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
        ydk::YLeaf numimported; //type: uint16
        ydk::YLeaf importedlst; //type: string
        ydk::YLeaf importedsrc; //type: string
        ydk::YLeaf origimportedsrc; //type: string
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
        ydk::YLeaf numimported; //type: uint16
        ydk::YLeaf importedlst; //type: string
        ydk::YLeaf importedsrc; //type: string
        ydk::YLeaf origimportedsrc; //type: string
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
        ydk::YLeaf numimported; //type: uint16
        ydk::YLeaf importedlst; //type: string
        ydk::YLeaf importedsrc; //type: string
        ydk::YLeaf origimportedsrc; //type: string
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
        ydk::YLeaf numimported; //type: uint16
        ydk::YLeaf importedlst; //type: string
        ydk::YLeaf importedsrc; //type: string
        ydk::YLeaf origimportedsrc; //type: string
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

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class FlowSamplerMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf flow;
        static const ydk::Enum::YLeaf pkts;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "flow") return 1;
            if (name == "pkts") return 2;
            return -1;
        }
};

class NgmvpnAfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 0;
            if (name == "ipv6") return 1;
            return -1;
        }
};

class AaaKeyEncLdapProviderKeyEnc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;
        static const ydk::Enum::YLeaf inherit_from_global;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 6;
            if (name == "7") return 7;
            if (name == "inherit-from-global") return 255;
            return -1;
        }
};

class PlatformPcLbAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PC_LB_ALGO_DLB;
        static const ydk::Enum::YLeaf PC_LB_ALGO_RTAG7;
        static const ydk::Enum::YLeaf PC_LB_ALGO_RTAG7_MURMUR;
        static const ydk::Enum::YLeaf PC_LB_ALGO_RTAG7_LOCAL_CRC;
        static const ydk::Enum::YLeaf PC_LB_ALGO_DYNAMIC_PIN;

        static int get_enum_value(const std::string & name) {
            if (name == "PC_LB_ALGO_DLB") return 1;
            if (name == "PC_LB_ALGO_RTAG7") return 2;
            if (name == "PC_LB_ALGO_RTAG7_MURMUR") return 3;
            if (name == "PC_LB_ALGO_RTAG7_LOCAL_CRC") return 4;
            if (name == "PC_LB_ALGO_DYNAMIC_PIN") return 5;
            return -1;
        }
};

class WedgeBmcIPEnabled : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "yes") return 1;
            return -1;
        }
};

class RelnStateQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf mismatch_target;
        static const ydk::Enum::YLeaf default_target;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "mismatch-target") return 1;
            if (name == "default-target") return 2;
            return -1;
        }
};

class NatConfigErrNat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noerror;
        static const ydk::Enum::YLeaf PoolInUse;
        static const ydk::Enum::YLeaf TcpTcamNotCarved;
        static const ydk::Enum::YLeaf ConfigConflict;
        static const ydk::Enum::YLeaf IfConfigError;
        static const ydk::Enum::YLeaf HwProgFailureError;

        static int get_enum_value(const std::string & name) {
            if (name == "noerror") return 0;
            if (name == "PoolInUse") return 1;
            if (name == "TcpTcamNotCarved") return 2;
            if (name == "ConfigConflict") return 3;
            if (name == "IfConfigError") return 4;
            if (name == "HwProgFailureError") return 5;
            return -1;
        }
};

class AnalyticsFltType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf ce;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            if (name == "ce") return 3;
            return -1;
        }
};

class LcmProfVxlanMpls : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf vxlan;
        static const ydk::Enum::YLeaf mpls;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "vxlan") return 1;
            if (name == "mpls") return 2;
            return -1;
        }
};

class SatmOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf failed;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "up") return 1;
            if (name == "down") return 2;
            if (name == "failed") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "nbm") return 2;
            if (name == "null") return 3;
            if (name == "s-g-hash") return 4;
            if (name == "legacy") return 5;
            if (name == "resilient") return 6;
            if (name == "s-g-hash-next-hop") return 7;
            return -1;
        }
};

class BfdAuthInterop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 0;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "igmp-snoop-internal") return 0;
            if (name == "mfdm") return 1;
            if (name == "mfdm-sum") return 2;
            if (name == "rib") return 3;
            if (name == "vlan") return 4;
            if (name == "vlan-events") return 5;
            if (name == "vpc") return 6;
            return -1;
        }
};

class StpSimulate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class NwAdminStIfStatIcmpRedirect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class NatNatTrafficDir : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip_nat_invalid;
        static const ydk::Enum::YLeaf ip_nat_inside;
        static const ydk::Enum::YLeaf ip_nat_outside;

        static int get_enum_value(const std::string & name) {
            if (name == "ip-nat-invalid") return 0;
            if (name == "ip-nat-inside") return 1;
            if (name == "ip-nat-outside") return 2;
            return -1;
        }
};

class FsetAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf installed;
        static const ydk::Enum::YLeaf uninstalled;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            if (name == "installed") return 3;
            if (name == "uninstalled") return 4;
            return -1;
        }
};

class L2EnfPref : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sw;
        static const ydk::Enum::YLeaf hw;

        static int get_enum_value(const std::string & name) {
            if (name == "sw") return 1;
            if (name == "hw") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "created") return 1;
            if (name == "discovered") return 2;
            if (name == "configured") return 3;
            if (name == "up") return 4;
            if (name == "connecting") return 5;
            if (name == "active") return 6;
            if (name == "incompatible") return 7;
            if (name == "disconnected") return 8;
            if (name == "id-mismatch") return 9;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "hdr-err") return 1;
            if (name == "open-msg-err") return 2;
            if (name == "upd-msg-err") return 3;
            if (name == "hold-timer-exp") return 4;
            if (name == "fsm-err") return 5;
            if (name == "cease-err") return 6;
            if (name == "cap-msg-err") return 7;
            if (name == "process-restart-err") return 101;
            if (name == "fd-read-err") return 102;
            if (name == "fd-ioctl-err") return 103;
            if (name == "peer-close-sess-err") return 104;
            if (name == "rcvd-notif-err") return 105;
            if (name == "rcvd-dup-conn-req") return 106;
            if (name == "dyn-cap-no-buf") return 107;
            return -1;
        }
};

class IpHardwareEcmpHashPolynomialT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf CRC16;
        static const ydk::Enum::YLeaf CRC32HI;

        static int get_enum_value(const std::string & name) {
            if (name == "CRC16") return 0;
            if (name == "CRC32HI") return 1;
            return -1;
        }
};

class PlatformForwardingModeSelector : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf warp;
        static const ydk::Enum::YLeaf openflow_hybrid;
        static const ydk::Enum::YLeaf openflow_only;

        static int get_enum_value(const std::string & name) {
            if (name == "normal") return 1;
            if (name == "warp") return 2;
            if (name == "openflow-hybrid") return 3;
            if (name == "openflow-only") return 4;
            return -1;
        }
};

class AggregateAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "up") return 1;
            if (name == "down") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "subnet-mismatch") return 1;
            if (name == "invalid-mac") return 2;
            if (name == "invalid-ip") return 3;
            if (name == "invalid-vrf") return 4;
            if (name == "own-mac") return 5;
            if (name == "if-down") return 6;
            if (name == "up") return 7;
            return -1;
        }
};

class SnmpTcpSessionAuthT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf tcpSess;
        static const ydk::Enum::YLeaf tcpSessAuth;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "tcpSess") return 1;
            if (name == "tcpSessAuth") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "vxlan") return 1;
            if (name == "vxlan-tun-ctrl-frame") return 2;
            if (name == "vxlan-tun-ctrl-frame-lacp") return 3;
            if (name == "vxlan-tun-ctrl-frame-stp") return 4;
            if (name == "dot1q") return 5;
            if (name == "dot1q-tun-ctrl-frame") return 6;
            if (name == "dot1q-tun-ctrl-frame-lacp") return 7;
            if (name == "dot1q-tun-ctrl-frame-stp") return 8;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "sc") return 1;
            if (name == "fc1-copper") return 2;
            if (name == "fc2-copper") return 3;
            if (name == "bnc-tnc") return 4;
            if (name == "fc-coax") return 5;
            if (name == "fiber-jack") return 6;
            if (name == "lc") return 7;
            if (name == "mt-rj") return 8;
            if (name == "mu") return 9;
            if (name == "sg") return 10;
            if (name == "optical-pigtail") return 11;
            if (name == "mpo") return 12;
            if (name == "hssdc-2") return 32;
            if (name == "copper-pigtail") return 33;
            if (name == "rj45") return 34;
            return -1;
        }
};

class EpmEpOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "up") return 1;
            return -1;
        }
};

class TelemetryProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UDP;
        static const ydk::Enum::YLeaf TCP;
        static const ydk::Enum::YLeaf gRPC;
        static const ydk::Enum::YLeaf HTTP;

        static int get_enum_value(const std::string & name) {
            if (name == "UDP") return 1;
            if (name == "TCP") return 2;
            if (name == "gRPC") return 3;
            if (name == "HTTP") return 4;
            return -1;
        }
};

class IpAddrT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

        static int get_enum_value(const std::string & name) {
            if (name == "primary") return 1;
            if (name == "secondary") return 2;
            return -1;
        }
};

class TunnelifTunnelOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down") return 2;
            return -1;
        }
};

class IsisLvlT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf l1;
        static const ydk::Enum::YLeaf l2;

        static int get_enum_value(const std::string & name) {
            if (name == "p2p") return 0;
            if (name == "l1") return 1;
            if (name == "l2") return 2;
            return -1;
        }
};

class TunnelTunnelQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ivxlan;
        static const ydk::Enum::YLeaf vxlan;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "ivxlan") return 1;
            if (name == "vxlan") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "noerror") return 0;
            if (name == "managedConfigFlag") return 1;
            if (name == "otherConfigFlag") return 2;
            if (name == "raIntvl") return 3;
            if (name == "raLifetime") return 4;
            if (name == "suppressRa") return 5;
            if (name == "macExtract") return 6;
            return -1;
        }
};

class ActrlOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class IgmpDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf route;

        static int get_enum_value(const std::string & name) {
            if (name == "route") return 1;
            return -1;
        }
};

class InbandTelemetryFltType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf ce;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            if (name == "ce") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "noCfg") return 0;
            if (name == "tos-byte") return 1;
            if (name == "tos-value") return 2;
            if (name == "tos-type") return 3;
            if (name == "precedence-type") return 4;
            if (name == "precedence-value") return 5;
            return -1;
        }
};

class AggregateHostReachabilityMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf floodAndLearn;
        static const ydk::Enum::YLeaf controller;
        static const ydk::Enum::YLeaf bgp;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "floodAndLearn") return 1;
            if (name == "controller") return 2;
            if (name == "bgp") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "unspecified-msg-hdr-err") return 1;
            if (name == "conn-not-synced") return 2;
            if (name == "bad-msg-len") return 3;
            if (name == "bad-msg-type") return 4;
            if (name == "unknown-msg-hdr-err") return 5;
            if (name == "unspecified-open-err") return 6;
            if (name == "unsupp-version") return 7;
            if (name == "bad-peer-as") return 8;
            if (name == "bad-peer-rtrid") return 9;
            if (name == "unsupp-opt-param") return 10;
            if (name == "auth-err") return 11;
            if (name == "bad-holdtime") return 12;
            if (name == "unsupp-cap") return 13;
            if (name == "unknown-open-hdr-err") return 14;
            if (name == "unspecified-update-err") return 15;
            if (name == "malformed-attr-list") return 16;
            if (name == "unrecognized-wellknown-attr") return 17;
            if (name == "missing-wellknown-attr") return 18;
            if (name == "attr-flags-err") return 19;
            if (name == "attr-len-err") return 20;
            if (name == "invalid-origin-attr") return 21;
            if (name == "as-loop-err") return 22;
            if (name == "invalid-nh-attr") return 23;
            if (name == "opt-attr-err") return 24;
            if (name == "invalid-nw-field") return 25;
            if (name == "bad-as-path") return 26;
            if (name == "unknown-update-hdr-err") return 27;
            if (name == "unspecified-cease-err") return 28;
            if (name == "max-pfx-count-err") return 29;
            if (name == "admin-shut") return 30;
            if (name == "peer-decfg") return 31;
            if (name == "session-cleared") return 32;
            if (name == "conn-rej") return 33;
            if (name == "other-cfg-chg") return 34;
            if (name == "conn-coll-resolution") return 35;
            if (name == "out-of-rsrc") return 36;
            if (name == "dyn-cap-cfg-chg") return 37;
            if (name == "ttl-cfg-chg") return 38;
            if (name == "ttl-security-cfg-chg") return 39;
            if (name == "passive-neighbor-cfg-chg") return 40;
            if (name == "af-cfg-chg") return 41;
            if (name == "rr-cfg-chg") return 42;
            if (name == "rtrid-cfg-chg") return 43;
            if (name == "confed-id-chg") return 44;
            if (name == "confed-membership-change") return 45;
            if (name == "gr-cfg-chg") return 46;
            if (name == "soft-recfg-chg") return 47;
            if (name == "updatesrc-if-chg") return 48;
            if (name == "localas-chg") return 49;
            if (name == "unknown-cease-err") return 50;
            if (name == "unspecified-cap-msg-err") return 51;
            if (name == "unknown-seq-num") return 52;
            if (name == "invalid-cap-len") return 53;
            if (name == "bad-cap-val") return 54;
            if (name == "unsupp-cap-code") return 55;
            if (name == "unknown-cap-err") return 56;
            return -1;
        }
};

class TunnelifTunnelOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf del_on_fail;
        static const ydk::Enum::YLeaf usr_cfg_mtu;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "del_on_fail") return 1;
            if (name == "usr_cfg_mtu") return 2;
            return -1;
        }
};

class AaaAuthenticationProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pap;
        static const ydk::Enum::YLeaf chap;
        static const ydk::Enum::YLeaf mschap;
        static const ydk::Enum::YLeaf mschapv2;
        static const ydk::Enum::YLeaf ascii;

        static int get_enum_value(const std::string & name) {
            if (name == "pap") return 0;
            if (name == "chap") return 1;
            if (name == "mschap") return 2;
            if (name == "mschapv2") return 3;
            if (name == "ascii") return 4;
            return -1;
        }
};

class EqptSlotLoc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf front;
        static const ydk::Enum::YLeaf rear;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "front") return 1;
            if (name == "rear") return 2;
            return -1;
        }
};

class AggregateTunnelType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf vxlanipv4;
        static const ydk::Enum::YLeaf vxlanipv6;
        static const ydk::Enum::YLeaf nvgre;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "vxlanipv4") return 1;
            if (name == "vxlanipv6") return 2;
            if (name == "nvgre") return 3;
            return -1;
        }
};

class SnmpAuthType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hmac_md5_96;
        static const ydk::Enum::YLeaf hmac_sha1_96;

        static int get_enum_value(const std::string & name) {
            if (name == "hmac-md5-96") return 1;
            if (name == "hmac-sha1-96") return 2;
            return -1;
        }
};

class IsisAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class QospCtrlMeth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dynamic;

        static int get_enum_value(const std::string & name) {
            if (name == "static") return 0;
            if (name == "dynamic") return 1;
            return -1;
        }
};

class BgpAsSet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 0;
            return -1;
        }
};

class McastVer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            return -1;
        }
};

class NgmvpnDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mroute;
        static const ydk::Enum::YLeaf saroute;
        static const ydk::Enum::YLeaf l2route;

        static int get_enum_value(const std::string & name) {
            if (name == "mroute") return 0;
            if (name == "saroute") return 1;
            if (name == "l2route") return 2;
            return -1;
        }
};

class AaaRealm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf ldap;

        static int get_enum_value(const std::string & name) {
            if (name == "local") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs") return 2;
            if (name == "ldap") return 3;
            return -1;
        }
};

class PlatformPfcMmuBufferSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "routine") return 0;
            if (name == "priority") return 1;
            if (name == "immediate") return 2;
            if (name == "flash") return 3;
            if (name == "flash-override") return 4;
            if (name == "critical") return 5;
            if (name == "internet") return 6;
            if (name == "network") return 7;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "channeling") return 1;
            if (name == "individual") return 2;
            if (name == "failed") return 3;
            if (name == "suspended") return 4;
            if (name == "hot-standby") return 5;
            return -1;
        }
};

class PcPoType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf hif_pc;
        static const ydk::Enum::YLeaf non_hif_pc;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "hif-pc") return 1;
            if (name == "non-hif-pc") return 2;
            return -1;
        }
};

class IsisAfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v4;
        static const ydk::Enum::YLeaf v6;

        static int get_enum_value(const std::string & name) {
            if (name == "v4") return 1;
            if (name == "v6") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "sys-mem") return 1;
            if (name == "cpu") return 2;
            if (name == "peripherals") return 3;
            if (name == "internal-conn") return 4;
            if (name == "asic") return 5;
            if (name == "port") return 6;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "admin-down") return 1;
            if (name == "admin-down-pending") return 2;
            if (name == "delete-holddown") return 3;
            if (name == "delete-pending") return 4;
            if (name == "invalid") return 5;
            if (name == "create-pending") return 6;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "Emergency") return 0;
            if (name == "Alert") return 1;
            if (name == "Critical") return 2;
            if (name == "Error") return 3;
            if (name == "Warning") return 4;
            if (name == "Notif") return 5;
            if (name == "Inform") return 6;
            if (name == "Debug") return 7;
            return -1;
        }
};

class NwAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class PkiCsyncActivationStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "enabled") return 1;
            return -1;
        }
};

class LcmLoggingType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Emergencies;
        static const ydk::Enum::YLeaf Alerts;
        static const ydk::Enum::YLeaf Critical;
        static const ydk::Enum::YLeaf Errors;
        static const ydk::Enum::YLeaf Warnings;
        static const ydk::Enum::YLeaf Notification;
        static const ydk::Enum::YLeaf Information;
        static const ydk::Enum::YLeaf Debugging;

        static int get_enum_value(const std::string & name) {
            if (name == "Emergencies") return 0;
            if (name == "Alerts") return 1;
            if (name == "Critical") return 2;
            if (name == "Errors") return 3;
            if (name == "Warnings") return 4;
            if (name == "Notification") return 5;
            if (name == "Information") return 6;
            if (name == "Debugging") return 7;
            return -1;
        }
};

class EqptLedOpSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf blinking;
        static const ydk::Enum::YLeaf fail;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "off") return 1;
            if (name == "on") return 2;
            if (name == "blinking") return 3;
            if (name == "fail") return 4;
            return -1;
        }
};

class SrteIfOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "up") return 1;
            return -1;
        }
};

class L1LinkTransmitReset : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 0;
            return -1;
        }
};

class IsisNetworkTypeP2PSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf useAllISMac;

        static int get_enum_value(const std::string & name) {
            if (name == "off") return 0;
            if (name == "on") return 1;
            if (name == "useAllISMac") return 2;
            return -1;
        }
};

class L1SpanMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_a_span_dest;
        static const ydk::Enum::YLeaf span_dest;
        static const ydk::Enum::YLeaf span_dest_fwd;
        static const ydk::Enum::YLeaf span_dest_fwd_learn;

        static int get_enum_value(const std::string & name) {
            if (name == "not-a-span-dest") return 1;
            if (name == "span-dest") return 2;
            if (name == "span-dest-fwd") return 3;
            if (name == "span-dest-fwd-learn") return 4;
            return -1;
        }
};

class NbmNbmOperationalMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UNDEFINED;
        static const ydk::Enum::YLeaf PIM_ACTIVE;

        static int get_enum_value(const std::string & name) {
            if (name == "UNDEFINED") return 0;
            if (name == "PIM_ACTIVE") return 1;
            return -1;
        }
};

class SnmpVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v1;
        static const ydk::Enum::YLeaf v2c;
        static const ydk::Enum::YLeaf v3;

        static int get_enum_value(const std::string & name) {
            if (name == "v1") return 1;
            if (name == "v2c") return 2;
            if (name == "v3") return 3;
            return -1;
        }
};

class ActrlcapSubj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf rule_namespace;
        static const ydk::Enum::YLeaf scope_namespace;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "rule-namespace") return 1;
            if (name == "scope-namespace") return 2;
            return -1;
        }
};

class TerminalTermParity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf odd;
        static const ydk::Enum::YLeaf even;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "odd") return 1;
            if (name == "even") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "Undefined") return 0;
            if (name == "glean") return 1;
            if (name == "mtu-failure") return 2;
            if (name == "ttl-failure") return 3;
            if (name == "nat-flow") return 4;
            if (name == "sflow") return 5;
            return -1;
        }
};

class NwAdminStProcessStatStaticDisc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class BgpPasswdSet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 0;
            return -1;
        }
};

class IsisAdjOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf gr_init;

        static int get_enum_value(const std::string & name) {
            if (name == "init") return 1;
            if (name == "up") return 2;
            if (name == "down") return 3;
            if (name == "gr-init") return 4;
            return -1;
        }
};

class Ipv6IPv6EventLogSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf small;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf large;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "small") return 1;
            if (name == "medium") return 2;
            if (name == "large") return 3;
            return -1;
        }
};

class RtextcomType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rttarget;
        static const ydk::Enum::YLeaf generic;

        static int get_enum_value(const std::string & name) {
            if (name == "rttarget") return 1;
            if (name == "generic") return 2;
            return -1;
        }
};

class TunnelLayerT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2;
        static const ydk::Enum::YLeaf l3;

        static int get_enum_value(const std::string & name) {
            if (name == "l2") return 1;
            if (name == "l3") return 2;
            return -1;
        }
};

class VpcDualActiveSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 1;
            return -1;
        }
};

class SatmHpOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf fail;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "up") return 1;
            if (name == "down") return 2;
            if (name == "fail") return 3;
            return -1;
        }
};

class IsisEhType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf spfLeaf;
        static const ydk::Enum::YLeaf spfTree;
        static const ydk::Enum::YLeaf psnp;
        static const ydk::Enum::YLeaf csnp;
        static const ydk::Enum::YLeaf lspGen;
        static const ydk::Enum::YLeaf lspFlood;
        static const ydk::Enum::YLeaf iih;
        static const ydk::Enum::YLeaf adj;
        static const ydk::Enum::YLeaf dis;
        static const ydk::Enum::YLeaf events;
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf ha;
        static const ydk::Enum::YLeaf gr;
        static const ydk::Enum::YLeaf urib;
        static const ydk::Enum::YLeaf redist;
        static const ydk::Enum::YLeaf tlv;
        static const ydk::Enum::YLeaf mtr;
        static const ydk::Enum::YLeaf perf;
        static const ydk::Enum::YLeaf df;
        static const ydk::Enum::YLeaf sr;
        static const ydk::Enum::YLeaf ulib;

        static int get_enum_value(const std::string & name) {
            if (name == "spfLeaf") return 0;
            if (name == "spfTree") return 1;
            if (name == "psnp") return 2;
            if (name == "csnp") return 3;
            if (name == "lspGen") return 4;
            if (name == "lspFlood") return 5;
            if (name == "iih") return 6;
            if (name == "adj") return 7;
            if (name == "dis") return 8;
            if (name == "events") return 9;
            if (name == "cli") return 10;
            if (name == "ha") return 11;
            if (name == "gr") return 12;
            if (name == "urib") return 13;
            if (name == "redist") return 14;
            if (name == "tlv") return 15;
            if (name == "mtr") return 16;
            if (name == "perf") return 17;
            if (name == "df") return 18;
            if (name == "sr") return 19;
            if (name == "ulib") return 20;
            return -1;
        }
};

class TunnelifSnmpTrapSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class NwAdminSt_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class AaaNoRolePolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_login;
        static const ydk::Enum::YLeaf assign_default_role;

        static int get_enum_value(const std::string & name) {
            if (name == "no-login") return 0;
            if (name == "assign-default-role") return 1;
            return -1;
        }
};

class MonitorDestEncapT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gre;

        static int get_enum_value(const std::string & name) {
            if (name == "gre") return 1;
            return -1;
        }
};

class IpfibFecType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DEFAULT;
        static const ydk::Enum::YLeaf IPV4;
        static const ydk::Enum::YLeaf IPV6;
        static const ydk::Enum::YLeaf IPV4_TE_LSP;
        static const ydk::Enum::YLeaf IPV6_TE_LSP;
        static const ydk::Enum::YLeaf TE_IF;
        static const ydk::Enum::YLeaf DEAGG;
        static const ydk::Enum::YLeaf PER_CE;
        static const ydk::Enum::YLeaf FEC_NONE;
        static const ydk::Enum::YLeaf POLICY_V4_PFX;
        static const ydk::Enum::YLeaf POLICY_V6_PFX;
        static const ydk::Enum::YLeaf ADJ_SID;
        static const ydk::Enum::YLeaf SRTE;

        static int get_enum_value(const std::string & name) {
            if (name == "DEFAULT") return 0;
            if (name == "IPV4") return 1;
            if (name == "IPV6") return 2;
            if (name == "IPV4_TE_LSP") return 3;
            if (name == "IPV6_TE_LSP") return 4;
            if (name == "TE_IF") return 5;
            if (name == "DEAGG") return 6;
            if (name == "PER_CE") return 7;
            if (name == "FEC_NONE") return 8;
            if (name == "POLICY_V4_PFX") return 9;
            if (name == "POLICY_V6_PFX") return 10;
            if (name == "ADJ_SID") return 11;
            if (name == "SRTE") return 12;
            return -1;
        }
};

class LcmModuleFailureAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf shutdown;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "shutdown") return 1;
            return -1;
        }
};

class RtleakScope : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf intra;
        static const ydk::Enum::YLeaf inter;
        static const ydk::Enum::YLeaf defrt;

        static int get_enum_value(const std::string & name) {
            if (name == "intra") return 1;
            if (name == "inter") return 2;
            if (name == "defrt") return 3;
            return -1;
        }
};

class Ipv6ConfigErr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noerror;
        static const ydk::Enum::YLeaf nghbrAddress;
        static const ydk::Enum::YLeaf useLinkLocalOnly;
        static const ydk::Enum::YLeaf forward;

        static int get_enum_value(const std::string & name) {
            if (name == "noerror") return 0;
            if (name == "nghbrAddress") return 1;
            if (name == "useLinkLocalOnly") return 2;
            if (name == "forward") return 3;
            return -1;
        }
};

class PkiKeyringState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf started;
        static const ydk::Enum::YLeaf created;
        static const ydk::Enum::YLeaf reqCreated;
        static const ydk::Enum::YLeaf tpSet;
        static const ydk::Enum::YLeaf completed;

        static int get_enum_value(const std::string & name) {
            if (name == "started") return 1;
            if (name == "created") return 2;
            if (name == "reqCreated") return 3;
            if (name == "tpSet") return 4;
            if (name == "completed") return 5;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "pre-upgrade") return 0;
            if (name == "in-progress") return 1;
            if (name == "success") return 2;
            if (name == "failed") return 3;
            if (name == "not-compatible") return 4;
            if (name == "none") return 5;
            return -1;
        }
};

class NwAdminSt__ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class ItdSessActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noAction;
        static const ydk::Enum::YLeaf commit;
        static const ydk::Enum::YLeaf abort;

        static int get_enum_value(const std::string & name) {
            if (name == "noAction") return 0;
            if (name == "commit") return 1;
            if (name == "abort") return 2;
            return -1;
        }
};

class AggregateMacType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "unicast") return 1;
            if (name == "multicast") return 2;
            return -1;
        }
};

class StpGuard : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf root;
        static const ydk::Enum::YLeaf loop;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "root") return 1;
            if (name == "loop") return 2;
            if (name == "none") return 3;
            return -1;
        }
};

class CommAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "inserted") return 1;
            if (name == "absent") return 2;
            if (name == "mismatch") return 3;
            if (name == "fail") return 4;
            if (name == "present") return 5;
            if (name == "removed") return 6;
            if (name == "online") return 7;
            if (name == "offline") return 8;
            if (name == "pwr-up") return 9;
            if (name == "pwr-down") return 10;
            if (name == "err-pwr-down") return 11;
            if (name == "testing") return 12;
            if (name == "init") return 13;
            if (name == "reg-failure") return 14;
            if (name == "dnld") return 15;
            if (name == "upg") return 16;
            if (name == "srg-fail") return 17;
            if (name == "ha-seq-fail") return 18;
            return -1;
        }
};

class OpflexEpTransitionStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf attached;
        static const ydk::Enum::YLeaf detached;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "attached") return 1;
            if (name == "detached") return 2;
            return -1;
        }
};

class PlatformUdfOffsetBase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf packet_start;
        static const ydk::Enum::YLeaf outer_header_l3;
        static const ydk::Enum::YLeaf outer_header_l4;
        static const ydk::Enum::YLeaf inner_header_l3;
        static const ydk::Enum::YLeaf inner_header_l4;

        static int get_enum_value(const std::string & name) {
            if (name == "packet-start") return 0;
            if (name == "outer-header-l3") return 1;
            if (name == "outer-header-l4") return 2;
            if (name == "inner-header-l3") return 3;
            if (name == "inner-header-l4") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "network") return 0;
            if (name == "internet") return 1;
            if (name == "critical") return 2;
            if (name == "flash-override") return 3;
            if (name == "flash") return 4;
            if (name == "immediate") return 5;
            if (name == "priority") return 6;
            if (name == "routine") return 7;
            return -1;
        }
};

class BgpMaxPfxAct : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf log;
        static const ydk::Enum::YLeaf shut;
        static const ydk::Enum::YLeaf restart;

        static int get_enum_value(const std::string & name) {
            if (name == "log") return 1;
            if (name == "shut") return 2;
            if (name == "restart") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "VpcOobUnknown") return 0;
            if (name == "VpcOobDisabled") return 1;
            if (name == "VpcOobPeerAlive") return 2;
            if (name == "VpcOobPeerNotAlive") return 3;
            if (name == "VpcOobPeerAliveDomainMismatch") return 4;
            if (name == "VpcOobSuspended") return 5;
            if (name == "VpcOobNotOperational") return 6;
            if (name == "VpcOobSuspendedVrf") return 7;
            if (name == "VpcOobMisconfig") return 8;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "arp") return 2054;
            if (name == "trill") return 8947;
            if (name == "mpls_ucast") return 34887;
            if (name == "mac_security") return 35045;
            if (name == "fcoe") return 35078;
            if (name == "ip") return 43981;
            return -1;
        }
};

class CdpOperStQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf if_down;
        static const ydk::Enum::YLeaf unsupported;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "admin-down") return 2;
            if (name == "if-down") return 3;
            if (name == "unsupported") return 4;
            return -1;
        }
};

class CdpVer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v1;
        static const ydk::Enum::YLeaf v2;

        static int get_enum_value(const std::string & name) {
            if (name == "v1") return 1;
            if (name == "v2") return 2;
            return -1;
        }
};

class L3vmAsFormatType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asplain;
        static const ydk::Enum::YLeaf asdot;

        static int get_enum_value(const std::string & name) {
            if (name == "asplain") return 0;
            if (name == "asdot") return 1;
            return -1;
        }
};

class NwAdminStProcessStatAutoDiscAdd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class EqptFcotDomLane : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf basic;
        static const ydk::Enum::YLeaf extGlobal;
        static const ydk::Enum::YLeaf extOptical;

        static int get_enum_value(const std::string & name) {
            if (name == "basic") return 0;
            if (name == "extGlobal") return 1;
            if (name == "extOptical") return 2;
            return -1;
        }
};

class IpOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf failed;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "down") return 1;
            if (name == "up") return 2;
            if (name == "failed") return 3;
            return -1;
        }
};

class L2TrafficMapCfgSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf config_success;
        static const ydk::Enum::YLeaf config_failure;

        static int get_enum_value(const std::string & name) {
            if (name == "config-success") return 0;
            if (name == "config-failure") return 1;
            return -1;
        }
};

class FlowExportVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf v5;
        static const ydk::Enum::YLeaf v9;
        static const ydk::Enum::YLeaf cisco1;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "v5") return 1;
            if (name == "v9") return 2;
            if (name == "cisco1") return 3;
            return -1;
        }
};

class BgpLogNbrSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            return -1;
        }
};

class IpfibSpecialAdj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DEFAULT;
        static const ydk::Enum::YLeaf ATTACHED;
        static const ydk::Enum::YLeaf RECEIVE;
        static const ydk::Enum::YLeaf DROP;

        static int get_enum_value(const std::string & name) {
            if (name == "DEFAULT") return 0;
            if (name == "ATTACHED") return 1;
            if (name == "RECEIVE") return 2;
            if (name == "DROP") return 3;
            return -1;
        }
};

class NbmNbmBwUnitEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UNSPECIFIED;
        static const ydk::Enum::YLeaf KBPS;
        static const ydk::Enum::YLeaf MBPS;
        static const ydk::Enum::YLeaf GBPS;

        static int get_enum_value(const std::string & name) {
            if (name == "UNSPECIFIED") return 0;
            if (name == "KBPS") return 1;
            if (name == "MBPS") return 2;
            if (name == "GBPS") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "clear") return 1;
            if (name == "reset") return 2;
            if (name == "reload") return 3;
            if (name == "locate") return 4;
            if (name == "install") return 5;
            if (name == "test") return 6;
            if (name == "collect") return 7;
            if (name == "interface-in-service") return 8;
            return -1;
        }
};

class L1DiagsT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf dom;
        static const ydk::Enum::YLeaf ddm;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "dom") return 1;
            if (name == "ddm") return 2;
            return -1;
        }
};

class PlatformFabricMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf full_rate;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 2;
            if (name == "full-rate") return 1;
            return -1;
        }
};

class SrteDataPlane : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;

        static int get_enum_value(const std::string & name) {
            if (name == "mpls") return 0;
            return -1;
        }
};

class SysmgrCoreAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 0;
            if (name == "disable") return 1;
            return -1;
        }
};

class IsisAuthT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "clear") return 1;
            if (name == "md5") return 2;
            if (name == "unknown") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "Undefined") return 0;
            if (name == "dest-miss") return 1;
            if (name == "rpf-failure") return 2;
            if (name == "sg-rpf-failure") return 3;
            if (name == "ipv6-dest-miss") return 4;
            if (name == "ipv6-rpf-failure") return 5;
            if (name == "ipv6-sg-rpf-failure") return 6;
            return -1;
        }
};

class AnalyticsOportSupportT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 0;
            return -1;
        }
};

class IpUrpfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf loose;
        static const ydk::Enum::YLeaf loose_allow_default;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "strict") return 1;
            if (name == "loose") return 2;
            if (name == "loose-allow-default") return 3;
            return -1;
        }
};

class ItdNodeModeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf hot_standby;

        static int get_enum_value(const std::string & name) {
            if (name == "primary") return 0;
            if (name == "hot-standby") return 1;
            return -1;
        }
};

class MmodeMaintProfileType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal_mode;
        static const ydk::Enum::YLeaf maintenance_mode;

        static int get_enum_value(const std::string & name) {
            if (name == "normal-mode") return 0;
            if (name == "maintenance-mode") return 1;
            return -1;
        }
};

class NbmNbmOifOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UNDEFINED;
        static const ydk::Enum::YLeaf PROTOCOL;
        static const ydk::Enum::YLeaf API;
        static const ydk::Enum::YLeaf API_PROTOCOL;

        static int get_enum_value(const std::string & name) {
            if (name == "UNDEFINED") return 0;
            if (name == "PROTOCOL") return 1;
            if (name == "API") return 2;
            if (name == "API_PROTOCOL") return 3;
            return -1;
        }
};

class OspfAlways : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "yes") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "bgp") return 0;
            if (name == "mrib") return 1;
            if (name == "m2rib") return 2;
            if (name == "m6rib") return 3;
            if (name == "pim") return 4;
            if (name == "pim6") return 5;
            if (name == "hmm") return 6;
            if (name == "isis") return 7;
            if (name == "ha") return 8;
            return -1;
        }
};

class CapRuleT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf limit;

        static int get_enum_value(const std::string & name) {
            if (name == "limit") return 1;
            return -1;
        }
};

class NdMacExtract : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf nud_phase;
        static const ydk::Enum::YLeaf exclude_nud_phase;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "nud-phase") return 1;
            if (name == "exclude-nud-phase") return 2;
            return -1;
        }
};

class BootAutoCopy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 0;
            return -1;
        }
};

class StpLcIssu : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf disruptive;
        static const ydk::Enum::YLeaf non_disruptive;
        static const ydk::Enum::YLeaf auto_;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "disruptive") return 1;
            if (name == "non-disruptive") return 2;
            if (name == "auto") return 3;
            return -1;
        }
};

class SpanType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf erspan_source;
        static const ydk::Enum::YLeaf erspanDst;
        static const ydk::Enum::YLeaf aclCapture;
        static const ydk::Enum::YLeaf fcIsolaLocal;
        static const ydk::Enum::YLeaf ethSpanWarp;
        static const ydk::Enum::YLeaf spanWarp;

        static int get_enum_value(const std::string & name) {
            if (name == "invalid") return 63;
            if (name == "local") return 0;
            if (name == "erspan-source") return 1;
            if (name == "erspanDst") return 2;
            if (name == "aclCapture") return 3;
            if (name == "fcIsolaLocal") return 4;
            if (name == "ethSpanWarp") return 7;
            if (name == "spanWarp") return 18;
            return -1;
        }
};

class L1AllowMultiTag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 0;
            return -1;
        }
};

class NwAdminStProcessStatAutoPuntBcast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class Icmpv6EventLogSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf small;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf large;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "small") return 1;
            if (name == "medium") return 2;
            if (name == "large") return 3;
            return -1;
        }
};

class HmmFwdMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf anycastGW;
        static const ydk::Enum::YLeaf proxyGW;

        static int get_enum_value(const std::string & name) {
            if (name == "standard") return 0;
            if (name == "anycastGW") return 1;
            if (name == "proxyGW") return 2;
            return -1;
        }
};

class SegrtAfType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            return -1;
        }
};

class DhcpDAILogType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf inone;

        static int get_enum_value(const std::string & name) {
            if (name == "deny") return 1;
            if (name == "permit") return 2;
            if (name == "all") return 3;
            if (name == "inone") return 5;
            return -1;
        }
};

class OspfNwT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf bcast;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "p2p") return 1;
            if (name == "bcast") return 2;
            return -1;
        }
};

class Ospfv3OperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "invalid") return 0;
            if (name == "down") return 1;
            if (name == "up") return 2;
            return -1;
        }
};

class RtmapRoutePervasive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf non_pervasive;
        static const ydk::Enum::YLeaf pervasive;
        static const ydk::Enum::YLeaf pervasive_non_ext_bd;

        static int get_enum_value(const std::string & name) {
            if (name == "non-pervasive") return 0;
            if (name == "pervasive") return 1;
            if (name == "pervasive-non-ext-bd") return 2;
            return -1;
        }
};

class RtmapMetricT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type_1;
        static const ydk::Enum::YLeaf type_2;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf external;

        static int get_enum_value(const std::string & name) {
            if (name == "type-1") return 1;
            if (name == "type-2") return 2;
            if (name == "internal") return 3;
            if (name == "external") return 4;
            return -1;
        }
};

class BgpPeerFabType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fabric_internal;
        static const ydk::Enum::YLeaf fabric_external;
        static const ydk::Enum::YLeaf fabric_border_leaf;

        static int get_enum_value(const std::string & name) {
            if (name == "fabric-internal") return 0;
            if (name == "fabric-external") return 1;
            if (name == "fabric-border-leaf") return 2;
            return -1;
        }
};

class L1capSubj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf pc_namespace;
        static const ydk::Enum::YLeaf ethport;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "pc-namespace") return 1;
            if (name == "ethport") return 2;
            return -1;
        }
};

class EqptSock : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            return -1;
        }
};

class MonitorOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf failed;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down") return 2;
            if (name == "failed") return 3;
            return -1;
        }
};

class IpqosPolicyDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ingress;
        static const ydk::Enum::YLeaf egress;
        static const ydk::Enum::YLeaf both;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "ingress") return 1;
            if (name == "egress") return 2;
            if (name == "both") return 3;
            return -1;
        }
};

class RtpfxCriteria : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exact;
        static const ydk::Enum::YLeaf inexact;

        static int get_enum_value(const std::string & name) {
            if (name == "exact") return 0;
            if (name == "inexact") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 0;
            if (name == "down") return 1;
            if (name == "module-removed") return 2;
            if (name == "individual") return 3;
            if (name == "suspended") return 4;
            if (name == "hot-standby") return 5;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "deleted") return 0;
            if (name == "staled") return 1;
            if (name == "valid") return 2;
            if (name == "invalid") return 3;
            if (name == "history") return 4;
            if (name == "suppressed") return 5;
            if (name == "dampened") return 6;
            return -1;
        }
};

class SegrtSrDpType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "mpls") return 1;
            if (name == "ipv6") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "access-failed") return 1;
            if (name == "checksum-failed") return 2;
            if (name == "vendor-crc-failed") return 3;
            if (name == "sfp-speed-mismatch") return 4;
            if (name == "eth-compalint-failed") return 5;
            if (name == "unknown-xcvr-type") return 6;
            if (name == "emphasis-checksum-failed") return 7;
            if (name == "init-failed") return 8;
            if (name == "ok-auth-success-no-md5") return 9;
            if (name == "auth-failed") return 10;
            if (name == "ok-delayed-auth-success") return 11;
            if (name == "delayed-auth-failed") return 12;
            if (name == "ok-no-md5") return 13;
            if (name == "ok") return 14;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "initializing") return 1;
            if (name == "discovered") return 2;
            if (name == "connected") return 3;
            if (name == "registering") return 4;
            if (name == "registered") return 5;
            if (name == "ready") return 6;
            if (name == "online-seq") return 7;
            if (name == "online") return 8;
            if (name == "offline-req") return 9;
            if (name == "offline-seq") return 10;
            if (name == "offline") return 11;
            if (name == "img-download") return 12;
            if (name == "failed") return 13;
            if (name == "removed") return 14;
            if (name == "hl-upg-seq") return 15;
            if (name == "chk-upg-seq") return 16;
            if (name == "upg-start") return 17;
            if (name == "hl-upg-idle") return 18;
            if (name == "chk-ins-seq") return 19;
            if (name == "hl-upg-fail") return 20;
            if (name == "aa-upg-rdy") return 21;
            if (name == "aa-upg-idle") return 22;
            if (name == "aa-upg-done") return 23;
            if (name == "aa-upg-fail") return 24;
            if (name == "aa-ver-mismatch") return 25;
            if (name == "ch-type-mismatch") return 26;
            return -1;
        }
};

class LldpDCBXPVerType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf CEE;
        static const ydk::Enum::YLeaf IEEE;

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 0;
            if (name == "CEE") return 2;
            if (name == "IEEE") return 3;
            return -1;
        }
};

class PlatformPcMplsLbLabelOnly : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DEFAULT;
        static const ydk::Enum::YLeaf LABEL_ONLY;

        static int get_enum_value(const std::string & name) {
            if (name == "DEFAULT") return 0;
            if (name == "LABEL_ONLY") return 1;
            return -1;
        }
};

class EqptAirDir : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf front2back;
        static const ydk::Enum::YLeaf back2front;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "front2back") return 1;
            if (name == "back2front") return 2;
            return -1;
        }
};

class PlatformFrontPortmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sfp_plus;
        static const ydk::Enum::YLeaf qsfp;

        static int get_enum_value(const std::string & name) {
            if (name == "sfp-plus") return 0;
            if (name == "qsfp") return 1;
            return -1;
        }
};

class SysmgrFwMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf recovery;
        static const ydk::Enum::YLeaf regular;

        static int get_enum_value(const std::string & name) {
            if (name == "recovery") return 1;
            if (name == "regular") return 2;
            return -1;
        }
};

class Icmpv6OperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf failed;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "up") return 1;
            if (name == "failed") return 2;
            return -1;
        }
};

class VsanOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down") return 2;
            return -1;
        }
};

class Ospfv3IfType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf loopback;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf p2mp;
        static const ydk::Enum::YLeaf nbma;
        static const ydk::Enum::YLeaf bcast;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "loopback") return 1;
            if (name == "p2p") return 2;
            if (name == "p2mp") return 3;
            if (name == "nbma") return 4;
            if (name == "bcast") return 5;
            return -1;
        }
};

class AggregateBfdStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "admin_down") return 1;
            if (name == "down") return 2;
            if (name == "init") return 3;
            if (name == "up") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "northstar") return 1;
            if (name == "alpine") return 2;
            if (name == "bcm") return 3;
            if (name == "davos") return 4;
            if (name == "sugarbowl") return 5;
            if (name == "homewood") return 6;
            return -1;
        }
};

class ImBreakoutProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf Y_50g_2x_only;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "50g-2x-only") return 1;
            return -1;
        }
};

class OspfHelperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_helping;
        static const ydk::Enum::YLeaf helping;

        static int get_enum_value(const std::string & name) {
            if (name == "not-helping") return 1;
            if (name == "helping") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "Unknown") return 0;
            if (name == "bytes") return 1;
            if (name == "kbytes") return 2;
            if (name == "mbytes") return 3;
            if (name == "packets") return 4;
            if (name == "us") return 5;
            if (name == "ms") return 6;
            return -1;
        }
};

class FvImmediacy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf lazy;

        static int get_enum_value(const std::string & name) {
            if (name == "immediate") return 1;
            if (name == "lazy") return 2;
            return -1;
        }
};

class MmodeMaintModeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf maintenance;
        static const ydk::Enum::YLeaf unplanned_maintenance;

        static int get_enum_value(const std::string & name) {
            if (name == "normal") return 0;
            if (name == "maintenance") return 1;
            if (name == "unplanned-maintenance") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "assertRcv") return 0;
            if (name == "bidir") return 1;
            if (name == "hello") return 2;
            if (name == "joinPrune") return 3;
            if (name == "nullReg") return 4;
            if (name == "packet") return 5;
            if (name == "pim6Internal") return 6;
            if (name == "rp") return 7;
            if (name == "vrf") return 8;
            if (name == "jpSum") return 9;
            return -1;
        }
};

class L1VoiceVlanType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf tagged;
        static const ydk::Enum::YLeaf dot1p;
        static const ydk::Enum::YLeaf untagged;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "tagged") return 1;
            if (name == "dot1p") return 2;
            if (name == "untagged") return 3;
            return -1;
        }
};

class NwAdminStIfStatMRouting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class IsisBwRefUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mbps;
        static const ydk::Enum::YLeaf gbps;

        static int get_enum_value(const std::string & name) {
            if (name == "mbps") return 0;
            if (name == "gbps") return 1;
            return -1;
        }
};

class OspfAdjChangeLogLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf brief;
        static const ydk::Enum::YLeaf detail;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "brief") return 1;
            if (name == "detail") return 2;
            return -1;
        }
};

class StpLinkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf shared;

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 1;
            if (name == "p2p") return 2;
            if (name == "shared") return 3;
            return -1;
        }
};

class LcmProfAclStats : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "yes") return 1;
            return -1;
        }
};

class NwMemAlertLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf critical;

        static int get_enum_value(const std::string & name) {
            if (name == "normal") return 0;
            if (name == "minor") return 1;
            if (name == "major") return 2;
            if (name == "critical") return 3;
            return -1;
        }
};

class RelnTargetType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf name;
        static const ydk::Enum::YLeaf mo;
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "name") return 0;
            if (name == "mo") return 1;
            if (name == "all") return 2;
            return -1;
        }
};

class QospSchedAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wrr;
        static const ydk::Enum::YLeaf sp;

        static int get_enum_value(const std::string & name) {
            if (name == "wrr") return 0;
            if (name == "sp") return 1;
            return -1;
        }
};

class HsrpGrpIpObtainMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admin;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf learn;

        static int get_enum_value(const std::string & name) {
            if (name == "admin") return 0;
            if (name == "auto") return 1;
            if (name == "learn") return 2;
            return -1;
        }
};

class ArpAdjOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf incomplete;
        static const ydk::Enum::YLeaf normal;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "incomplete") return 1;
            if (name == "normal") return 2;
            return -1;
        }
};

class AaaSearchMapEntryType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf user_profile;
        static const ydk::Enum::YLeaf trusted_cert;
        static const ydk::Enum::YLeaf crl_lookup;
        static const ydk::Enum::YLeaf user_switch_bind;
        static const ydk::Enum::YLeaf user_certdn_match;
        static const ydk::Enum::YLeaf user_pubkey_match;

        static int get_enum_value(const std::string & name) {
            if (name == "user-profile") return 1;
            if (name == "trusted-cert") return 2;
            if (name == "crl-lookup") return 3;
            if (name == "user-switch-bind") return 4;
            if (name == "user-certdn-match") return 5;
            if (name == "user-pubkey-match") return 6;
            return -1;
        }
};

class OspfGrCtrl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf planned_only;
        static const ydk::Enum::YLeaf complete;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "planned-only") return 1;
            if (name == "complete") return 2;
            if (name == "disabled") return 3;
            return -1;
        }
};

class Ospfv3NwT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf bcast;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "p2p") return 1;
            if (name == "bcast") return 2;
            return -1;
        }
};

class SlaReactionVariable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf rtt;
        static const ydk::Enum::YLeaf jitterSDAvg;
        static const ydk::Enum::YLeaf jitterDSAvg;
        static const ydk::Enum::YLeaf packetLossSD;
        static const ydk::Enum::YLeaf packetLossDS;
        static const ydk::Enum::YLeaf mos;
        static const ydk::Enum::YLeaf timeout;
        static const ydk::Enum::YLeaf connectionLoss;
        static const ydk::Enum::YLeaf verifyError;
        static const ydk::Enum::YLeaf jitterAvg;
        static const ydk::Enum::YLeaf icpif;
        static const ydk::Enum::YLeaf packetLateArrival;
        static const ydk::Enum::YLeaf packetOutOfSequence;
        static const ydk::Enum::YLeaf maxOfPositiveSD;
        static const ydk::Enum::YLeaf maxOfNegativeSD;
        static const ydk::Enum::YLeaf maxOfPositiveDS;
        static const ydk::Enum::YLeaf maxOfNegativeDS;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "rtt") return 1;
            if (name == "jitterSDAvg") return 2;
            if (name == "jitterDSAvg") return 3;
            if (name == "packetLossSD") return 4;
            if (name == "packetLossDS") return 5;
            if (name == "mos") return 6;
            if (name == "timeout") return 7;
            if (name == "connectionLoss") return 8;
            if (name == "verifyError") return 9;
            if (name == "jitterAvg") return 10;
            if (name == "icpif") return 11;
            if (name == "packetLateArrival") return 13;
            if (name == "packetOutOfSequence") return 14;
            if (name == "maxOfPositiveSD") return 15;
            if (name == "maxOfNegativeSD") return 16;
            if (name == "maxOfPositiveDS") return 17;
            if (name == "maxOfNegativeDS") return 18;
            return -1;
        }
};

class AaaRuleScopeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf feature;
        static const ydk::Enum::YLeaf feature_group;
        static const ydk::Enum::YLeaf oid;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "feature") return 2;
            if (name == "feature-group") return 3;
            if (name == "oid") return 21;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "port") return 1;
            if (name == "port-channel") return 2;
            if (name == "tunnel") return 3;
            if (name == "loopback") return 4;
            if (name == "svi") return 5;
            return -1;
        }
};

class CoppAffix : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf prefix;
        static const ydk::Enum::YLeaf suffix;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "prefix") return 1;
            if (name == "suffix") return 2;
            return -1;
        }
};

class IpfibAddressType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IPV4;
        static const ydk::Enum::YLeaf IPV6;
        static const ydk::Enum::YLeaf LABEL;

        static int get_enum_value(const std::string & name) {
            if (name == "IPV4") return 0;
            if (name == "IPV6") return 1;
            if (name == "LABEL") return 2;
            return -1;
        }
};

class M6ribHoldAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class PlatformPstatCfg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PSTAT_DISABLE;
        static const ydk::Enum::YLeaf PSTAT_ENABLE;
        static const ydk::Enum::YLeaf PSTAT_ENABLE_PEAK;

        static int get_enum_value(const std::string & name) {
            if (name == "PSTAT_DISABLE") return 0;
            if (name == "PSTAT_ENABLE") return 1;
            if (name == "PSTAT_ENABLE_PEAK") return 2;
            return -1;
        }
};

class CallhomePredefProfileName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf predef_tac_prof;
        static const ydk::Enum::YLeaf full_txt;
        static const ydk::Enum::YLeaf short_txt;

        static int get_enum_value(const std::string & name) {
            if (name == "predef_tac_prof") return 0;
            if (name == "full_txt") return 1;
            if (name == "short_txt") return 2;
            return -1;
        }
};

class SisfRaGuardRouterPreferenceMaximum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf nocheck;

        static int get_enum_value(const std::string & name) {
            if (name == "low") return 1;
            if (name == "medium") return 2;
            if (name == "high") return 3;
            if (name == "nocheck") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "january") return 0;
            if (name == "february") return 1;
            if (name == "march") return 2;
            if (name == "april") return 3;
            if (name == "may") return 4;
            if (name == "june") return 5;
            if (name == "july") return 6;
            if (name == "august") return 7;
            if (name == "september") return 8;
            if (name == "october") return 9;
            if (name == "november") return 10;
            if (name == "december") return 11;
            return -1;
        }
};

class L3VrfAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf shutdown;
        static const ydk::Enum::YLeaf admin_up;

        static int get_enum_value(const std::string & name) {
            if (name == "shutdown") return 1;
            if (name == "admin-up") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "Unknown") return 0;
            if (name == "bps") return 1;
            if (name == "pps") return 2;
            if (name == "kbps") return 3;
            if (name == "mbps") return 4;
            if (name == "gbps") return 5;
            return -1;
        }
};

class EqptChOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_operational;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf online;

        static int get_enum_value(const std::string & name) {
            if (name == "not-operational") return 0;
            if (name == "failed") return 1;
            if (name == "online") return 2;
            return -1;
        }
};

class BgpAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class EqptSlotOpSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf empty;
        static const ydk::Enum::YLeaf inserted;

        static int get_enum_value(const std::string & name) {
            if (name == "empty") return 0;
            if (name == "inserted") return 1;
            return -1;
        }
};

class UdldAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class OpflexDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class Vrrpv3Preempt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 0;
            return -1;
        }
};

class PlatformSwitchMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf n3k;
        static const ydk::Enum::YLeaf n9k;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "n3k") return 1;
            if (name == "n9k") return 2;
            return -1;
        }
};

class AaaAccountStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf inactive;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 0;
            if (name == "inactive") return 1;
            return -1;
        }
};

class EqptParity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf even;
        static const ydk::Enum::YLeaf odd;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "even") return 1;
            if (name == "odd") return 2;
            return -1;
        }
};

class SlaPrecision : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf microseconds;
        static const ydk::Enum::YLeaf milliseconds;

        static int get_enum_value(const std::string & name) {
            if (name == "microseconds") return 1;
            if (name == "milliseconds") return 2;
            return -1;
        }
};

class SnmpBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "yes") return 1;
            return -1;
        }
};

class RtextcomScope : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf transitive;
        static const ydk::Enum::YLeaf non_transitive;

        static int get_enum_value(const std::string & name) {
            if (name == "transitive") return 0;
            if (name == "non-transitive") return 1;
            return -1;
        }
};

class L2Disablefka : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf set;

        static int get_enum_value(const std::string & name) {
            if (name == "not_set") return 0;
            if (name == "set") return 1;
            return -1;
        }
};

class OspfMaxLsaAct : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reject;
        static const ydk::Enum::YLeaf restart;
        static const ydk::Enum::YLeaf log;

        static int get_enum_value(const std::string & name) {
            if (name == "reject") return 0;
            if (name == "restart") return 1;
            if (name == "log") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "not_running") return 2;
            if (name == "not_synchronized") return 3;
            if (name == "synced_local_clock") return 4;
            if (name == "synced_local_hw_refclk") return 5;
            if (name == "synced_remote_server") return 6;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "maintenance") return 0;
            if (name == "connected") return 1;
            if (name == "noresponse") return 2;
            if (name == "disconnected") return 3;
            if (name == "poweredOn") return 4;
            if (name == "poweredOff") return 5;
            if (name == "standBy") return 6;
            if (name == "suspended") return 7;
            if (name == "unknown") return 8;
            return -1;
        }
};

class BootPoap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 0;
            return -1;
        }
};

class SviMedium : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bcast;
        static const ydk::Enum::YLeaf p2p;

        static int get_enum_value(const std::string & name) {
            if (name == "bcast") return 0;
            if (name == "p2p") return 1;
            return -1;
        }
};

class AnalyticsDirectionT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;
        static const ydk::Enum::YLeaf both;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 1;
            if (name == "out") return 2;
            if (name == "both") return 3;
            return -1;
        }
};

class SnmpSnmpTrapSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            return -1;
        }
};

class CommSshPortfaultBitmapT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noerror;
        static const ydk::Enum::YLeaf SshPortUnavailable;

        static int get_enum_value(const std::string & name) {
            if (name == "noerror") return 0;
            if (name == "SshPortUnavailable") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "undefined") return 0;
            if (name == "4C") return 1;
            if (name == "2C+4Q") return 2;
            if (name == "18C") return 3;
            if (name == "4C+28Q") return 4;
            if (name == "6C+24Q") return 5;
            return -1;
        }
};

class OspfSgmntRtgMplsOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Disabled;
        static const ydk::Enum::YLeaf Enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "Disabled") return 0;
            if (name == "Enabled") return 1;
            return -1;
        }
};

class BootBootOrderReverse : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf yes;
        static const ydk::Enum::YLeaf no;

        static int get_enum_value(const std::string & name) {
            if (name == "yes") return 1;
            if (name == "no") return 0;
            return -1;
        }
};

class SrteDisjointType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf link;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "node") return 1;
            if (name == "link") return 2;
            return -1;
        }
};

class OspfHelperExitQual : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf in_progress;
        static const ydk::Enum::YLeaf completed;
        static const ydk::Enum::YLeaf timed_out;
        static const ydk::Enum::YLeaf topology_changed;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "in-progress") return 2;
            if (name == "completed") return 3;
            if (name == "timed-out") return 4;
            if (name == "topology-changed") return 5;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "ok") return 1;
            if (name == "fail") return 2;
            if (name == "absent") return 3;
            if (name == "shut") return 4;
            if (name == "mismatch") return 5;
            return -1;
        }
};

class SyslogTimeStampFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf microseconds;
        static const ydk::Enum::YLeaf milliseconds;
        static const ydk::Enum::YLeaf seconds;

        static int get_enum_value(const std::string & name) {
            if (name == "microseconds") return 0;
            if (name == "milliseconds") return 1;
            if (name == "seconds") return 2;
            return -1;
        }
};

class CoppExceedAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Undefined;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf drop;

        static int get_enum_value(const std::string & name) {
            if (name == "Undefined") return 0;
            if (name == "transmit") return 1;
            if (name == "drop") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "bd-regular") return 1;
            if (name == "bd-reserved") return 2;
            if (name == "bd-control") return 3;
            if (name == "bd-external") return 4;
            if (name == "ckt-vlan") return 5;
            if (name == "ckt-vxlan") return 6;
            return -1;
        }
};

class StpProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf mstp;
        static const ydk::Enum::YLeaf rstp;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "mstp") return 1;
            if (name == "rstp") return 2;
            return -1;
        }
};

class MsdpDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf route;
        static const ydk::Enum::YLeaf source;

        static int get_enum_value(const std::string & name) {
            if (name == "route") return 0;
            if (name == "source") return 1;
            return -1;
        }
};

class AggregateVpcPeerLinkStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf VpcPeerNolink;
        static const ydk::Enum::YLeaf VpcPeerLinkDown;
        static const ydk::Enum::YLeaf VpcPeerOk;
        static const ydk::Enum::YLeaf VpcPeerNotfound;

        static int get_enum_value(const std::string & name) {
            if (name == "VpcPeerNolink") return 0;
            if (name == "VpcPeerLinkDown") return 1;
            if (name == "VpcPeerOk") return 2;
            if (name == "VpcPeerNotfound") return 3;
            return -1;
        }
};

class IsisAdvtLvl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l0;
        static const ydk::Enum::YLeaf l1;
        static const ydk::Enum::YLeaf l2;

        static int get_enum_value(const std::string & name) {
            if (name == "l0") return 0;
            if (name == "l1") return 1;
            if (name == "l2") return 2;
            return -1;
        }
};

class CoppViolateAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Undefined;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf drop;

        static int get_enum_value(const std::string & name) {
            if (name == "Undefined") return 0;
            if (name == "transmit") return 1;
            if (name == "drop") return 2;
            return -1;
        }
};

class L1VdcSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_created;
        static const ydk::Enum::YLeaf created;
        static const ydk::Enum::YLeaf cleanup;

        static int get_enum_value(const std::string & name) {
            if (name == "not-created") return 0;
            if (name == "created") return 1;
            if (name == "cleanup") return 2;
            return -1;
        }
};

class IsisTopoT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf st;
        static const ydk::Enum::YLeaf mt;
        static const ydk::Enum::YLeaf mtt;

        static int get_enum_value(const std::string & name) {
            if (name == "st") return 1;
            if (name == "mt") return 2;
            if (name == "mtt") return 3;
            return -1;
        }
};

class PcHashDist : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf adaptive;
        static const ydk::Enum::YLeaf fixed;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "adaptive") return 1;
            if (name == "fixed") return 2;
            return -1;
        }
};

class OspfAuthT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf simple;
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf unspecified;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "simple") return 1;
            if (name == "md5") return 2;
            if (name == "unspecified") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "ok") return 0;
            if (name == "warning") return 1;
            if (name == "overload") return 2;
            if (name == "sleep") return 3;
            if (name == "reset") return 4;
            if (name == "perm-sleep") return 5;
            return -1;
        }
};

class VpcSummRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf election_not_done;
        static const ydk::Enum::YLeaf cfg_master_oper_master;
        static const ydk::Enum::YLeaf cfg_master_oper_slave;
        static const ydk::Enum::YLeaf cfg_slave_oper_master;
        static const ydk::Enum::YLeaf cfg_slave_oper_slave;

        static int get_enum_value(const std::string & name) {
            if (name == "election-not-done") return 0;
            if (name == "cfg-master-oper-master") return 1;
            if (name == "cfg-master-oper-slave") return 2;
            if (name == "cfg-slave-oper-master") return 3;
            if (name == "cfg-slave-oper-slave") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "a-d") return 1;
            if (name == "mac-ip") return 2;
            if (name == "imet") return 3;
            if (name == "eth-seg") return 4;
            if (name == "ip-pfx") return 5;
            return -1;
        }
};

class LacpTxRate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf fast;

        static int get_enum_value(const std::string & name) {
            if (name == "normal") return 1;
            if (name == "fast") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 4;
            if (name == "rs-fec") return 2;
            if (name == "fc-fec") return 1;
            if (name == "fec-off") return 3;
            if (name == "rs-ieee") return 5;
            if (name == "rs-cons16") return 6;
            if (name == "not-available") return 20;
            return -1;
        }
};

class PlatformBufferMonitorMd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf None;
        static const ydk::Enum::YLeaf Unicast;
        static const ydk::Enum::YLeaf Multicast;

        static int get_enum_value(const std::string & name) {
            if (name == "None") return 0;
            if (name == "Unicast") return 2;
            if (name == "Multicast") return 3;
            return -1;
        }
};

class StpRootType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "primary") return 1;
            if (name == "secondary") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "tenant") return 1;
            if (name == "mgmt") return 2;
            if (name == "snmp") return 3;
            if (name == "bd_flood") return 4;
            if (name == "vrf_default") return 5;
            if (name == "infra") return 6;
            return -1;
        }
};

class AggregateConfigSourceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf controller;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "cli") return 1;
            if (name == "controller") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "reg-community") return 1;
            if (name == "ext-gen-community") return 2;
            if (name == "rtt-community") return 3;
            if (name == "rt-tag") return 4;
            if (name == "rt-weight") return 5;
            if (name == "local-pref") return 6;
            if (name == "metric") return 7;
            if (name == "ospf-nssa") return 8;
            if (name == "ospf-fwd-addr") return 9;
            if (name == "ip-nh") return 10;
            if (name == "metric-type") return 11;
            if (name == "rt-dist") return 12;
            if (name == "nh-pa") return 13;
            if (name == "origin") return 14;
            if (name == "list-community") return 15;
            if (name == "dampening") return 16;
            if (name == "extcommunity-cost") return 17;
            if (name == "ip-prec") return 18;
            if (name == "continue") return 19;
            if (name == "rt-index") return 20;
            if (name == "list-extcommunity") return 21;
            if (name == "ipv6-prec") return 22;
            if (name == "prepend") return 23;
            if (name == "lastas") return 24;
            if (name == "as-pathtag") return 25;
            return -1;
        }
};

class EthpmFcotState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf inserted;
        static const ydk::Enum::YLeaf removed;
        static const ydk::Enum::YLeaf hw_failure;
        static const ydk::Enum::YLeaf inserted_initializing;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "inserted") return 1;
            if (name == "removed") return 2;
            if (name == "hw-failure") return 3;
            if (name == "inserted-initializing") return 4;
            return -1;
        }
};

class BgpAdvtMapCondition : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf exist;
        static const ydk::Enum::YLeaf non_exist;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "exist") return 1;
            if (name == "non-exist") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "init") return 0;
            if (name == "add") return 1;
            if (name == "activate") return 2;
            if (name == "add-activate") return 3;
            if (name == "deactivate") return 4;
            if (name == "commit") return 5;
            if (name == "remove") return 6;
            return -1;
        }
};

class NvoSrStateT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf add_complete;
        static const ydk::Enum::YLeaf EviDelPending;
        static const ydk::Enum::YLeaf PeerDelPending;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 4;
            if (name == "init") return 0;
            if (name == "add_complete") return 1;
            if (name == "EviDelPending") return 2;
            if (name == "PeerDelPending") return 3;
            return -1;
        }
};

class CompInstType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf phys;
        static const ydk::Enum::YLeaf virt;
        static const ydk::Enum::YLeaf hv;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "phys") return 1;
            if (name == "virt") return 2;
            if (name == "hv") return 3;
            return -1;
        }
};

class ItdProtocolType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noProtocol;
        static const ydk::Enum::YLeaf DNS;
        static const ydk::Enum::YLeaf HTTP;
        static const ydk::Enum::YLeaf ICMP;
        static const ydk::Enum::YLeaf TCP;
        static const ydk::Enum::YLeaf UDP;
        static const ydk::Enum::YLeaf IP;

        static int get_enum_value(const std::string & name) {
            if (name == "noProtocol") return 0;
            if (name == "DNS") return 1;
            if (name == "HTTP") return 2;
            if (name == "ICMP") return 3;
            if (name == "TCP") return 4;
            if (name == "UDP") return 5;
            if (name == "IP") return 6;
            return -1;
        }
};

class AaaUserRolePrivType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noDataPriv;
        static const ydk::Enum::YLeaf readPriv;
        static const ydk::Enum::YLeaf writePriv;

        static int get_enum_value(const std::string & name) {
            if (name == "noDataPriv") return 0;
            if (name == "readPriv") return 1;
            if (name == "writePriv") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "scheduled") return 0;
            if (name == "processing") return 1;
            if (name == "completed") return 2;
            if (name == "cancelled") return 3;
            if (name == "failed") return 4;
            if (name == "indeterminate") return 5;
            if (name == "suspended") return 6;
            if (name == "crashsuspect") return 7;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "cli") return 0;
            if (name == "mdt") return 1;
            if (name == "mfdmDebugs") return 2;
            if (name == "mfdmEvents") return 3;
            if (name == "mfdmStats") return 4;
            if (name == "notyClients") return 5;
            if (name == "rib") return 6;
            if (name == "ribSum") return 7;
            if (name == "urib") return 8;
            if (name == "vrf") return 9;
            return -1;
        }
};

class NdSolicitAcceptValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf no_accept;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "accept") return 1;
            if (name == "no-accept") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "shut") return 1;
            if (name == "srgb-cleanup-in-progress") return 2;
            if (name == "srgb-cleanup-failed") return 3;
            if (name == "srgb-alloc-in-progress") return 4;
            if (name == "srgb-alloc-failed") return 5;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "internal") return 1;
            if (name == "external") return 2;
            if (name == "confederation") return 3;
            if (name == "local") return 4;
            if (name == "aggregate") return 5;
            if (name == "redistribute") return 6;
            if (name == "injected") return 7;
            return -1;
        }
};

class PlatformMplsEcmpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 1;
            if (name == "enable") return 0;
            return -1;
        }
};

class ProcOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 0;
            if (name == "down") return 1;
            return -1;
        }
};

class NvoMplsEncapT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "mpls") return 1;
            if (name == "none") return 2;
            return -1;
        }
};

class NdRtPrefForCmd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf high;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "low") return 1;
            if (name == "medium") return 2;
            if (name == "high") return 3;
            return -1;
        }
};

class SnmpCommAcessT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ro;
        static const ydk::Enum::YLeaf rw;
        static const ydk::Enum::YLeaf unspecified;

        static int get_enum_value(const std::string & name) {
            if (name == "ro") return 0;
            if (name == "rw") return 1;
            if (name == "unspecified") return 2;
            return -1;
        }
};

class SlaCodecType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf g711alaw;
        static const ydk::Enum::YLeaf g711ulaw;
        static const ydk::Enum::YLeaf g729a;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "g711alaw") return 2;
            if (name == "g711ulaw") return 1;
            if (name == "g729a") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "in-use") return 1;
            if (name == "alloc-in-progress") return 2;
            if (name == "alloc-failed") return 3;
            if (name == "cleanup-in-progress") return 4;
            if (name == "cleanup-failed") return 5;
            return -1;
        }
};

class AnalyticsModeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf analytics;
        static const ydk::Enum::YLeaf netflow;

        static int get_enum_value(const std::string & name) {
            if (name == "analytics") return 0;
            if (name == "netflow") return 1;
            return -1;
        }
};

class IsisBfdT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inheritVrf;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "inheritVrf") return 1;
            if (name == "enabled") return 2;
            if (name == "disabled") return 3;
            return -1;
        }
};

class StpSimulateIf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "igmpInternal") return 0;
            if (name == "cli") return 1;
            if (name == "groupDebugs") return 2;
            if (name == "groupEvents") return 3;
            if (name == "ha") return 4;
            if (name == "intfDebugs") return 5;
            if (name == "intfEvents") return 6;
            if (name == "mtrace") return 7;
            if (name == "mvr") return 8;
            if (name == "policy") return 9;
            if (name == "vrf") return 10;
            if (name == "nbm") return 11;
            return -1;
        }
};

class L1LayerAggrIfLayer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Layer2;
        static const ydk::Enum::YLeaf Layer3;
        static const ydk::Enum::YLeaf pltfmDfltLayer;

        static int get_enum_value(const std::string & name) {
            if (name == "Layer2") return 1;
            if (name == "Layer3") return 2;
            if (name == "pltfmDfltLayer") return 3;
            return -1;
        }
};

class PktmgrRateLimitDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf unspecified;

        static int get_enum_value(const std::string & name) {
            if (name == "input") return 1;
            if (name == "output") return 2;
            if (name == "both") return 3;
            if (name == "unspecified") return 4;
            return -1;
        }
};

class Vrrpv3AdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 1;
            if (name == "enabled") return 0;
            return -1;
        }
};

class L2capSubj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf vxlan_namespace;
        static const ydk::Enum::YLeaf nvgre_namespace;
        static const ydk::Enum::YLeaf domain_namespace;
        static const ydk::Enum::YLeaf tunnel_namespace;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "vxlan-namespace") return 1;
            if (name == "nvgre-namespace") return 2;
            if (name == "domain-namespace") return 3;
            if (name == "tunnel-namespace") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "parent-unnumbered") return 1;
            if (name == "child-numbered") return 2;
            if (name == "invalid-source") return 3;
            if (name == "invalid-interface") return 4;
            if (name == "intf-self-referential") return 5;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "up") return 1;
            if (name == "admin-down") return 2;
            if (name == "link-down") return 3;
            if (name == "fail") return 4;
            if (name == "no-license") return 5;
            if (name == "link-up") return 6;
            if (name == "hw-fail") return 7;
            if (name == "sw-fail") return 8;
            if (name == "err-disabled") return 9;
            if (name == "sfp-missing") return 10;
            if (name == "loopback-diag-failure") return 11;
            if (name == "udld-unidir-detected") return 12;
            if (name == "udld-tx-rx-loop") return 13;
            if (name == "udld-neighbor-mismatch") return 14;
            if (name == "udld-empty-echo") return 15;
            if (name == "udld-aggressive-mode-link-failed") return 16;
            if (name == "link-flap-err") return 17;
            if (name == "err-disabled-ip-conflict") return 18;
            if (name == "ipqos-dcbxp-compat-failure") return 19;
            if (name == "link-failure") return 20;
            if (name == "offline") return 21;
            if (name == "initializing") return 22;
            if (name == "inactive") return 23;
            if (name == "channel-admin-down") return 24;
            if (name == "channel-err-disabled") return 25;
            if (name == "suspended") return 26;
            if (name == "proto-port-suspend") return 27;
            if (name == "channel-membership-update-in-progress") return 28;
            if (name == "parent-down") return 29;
            if (name == "parent-admin-down") return 30;
            if (name == "interface-removed") return 31;
            if (name == "fcot-no-present") return 32;
            if (name == "fcot-vendor-not-supported") return 33;
            if (name == "incompatible-admin-mode") return 34;
            if (name == "incompatible-admin-speed") return 35;
            if (name == "suspended-by-mode") return 36;
            if (name == "suspended-by-speed") return 37;
            if (name == "domain-max-retransmission-failure") return 38;
            if (name == "loopback-isolation") return 39;
            if (name == "upgrade-in-progress") return 40;
            if (name == "port-channel-members-down") return 41;
            if (name == "ethernet-link-down") return 42;
            if (name == "ethernet-interface-down") return 43;
            if (name == "admin-config-change") return 44;
            if (name == "module-removed") return 45;
            if (name == "vrf-unusable") return 46;
            if (name == "none") return 47;
            if (name == "xcvr-initializing") return 48;
            if (name == "cap-absent") return 49;
            if (name == "sfp-eth-compliant-err") return 50;
            if (name == "sdp-timeout") return 51;
            if (name == "sat-incompat-topo") return 52;
            if (name == "sat-not-configured") return 53;
            if (name == "auth-fail") return 54;
            if (name == "auth-pending") return 55;
            if (name == "suspended-due-to-minlinks") return 56;
            if (name == "suspended-due-to-no-lacp-pdus") return 57;
            if (name == "sat-fabric-if-down") return 58;
            if (name == "invalid-sat-fabric-if") return 59;
            if (name == "fex-sfp-invalid") return 60;
            if (name == "suspend-by-mtu") return 61;
            if (name == "suspend-by-vpc") return 62;
            if (name == "router-mac-failure") return 63;
            if (name == "xcvr-auth-failed") return 64;
            if (name == "non-sticky-externally-disabled") return 65;
            if (name == "sfp-speed-mismatch") return 66;
            if (name == "fcot-chksum-err") return 67;
            if (name == "xcvr-invalid") return 68;
            if (name == "vpc-peer-link-down") return 69;
            if (name == "vpc-cfg-in-progress") return 70;
            if (name == "vpc-no-response-from-peer") return 71;
            if (name == "bpdu-guard-err-disable") return 72;
            if (name == "hot-standby-in-bundle") return 73;
            if (name == "handshake-fail-errdisable") return 74;
            if (name == "non-participating") return 75;
            if (name == "rcf-in-progress") return 76;
            if (name == "elp-failure-isolation") return 77;
            if (name == "esc-failure-isolation") return 78;
            if (name == "domain-overlap-isolation") return 79;
            if (name == "domain-addr-assign-failure-isolation") return 80;
            if (name == "domain-other-side-eport-isolated") return 81;
            if (name == "domain-invalid-rcf-received") return 82;
            if (name == "domain-manager-disabled") return 83;
            if (name == "zone-merge-failure-isolation") return 84;
            if (name == "vsan-mismatch-isolation") return 85;
            if (name == "src-port-not-bound") return 86;
            if (name == "suspended-by-wwn") return 87;
            if (name == "epp-failure") return 88;
            if (name == "port-vsan-mismatch-isolation") return 89;
            if (name == "incompatible-admin-rxbbcredit") return 90;
            if (name == "incompatible-admin-rxbufsize") return 91;
            if (name == "zone-remote-no-resp-isolation") return 92;
            if (name == "osm-e-port-up") return 93;
            if (name == "osm-non-e-port-up") return 94;
            if (name == "peer-fcip-closed-tcp-connection") return 95;
            if (name == "peer-fcip-reset-tcp-connection") return 96;
            if (name == "tcp-max-retransmissions") return 97;
            if (name == "tcp-keep-alive-timer-expired") return 98;
            if (name == "tcp-persist-timer-expired") return 99;
            if (name == "tunnel-src-port-removed") return 100;
            if (name == "tunnel-src-module-not-online") return 101;
            if (name == "invalid-config") return 102;
            if (name == "port-bind-failure") return 103;
            if (name == "fabric-bind-failure") return 104;
            if (name == "no-trunk-oper-vsans-isolation") return 105;
            if (name == "ficon-vsan-down") return 106;
            if (name == "invalid-attachment") return 107;
            if (name == "port-blocked") return 108;
            if (name == "incompatible-admin-rxbbcredit-performance-buf") return 109;
            if (name == "too-many-invalid-flogis") return 110;
            if (name == "denied-due-to-port-binding") return 111;
            if (name == "elp-failure-revision-mismatch") return 112;
            if (name == "elp-failure-classf-param-err") return 113;
            if (name == "elp-failure-classn-param-err") return 114;
            if (name == "elp-failure-unknown-flow-ctl-code") return 115;
            if (name == "elp-failure-invalid-flow-ctl-param") return 116;
            if (name == "elp-failure-invalid-port-name") return 117;
            if (name == "elp-failure-invalid-switch-name") return 118;
            if (name == "elp-failure-ratov-edtov-mismatch") return 119;
            if (name == "elp-failure-loopback-detected") return 120;
            if (name == "elp-failure-invalid-tx-bbcredit") return 121;
            if (name == "elp-failure-invalid-payload-size") return 122;
            if (name == "bundle-miscfg") return 123;
            if (name == "bit-err-rt-thres-exceeded") return 124;
            if (name == "link-fail-link-reset") return 125;
            if (name == "link-fail-port-init-failed") return 126;
            if (name == "link-fail-port-unusable") return 127;
            if (name == "link-fail-loss-of-signal") return 128;
            if (name == "link-fail-loss-of-sync") return 129;
            if (name == "link-fail-nos-rcvd") return 130;
            if (name == "link-fail-ols-rcvd") return 131;
            if (name == "link-fail-debounce-timeout") return 132;
            if (name == "link-fail-lr-rcvd-b2b") return 133;
            if (name == "link-fail-credit-loss") return 134;
            if (name == "link-fail-rx-que-overflow") return 135;
            if (name == "link-fail-too-many-intr") return 136;
            if (name == "link-fail-lip-rcvd-b2b") return 137;
            if (name == "link-fail-credit-loss-b2b") return 138;
            if (name == "link-fail-opny-tmo-b2b") return 139;
            if (name == "link-fail-opny-ret-b2b") return 140;
            if (name == "link-fail-lip-f8-rcvd") return 141;
            if (name == "link-fail-line-card-port-shutdown") return 142;
            if (name == "fcsp-authent-failure") return 143;
            if (name == "ohms-external-lb-test") return 144;
            if (name == "invalid-fabric-binding-exchange") return 145;
            if (name == "tov-mismatch") return 146;
            if (name == "ficon-not-enabled") return 147;
            if (name == "ficon-no-portnumber") return 148;
            if (name == "ficon-being-enabled") return 149;
            if (name == "eport-prohibited") return 150;
            if (name == "trunk-not-fully-active") return 151;
            if (name == "fabric-binding-swwn-not-found") return 152;
            if (name == "fabric-binding-domain-invalid") return 153;
            if (name == "fabric-binding-database-mismatch") return 154;
            if (name == "fabric-binding-peer-not-responding") return 155;
            if (name == "tracked-port-down") return 156;
            if (name == "ec-suspended-for-loop") return 157;
            if (name == "isolate-bundle-miscfg") return 158;
            if (name == "peer-not-support-bundles") return 159;
            if (name == "port-bringup-isolation") return 160;
            if (name == "domain-not-allowed-isolation") return 161;
            if (name == "virtual-ivr-domain-overlap-isolation") return 162;
            if (name == "out-of-service") return 163;
            if (name == "bundle-stdby") return 164;
            if (name == "port-cap-fc-port-connector-type-err") return 165;
            if (name == "error-disabled-reinit-limit-reached") return 166;
            if (name == "ficon-vsan-duplicate-portnum") return 167;
            if (name == "internal-rcf-in-progress") return 168;
            if (name == "two-switches-with-same-wwn") return 169;
            if (name == "invalid-other-princ-efp-req-recd") return 170;
            if (name == "domain-isolation-unknown-reason") return 171;
            if (name == "elp-failure-all-zero-peer-wwn-rcvd") return 172;
            if (name == "prefered-path-isolation") return 173;
            if (name == "fc-redirect-isolation") return 174;
            if (name == "port-act-license-not-available") return 175;
            if (name == "sdm-isolation") return 176;
            if (name == "fcid-allocation-failed") return 177;
            if (name == "externally-disabled") return 178;
            if (name == "fcot-read-error") return 179;
            if (name == "port-guard-down-on-link-failure") return 180;
            if (name == "incomplete-config") return 181;
            if (name == "incomplete-tunnel-config") return 182;
            if (name == "hw-programming-failed") return 183;
            if (name == "tunnel-dest-not-reachable") return 184;
            if (name == "sfp-invalid") return 185;
            if (name == "tunnel-vrf-mismatch") return 186;
            if (name == "tunnel-vrf-fw-ref") return 187;
            if (name == "duplicate-tunnel-cfg") return 188;
            if (name == "primary-vlan-down") return 189;
            if (name == "dot1x-security-errdisable") return 190;
            if (name == "vf-tagging-capability-err") return 191;
            if (name == "port-disabled") return 192;
            if (name == "tunnel-mode-not-configured") return 193;
            if (name == "tunnel-source-not-configured") return 194;
            if (name == "tunnel-destination-not-configured") return 195;
            if (name == "tunnel-unable2resolve-source-ipaddress") return 196;
            if (name == "tunnel-unable2resolve-destination-ipaddress") return 197;
            if (name == "tunnel-vrf-is-down") return 198;
            if (name == "sif-admin-down") return 199;
            if (name == "phy-intf-down") return 200;
            if (name == "intf-sif-limit-exceeded") return 201;
            if (name == "insufficient-power") return 202;
            if (name == "no-fcoe") return 203;
            if (name == "dcx-compat-mismatch") return 204;
            if (name == "isolate-bundle-limit-exceeded") return 205;
            if (name == "sif-not-bound") return 206;
            if (name == "err-disable-lacp-miscfg") return 207;
            if (name == "errdisabled-pkt-err") return 208;
            if (name == "vlan-vsan-mapping-not-enabled") return 209;
            if (name == "stp-not-forwarding-in-fcoe-mapped-vlan") return 210;
            if (name == "module-offline") return 211;
            if (name == "stp-inconsist-vpc-peerlink-errdisable") return 212;
            if (name == "set-port-state-failed-errdisable") return 213;
            if (name == "tunnel-source-down") return 214;
            if (name == "cdp-info-not-avail") return 215;
            if (name == "fcot-clk-rate-mismatch") return 216;
            if (name == "port-guard-down-on-trustsec-violation") return 217;
            if (name == "wait-for-flogi") return 218;
            if (name == "npiv-not-enabled-in-upstream") return 219;
            if (name == "vsan-mismatch-with-upstream-switch-port") return 220;
            if (name == "port-guard-bit-error-rate") return 221;
            if (name == "port-guard-signal-loss") return 222;
            if (name == "port-guard-sync-loss") return 223;
            if (name == "port-guard-link-reset") return 224;
            if (name == "port-guard-credit-loss") return 225;
            if (name == "ipqos-mgr-policy-app-failed") return 226;
            if (name == "pause-rate-limit-errdisable") return 227;
            if (name == "lstgrp-uplink-down") return 228;
            if (name == "sticky-down-on-link-failure") return 229;
            if (name == "dcx-multiple-msap-ids-errdisable") return 230;
            if (name == "dcx-100-pdus-rcvd-noack-errdisable") return 231;
            if (name == "enm-sat-incompat-uplink") return 232;
            if (name == "enm-loop-detected") return 233;
            if (name == "sub-group-id-not-assigned") return 234;
            if (name == "vem-unlicensed") return 235;
            if (name == "profile-not-found") return 236;
            if (name == "vlan-does-not-exist") return 237;
            if (name == "vlan-type") return 238;
            if (name == "vlan-down") return 239;
            if (name == "vpc-peer-upgrade") return 240;
            if (name == "non-cisco-hba-vftag") return 241;
            if (name == "domain-id-config-mismatch") return 242;
            if (name == "xcvr-absent") return 243;
            if (name == "vfc-binding-invalid") return 244;
            if (name == "vlan-not-fcoe-enabled") return 245;
            if (name == "pvlan-native-vlan-err") return 246;
            if (name == "eth-l2-vlan-down") return 247;
            if (name == "eth-intf-invalid-binding") return 248;
            if (name == "pmon-failure") return 249;
            if (name == "l3-not-ready") return 250;
            if (name == "speed-mismatch") return 251;
            if (name == "flowcontrol-mismatch") return 252;
            if (name == "vdc-mode") return 253;
            if (name == "enm-pin-fail-link-down") return 254;
            if (name == "inactive-m1-port-fpath-access-vlan") return 255;
            return -1;
        }
};

class FirmwareType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf controller;
        static const ydk::Enum::YLeaf switch_;
        static const ydk::Enum::YLeaf catalog;

        static int get_enum_value(const std::string & name) {
            if (name == "controller") return 0;
            if (name == "switch") return 1;
            if (name == "catalog") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "emergency") return 0;
            if (name == "alert") return 1;
            if (name == "critical") return 2;
            if (name == "error") return 3;
            if (name == "warning") return 4;
            if (name == "notif") return 5;
            if (name == "inform") return 6;
            if (name == "debug") return 7;
            return -1;
        }
};

class FcoeAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class AaaLdapLogLevel : public ydk::Enum
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

        static int get_enum_value(const std::string & name) {
            if (name == "emergency") return 0;
            if (name == "alert") return 1;
            if (name == "critical") return 2;
            if (name == "error") return 3;
            if (name == "warning") return 4;
            if (name == "notification") return 5;
            if (name == "informational") return 6;
            if (name == "debug") return 7;
            return -1;
        }
};

class MonitorDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 1;
            if (name == "out") return 2;
            if (name == "both") return 3;
            if (name == "none") return 4;
            return -1;
        }
};

class MonitorMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf access;
        static const ydk::Enum::YLeaf fabric;

        static int get_enum_value(const std::string & name) {
            if (name == "access") return 1;
            if (name == "fabric") return 2;
            return -1;
        }
};

class BgpPrivateASControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf remove_exclusive;
        static const ydk::Enum::YLeaf remove_all;
        static const ydk::Enum::YLeaf replace_as;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "remove-exclusive") return 1;
            if (name == "remove-all") return 2;
            if (name == "replace-as") return 3;
            return -1;
        }
};

class RtcomMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf regex;

        static int get_enum_value(const std::string & name) {
            if (name == "standard") return 1;
            if (name == "regex") return 2;
            return -1;
        }
};

class PlatformMroutingDisableSecRouteUpd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class AggregateBooleanFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "yes") return 1;
            return -1;
        }
};

class OamEpT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ep;
        static const ydk::Enum::YLeaf vtep_ep;
        static const ydk::Enum::YLeaf node;

        static int get_enum_value(const std::string & name) {
            if (name == "ep") return 1;
            if (name == "vtep-ep") return 2;
            if (name == "node") return 3;
            return -1;
        }
};

class IpqosPolicyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf qos;
        static const ydk::Enum::YLeaf queuing;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "qos") return 1;
            if (name == "queuing") return 2;
            return -1;
        }
};

class PlatformUdfCfgFault : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf definition;
        static const ydk::Enum::YLeaf qualifySpan;
        static const ydk::Enum::YLeaf qualifySpanV6;
        static const ydk::Enum::YLeaf qualifySpanV6L2;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "definition") return 1;
            if (name == "qualifySpan") return 2;
            if (name == "qualifySpanV6") return 3;
            if (name == "qualifySpanV6L2") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "ls") return 1;
            if (name == "rt") return 2;
            if (name == "nh") return 3;
            if (name == "mcgrp") return 4;
            if (name == "fn") return 5;
            if (name == "dtep") return 6;
            return -1;
        }
};

class L1TrunkLog : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 1;
            if (name == "enable") return 2;
            if (name == "disable") return 3;
            return -1;
        }
};

class IgmpLimitSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf below_thresh;
        static const ydk::Enum::YLeaf above_thresh;
        static const ydk::Enum::YLeaf exhausted;

        static int get_enum_value(const std::string & name) {
            if (name == "below-thresh") return 0;
            if (name == "above-thresh") return 1;
            if (name == "exhausted") return 2;
            return -1;
        }
};

class MribHoldAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class L1Medium : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf p2p;

        static int get_enum_value(const std::string & name) {
            if (name == "broadcast") return 1;
            if (name == "p2p") return 2;
            return -1;
        }
};

class RibDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rt;
        static const ydk::Enum::YLeaf nh;
        static const ydk::Enum::YLeaf adj;

        static int get_enum_value(const std::string & name) {
            if (name == "rt") return 1;
            if (name == "nh") return 2;
            if (name == "adj") return 3;
            return -1;
        }
};

class CapScope : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf policy_domain;
        static const ydk::Enum::YLeaf fabric;

        static int get_enum_value(const std::string & name) {
            if (name == "node") return 0;
            if (name == "policy-domain") return 1;
            if (name == "fabric") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "Emergency") return 0;
            if (name == "Alert") return 1;
            if (name == "Critical") return 2;
            if (name == "Error") return 3;
            if (name == "Warning") return 4;
            if (name == "Notice") return 5;
            if (name == "Informational") return 6;
            if (name == "Debug") return 7;
            return -1;
        }
};

class L1SwitchportMacLearn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class LacpSysRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

        static int get_enum_value(const std::string & name) {
            if (name == "primary") return 1;
            if (name == "secondary") return 2;
            return -1;
        }
};

class SlaThresholdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf consecutive;
        static const ydk::Enum::YLeaf xOfy;
        static const ydk::Enum::YLeaf average;

        static int get_enum_value(const std::string & name) {
            if (name == "never") return 1;
            if (name == "immediate") return 2;
            if (name == "consecutive") return 3;
            if (name == "xOfy") return 4;
            if (name == "average") return 5;
            return -1;
        }
};

class NwAdminStProcessStatAutoDisc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class EqptAutoShutdown : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "enabled") return 1;
            return -1;
        }
};

class SnmpNotificationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf traps;
        static const ydk::Enum::YLeaf informs;

        static int get_enum_value(const std::string & name) {
            if (name == "traps") return 1;
            if (name == "informs") return 2;
            return -1;
        }
};

class MribModeAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "not-supp") return 1;
            if (name == "rdn") return 2;
            if (name == "comb") return 3;
            if (name == "n-rdn") return 4;
            if (name == "ps-rdn") return 5;
            if (name == "insrc-rdn") return 6;
            if (name == "sinin-rdn") return 7;
            if (name == "comb-force") return 8;
            return -1;
        }
};

class ActionAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf start;
        static const ydk::Enum::YLeaf stop;
        static const ydk::Enum::YLeaf suspend;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "start") return 1;
            if (name == "stop") return 2;
            if (name == "suspend") return 3;
            return -1;
        }
};

class BgpRtCtrlOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unresolved;
        static const ydk::Enum::YLeaf resolved;

        static int get_enum_value(const std::string & name) {
            if (name == "unresolved") return 1;
            if (name == "resolved") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "cli") return 0;
            if (name == "mdt") return 1;
            if (name == "mfdmDebugs") return 2;
            if (name == "mfdmEvents") return 3;
            if (name == "mfdmStats") return 4;
            if (name == "notyClients") return 5;
            if (name == "rib") return 6;
            if (name == "ribSum") return 7;
            if (name == "urib") return 8;
            if (name == "vrf") return 9;
            if (name == "nbm") return 10;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "static") return 1;
            if (name == "direct") return 2;
            if (name == "bgp") return 3;
            if (name == "isis") return 4;
            if (name == "ospf") return 5;
            if (name == "ospfv3") return 6;
            if (name == "eigrp") return 7;
            if (name == "host") return 8;
            if (name == "rip") return 9;
            if (name == "amt") return 10;
            if (name == "lisp") return 11;
            if (name == "hmm") return 12;
            if (name == "am") return 13;
            return -1;
        }
};

class AaaLdapSSLStrictnessLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf permissive;

        static int get_enum_value(const std::string & name) {
            if (name == "strict") return 0;
            if (name == "permissive") return 1;
            return -1;
        }
};

class PcPortChannelProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf lacp;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "none") return 1;
            if (name == "lacp") return 2;
            return -1;
        }
};

class InstallerInstType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf disruptive;
        static const ydk::Enum::YLeaf non_disruptive;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return -1;
            if (name == "disruptive") return 0;
            if (name == "non-disruptive") return 1;
            return -1;
        }
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
        static const ydk::Enum::YLeaf segrt;

        static int get_enum_value(const std::string & name) {
            if (name == "adj") return 0;
            if (name == "internal") return 1;
            if (name == "ha") return 2;
            if (name == "lsa-flood") return 3;
            if (name == "lsa") return 4;
            if (name == "spf") return 5;
            if (name == "redist") return 6;
            if (name == "ldp") return 7;
            if (name == "mpls-te") return 8;
            if (name == "hello") return 9;
            if (name == "rib") return 10;
            if (name == "spf-trigger") return 11;
            if (name == "cli") return 12;
            if (name == "segrt") return 13;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "standard") return 0;
            if (name == "drop") return 1;
            if (name == "svi-down-flood") return 2;
            if (name == "sup-inband-cfsoe") return 3;
            if (name == "vpc-peer-link") return 4;
            if (name == "nve") return 5;
            if (name == "sup-eth") return 6;
            return -1;
        }
};

class NvoVniTypeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf L2;
        static const ydk::Enum::YLeaf L3;

        static int get_enum_value(const std::string & name) {
            if (name == "L2") return 1;
            if (name == "L3") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "cli") return 0;
            if (name == "client-events") return 1;
            if (name == "client-errors") return 2;
            if (name == "control-events") return 3;
            if (name == "internal-events") return 4;
            if (name == "internal-errors") return 5;
            if (name == "high-availability") return 6;
            if (name == "ip-sync") return 7;
            if (name == "local-cache-events") return 8;
            if (name == "local-cache-errors") return 9;
            if (name == "pkt-messages") return 10;
            if (name == "snmp") return 11;
            if (name == "suppress-events") return 12;
            if (name == "suppress-errors") return 13;
            if (name == "sync") return 14;
            if (name == "arp-controller-errors") return 15;
            if (name == "arp-dme-event") return 16;
            if (name == "adjacency-control") return 101;
            if (name == "adjacency-errors") return 102;
            if (name == "adjacency-ipc-events") return 103;
            if (name == "adjacency-stats") return 104;
            if (name == "adjacency-high-availability") return 105;
            if (name == "adjacency-cli") return 106;
            if (name == "adjacency-sdb") return 107;
            if (name == "adjacency-snmp") return 108;
            if (name == "adjacency-netbroker") return 109;
            if (name == "am-dme-event") return 110;
            if (name == "am-event") return 111;
            return -1;
        }
};

class NbmNbmLinkRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf EXTERNAL_LINK;
        static const ydk::Enum::YLeaf FABRIC_LINK;

        static int get_enum_value(const std::string & name) {
            if (name == "EXTERNAL_LINK") return 0;
            if (name == "FABRIC_LINK") return 1;
            return -1;
        }
};

class PoePoePortmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Default;
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf static_;

        static int get_enum_value(const std::string & name) {
            if (name == "Default") return 0;
            if (name == "never") return 1;
            if (name == "auto") return 2;
            if (name == "static") return 3;
            return -1;
        }
};

class RtmapRpTypeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf ASM;
        static const ydk::Enum::YLeaf Bidir;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "ASM") return 1;
            if (name == "Bidir") return 2;
            return -1;
        }
};

class SnmpV3SecLvl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf noauth;
        static const ydk::Enum::YLeaf auth;
        static const ydk::Enum::YLeaf priv;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "noauth") return 1;
            if (name == "auth") return 2;
            if (name == "priv") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "interas-ipmsi-ad") return 1;
            if (name == "intraas-ipmsi-ad") return 2;
            if (name == "spmsi-ad") return 3;
            if (name == "leaf-ad") return 4;
            if (name == "sa-ad") return 5;
            if (name == "shared-c-mcast") return 6;
            if (name == "source-c-mcast") return 7;
            return -1;
        }
};

class MonitorSrcT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf port;
        static const ydk::Enum::YLeaf encap;
        static const ydk::Enum::YLeaf port_encap;

        static int get_enum_value(const std::string & name) {
            if (name == "port") return 1;
            if (name == "encap") return 2;
            if (name == "port-encap") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "success") return 0;
            if (name == "uplinks-down") return 1;
            if (name == "route-down") return 2;
            if (name == "peer-unrch") return 3;
            if (name == "compat-fail") return 4;
            if (name == "election-err") return 5;
            if (name == "oob-not-up") return 6;
            return -1;
        }
};

class FlowDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;
        static const ydk::Enum::YLeaf both;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "in") return 1;
            if (name == "out") return 2;
            if (name == "both") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "illegal") return 1;
            if (name == "shut") return 2;
            if (name == "idle") return 3;
            if (name == "connect") return 4;
            if (name == "active") return 5;
            if (name == "open-sent") return 6;
            if (name == "open-confirm") return 7;
            if (name == "established") return 8;
            if (name == "closing") return 9;
            if (name == "error") return 10;
            if (name == "unknown") return 11;
            return -1;
        }
};

class SnmpSnmpLogLevel : public ydk::Enum
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

        static int get_enum_value(const std::string & name) {
            if (name == "emergencies") return 0;
            if (name == "alerts") return 1;
            if (name == "critical") return 2;
            if (name == "errors") return 3;
            if (name == "warnings") return 4;
            if (name == "notifications") return 5;
            if (name == "information") return 6;
            if (name == "debugging") return 7;
            return -1;
        }
};

class RtctrlRtCtrlDir : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 1;
            if (name == "out") return 2;
            return -1;
        }
};

class ClimodeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf EXEC;
        static const ydk::Enum::YLeaf CONFIG;

        static int get_enum_value(const std::string & name) {
            if (name == "EXEC") return 0;
            if (name == "CONFIG") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "event-link-flap") return 0;
            if (name == "event-udld") return 1;
            if (name == "event-bpduguard") return 2;
            if (name == "event-loopback") return 3;
            if (name == "event-storm-ctrl") return 4;
            if (name == "event-dhcp-rate-lim") return 5;
            if (name == "event-arp-inspection") return 6;
            if (name == "event-sec-violation") return 7;
            if (name == "event-psec-violation") return 8;
            if (name == "event-stp-inconsist-vpc-peerlink") return 9;
            if (name == "event-set-port-state-failed") return 10;
            if (name == "event-debug-1") return 11;
            if (name == "event-debug-2") return 12;
            if (name == "event-debug-3") return 13;
            if (name == "event-debug-4") return 14;
            if (name == "event-debug-5") return 15;
            if (name == "event-ip-addr-conflict") return 16;
            if (name == "event-ipqos-mgr-error") return 17;
            if (name == "event-ethpm") return 18;
            if (name == "event-ipqos-dcbxp-compat-failure") return 19;
            if (name == "event-syserr-based") return 20;
            if (name == "unknown") return 21;
            if (name == "event-mcp-loop") return 22;
            if (name == "event-ep-move") return 23;
            if (name == "event-dcbx-no-ack") return 24;
            return -1;
        }
};

class PlatformQosMinBuffer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf default_;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 0;
            if (name == "none") return 1;
            if (name == "default") return 2;
            return -1;
        }
};

class EqptRdSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf standby;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "active") return 1;
            if (name == "standby") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "down") return 1;
            if (name == "loopback") return 2;
            if (name == "waiting") return 3;
            if (name == "p2p") return 4;
            if (name == "dr") return 5;
            if (name == "bdr") return 6;
            if (name == "dr-other") return 7;
            return -1;
        }
};

class L1Duplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf half;

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 1;
            if (name == "full") return 2;
            if (name == "half") return 3;
            return -1;
        }
};

class L1PacketTimestampState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable_ingress;
        static const ydk::Enum::YLeaf enable_egress;
        static const ydk::Enum::YLeaf enable_both;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable-ingress") return 1;
            if (name == "enable-egress") return 2;
            if (name == "enable-both") return 3;
            return -1;
        }
};

class AggregateAfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_ucast;
        static const ydk::Enum::YLeaf vpnv4_ucast;
        static const ydk::Enum::YLeaf ipv6_ucast;
        static const ydk::Enum::YLeaf vpnv6_ucast;
        static const ydk::Enum::YLeaf l2_evpn;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4-ucast") return 0;
            if (name == "vpnv4-ucast") return 1;
            if (name == "ipv6-ucast") return 2;
            if (name == "vpnv6-ucast") return 3;
            if (name == "l2-evpn") return 4;
            return -1;
        }
};

class ArpSuppressArpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf l2suppressarp;
        static const ydk::Enum::YLeaf l2l3suppressarp;
        static const ydk::Enum::YLeaf invalid;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "l2suppressarp") return 1;
            if (name == "l2l3suppressarp") return 2;
            if (name == "invalid") return 3;
            return -1;
        }
};

class L1DceMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf core;
        static const ydk::Enum::YLeaf edge;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf off;

        static int get_enum_value(const std::string & name) {
            if (name == "core") return 1;
            if (name == "edge") return 2;
            if (name == "auto") return 3;
            if (name == "off") return 4;
            return -1;
        }
};

class L1OperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf link_up;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "down") return 1;
            if (name == "up") return 2;
            if (name == "link-up") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "emergency") return 0;
            if (name == "alert") return 1;
            if (name == "critical") return 2;
            if (name == "error") return 3;
            if (name == "warning") return 4;
            if (name == "notification") return 5;
            if (name == "informational") return 6;
            if (name == "debug") return 7;
            return -1;
        }
};

class OspfBfdControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class BgpSoftReconfigBackup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf inbound;
        static const ydk::Enum::YLeaf inbound_always;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "inbound") return 1;
            if (name == "inbound-always") return 2;
            return -1;
        }
};

class StpRoot : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

        static int get_enum_value(const std::string & name) {
            if (name == "primary") return 1;
            if (name == "secondary") return 2;
            return -1;
        }
};

class L1SwitchportIsolated : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class OpflexDeviceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf n1kv;
        static const ydk::Enum::YLeaf hyperv;
        static const ydk::Enum::YLeaf ovs;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "n1kv") return 1;
            if (name == "hyperv") return 2;
            if (name == "ovs") return 3;
            return -1;
        }
};

class EqptAirFilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absent;
        static const ydk::Enum::YLeaf present;
        static const ydk::Enum::YLeaf notsupported;

        static int get_enum_value(const std::string & name) {
            if (name == "absent") return 0;
            if (name == "present") return 1;
            if (name == "notsupported") return 2;
            return -1;
        }
};

class BootMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf lxc;
        static const ydk::Enum::YLeaf dockerCluster;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "lxc") return 1;
            if (name == "dockerCluster") return 3;
            return -1;
        }
};

class UdldOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class SisfRaGuardOtherConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf nocheck;

        static int get_enum_value(const std::string & name) {
            if (name == "off") return 0;
            if (name == "on") return 1;
            if (name == "nocheck") return 2;
            return -1;
        }
};

class RtfltAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

        static int get_enum_value(const std::string & name) {
            if (name == "deny") return 0;
            if (name == "permit") return 1;
            return -1;
        }
};

class BgpLsAttrEntryType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf peer_node_sid;
        static const ydk::Enum::YLeaf peer_adj_sid;
        static const ydk::Enum::YLeaf peer_set_sid;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "peer-node-sid") return 1101;
            if (name == "peer-adj-sid") return 1102;
            if (name == "peer-set-sid") return 1103;
            return -1;
        }
};

class CoppProfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf moderate;
        static const ydk::Enum::YLeaf dense;
        static const ydk::Enum::YLeaf lenient;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "strict") return 1;
            if (name == "moderate") return 2;
            if (name == "dense") return 4;
            if (name == "lenient") return 3;
            return -1;
        }
};

class RtdmcBfdInstSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            if (name == "none") return 0;
            return -1;
        }
};

class MmodeMaintModeActionStatusType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf gen_profile;
        static const ydk::Enum::YLeaf confirm_profile;
        static const ydk::Enum::YLeaf taking_snapshot;
        static const ydk::Enum::YLeaf applying_config;
        static const ydk::Enum::YLeaf waiting_delay;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "success") return 1;
            if (name == "failed") return 2;
            if (name == "gen-profile") return 3;
            if (name == "confirm-profile") return 4;
            if (name == "taking-snapshot") return 5;
            if (name == "applying-config") return 6;
            if (name == "waiting-delay") return 7;
            return -1;
        }
};

class BgpTblSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "up") return 1;
            if (name == "down") return 2;
            return -1;
        }
};

class IsisIsT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l1;
        static const ydk::Enum::YLeaf l2;
        static const ydk::Enum::YLeaf l12;

        static int get_enum_value(const std::string & name) {
            if (name == "l1") return 1;
            if (name == "l2") return 2;
            if (name == "l12") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "subnet-mismatch") return 1;
            if (name == "invalid-mac") return 2;
            if (name == "invalid-ip") return 3;
            if (name == "invalid-vrf") return 4;
            if (name == "own-mac") return 5;
            if (name == "if-down") return 6;
            if (name == "up") return 7;
            if (name == "invalid-if") return 8;
            if (name == "invalid-clidata") return 9;
            if (name == "no-memory") return 10;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "emergencies") return 0;
            if (name == "alerts") return 1;
            if (name == "critical") return 2;
            if (name == "errors") return 3;
            if (name == "warnings") return 4;
            if (name == "notifications") return 5;
            if (name == "information") return 6;
            if (name == "debugging") return 7;
            if (name == "unspecified") return 8;
            return -1;
        }
};

class ArpOpcode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf req;
        static const ydk::Enum::YLeaf reply;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "req") return 1;
            if (name == "reply") return 2;
            return -1;
        }
};

class TelemetryAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            return -1;
        }
};

class VrrpBfdSessionSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf deleted;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf active;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "inactive") return 1;
            if (name == "deleted") return 2;
            if (name == "unknown") return 3;
            if (name == "active") return 4;
            return -1;
        }
};

class EthpmShareState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dedicated;
        static const ydk::Enum::YLeaf shared;

        static int get_enum_value(const std::string & name) {
            if (name == "dedicated") return 0;
            if (name == "shared") return 1;
            return -1;
        }
};

class OspfOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "invalid") return 0;
            if (name == "down") return 1;
            if (name == "up") return 2;
            return -1;
        }
};

class InstallerInstErr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf preupg_err1;
        static const ydk::Enum::YLeaf preupg_err2;
        static const ydk::Enum::YLeaf user_abort;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "preupg-err1") return 1;
            if (name == "preupg-err2") return 2;
            if (name == "user-abort") return 3;
            return -1;
        }
};

class AaaRulePermissionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf deny;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "permit") return 1;
            if (name == "deny") return 2;
            return -1;
        }
};

class NdRtPrefForNdRt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf unspecified;

        static int get_enum_value(const std::string & name) {
            if (name == "low") return 0;
            if (name == "medium") return 1;
            if (name == "high") return 2;
            if (name == "unspecified") return 3;
            return -1;
        }
};

class FirmwareRunningMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf recovery;

        static int get_enum_value(const std::string & name) {
            if (name == "normal") return 0;
            if (name == "recovery") return 1;
            return -1;
        }
};

class NvoPeerStateT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Up;
        static const ydk::Enum::YLeaf Down;

        static int get_enum_value(const std::string & name) {
            if (name == "Up") return 1;
            if (name == "Down") return 2;
            return -1;
        }
};

class BootOrder : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash;
        static const ydk::Enum::YLeaf pxe;
        static const ydk::Enum::YLeaf pxe2bootflash;
        static const ydk::Enum::YLeaf bootflash2pxe;

        static int get_enum_value(const std::string & name) {
            if (name == "bootflash") return 0;
            if (name == "pxe") return 1;
            if (name == "pxe2bootflash") return 2;
            if (name == "bootflash2pxe") return 3;
            return -1;
        }
};

class TrackProbeState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reachability;
        static const ydk::Enum::YLeaf state;

        static int get_enum_value(const std::string & name) {
            if (name == "reachability") return 0;
            if (name == "state") return 1;
            return -1;
        }
};

class PcLastSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf successful;
        static const ydk::Enum::YLeaf failed;

        static int get_enum_value(const std::string & name) {
            if (name == "successful") return 0;
            if (name == "failed") return 1;
            return -1;
        }
};

class IpmcJoinType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_1;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "1") return 1;
            return -1;
        }
};

class BgpBgpDscp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;
        static const ydk::Enum::YLeaf Y_3;
        static const ydk::Enum::YLeaf Y_4;
        static const ydk::Enum::YLeaf Y_5;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;
        static const ydk::Enum::YLeaf cs1;
        static const ydk::Enum::YLeaf Y_9;
        static const ydk::Enum::YLeaf af11;
        static const ydk::Enum::YLeaf Y_11;
        static const ydk::Enum::YLeaf af12;
        static const ydk::Enum::YLeaf Y_13;
        static const ydk::Enum::YLeaf af13;
        static const ydk::Enum::YLeaf Y_15;
        static const ydk::Enum::YLeaf cs2;
        static const ydk::Enum::YLeaf Y_17;
        static const ydk::Enum::YLeaf af21;
        static const ydk::Enum::YLeaf Y_19;
        static const ydk::Enum::YLeaf af22;
        static const ydk::Enum::YLeaf Y_21;
        static const ydk::Enum::YLeaf af23;
        static const ydk::Enum::YLeaf Y_23;
        static const ydk::Enum::YLeaf cs3;
        static const ydk::Enum::YLeaf Y_25;
        static const ydk::Enum::YLeaf af31;
        static const ydk::Enum::YLeaf Y_27;
        static const ydk::Enum::YLeaf af32;
        static const ydk::Enum::YLeaf Y_29;
        static const ydk::Enum::YLeaf af33;
        static const ydk::Enum::YLeaf Y_31;
        static const ydk::Enum::YLeaf cs4;
        static const ydk::Enum::YLeaf Y_33;
        static const ydk::Enum::YLeaf af41;
        static const ydk::Enum::YLeaf Y_35;
        static const ydk::Enum::YLeaf af42;
        static const ydk::Enum::YLeaf Y_37;
        static const ydk::Enum::YLeaf af43;
        static const ydk::Enum::YLeaf Y_39;
        static const ydk::Enum::YLeaf cs5;
        static const ydk::Enum::YLeaf Y_41;
        static const ydk::Enum::YLeaf Y_42;
        static const ydk::Enum::YLeaf Y_43;
        static const ydk::Enum::YLeaf Y_44;
        static const ydk::Enum::YLeaf Y_45;
        static const ydk::Enum::YLeaf ef;
        static const ydk::Enum::YLeaf Y_47;
        static const ydk::Enum::YLeaf cs6;
        static const ydk::Enum::YLeaf Y_49;
        static const ydk::Enum::YLeaf Y_50;
        static const ydk::Enum::YLeaf Y_51;
        static const ydk::Enum::YLeaf Y_52;
        static const ydk::Enum::YLeaf Y_53;
        static const ydk::Enum::YLeaf Y_54;
        static const ydk::Enum::YLeaf Y_55;
        static const ydk::Enum::YLeaf cs7;
        static const ydk::Enum::YLeaf Y_57;
        static const ydk::Enum::YLeaf Y_58;
        static const ydk::Enum::YLeaf Y_59;
        static const ydk::Enum::YLeaf Y_60;
        static const ydk::Enum::YLeaf Y_61;
        static const ydk::Enum::YLeaf Y_62;
        static const ydk::Enum::YLeaf Y_63;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "1") return 1;
            if (name == "2") return 2;
            if (name == "3") return 3;
            if (name == "4") return 4;
            if (name == "5") return 5;
            if (name == "6") return 6;
            if (name == "7") return 7;
            if (name == "cs1") return 8;
            if (name == "9") return 9;
            if (name == "af11") return 10;
            if (name == "11") return 11;
            if (name == "af12") return 12;
            if (name == "13") return 13;
            if (name == "af13") return 14;
            if (name == "15") return 15;
            if (name == "cs2") return 16;
            if (name == "17") return 17;
            if (name == "af21") return 18;
            if (name == "19") return 19;
            if (name == "af22") return 20;
            if (name == "21") return 21;
            if (name == "af23") return 22;
            if (name == "23") return 23;
            if (name == "cs3") return 24;
            if (name == "25") return 25;
            if (name == "af31") return 26;
            if (name == "27") return 27;
            if (name == "af32") return 28;
            if (name == "29") return 29;
            if (name == "af33") return 30;
            if (name == "31") return 31;
            if (name == "cs4") return 32;
            if (name == "33") return 33;
            if (name == "af41") return 34;
            if (name == "35") return 35;
            if (name == "af42") return 36;
            if (name == "37") return 37;
            if (name == "af43") return 38;
            if (name == "39") return 39;
            if (name == "cs5") return 40;
            if (name == "41") return 41;
            if (name == "42") return 42;
            if (name == "43") return 43;
            if (name == "44") return 44;
            if (name == "45") return 45;
            if (name == "ef") return 46;
            if (name == "47") return 47;
            if (name == "cs6") return 48;
            if (name == "49") return 49;
            if (name == "50") return 50;
            if (name == "51") return 51;
            if (name == "52") return 52;
            if (name == "53") return 53;
            if (name == "54") return 54;
            if (name == "55") return 55;
            if (name == "cs7") return 56;
            if (name == "57") return 57;
            if (name == "58") return 58;
            if (name == "59") return 59;
            if (name == "60") return 60;
            if (name == "61") return 61;
            if (name == "62") return 62;
            if (name == "63") return 63;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "inactive") return 0;
            if (name == "down") return 1;
            if (name == "admin-down") return 2;
            if (name == "connecting") return 3;
            if (name == "listening") return 4;
            if (name == "established") return 5;
            return -1;
        }
};

class L1SwitchportVirtualEthernetBridge : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class InstallerInstOper : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf install;
        static const ydk::Enum::YLeaf impact;
        static const ydk::Enum::YLeaf abort;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "install") return 1;
            if (name == "impact") return 2;
            if (name == "abort") return 3;
            return -1;
        }
};

class AggregateReplicationModeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf replicationServer;
        static const ydk::Enum::YLeaf ingressReplication;
        static const ydk::Enum::YLeaf ipMulticast;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "replicationServer") return 1;
            if (name == "ingressReplication") return 2;
            if (name == "ipMulticast") return 3;
            return -1;
        }
};

class L1AutoNeg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf Y_25G;

        static int get_enum_value(const std::string & name) {
            if (name == "on") return 1;
            if (name == "off") return 2;
            if (name == "25G") return 3;
            return -1;
        }
};

class PoePoePolice : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Default;
        static const ydk::Enum::YLeaf errdisable;
        static const ydk::Enum::YLeaf log;

        static int get_enum_value(const std::string & name) {
            if (name == "Default") return 0;
            if (name == "errdisable") return 1;
            if (name == "log") return 2;
            return -1;
        }
};

class HsrpBiaScopeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf global;
        static const ydk::Enum::YLeaf local;

        static int get_enum_value(const std::string & name) {
            if (name == "global") return 1;
            if (name == "local") return 2;
            return -1;
        }
};

class NdStAdjOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "up") return 1;
            return -1;
        }
};

class AaaAuthMechanism : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf plain_text;
        static const ydk::Enum::YLeaf gssapi_kerb5;
        static const ydk::Enum::YLeaf gssapi_md5;

        static int get_enum_value(const std::string & name) {
            if (name == "plain-text") return 1;
            if (name == "gssapi-kerb5") return 2;
            if (name == "gssapi-md5") return 3;
            return -1;
        }
};

class CdpDevIdT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf mac;
        static const ydk::Enum::YLeaf serialNum;
        static const ydk::Enum::YLeaf sysName;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "mac") return 1;
            if (name == "serialNum") return 2;
            if (name == "sysName") return 3;
            return -1;
        }
};

class NvoIngReplProtoT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf static_;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "bgp") return 1;
            if (name == "static") return 2;
            return -1;
        }
};

class SisfDeviceRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf switch_;

        static int get_enum_value(const std::string & name) {
            if (name == "node") return 0;
            if (name == "switch") return 3;
            return -1;
        }
};

class AggregateRttPType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf import;
        static const ydk::Enum::YLeaf export_;

        static int get_enum_value(const std::string & name) {
            if (name == "import") return 1;
            if (name == "export") return 2;
            return -1;
        }
};

class NwAddrF : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf mac;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            if (name == "mac") return 3;
            return -1;
        }
};

class RtdmcAuthT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ah_md5;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "ah-md5") return 1;
            return -1;
        }
};

class TunnelifTunnelSrcDirect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class AggregateConfigStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf configReady;
        static const ydk::Enum::YLeaf configNotReady;
        static const ydk::Enum::YLeaf configPurgeInProgress;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "configReady") return 1;
            if (name == "configNotReady") return 2;
            if (name == "configPurgeInProgress") return 4;
            return -1;
        }
};

class SegrtOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf ha_in_progress;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "enabled") return 1;
            if (name == "ha-in-progress") return 2;
            return -1;
        }
};

class MonAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class MplsstaticAfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_ucast;
        static const ydk::Enum::YLeaf ipv6_ucast;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4-ucast") return 1;
            if (name == "ipv6-ucast") return 2;
            return -1;
        }
};

class TrackRouteOwner : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf hmm;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "hmm") return 1;
            return -1;
        }
};

class VsanAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf suspended;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 1;
            if (name == "suspended") return 2;
            return -1;
        }
};

class L1EEELpi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aggressive;
        static const ydk::Enum::YLeaf normal;

        static int get_enum_value(const std::string & name) {
            if (name == "aggressive") return 1;
            if (name == "normal") return 2;
            return -1;
        }
};

class FcCreateState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf created;
        static const ydk::Enum::YLeaf removed;

        static int get_enum_value(const std::string & name) {
            if (name == "created") return 0;
            if (name == "removed") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "level3") return 1;
            if (name == "level2") return 2;
            if (name == "level1") return 3;
            if (name == "policy-plane") return 4;
            if (name == "control-plane") return 5;
            if (name == "span") return 6;
            return -1;
        }
};

class IsisOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf failed;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "initializing") return 1;
            if (name == "ok") return 2;
            if (name == "failed") return 3;
            return -1;
        }
};

class NbmNbmRcvOwner : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IGMP;
        static const ydk::Enum::YLeaf STATIC;
        static const ydk::Enum::YLeaf PIM;
        static const ydk::Enum::YLeaf NBM_STATIC;

        static int get_enum_value(const std::string & name) {
            if (name == "IGMP") return 0;
            if (name == "STATIC") return 1;
            if (name == "PIM") return 2;
            if (name == "NBM-STATIC") return 4;
            return -1;
        }
};

class NbmNbmFlowPolicerEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DISABLED;
        static const ydk::Enum::YLeaf ENABLED;

        static int get_enum_value(const std::string & name) {
            if (name == "DISABLED") return 0;
            if (name == "ENABLED") return 1;
            return -1;
        }
};

class TrackIntfProtocolType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4_routing;
        static const ydk::Enum::YLeaf ipv6_routing;
        static const ydk::Enum::YLeaf line_protocol;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "ipv4-routing") return 1;
            if (name == "ipv6-routing") return 2;
            if (name == "line-protocol") return 3;
            return -1;
        }
};

class PlatformMroutingDisableL2Upd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class L1AdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 1;
            if (name == "up") return 2;
            return -1;
        }
};

class ConftmplOperationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf create;
        static const ydk::Enum::YLeaf delete_;

        static int get_enum_value(const std::string & name) {
            if (name == "create") return 1;
            if (name == "delete") return 2;
            return -1;
        }
};

class L3CtxT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oob_mgmt;
        static const ydk::Enum::YLeaf inb_mgmt;
        static const ydk::Enum::YLeaf tenant;

        static int get_enum_value(const std::string & name) {
            if (name == "oob-mgmt") return 1;
            if (name == "inb-mgmt") return 2;
            if (name == "tenant") return 3;
            return -1;
        }
};

class AdjacencyDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ip") return 1;
            if (name == "ipv6") return 2;
            return -1;
        }
};

class SrteProtectionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protected_;
        static const ydk::Enum::YLeaf unprotected;

        static int get_enum_value(const std::string & name) {
            if (name == "protected") return 0;
            if (name == "unprotected") return 1;
            return -1;
        }
};

class AaaKeyEncUserPass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf Encrypt;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 255;
            if (name == "clear") return 0;
            if (name == "Encrypt") return 5;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "vrf") return 1;
            if (name == "if") return 2;
            if (name == "table") return 3;
            if (name == "if-table") return 4;
            if (name == "if-list") return 5;
            if (name == "purge") return 6;
            if (name == "vpnid") return 7;
            if (name == "source-of-origin") return 8;
            if (name == "route-limits") return 9;
            return -1;
        }
};

class PimBfdInstSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            if (name == "none") return 0;
            return -1;
        }
};

class ArpDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf supcache;

        static int get_enum_value(const std::string & name) {
            if (name == "ip") return 1;
            if (name == "supcache") return 2;
            return -1;
        }
};

class ConftmplTemplateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf vrf;
        static const ydk::Enum::YLeaf vlan;
        static const ydk::Enum::YLeaf intf;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "vrf") return 1;
            if (name == "vlan") return 2;
            if (name == "intf") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "access") return 1;
            if (name == "trunk") return 2;
            if (name == "fex-fabric") return 3;
            if (name == "dot1q-tunnel") return 4;
            if (name == "promiscuous") return 5;
            if (name == "host") return 6;
            if (name == "trunk_secondary") return 7;
            if (name == "trunk_promiscuous") return 8;
            return -1;
        }
};

class L2BridgeMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf mac;

        static int get_enum_value(const std::string & name) {
            if (name == "ip") return 1;
            if (name == "mac") return 2;
            return -1;
        }
};

class VpcOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf noCfg;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "down") return 1;
            if (name == "up") return 2;
            if (name == "noCfg") return 3;
            return -1;
        }
};

class ItdLBMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noLBMethod;
        static const ydk::Enum::YLeaf src;
        static const ydk::Enum::YLeaf dst;

        static int get_enum_value(const std::string & name) {
            if (name == "noLBMethod") return 0;
            if (name == "src") return 1;
            if (name == "dst") return 2;
            return -1;
        }
};

class ImMode100M : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "enabled") return 1;
            return -1;
        }
};

class RtcomComT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf regular;
        static const ydk::Enum::YLeaf extended;

        static int get_enum_value(const std::string & name) {
            if (name == "regular") return 1;
            if (name == "extended") return 2;
            return -1;
        }
};

class SlaOpPktPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf normal;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "high") return 2;
            if (name == "normal") return 1;
            return -1;
        }
};

class L2DomMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf CE;
        static const ydk::Enum::YLeaf FabricPath;

        static int get_enum_value(const std::string & name) {
            if (name == "CE") return 1;
            if (name == "FabricPath") return 2;
            return -1;
        }
};

class BgpAsnPropagation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf no_prepend;
        static const ydk::Enum::YLeaf replace_as;
        static const ydk::Enum::YLeaf dual_as;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "no-prepend") return 1;
            if (name == "replace-as") return 2;
            if (name == "dual-as") return 3;
            return -1;
        }
};

class IpqosStatsState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 0;
            if (name == "disabled") return 1;
            return -1;
        }
};

class BgpDomOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "up") return 1;
            if (name == "down") return 2;
            return -1;
        }
};

class TelemetryCompression : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf gzip;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "gzip") return 1;
            return -1;
        }
};

class BgpPfxSidAttrEntryType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf label_index;
        static const ydk::Enum::YLeaf ipv6_sid;
        static const ydk::Enum::YLeaf origin_srgb;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "label-index") return 1;
            if (name == "ipv6-sid") return 2;
            if (name == "origin-srgb") return 3;
            return -1;
        }
};

class MribLogType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf rout;
        static const ydk::Enum::YLeaf routip;
        static const ydk::Enum::YLeaf routipv4;
        static const ydk::Enum::YLeaf mrib;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "rout") return 1;
            if (name == "routip") return 2;
            if (name == "routipv4") return 3;
            if (name == "mrib") return 4;
            return -1;
        }
};

class StpIfMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf edge;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf trunk;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "edge") return 1;
            if (name == "network") return 2;
            if (name == "normal") return 3;
            if (name == "trunk") return 4;
            return -1;
        }
};

class Ospfv3PassiveControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class PlatformFabricSpeed : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf fabric_speed_40g;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "fabric-speed-40g") return 1;
            return -1;
        }
};

class L3MaxRtAct : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf log;
        static const ydk::Enum::YLeaf shut;
        static const ydk::Enum::YLeaf reinstall;

        static int get_enum_value(const std::string & name) {
            if (name == "log") return 1;
            if (name == "shut") return 2;
            if (name == "reinstall") return 3;
            return -1;
        }
};

class McastFiltMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf include;
        static const ydk::Enum::YLeaf exclude;

        static int get_enum_value(const std::string & name) {
            if (name == "include") return 1;
            if (name == "exclude") return 2;
            return -1;
        }
};

class NbmNbmGroupRangeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ASM;
        static const ydk::Enum::YLeaf SSM;

        static int get_enum_value(const std::string & name) {
            if (name == "ASM") return 0;
            if (name == "SSM") return 1;
            return -1;
        }
};

class StpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mst;
        static const ydk::Enum::YLeaf pvrst;

        static int get_enum_value(const std::string & name) {
            if (name == "mst") return 1;
            if (name == "pvrst") return 2;
            return -1;
        }
};

class AaaRuleAccessType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf read;
        static const ydk::Enum::YLeaf read_write;
        static const ydk::Enum::YLeaf command;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "read") return 1;
            if (name == "read-write") return 2;
            if (name == "command") return 3;
            return -1;
        }
};

class PlatformPcLbRes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf yes;
        static const ydk::Enum::YLeaf no;

        static int get_enum_value(const std::string & name) {
            if (name == "yes") return 1;
            if (name == "no") return 2;
            return -1;
        }
};

class SnmpPrivTypeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf des;
        static const ydk::Enum::YLeaf aes128;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "des") return 1;
            if (name == "aes128") return 2;
            return -1;
        }
};

class RtctrlRttPType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf import;
        static const ydk::Enum::YLeaf export_;

        static int get_enum_value(const std::string & name) {
            if (name == "import") return 1;
            if (name == "export") return 2;
            return -1;
        }
};

class OspfPassiveControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "intr-sleep") return 0;
            if (name == "stopped") return 1;
            if (name == "unintr-sleep") return 2;
            if (name == "running") return 3;
            if (name == "dead") return 4;
            if (name == "defunct") return 5;
            return -1;
        }
};

class CallhomeFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf xml;
        static const ydk::Enum::YLeaf full_txt;
        static const ydk::Enum::YLeaf short_txt;

        static int get_enum_value(const std::string & name) {
            if (name == "xml") return 1;
            if (name == "full-txt") return 2;
            if (name == "short-txt") return 3;
            return -1;
        }
};

class NwAdminStIfStatPortUnreach : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class InstallerInstEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf yes;
        static const ydk::Enum::YLeaf no;

        static int get_enum_value(const std::string & name) {
            if (name == "yes") return 0;
            if (name == "no") return 1;
            return -1;
        }
};

class BgpAsSegT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sequence;
        static const ydk::Enum::YLeaf set;

        static int get_enum_value(const std::string & name) {
            if (name == "sequence") return 1;
            if (name == "set") return 2;
            return -1;
        }
};

class Ospfv3IfOperSt : public ydk::Enum
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "down") return 1;
            if (name == "loopback") return 2;
            if (name == "waiting") return 3;
            if (name == "p2p") return 4;
            if (name == "dr") return 5;
            if (name == "bdr") return 6;
            if (name == "dr-other") return 7;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "symmetricActive") return 1;
            if (name == "symmetricPassive") return 2;
            if (name == "client") return 3;
            if (name == "server") return 4;
            if (name == "broadcast") return 5;
            if (name == "reservedControl") return 6;
            if (name == "reservedPrivate") return 7;
            return -1;
        }
};

class VpcParamType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf type_1;
        static const ydk::Enum::YLeaf type_2;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "type-1") return 1;
            if (name == "type-2") return 2;
            return -1;
        }
};

class AaaBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "yes") return 1;
            return -1;
        }
};

class AnalyticsCollVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v5;
        static const ydk::Enum::YLeaf v9;
        static const ydk::Enum::YLeaf cisco_v1;

        static int get_enum_value(const std::string & name) {
            if (name == "v5") return 1;
            if (name == "v9") return 2;
            if (name == "cisco-v1") return 3;
            return -1;
        }
};

class CoppIcmp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Undefined;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf unreachable;

        static int get_enum_value(const std::string & name) {
            if (name == "Undefined") return 0;
            if (name == "redirect") return 1;
            if (name == "unreachable") return 2;
            return -1;
        }
};

class MonitorDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipep_resolve;

        static int get_enum_value(const std::string & name) {
            if (name == "ipep-resolve") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "bytes") return 1;
            if (name == "kbytes") return 2;
            if (name == "mbytes") return 3;
            if (name == "ms") return 4;
            if (name == "us") return 5;
            if (name == "packets") return 6;
            return -1;
        }
};

class AaaKeyEncRadiusProviderKeyEnc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;
        static const ydk::Enum::YLeaf inherit_from_global;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 6;
            if (name == "7") return 7;
            if (name == "inherit-from-global") return 255;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "primary") return 1;
            if (name == "gateway") return 2;
            if (name == "overlay") return 4;
            if (name == "primary-vpc-peer") return 5;
            if (name == "control-plane") return 6;
            if (name == "vsan") return 7;
            return -1;
        }
};

class AggregateFabFwdMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf anycastgw;
        static const ydk::Enum::YLeaf proxygw;

        static int get_enum_value(const std::string & name) {
            if (name == "standard") return 0;
            if (name == "anycastgw") return 1;
            if (name == "proxygw") return 2;
            return -1;
        }
};

class CallhomeBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 0;
            return -1;
        }
};

class BgpRtCtrlDir : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 1;
            if (name == "out") return 2;
            return -1;
        }
};

class PlatformTcamRegionCfgFault : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf TCAM_template_validation;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "TCAM_template_validation") return 1;
            return -1;
        }
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
        static const ydk::Enum::YLeaf srcDestSymmetric;
        static const ydk::Enum::YLeaf srcDestInnerAll;
        static const ydk::Enum::YLeaf srcDestInnerGre;
        static const ydk::Enum::YLeaf srcDestInnerGreSymmetric;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 1;
            if (name == "destPort") return 2;
            if (name == "srcDest") return 3;
            if (name == "srcDestGre") return 4;
            if (name == "srcDestPort") return 5;
            if (name == "source") return 6;
            if (name == "srcDestGTPU") return 7;
            if (name == "srcDestSymmetric") return 8;
            if (name == "srcDestInnerAll") return 9;
            if (name == "srcDestInnerGre") return 10;
            if (name == "srcDestInnerGreSymmetric") return 11;
            return -1;
        }
};

class SlaHttpMethodVal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf get;

        static int get_enum_value(const std::string & name) {
            if (name == "get") return 1;
            return -1;
        }
};

class AaaRealmDomainAuthRealm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "local") return 0;
            if (name == "radius") return 1;
            if (name == "tacacs") return 2;
            if (name == "ldap") return 3;
            if (name == "none") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "cpu") return 1;
            if (name == "inlet") return 2;
            if (name == "outlet") return 3;
            if (name == "hotswap") return 4;
            if (name == "dimm") return 5;
            if (name == "phy") return 6;
            if (name == "sfp") return 7;
            if (name == "qsfp") return 8;
            if (name == "asic") return 9;
            if (name == "pch") return 10;
            if (name == "cpu-crm") return 11;
            if (name == "asic-vrm") return 12;
            if (name == "x86") return 18;
            if (name == "arm") return 19;
            if (name == "die") return 20;
            return -1;
        }
};

class PlatformMcastNlb : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "active") return 1;
            if (name == "hot-stdby") return 2;
            if (name == "cold-stdby") return 3;
            if (name == "offline") return 4;
            if (name == "normal") return 5;
            if (name == "non-dis-upg") return 6;
            return -1;
        }
};

class L1LinkLog : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 1;
            if (name == "enable") return 2;
            if (name == "disable") return 3;
            return -1;
        }
};

class L1EEEState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf disagreed;
        static const ydk::Enum::YLeaf not_applicable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            if (name == "disagreed") return 3;
            if (name == "not-applicable") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "trunking") return 1;
            if (name == "fabricpath") return 2;
            if (name == "not-trunking") return 3;
            if (name == "trunk-bundle") return 4;
            if (name == "fabric-bundle") return 5;
            if (name == "no-trunk-bundle") return 6;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "4096") return 1;
            if (name == "8192") return 2;
            if (name == "12288") return 3;
            if (name == "16384") return 4;
            if (name == "20480") return 5;
            if (name == "24576") return 6;
            if (name == "28672") return 7;
            if (name == "32768") return 8;
            if (name == "36864") return 9;
            if (name == "40960") return 10;
            if (name == "45056") return 11;
            if (name == "49152") return 12;
            if (name == "53248") return 13;
            if (name == "57344") return 14;
            if (name == "61440") return 15;
            return -1;
        }
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
        static const ydk::Enum::YLeaf aggr_mapped_subnet_inconsistent;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "up") return 1;
            if (name == "subnet-overlap") return 2;
            if (name == "no-primary") return 3;
            if (name == "if-down") return 4;
            if (name == "addr-exists") return 5;
            if (name == "invalid-vrf") return 6;
            if (name == "static-rt-nh") return 7;
            if (name == "lb-addr") return 8;
            if (name == "invalid-ll-use") return 9;
            if (name == "no-glbl-addr") return 10;
            if (name == "no-ll-addr") return 11;
            if (name == "dad-in-progress") return 12;
            if (name == "dad-failed") return 13;
            if (name == "invalid-mask-len") return 14;
            if (name == "l2-intf-err") return 15;
            if (name == "super-intf-err") return 16;
            if (name == "invalid-ll") return 17;
            if (name == "if-init-err") return 18;
            if (name == "ifindex-err") return 19;
            if (name == "invalid-eui64") return 20;
            if (name == "lladdr-create-fail") return 21;
            if (name == "DAD-tentative") return 22;
            if (name == "DAD-lcl-duplicate") return 23;
            if (name == "DAD-duplicate") return 24;
            if (name == "DAD-preferred") return 25;
            if (name == "DAD-deprecated") return 26;
            if (name == "DAD-invalid") return 27;
            if (name == "multiple-lladdr") return 28;
            if (name == "invalid-tunnel") return 29;
            if (name == "lladdr-invalid-tunnel") return 30;
            if (name == "aggr-mapped-subnet-inconsistent") return 31;
            return -1;
        }
};

class SnmpPrivType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf des;
        static const ydk::Enum::YLeaf aes_128;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "des") return 1;
            if (name == "aes-128") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "no-transition") return 0;
            if (name == "no-change") return 1;
            if (name == "any") return 2;
            if (name == "down") return 3;
            if (name == "preinit-done") return 4;
            if (name == "wait-flogi-response") return 5;
            if (name == "up") return 6;
            if (name == "flogi-failed") return 7;
            if (name == "wait-fcid-add") return 8;
            if (name == "wait-fcid-del") return 9;
            if (name == "wait-ns-registration") return 10;
            if (name == "flogi-fail-retry") return 11;
            if (name == "wait-for-vsan-up") return 12;
            if (name == "wait-lc-port-config") return 13;
            if (name == "pc-member-add") return 14;
            if (name == "pc-member-del") return 15;
            return -1;
        }
};

class BfdTrkMbrLnk : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 0;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "down") return 1;
            if (name == "attempt") return 2;
            if (name == "initializing") return 3;
            if (name == "two-way") return 4;
            if (name == "exstart") return 5;
            if (name == "exchange") return 6;
            if (name == "loading") return 7;
            if (name == "full") return 8;
            if (name == "self") return 9;
            return -1;
        }
};

class FvImmediacy_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf lazy;

        static int get_enum_value(const std::string & name) {
            if (name == "immediate") return 1;
            if (name == "lazy") return 2;
            return -1;
        }
};

class AaaKeyEncTacacsPlusProviderKeyEnc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;
        static const ydk::Enum::YLeaf inherit_from_global;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 6;
            if (name == "7") return 7;
            if (name == "inherit-from-global") return 255;
            return -1;
        }
};

class OspfBwRefUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mbps;
        static const ydk::Enum::YLeaf gbps;

        static int get_enum_value(const std::string & name) {
            if (name == "mbps") return 0;
            if (name == "gbps") return 1;
            return -1;
        }
};

class InbandTelemetryModeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbandtelemetry;
        static const ydk::Enum::YLeaf postcard;

        static int get_enum_value(const std::string & name) {
            if (name == "inbandtelemetry") return 0;
            if (name == "postcard") return 1;
            return -1;
        }
};

class IsisHelloPadT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf transient;
        static const ydk::Enum::YLeaf never;

        static int get_enum_value(const std::string & name) {
            if (name == "always") return 1;
            if (name == "transient") return 2;
            if (name == "never") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "gre/ip") return 1;
            if (name == "gre/ipv6") return 6;
            if (name == "ipip/ip") return 7;
            if (name == "ipip/ipv6") return 8;
            if (name == "ipip/dcapany/ip") return 9;
            if (name == "ipip/dcapany/ipv6") return 10;
            if (name == "ipv6ip") return 11;
            if (name == "ipv6ip/dcapany") return 12;
            if (name == "ipv6ipv6") return 13;
            if (name == "ipv6ipv6/dcapany") return 14;
            return -1;
        }
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
        static const ydk::Enum::YLeaf rphash;
        static const ydk::Enum::YLeaf df;
        static const ydk::Enum::YLeaf bf;
        static const ydk::Enum::YLeaf embedrp;
        static const ydk::Enum::YLeaf syslog;
        static const ydk::Enum::YLeaf vrfdetail;

        static int get_enum_value(const std::string & name) {
            if (name == "rp") return 0;
            if (name == "grange") return 1;
            if (name == "route") return 2;
            if (name == "dynrpsrc") return 3;
            if (name == "gstats") return 4;
            if (name == "vrf") return 5;
            if (name == "ifrec") return 6;
            if (name == "grpoif") return 7;
            if (name == "group") return 8;
            if (name == "ifstats") return 9;
            if (name == "peer") return 10;
            if (name == "rphash") return 11;
            if (name == "df") return 12;
            if (name == "bf") return 13;
            if (name == "embedrp") return 14;
            if (name == "syslog") return 15;
            if (name == "vrfdetail") return 16;
            return -1;
        }
};

class NdRouterPreference : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Medium;
        static const ydk::Enum::YLeaf High;
        static const ydk::Enum::YLeaf Reserved;
        static const ydk::Enum::YLeaf Low;

        static int get_enum_value(const std::string & name) {
            if (name == "Medium") return 0;
            if (name == "High") return 1;
            if (name == "Reserved") return 2;
            if (name == "Low") return 3;
            return -1;
        }
};

class BgpEgressPeerEng : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf enabled_adj_sid;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "enabled") return 1;
            if (name == "enabled-adj-sid") return 2;
            return -1;
        }
};

class VrrpAuthType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf simple;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "simple") return 2;
            return -1;
        }
};

class LcmEcmpTemplateL3vpn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "yes") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unsupported") return 0;
            if (name == "controller") return 1;
            if (name == "leaf") return 2;
            if (name == "spine") return 3;
            if (name == "vleaf") return 4;
            if (name == "vip") return 5;
            if (name == "protection-chain") return 6;
            return -1;
        }
};

class TunnelifTunnelPMTUD : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class PlatformBufferMonitorSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Enable;
        static const ydk::Enum::YLeaf Disable;

        static int get_enum_value(const std::string & name) {
            if (name == "Enable") return 1;
            if (name == "Disable") return 0;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "nxos-supervisor") return 0;
            if (name == "lc") return 1;
            if (name == "fex") return 2;
            if (name == "bios") return 3;
            if (name == "lcn9k") return 4;
            if (name == "unknown") return -1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "intra") return 1;
            if (name == "discard-int") return 2;
            if (name == "inter") return 3;
            if (name == "discard-ext") return 4;
            if (name == "ext1") return 5;
            if (name == "nssa1") return 6;
            if (name == "ext2") return 7;
            if (name == "nssa2") return 8;
            return -1;
        }
};

class SisfSecurityLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf glean;
        static const ydk::Enum::YLeaf inspect;
        static const ydk::Enum::YLeaf guard;

        static int get_enum_value(const std::string & name) {
            if (name == "glean") return 0;
            if (name == "inspect") return 1;
            if (name == "guard") return 2;
            return -1;
        }
};

class SisfDhcpflag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;

        static int get_enum_value(const std::string & name) {
            if (name == "on") return 0;
            if (name == "off") return 1;
            return -1;
        }
};

class PlatformInfraVlanForce : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Disable;
        static const ydk::Enum::YLeaf Enable;

        static int get_enum_value(const std::string & name) {
            if (name == "Disable") return 0;
            if (name == "Enable") return 1;
            return -1;
        }
};

class SnmpSmplType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf delta;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "absolute") return 1;
            if (name == "delta") return 2;
            return -1;
        }
};

class AnalyticsDefPolicyT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf deny;

        static int get_enum_value(const std::string & name) {
            if (name == "permit") return 0;
            if (name == "deny") return 1;
            return -1;
        }
};

class VrrpGroupSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf backup;
        static const ydk::Enum::YLeaf master;

        static int get_enum_value(const std::string & name) {
            if (name == "init") return 0;
            if (name == "backup") return 1;
            if (name == "master") return 2;
            return -1;
        }
};

class EthpmSyslogInfo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf info_1;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "info-1") return 1;
            return -1;
        }
};

class VsanLbType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf src_dst_id;
        static const ydk::Enum::YLeaf src_dst_ox_id;

        static int get_enum_value(const std::string & name) {
            if (name == "src-dst-id") return 1;
            if (name == "src-dst-ox-id") return 2;
            return -1;
        }
};

class PoeLoggingType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Emergencies;
        static const ydk::Enum::YLeaf Alerts;
        static const ydk::Enum::YLeaf Critical;
        static const ydk::Enum::YLeaf Errors;
        static const ydk::Enum::YLeaf Warnings;
        static const ydk::Enum::YLeaf Notification;
        static const ydk::Enum::YLeaf Information;
        static const ydk::Enum::YLeaf Debugging;

        static int get_enum_value(const std::string & name) {
            if (name == "Emergencies") return 0;
            if (name == "Alerts") return 1;
            if (name == "Critical") return 2;
            if (name == "Errors") return 3;
            if (name == "Warnings") return 4;
            if (name == "Notification") return 5;
            if (name == "Information") return 6;
            if (name == "Debugging") return 7;
            return -1;
        }
};

class OspfLsaLeakOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Inactive;
        static const ydk::Enum::YLeaf active;

        static int get_enum_value(const std::string & name) {
            if (name == "Inactive") return 0;
            if (name == "active") return 1;
            return -1;
        }
};

class L1PortTypeFabric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "yes") return 1;
            return -1;
        }
};

class CallhomeAlertGroupName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf configuration;
        static const ydk::Enum::YLeaf diagnostic;
        static const ydk::Enum::YLeaf environmental;
        static const ydk::Enum::YLeaf inventory;
        static const ydk::Enum::YLeaf license;
        static const ydk::Enum::YLeaf linecard;
        static const ydk::Enum::YLeaf supervisor;
        static const ydk::Enum::YLeaf syslogport;
        static const ydk::Enum::YLeaf system;
        static const ydk::Enum::YLeaf test;

        static int get_enum_value(const std::string & name) {
            if (name == "configuration") return 0;
            if (name == "diagnostic") return 1;
            if (name == "environmental") return 2;
            if (name == "inventory") return 3;
            if (name == "license") return 4;
            if (name == "linecard") return 5;
            if (name == "supervisor") return 6;
            if (name == "syslogport") return 7;
            if (name == "system") return 8;
            if (name == "test") return 9;
            return -1;
        }
};

class RtleakCtrl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf withdraw;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "warning") return 1;
            if (name == "withdraw") return 2;
            return -1;
        }
};

class PcOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf bringup_in_progress;
        static const ydk::Enum::YLeaf module_removed;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 0;
            if (name == "down") return 1;
            if (name == "bringup-in-progress") return 2;
            if (name == "module-removed") return 3;
            return -1;
        }
};

class McastfwdSwRep : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf swasm;
        static const ydk::Enum::YLeaf swiif;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "swasm") return 1;
            if (name == "swiif") return 2;
            return -1;
        }
};

class TelemetryEncoding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf GPB;
        static const ydk::Enum::YLeaf JSON;
        static const ydk::Enum::YLeaf XML;
        static const ydk::Enum::YLeaf GPB_compact;

        static int get_enum_value(const std::string & name) {
            if (name == "GPB") return 1;
            if (name == "JSON") return 2;
            if (name == "XML") return 3;
            if (name == "GPB-compact") return 4;
            return -1;
        }
};

class CoppRdrct : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Undefined;
        static const ydk::Enum::YLeaf arp_inspect;
        static const ydk::Enum::YLeaf dhcp_snoop;

        static int get_enum_value(const std::string & name) {
            if (name == "Undefined") return 0;
            if (name == "arp-inspect") return 1;
            if (name == "dhcp-snoop") return 2;
            return -1;
        }
};

class EqptMemT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unk;
        static const ydk::Enum::YLeaf dimm;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf sprom;

        static int get_enum_value(const std::string & name) {
            if (name == "unk") return 0;
            if (name == "dimm") return 1;
            if (name == "flash") return 2;
            if (name == "sprom") return 3;
            return -1;
        }
};

class CapRaiseFaultState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nominal;
        static const ydk::Enum::YLeaf ruleHasLess;
        static const ydk::Enum::YLeaf ruleHasMore;

        static int get_enum_value(const std::string & name) {
            if (name == "nominal") return 0;
            if (name == "ruleHasLess") return 1;
            if (name == "ruleHasMore") return 2;
            return -1;
        }
};

class BgpPeerType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ibgp;
        static const ydk::Enum::YLeaf ebgp;

        static int get_enum_value(const std::string & name) {
            if (name == "ibgp") return 1;
            if (name == "ebgp") return 2;
            return -1;
        }
};

class NetflowDirectionT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;
        static const ydk::Enum::YLeaf both;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 1;
            if (name == "out") return 2;
            if (name == "both") return 3;
            return -1;
        }
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
        static const ydk::Enum::YLeaf TEMPLATE_MULTICAST_EXT_HEAVY;

        static int get_enum_value(const std::string & name) {
            if (name == "DEFAULT") return 0;
            if (name == "NON_HIER_DEFAULT") return 1;
            if (name == "NON_HIER_MAX_L3") return 2;
            if (name == "MAX_HOST") return 3;
            if (name == "TOR_MAX_L3") return 4;
            if (name == "DEFAULT_64B") return 5;
            if (name == "NON_HIER_MAX_L3_64B") return 6;
            if (name == "TOR_MAX_L3_64B") return 7;
            if (name == "TOR_MAX_L2") return 8;
            if (name == "TOR_MAX_L2L3") return 9;
            if (name == "TOR_TEMPLATE_OVL_HOST_SCALE") return 21;
            if (name == "TEMPLATE_LPM_HEAVY") return 22;
            if (name == "TOR_TEMPLATE_LPM_SCALE_V6_64") return 23;
            if (name == "TOR_TEMPLATE_DUAL_STACK_HOST_SCALE") return 24;
            if (name == "TEMPLATE_DYNAMIC_TRIE_SCALE") return 25;
            if (name == "TEMPLATE_MULTICAST_HEAVY") return 26;
            if (name == "TEMPLATE_VXLAN_SCALE") return 27;
            if (name == "TEMPLATE_MPLS_SCALE") return 28;
            if (name == "TEMPLATE_IPV6_LPM_HEAVY") return 29;
            if (name == "TEMPLATE_MULTICAST_EXT_HEAVY") return 31;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "bps") return 1;
            if (name == "kbps") return 2;
            if (name == "mbps") return 3;
            if (name == "gbps") return 4;
            if (name == "pps") return 5;
            if (name == "pct") return 6;
            return -1;
        }
};

class MplsOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "up") return 1;
            return -1;
        }
};

class NbmNbmPermit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UNDEFINED;
        static const ydk::Enum::YLeaf DENIED;
        static const ydk::Enum::YLeaf ALLOWED;

        static int get_enum_value(const std::string & name) {
            if (name == "UNDEFINED") return 0;
            if (name == "DENIED") return 1;
            if (name == "ALLOWED") return 2;
            return -1;
        }
};

class SysmgrAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 0;
            if (name == "disable") return 1;
            return -1;
        }
};

class FmInstOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled_not_running;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            if (name == "enabled-not-running") return 3;
            return -1;
        }
};

class CfsAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class PimIfdbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stats;
        static const ydk::Enum::YLeaf adj;
        static const ydk::Enum::YLeaf prop;

        static int get_enum_value(const std::string & name) {
            if (name == "stats") return 0;
            if (name == "adj") return 1;
            if (name == "prop") return 2;
            return -1;
        }
};

class L2CreateState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf created;
        static const ydk::Enum::YLeaf removed;
        static const ydk::Enum::YLeaf deleted_and_stale;

        static int get_enum_value(const std::string & name) {
            if (name == "created") return 1;
            if (name == "removed") return 2;
            if (name == "deleted-and-stale") return 3;
            return -1;
        }
};

class VpcTosType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

        static int get_enum_value(const std::string & name) {
            if (name == "min-delay") return 0;
            if (name == "max-throughput") return 1;
            if (name == "max-reliability") return 2;
            if (name == "min-monetary-cost") return 3;
            if (name == "normal") return 4;
            return -1;
        }
};

class IpmcVer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf Y_2;
        static const ydk::Enum::YLeaf Y_3;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "2") return 2;
            if (name == "3") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "UNKNOWN") return 0;
            if (name == "ARP") return 1;
            if (name == "RECEIVER") return 2;
            if (name == "RECEIVER_ARP") return 3;
            if (name == "SENDER") return 4;
            if (name == "SENDER_ARP") return 5;
            if (name == "SENDER_RECEIVER") return 6;
            if (name == "SENDER_RECEIVER_ARP") return 7;
            return -1;
        }
};

class SisfNdpflag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;

        static int get_enum_value(const std::string & name) {
            if (name == "on") return 0;
            if (name == "off") return 1;
            return -1;
        }
};

class AggregateCtrlrType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf l2_vxlan;
        static const ydk::Enum::YLeaf vxlan;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "l2-vxlan") return 1;
            if (name == "vxlan") return 2;
            return -1;
        }
};

class AaaLdapPwdEnc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "7") return 7;
            return -1;
        }
};

class NetflowCollVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v5;
        static const ydk::Enum::YLeaf v9;
        static const ydk::Enum::YLeaf cisco_v1;

        static int get_enum_value(const std::string & name) {
            if (name == "v5") return 1;
            if (name == "v9") return 2;
            if (name == "cisco-v1") return 3;
            return -1;
        }
};

class SysmgrOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class SrteEncapsulationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;

        static int get_enum_value(const std::string & name) {
            if (name == "mpls") return 0;
            return -1;
        }
};

class FmOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class L1Beacon : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;

        static int get_enum_value(const std::string & name) {
            if (name == "on") return 1;
            if (name == "off") return 2;
            return -1;
        }
};

class BgpPmsiTunType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ingress_repl;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "ingress-repl") return 1;
            return -1;
        }
};

class AaaClear : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "yes") return 1;
            return -1;
        }
};

class EqptPsuFanDir : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf front2back;
        static const ydk::Enum::YLeaf back2front;
        static const ydk::Enum::YLeaf notused;

        static int get_enum_value(const std::string & name) {
            if (name == "front2back") return 0;
            if (name == "back2front") return 1;
            if (name == "notused") return 2;
            return -1;
        }
};

class PlatformMroutingPerfMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "kern") return 0;
            if (name == "user") return 1;
            if (name == "mail") return 2;
            if (name == "daemon") return 3;
            if (name == "auth") return 4;
            if (name == "syslog") return 5;
            if (name == "lpr") return 6;
            if (name == "news") return 7;
            if (name == "uucp") return 8;
            if (name == "cron") return 9;
            if (name == "authpriv") return 10;
            if (name == "ftp") return 11;
            if (name == "local0") return 16;
            if (name == "local1") return 17;
            if (name == "local2") return 18;
            if (name == "local3") return 19;
            if (name == "local4") return 20;
            if (name == "local5") return 21;
            if (name == "local6") return 22;
            if (name == "local7") return 23;
            return -1;
        }
};

class RegressEnumT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf val1;
        static const ydk::Enum::YLeaf val2;
        static const ydk::Enum::YLeaf val3;

        static int get_enum_value(const std::string & name) {
            if (name == "val1") return 1;
            if (name == "val2") return 2;
            if (name == "val3") return 3;
            return -1;
        }
};

class EqptVSrc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf Y_110v;
        static const ydk::Enum::YLeaf Y_220v;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "110v") return 1;
            if (name == "220v") return 2;
            return -1;
        }
};

class AggregateConfTmplStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf failed;

        static int get_enum_value(const std::string & name) {
            if (name == "inactive") return 0;
            if (name == "active") return 1;
            if (name == "failed") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down-pending") return 2;
            if (name == "purged") return 3;
            if (name == "down") return 4;
            if (name == "del-pending") return 5;
            if (name == "deleted") return 6;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "arp") return 1;
            if (name == "bridging") return 2;
            if (name == "cdp") return 3;
            if (name == "dhcp") return 7;
            if (name == "isis") return 8;
            if (name == "fcoe") return 14;
            return -1;
        }
};

class BfdAfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            return -1;
        }
};

class AaaRadSrvUseType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Auth;
        static const ydk::Enum::YLeaf Author;
        static const ydk::Enum::YLeaf Acc;
        static const ydk::Enum::YLeaf All;

        static int get_enum_value(const std::string & name) {
            if (name == "Auth") return 0;
            if (name == "Author") return 1;
            if (name == "Acc") return 2;
            if (name == "All") return 3;
            return -1;
        }
};

class OspfBfdOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "up") return 1;
            return -1;
        }
};

class StpPathcostOp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf short_;
        static const ydk::Enum::YLeaf long_;

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 0;
            if (name == "short") return 1;
            if (name == "long") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "supslot") return 1;
            if (name == "lcslot") return 2;
            if (name == "fcslot") return 3;
            if (name == "scslot") return 4;
            if (name == "extchslot") return 5;
            if (name == "psuslot") return 6;
            if (name == "fantray") return 7;
            if (name == "bslot") return 8;
            if (name == "nslot") return 9;
            return -1;
        }
};

class NetflowModeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netflow;

        static int get_enum_value(const std::string & name) {
            if (name == "netflow") return 0;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "LL") return 2;
            if (name == "SN") return 3;
            if (name == "LC") return 4;
            if (name == "EL") return 5;
            if (name == "10GBASE-SR") return 6;
            if (name == "10GBASE-LR") return 7;
            if (name == "10GBASE-ER") return 8;
            if (name == "10GBASE-LX4") return 9;
            if (name == "10GBASE-SW") return 10;
            if (name == "10GBASE-LW") return 11;
            if (name == "10GBASE-EW") return 12;
            return -1;
        }
};

class ArpEventLogSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf small;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf large;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "small") return 1;
            if (name == "medium") return 2;
            if (name == "large") return 3;
            return -1;
        }
};

class McpOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "init") return 0;
            if (name == "up") return 1;
            if (name == "down") return 3;
            return -1;
        }
};

class OspfFlagStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf clear;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "clear") return 1;
            return -1;
        }
};

class RtdmcAdjOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf inactive;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 0;
            if (name == "inactive") return 1;
            return -1;
        }
};

class BgpPeerGrSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf na;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "na") return 1;
            if (name == "reset") return 2;
            if (name == "up") return 3;
            return -1;
        }
};

class BgpAdvertL2vpnEvpn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 0;
            return -1;
        }
};

class AaaProviderState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf operable;
        static const ydk::Enum::YLeaf inoperable;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "operable") return 1;
            if (name == "inoperable") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "invalid") return 0;
            if (name == "permit") return 1;
            if (name == "deny") return 2;
            if (name == "copy") return 3;
            if (name == "divert") return 4;
            if (name == "redirect") return 5;
            return -1;
        }
};

class MonitorErSpanVer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ver2;
        static const ydk::Enum::YLeaf ver3;

        static int get_enum_value(const std::string & name) {
            if (name == "ver2") return 2;
            if (name == "ver3") return 3;
            return -1;
        }
};

class NatBatchTimeout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_250;
        static const ydk::Enum::YLeaf Y_500;
        static const ydk::Enum::YLeaf Y_750;
        static const ydk::Enum::YLeaf Y_1000;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "250") return 250;
            if (name == "500") return 500;
            if (name == "750") return 750;
            if (name == "1000") return 1000;
            return -1;
        }
};

class StpVpcState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf vPCPeerlink;
        static const ydk::Enum::YLeaf vPC;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "vPCPeerlink") return 1;
            if (name == "vPC") return 2;
            return -1;
        }
};

class SysmgrCoreUriType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tftp;
        static const ydk::Enum::YLeaf bootflash;
        static const ydk::Enum::YLeaf usb1;

        static int get_enum_value(const std::string & name) {
            if (name == "tftp") return 2;
            if (name == "bootflash") return 8;
            if (name == "usb1") return 32768;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "init") return 1;
            if (name == "discover") return 2;
            if (name == "requesting") return 3;
            if (name == "addr-rcvd") return 4;
            if (name == "failed") return 5;
            if (name == "request-timedout") return 6;
            if (name == "down") return 7;
            return -1;
        }
};

class NgoamXcPortState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf errDisabled;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "up") return 1;
            if (name == "errDisabled") return 2;
            return -1;
        }
};

class AaaPwdPolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 0;
            if (name == "disable") return 1;
            return -1;
        }
};

class TunnelEncapT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf vxlan;
        static const ydk::Enum::YLeaf ivxlan;
        static const ydk::Enum::YLeaf nvgre;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "vxlan") return 1;
            if (name == "ivxlan") return 2;
            if (name == "nvgre") return 3;
            return -1;
        }
};

class OspfVrfLiteControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf l3vpn;
        static const ydk::Enum::YLeaf evpn;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "l3vpn") return 1;
            if (name == "evpn") return 2;
            return -1;
        }
};

class IsisDistrLvl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l0;
        static const ydk::Enum::YLeaf l1;
        static const ydk::Enum::YLeaf l2;

        static int get_enum_value(const std::string & name) {
            if (name == "l0") return 0;
            if (name == "l1") return 1;
            if (name == "l2") return 2;
            return -1;
        }
};

class NdDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf adj;

        static int get_enum_value(const std::string & name) {
            if (name == "adj") return 1;
            return -1;
        }
};

class RtmapCriteria : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exact;
        static const ydk::Enum::YLeaf sub_group;

        static int get_enum_value(const std::string & name) {
            if (name == "exact") return 1;
            if (name == "sub-group") return 2;
            return -1;
        }
};

class BgpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fabric;
        static const ydk::Enum::YLeaf external;

        static int get_enum_value(const std::string & name) {
            if (name == "fabric") return 1;
            if (name == "external") return 2;
            return -1;
        }
};

class RtmapAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class BfdOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "admin-down") return 0;
            if (name == "down") return 1;
            if (name == "init") return 2;
            if (name == "up") return 3;
            return -1;
        }
};

class CoppMatchT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Undefined;
        static const ydk::Enum::YLeaf access_group;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf exception;
        static const ydk::Enum::YLeaf protocol;

        static int get_enum_value(const std::string & name) {
            if (name == "Undefined") return 0;
            if (name == "access-group") return 1;
            if (name == "redirect") return 2;
            if (name == "exception") return 3;
            if (name == "protocol") return 4;
            return -1;
        }
};

class MmodeMaintModeActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf maintenance;
        static const ydk::Enum::YLeaf maintenance_shutdown;
        static const ydk::Enum::YLeaf maintenance_dont_generate_profile;
        static const ydk::Enum::YLeaf normal_dont_generate_profile;

        static int get_enum_value(const std::string & name) {
            if (name == "normal") return 0;
            if (name == "maintenance") return 1;
            if (name == "maintenance-shutdown") return 2;
            if (name == "maintenance-dont-generate-profile") return 3;
            if (name == "normal-dont-generate-profile") return 4;
            return -1;
        }
};

class IsisMetricStyle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf narrow;
        static const ydk::Enum::YLeaf wide;
        static const ydk::Enum::YLeaf transition;

        static int get_enum_value(const std::string & name) {
            if (name == "narrow") return 1;
            if (name == "wide") return 2;
            if (name == "transition") return 3;
            return -1;
        }
};

class QosTenantPrio : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf level3;
        static const ydk::Enum::YLeaf level2;
        static const ydk::Enum::YLeaf level1;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "level3") return 1;
            if (name == "level2") return 2;
            if (name == "level1") return 3;
            return -1;
        }
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
        static const ydk::Enum::YLeaf R1;
        static const ydk::Enum::YLeaf mac_only;
        static const ydk::Enum::YLeaf mac_ip;
        static const ydk::Enum::YLeaf R2_ALL;
        static const ydk::Enum::YLeaf R3;
        static const ydk::Enum::YLeaf R4;
        static const ydk::Enum::YLeaf R5;
        static const ydk::Enum::YLeaf R6;

        static int get_enum_value(const std::string & name) {
            if (name == "external") return 1;
            if (name == "internal") return 2;
            if (name == "ospf-inter-area") return 3;
            if (name == "ospf-intra-area") return 4;
            if (name == "isis-l1") return 5;
            if (name == "isis-l2") return 6;
            if (name == "local") return 7;
            if (name == "ospf-nssa-external") return 8;
            if (name == "ospf-type1") return 9;
            if (name == "ospf-type2") return 10;
            if (name == "R1") return 11;
            if (name == "mac-only") return 12;
            if (name == "mac-ip") return 13;
            if (name == "R2_ALL") return 14;
            if (name == "R3") return 15;
            if (name == "R4") return 16;
            if (name == "R5") return 17;
            if (name == "R6") return 18;
            return -1;
        }
};

class PcPortChannelType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;

        static int get_enum_value(const std::string & name) {
            if (name == "ethernet") return 0;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "NOOP") return 0;
            if (name == "ROUTE_ADD") return 1;
            if (name == "ROUTE_DEL") return 2;
            if (name == "UPD_ADD_OIF") return 3;
            if (name == "UPD_DEL_OIF") return 4;
            if (name == "LOC_ADD_OIF") return 5;
            if (name == "LOC_DEL_OIF") return 6;
            if (name == "UPD_IIF") return 7;
            if (name == "DENY_POLICY_SRC") return 8;
            if (name == "SRC_DISCOVERY") return 9;
            if (name == "SRC_DISC_STOP") return 10;
            if (name == "11") return 11;
            if (name == "12") return 12;
            if (name == "13-UNUSED") return 13;
            if (name == "14") return 14;
            if (name == "ALLOW_POLICY_SRC") return 15;
            if (name == "DENY_POLICY_RCV") return 16;
            if (name == "ALLOW_POLICY_RCV") return 17;
            if (name == "18") return 18;
            if (name == "19") return 19;
            if (name == "20") return 20;
            return -1;
        }
};

class NvoMultisiteIngReplStateT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf enableOptimized;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 1;
            if (name == "enable") return 2;
            if (name == "enableOptimized") return 3;
            return -1;
        }
};

class McastfwdEhType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf packet;
        static const ydk::Enum::YLeaf vrf;
        static const ydk::Enum::YLeaf l2;
        static const ydk::Enum::YLeaf nbm;

        static int get_enum_value(const std::string & name) {
            if (name == "internal") return 0;
            if (name == "cli") return 1;
            if (name == "packet") return 2;
            if (name == "vrf") return 3;
            if (name == "l2") return 4;
            if (name == "nbm") return 5;
            return -1;
        }
};

class MonTransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf tls;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "tcp") return 1;
            if (name == "udp") return 2;
            if (name == "all") return 3;
            if (name == "tls") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "no-transition") return 0;
            if (name == "no-change") return 1;
            if (name == "any") return 2;
            if (name == "if-down") return 3;
            if (name == "wait-ext-if") return 4;
            if (name == "wait-flogi") return 5;
            if (name == "if-up") return 6;
            if (name == "flogi-cleanup") return 7;
            if (name == "wait-fc-add") return 8;
            if (name == "wait-fc-del") return 9;
            if (name == "wait-ext-if-stable") return 10;
            return -1;
        }
};

class SysmgrSupT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

        static int get_enum_value(const std::string & name) {
            if (name == "local") return 0;
            if (name == "remote") return 1;
            return -1;
        }
};

class IsisOverloadAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf always_on;
        static const ydk::Enum::YLeaf bootup;
        static const ydk::Enum::YLeaf bgp_converge;
        static const ydk::Enum::YLeaf bgp_converge_max_wait;

        static int get_enum_value(const std::string & name) {
            if (name == "off") return 0;
            if (name == "always-on") return 1;
            if (name == "bootup") return 2;
            if (name == "bgp-converge") return 3;
            if (name == "bgp-converge-max-wait") return 4;
            return -1;
        }
};

class AggregateIngressRepProtocolType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf bgp;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "static") return 1;
            if (name == "bgp") return 2;
            return -1;
        }
};

class MsdpEhType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf events;
        static const ydk::Enum::YLeaf msdpInternal;
        static const ydk::Enum::YLeaf routes;
        static const ydk::Enum::YLeaf tcp;

        static int get_enum_value(const std::string & name) {
            if (name == "cli") return 0;
            if (name == "events") return 1;
            if (name == "msdpInternal") return 2;
            if (name == "routes") return 3;
            if (name == "tcp") return 4;
            return -1;
        }
};

class BgpLsNlriType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf ipv4_topo;
        static const ydk::Enum::YLeaf ipv6_topo;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "node") return 1;
            if (name == "link") return 2;
            if (name == "ipv4-topo") return 3;
            if (name == "ipv6-topo") return 4;
            return -1;
        }
};

class OspfAdjSidTlvType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf Adj_SID_Sub_TLV;
        static const ydk::Enum::YLeaf LAN_Adj_SID_Sub_TLV;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "Adj-SID_Sub-TLV") return 2;
            if (name == "LAN_Adj-SID_Sub-TLV") return 3;
            return -1;
        }
};

class RtmapSetCriteria : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf append;
        static const ydk::Enum::YLeaf replace;
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf pre_bestpath;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "append") return 2;
            if (name == "replace") return 3;
            if (name == "igp") return 4;
            if (name == "pre-bestpath") return 5;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "fail") return 0;
            if (name == "normal") return 1;
            if (name == "minor") return 2;
            if (name == "major") return 3;
            if (name == "absent") return 4;
            if (name == "bad-asic") return 5;
            return -1;
        }
};

class TunnelAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down") return 2;
            return -1;
        }
};

class IsisSumLvl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l1;
        static const ydk::Enum::YLeaf l2;
        static const ydk::Enum::YLeaf l12;

        static int get_enum_value(const std::string & name) {
            if (name == "l1") return 1;
            if (name == "l2") return 2;
            if (name == "l12") return 3;
            return -1;
        }
};

class Ospfv3AfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv6_ucast;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv6-ucast") return 1;
            return -1;
        }
};

class BgpLsAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf active;

        static int get_enum_value(const std::string & name) {
            if (name == "inactive") return 0;
            if (name == "active") return 1;
            return -1;
        }
};

class BgpPwdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_3;
        static const ydk::Enum::YLeaf Y_7;
        static const ydk::Enum::YLeaf LINE;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "3") return 3;
            if (name == "7") return 7;
            if (name == "LINE") return 5;
            return -1;
        }
};

class SisfRaGuardManagedConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf nocheck;

        static int get_enum_value(const std::string & name) {
            if (name == "off") return 0;
            if (name == "on") return 1;
            if (name == "nocheck") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "admin") return 1;
            if (name == "no-mem") return 2;
            if (name == "exceeded-pfxlimit") return 3;
            if (name == "admin-up") return 4;
            if (name == "no-affinity") return 5;
            return -1;
        }
};

class QospOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class StpPortState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf discarding;
        static const ydk::Enum::YLeaf learning;
        static const ydk::Enum::YLeaf forwarding;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "discarding") return 1;
            if (name == "learning") return 2;
            if (name == "forwarding") return 3;
            if (name == "disabled") return 4;
            return -1;
        }
};

class UribNextHopEncapType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf vxlan;
        static const ydk::Enum::YLeaf invalid;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "vxlan") return 1;
            if (name == "invalid") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "isis-l1") return 1;
            if (name == "isis-l2") return 2;
            if (name == "ospf-v2") return 3;
            if (name == "direct") return 4;
            if (name == "static") return 5;
            if (name == "ospf-v3") return 6;
            if (name == "epe") return 7;
            return -1;
        }
};

class FsetOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf installed;
        static const ydk::Enum::YLeaf uninstalled;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            if (name == "installed") return 3;
            if (name == "uninstalled") return 4;
            return -1;
        }
};

class RtdmcBfdOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf rem_pend;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "rem-pend") return 1;
            if (name == "up") return 2;
            return -1;
        }
};

class DatetimeProvT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peer;
        static const ydk::Enum::YLeaf server;
        static const ydk::Enum::YLeaf invalid;

        static int get_enum_value(const std::string & name) {
            if (name == "peer") return 0;
            if (name == "server") return 1;
            if (name == "invalid") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "untested") return 1;
            if (name == "failure") return 2;
            if (name == "not-complete") return 3;
            if (name == "aborted") return 4;
            if (name == "success") return 5;
            if (name == "error-disabled") return 6;
            if (name == "error-ignore") return 7;
            if (name == "error-disabled-w-no") return 8;
            if (name == "unavailable") return 9;
            return -1;
        }
};

class NwAdminStProcessStatNullBcast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class Ospfv3AreaT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf regular;
        static const ydk::Enum::YLeaf stub;
        static const ydk::Enum::YLeaf nssa;

        static int get_enum_value(const std::string & name) {
            if (name == "regular") return 1;
            if (name == "stub") return 2;
            if (name == "nssa") return 3;
            return -1;
        }
};

class CoppMatchOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Unknown;
        static const ydk::Enum::YLeaf MatchAny;
        static const ydk::Enum::YLeaf MatchAll;

        static int get_enum_value(const std::string & name) {
            if (name == "Unknown") return 0;
            if (name == "MatchAny") return 1;
            if (name == "MatchAll") return 2;
            return -1;
        }
};

class OspfAreaT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf regular;
        static const ydk::Enum::YLeaf stub;
        static const ydk::Enum::YLeaf nssa;

        static int get_enum_value(const std::string & name) {
            if (name == "regular") return 1;
            if (name == "stub") return 2;
            if (name == "nssa") return 3;
            return -1;
        }
};

class ActrlDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf uni_dir;
        static const ydk::Enum::YLeaf bi_dir;

        static int get_enum_value(const std::string & name) {
            if (name == "uni-dir") return 1;
            if (name == "bi-dir") return 2;
            return -1;
        }
};

class IpmcsnoopFwdMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf mac;

        static int get_enum_value(const std::string & name) {
            if (name == "ip") return 1;
            if (name == "mac") return 2;
            return -1;
        }
};

class L1Module : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lc;
        static const ydk::Enum::YLeaf sup;

        static int get_enum_value(const std::string & name) {
            if (name == "lc") return 0;
            if (name == "sup") return 1;
            return -1;
        }
};

class AdjacencyAdjOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf incomplete;
        static const ydk::Enum::YLeaf normal;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "incomplete") return 1;
            if (name == "normal") return 2;
            return -1;
        }
};

class NvoMultisiteTrackingT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf dci;
        static const ydk::Enum::YLeaf fabric;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "dci") return 1;
            if (name == "fabric") return 2;
            return -1;
        }
};

class L2fmLearning : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 0;
            return -1;
        }
};

class StpAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "vlanCreated") return 1;
            if (name == "vlanFailed") return 2;
            if (name == "vnidCreated") return 3;
            if (name == "vnidFailed") return 4;
            if (name == "vlansCarved") return 5;
            if (name == "vlansNotCarved") return 6;
            if (name == "vnidCreationReceived") return 7;
            if (name == "myTEPIPPublished") return 101;
            if (name == "controllerIntfNotCarved") return 201;
            if (name == "controllerIntfCarved") return 202;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "gbic") return 1;
            if (name == "solder") return 2;
            if (name == "sfp") return 3;
            if (name == "xbi") return 4;
            if (name == "xenpak") return 5;
            if (name == "xfp") return 6;
            if (name == "xff") return 7;
            if (name == "xfp-e") return 8;
            if (name == "xpak") return 9;
            if (name == "x2") return 10;
            if (name == "dwdm-sfp") return 11;
            if (name == "qsfp") return 12;
            return -1;
        }
};

class ImBreakoutMapT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_breakout;
        static const ydk::Enum::YLeaf Y_10g_4x;
        static const ydk::Enum::YLeaf Y_10g_2x;
        static const ydk::Enum::YLeaf Y_25g_4x;
        static const ydk::Enum::YLeaf Y_50g_2x;
        static const ydk::Enum::YLeaf Y_50g_4x;
        static const ydk::Enum::YLeaf Y_100g_4x;
        static const ydk::Enum::YLeaf Y_100g_2x;
        static const ydk::Enum::YLeaf Y_200g_1x;

        static int get_enum_value(const std::string & name) {
            if (name == "no-breakout") return 0;
            if (name == "10g-4x") return 5;
            if (name == "10g-2x") return 9;
            if (name == "25g-4x") return 8;
            if (name == "50g-2x") return 7;
            if (name == "50g-4x") return 12;
            if (name == "100g-4x") return 10;
            if (name == "100g-2x") return 14;
            if (name == "200g-1x") return 13;
            return -1;
        }
};

class SyshistRstRsn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf reboot;
        static const ydk::Enum::YLeaf watchdog;
        static const ydk::Enum::YLeaf sysmgr;
        static const ydk::Enum::YLeaf mod_err;
        static const ydk::Enum::YLeaf pwr_cfg;
        static const ydk::Enum::YLeaf temp_alaram;
        static const ydk::Enum::YLeaf user_switchover;
        static const ydk::Enum::YLeaf upg_err;
        static const ydk::Enum::YLeaf reload;
        static const ydk::Enum::YLeaf sprom_upd;
        static const ydk::Enum::YLeaf sys_cfg_dwn;
        static const ydk::Enum::YLeaf clock_;
        static const ydk::Enum::YLeaf halt;
        static const ydk::Enum::YLeaf redundancy;
        static const ydk::Enum::YLeaf ha_switchover;
        static const ydk::Enum::YLeaf ha_reset;
        static const ydk::Enum::YLeaf pfm_rtime;
        static const ydk::Enum::YLeaf pfm_power_dwn;
        static const ydk::Enum::YLeaf panic;
        static const ydk::Enum::YLeaf mgmt_app;
        static const ydk::Enum::YLeaf hw;
        static const ydk::Enum::YLeaf asic;
        static const ydk::Enum::YLeaf redun_channel;
        static const ydk::Enum::YLeaf sys_health;
        static const ydk::Enum::YLeaf eobc;
        static const ydk::Enum::YLeaf boot_err;
        static const ydk::Enum::YLeaf no_bootflash;
        static const ydk::Enum::YLeaf netboot_err;
        static const ydk::Enum::YLeaf bootflash_corrupt;
        static const ydk::Enum::YLeaf installer;
        static const ydk::Enum::YLeaf epld;
        static const ydk::Enum::YLeaf sigkill_fail;
        static const ydk::Enum::YLeaf sys_gen_fail;
        static const ydk::Enum::YLeaf clock_switchover;
        static const ydk::Enum::YLeaf insufficient_resource;
        static const ydk::Enum::YLeaf incompat_config;
        static const ydk::Enum::YLeaf lcm_unknown;
        static const ydk::Enum::YLeaf lcm_ha_restart;
        static const ydk::Enum::YLeaf lcm_haswitchover_done;
        static const ydk::Enum::YLeaf lcm_boot_srg_timeout;
        static const ydk::Enum::YLeaf lcm_coredump;
        static const ydk::Enum::YLeaf lcm_disruptive_upg;
        static const ydk::Enum::YLeaf lcm_lc_fail;
        static const ydk::Enum::YLeaf lcm_hitless_mod_rem;
        static const ydk::Enum::YLeaf lcm_hitless_pwr_dwn;
        static const ydk::Enum::YLeaf lcm_hitless_proc_notice;
        static const ydk::Enum::YLeaf lcm_hitless_reg_fail;
        static const ydk::Enum::YLeaf lcm_hitless_timeout;
        static const ydk::Enum::YLeaf lcm_img_upg_timeout;
        static const ydk::Enum::YLeaf lcm_img_upgsuccess;
        static const ydk::Enum::YLeaf lcm_lc_ins_seq_fail;
        static const ydk::Enum::YLeaf lcm_hitless_upg_fail;
        static const ydk::Enum::YLeaf lcm_lc_no_resp;
        static const ydk::Enum::YLeaf lcm_lc_reg_more3;
        static const ydk::Enum::YLeaf lcm_lc_reg_timeout;
        static const ydk::Enum::YLeaf lcm_runtime_diag_fail;
        static const ydk::Enum::YLeaf lcm_runtime_diag_timeout;
        static const ydk::Enum::YLeaf lcm_seeprom_timeout;
        static const ydk::Enum::YLeaf lcm_proc_notice;
        static const ydk::Enum::YLeaf lcm_save_state_fail;
        static const ydk::Enum::YLeaf lcm_hitfull_img_check;
        static const ydk::Enum::YLeaf lcm_img_check_pwr_cycle;
        static const ydk::Enum::YLeaf lcm_img_check_pwr_dwn;
        static const ydk::Enum::YLeaf lcm_img_check_switch_over;
        static const ydk::Enum::YLeaf lcm_power_down;
        static const ydk::Enum::YLeaf lcm_sup_rem;
        static const ydk::Enum::YLeaf lcm_lc_rem;
        static const ydk::Enum::YLeaf lcm_unknown_mod;
        static const ydk::Enum::YLeaf lcm_srg_timeout;
        static const ydk::Enum::YLeaf lcm_async_notice_fail;
        static const ydk::Enum::YLeaf lcm_switchover_fail;
        static const ydk::Enum::YLeaf lcm_timeout;
        static const ydk::Enum::YLeaf lcm_srg_incompat;
        static const ydk::Enum::YLeaf outofservice;
        static const ydk::Enum::YLeaf sup_dev_err;
        static const ydk::Enum::YLeaf issu_restart;
        static const ydk::Enum::YLeaf ins_seq_fail_pwr_dwn;
        static const ydk::Enum::YLeaf no_sup;
        static const ydk::Enum::YLeaf bad_volt;
        static const ydk::Enum::YLeaf bad_bus_volt;
        static const ydk::Enum::YLeaf bad_intermediate_bus_volt;
        static const ydk::Enum::YLeaf psp;
        static const ydk::Enum::YLeaf eem_pwr_dwn;
        static const ydk::Enum::YLeaf usd_fail;
        static const ydk::Enum::YLeaf ejector;
        static const ydk::Enum::YLeaf sys_rst;
        static const ydk::Enum::YLeaf push_button;
        static const ydk::Enum::YLeaf policy_reset;
        static const ydk::Enum::YLeaf policy_fan;
        static const ydk::Enum::YLeaf chassis_rst;
        static const ydk::Enum::YLeaf max_switchover;
        static const ydk::Enum::YLeaf switchover_timeout;
        static const ydk::Enum::YLeaf sysmgr_timeout;
        static const ydk::Enum::YLeaf unknown_mod;
        static const ydk::Enum::YLeaf mod_fail;
        static const ydk::Enum::YLeaf mod_pwr_cycle;
        static const ydk::Enum::YLeaf card_incompat;
        static const ydk::Enum::YLeaf idprom_err;
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf no_plugin;
        static const ydk::Enum::YLeaf sw_card_id_unknown;
        static const ydk::Enum::YLeaf mod_fail_pwr_up;
        static const ydk::Enum::YLeaf max_bring_up_exceed;
        static const ydk::Enum::YLeaf enm_enabled;
        static const ydk::Enum::YLeaf enm_disabled;
        static const ydk::Enum::YLeaf vpd_read_failure;
        static const ydk::Enum::YLeaf inc_cos_mod;
        static const ydk::Enum::YLeaf epld_upg_nw_crd_mode;
        static const ydk::Enum::YLeaf deep_sleep;
        static const ydk::Enum::YLeaf fcoe_featureset_absent;
        static const ydk::Enum::YLeaf power_cycle_button;
        static const ydk::Enum::YLeaf config_reset_button;
        static const ydk::Enum::YLeaf agni_app_init_reload;
        static const ydk::Enum::YLeaf cpu_caterr_signal;
        static const ydk::Enum::YLeaf patch_install;
        static const ydk::Enum::YLeaf fastboot;
        static const ydk::Enum::YLeaf no_sc;
        static const ydk::Enum::YLeaf no_fm;
        static const ydk::Enum::YLeaf lc_breakout;
        static const ydk::Enum::YLeaf hg_link_down;
        static const ydk::Enum::YLeaf slot_id_parity_err;
        static const ydk::Enum::YLeaf power_error;
        static const ydk::Enum::YLeaf firmware_upgrade;
        static const ydk::Enum::YLeaf unsipp_dist_arbit_mode;
        static const ydk::Enum::YLeaf enhanced_virtualization_enabled;
        static const ydk::Enum::YLeaf enhanced_virtualization_disabled;
        static const ydk::Enum::YLeaf no_fm_connectivity;
        static const ydk::Enum::YLeaf fabric_mode;
        static const ydk::Enum::YLeaf epc_failure;
        static const ydk::Enum::YLeaf all_vdcs_not_online;
        static const ydk::Enum::YLeaf pfm_auth_fail;
        static const ydk::Enum::YLeaf pfm_startauth_fail;
        static const ydk::Enum::YLeaf sys_dme_clean_config_reset;
        static const ydk::Enum::YLeaf pf_eem_policy_trigger_fan_air_flow;
        static const ydk::Enum::YLeaf standby_reload_symc_failure;
        static const ydk::Enum::YLeaf issu_non_disruptive_restart;
        static const ydk::Enum::YLeaf afm_tcam_remplate_apply;
        static const ydk::Enum::YLeaf interop_change_request;
        static const ydk::Enum::YLeaf soft_reload_via_crash;
        static const ydk::Enum::YLeaf soft_reload_via_cli;
        static const ydk::Enum::YLeaf soft_reload_fail_reload;
        static const ydk::Enum::YLeaf act2_auth_failure;
        static const ydk::Enum::YLeaf un_asic_mem_error;
        static const ydk::Enum::YLeaf not_defined;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "reboot") return 1;
            if (name == "watchdog") return 2;
            if (name == "sysmgr") return 3;
            if (name == "mod-err") return 4;
            if (name == "pwr-cfg") return 5;
            if (name == "temp-alaram") return 6;
            if (name == "user-switchover") return 7;
            if (name == "upg-err") return 8;
            if (name == "reload") return 9;
            if (name == "sprom-upd") return 10;
            if (name == "sys-cfg-dwn") return 11;
            if (name == "clock") return 12;
            if (name == "halt") return 13;
            if (name == "redundancy") return 14;
            if (name == "ha-switchover") return 15;
            if (name == "ha-reset") return 16;
            if (name == "pfm-rtime") return 17;
            if (name == "pfm-power-dwn") return 18;
            if (name == "panic") return 19;
            if (name == "mgmt-app") return 20;
            if (name == "hw") return 21;
            if (name == "asic") return 22;
            if (name == "redun-channel") return 23;
            if (name == "sys-health") return 24;
            if (name == "eobc") return 25;
            if (name == "boot-err") return 27;
            if (name == "no-bootflash") return 28;
            if (name == "netboot-err") return 29;
            if (name == "bootflash-corrupt") return 30;
            if (name == "installer") return 31;
            if (name == "epld") return 33;
            if (name == "sigkill-fail") return 34;
            if (name == "sys-gen-fail") return 35;
            if (name == "clock-switchover") return 37;
            if (name == "insufficient-resource") return 38;
            if (name == "incompat-config") return 43;
            if (name == "lcm-unknown") return 44;
            if (name == "lcm-ha-restart") return 45;
            if (name == "lcm-haswitchover-done") return 46;
            if (name == "lcm-boot-srg-timeout") return 47;
            if (name == "lcm-coredump") return 48;
            if (name == "lcm-disruptive-upg") return 49;
            if (name == "lcm-lc-fail") return 50;
            if (name == "lcm-hitless-mod-rem") return 51;
            if (name == "lcm-hitless-pwr-dwn") return 52;
            if (name == "lcm-hitless-proc-notice") return 53;
            if (name == "lcm-hitless-reg-fail") return 54;
            if (name == "lcm-hitless-timeout") return 55;
            if (name == "lcm-img-upg-timeout") return 56;
            if (name == "lcm-img-upgsuccess") return 57;
            if (name == "lcm-lc-ins-seq-fail") return 58;
            if (name == "lcm-hitless-upg-fail") return 59;
            if (name == "lcm-lc-no-resp") return 60;
            if (name == "lcm-lc-reg-more3") return 61;
            if (name == "lcm-lc-reg-timeout") return 62;
            if (name == "lcm-runtime-diag-fail") return 63;
            if (name == "lcm-runtime-diag-timeout") return 64;
            if (name == "lcm-seeprom-timeout") return 65;
            if (name == "lcm-proc-notice") return 66;
            if (name == "lcm-save-state-fail") return 67;
            if (name == "lcm-hitfull-img-check") return 68;
            if (name == "lcm-img-check-pwr-cycle") return 69;
            if (name == "lcm-img-check-pwr-dwn") return 70;
            if (name == "lcm-img-check-switch-over") return 71;
            if (name == "lcm-power-down") return 72;
            if (name == "lcm-sup-rem") return 73;
            if (name == "lcm-lc-rem") return 74;
            if (name == "lcm-unknown-mod") return 75;
            if (name == "lcm-srg-timeout") return 76;
            if (name == "lcm-async-notice-fail") return 77;
            if (name == "lcm-switchover-fail") return 78;
            if (name == "lcm-timeout") return 79;
            if (name == "lcm-srg-incompat") return 80;
            if (name == "outofservice") return 86;
            if (name == "sup-dev-err") return 87;
            if (name == "issu-restart") return 88;
            if (name == "ins-seq-fail-pwr-dwn") return 89;
            if (name == "no-sup") return 92;
            if (name == "bad-volt") return 93;
            if (name == "bad-bus-volt") return 94;
            if (name == "bad-intermediate-bus-volt") return 95;
            if (name == "psp") return 96;
            if (name == "eem-pwr-dwn") return 97;
            if (name == "usd-fail") return 98;
            if (name == "ejector") return 99;
            if (name == "sys-rst") return 100;
            if (name == "push-button") return 101;
            if (name == "policy-reset") return 103;
            if (name == "policy-fan") return 104;
            if (name == "chassis-rst") return 105;
            if (name == "max-switchover") return 107;
            if (name == "switchover-timeout") return 108;
            if (name == "sysmgr-timeout") return 109;
            if (name == "unknown-mod") return 110;
            if (name == "mod-fail") return 111;
            if (name == "mod-pwr-cycle") return 112;
            if (name == "card-incompat") return 113;
            if (name == "idprom-err") return 114;
            if (name == "unspecified") return 115;
            if (name == "no-plugin") return 117;
            if (name == "sw-card-id-unknown") return 118;
            if (name == "mod-fail-pwr-up") return 119;
            if (name == "max-bring-up-exceed") return 120;
            if (name == "enm-enabled") return 121;
            if (name == "enm-disabled") return 122;
            if (name == "vpd-read-failure") return 123;
            if (name == "inc-cos-mod") return 124;
            if (name == "epld-upg-nw-crd-mode") return 125;
            if (name == "deep-sleep") return 126;
            if (name == "fcoe-featureset-absent") return 127;
            if (name == "power-cycle-button") return 128;
            if (name == "config-reset-button") return 129;
            if (name == "agni-app-init-reload") return 130;
            if (name == "cpu-caterr-signal") return 131;
            if (name == "patch-install") return 132;
            if (name == "fastboot") return 133;
            if (name == "no-sc") return 134;
            if (name == "no-fm") return 135;
            if (name == "lc-breakout") return 136;
            if (name == "hg-link-down") return 137;
            if (name == "slot-id-parity-err") return 138;
            if (name == "power-error") return 139;
            if (name == "firmware-upgrade") return 140;
            if (name == "unsipp-dist-arbit-mode") return 141;
            if (name == "enhanced-virtualization-enabled") return 142;
            if (name == "enhanced-virtualization-disabled") return 143;
            if (name == "no-fm-connectivity") return 144;
            if (name == "fabric-mode") return 145;
            if (name == "epc-failure") return 146;
            if (name == "all-vdcs-not-online") return 147;
            if (name == "pfm-auth-fail") return 148;
            if (name == "pfm-startauth-fail") return 149;
            if (name == "sys-dme-clean-config-reset") return 150;
            if (name == "pf-eem-policy-trigger-fan-air-flow") return 151;
            if (name == "standby-reload-symc-failure") return 152;
            if (name == "issu-non-disruptive-restart") return 153;
            if (name == "afm-tcam-remplate-apply") return 154;
            if (name == "interop-change-request") return 155;
            if (name == "soft-reload-via-crash") return 156;
            if (name == "soft-reload-via-cli") return 157;
            if (name == "soft-reload-fail-reload") return 158;
            if (name == "act2-auth-failure") return 159;
            if (name == "un-asic-mem-error") return 160;
            if (name == "not-defined") return 161;
            return -1;
        }
};

class IpSwitchPktTarget : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf lla;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "all") return 1;
            if (name == "lla") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "preupg-copy-image") return 0;
            if (name == "preupg-initializing") return 1;
            if (name == "preupg-verifying_images") return 3;
            if (name == "preupg-runtime-check") return 6;
            if (name == "preupg-sync-image") return 7;
            if (name == "upgrade-upg-fex") return 9;
            if (name == "upgrade-upg-lc") return 10;
            if (name == "preupg-conf-sync") return 11;
            if (name == "preupg-set-boot") return 12;
            if (name == "preupg-force-dnld") return 13;
            if (name == "preupg-wait-mod") return 14;
            if (name == "preupg-convert-startup") return 15;
            if (name == "preupg-save-sup-state") return 16;
            if (name == "upgrade-kexec") return 17;
            if (name == "preupg-pre-upg-notif") return 19;
            if (name == "preupg-mod-support-check") return 20;
            if (name == "preupg-Checks") return 21;
            if (name == "upgrade-upg-bios") return 22;
            if (name == "upgrade-upg-cmp") return 23;
            if (name == "upgrade-notification") return 24;
            if (name == "preupg-save-mts-state") return 25;
            if (name == "success") return 26;
            if (name == "failed") return 27;
            if (name == "not-started") return 28;
            if (name == "upgrade-sup-state-verification") return 29;
            if (name == "upgrade-switchover-notif") return 30;
            if (name == "upgrade-standby-container-start") return 31;
            if (name == "user-abort") return 32;
            return -1;
        }
};

class NwEntOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf failed;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            if (name == "initializing") return 3;
            if (name == "failed") return 4;
            return -1;
        }
};

class PlatformLatencyMonitorSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Enable;
        static const ydk::Enum::YLeaf Disable;

        static int get_enum_value(const std::string & name) {
            if (name == "Enable") return 1;
            if (name == "Disable") return 0;
            return -1;
        }
};

class QospECN : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "enabled") return 1;
            return -1;
        }
};

class EthpmSystemIfAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf down_exclude_fabric;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down") return 2;
            if (name == "down-exclude-fabric") return 4;
            return -1;
        }
};

class LldpPortIdSubType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf long_;
        static const ydk::Enum::YLeaf short_;

        static int get_enum_value(const std::string & name) {
            if (name == "long") return 0;
            if (name == "short") return 1;
            return -1;
        }
};

class NgoamOamChannel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf tissa;

        static int get_enum_value(const std::string & name) {
            if (name == "invalid") return 0;
            if (name == "tissa") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "none") return 1;
            if (name == "initing") return 2;
            if (name == "incomp-conf") return 3;
            if (name == "dup-conf") return 4;
            if (name == "no-mode") return 5;
            if (name == "admin-down") return 6;
            if (name == "src-down") return 7;
            if (name == "src-unres") return 8;
            if (name == "no-dest") return 9;
            if (name == "desip-unres") return 10;
            if (name == "dest-unreach") return 11;
            if (name == "vrf-mismatch") return 12;
            if (name == "vrf-fwdref") return 13;
            if (name == "vrf-down") return 14;
            if (name == "mtu-error") return 15;
            if (name == "hwprog-fail") return 16;
            if (name == "no-src") return 17;
            return -1;
        }
};

class AggregateIntfAssignMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dedicated;
        static const ydk::Enum::YLeaf shared;

        static int get_enum_value(const std::string & name) {
            if (name == "dedicated") return 0;
            if (name == "shared") return 1;
            return -1;
        }
};

class PlatformMplsStatsType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PACKETS;
        static const ydk::Enum::YLeaf BYTES;

        static int get_enum_value(const std::string & name) {
            if (name == "PACKETS") return 0;
            if (name == "BYTES") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "cli") return 0;
            if (name == "errors") return 1;
            if (name == "highAvailability") return 2;
            if (name == "icmpv6-internal") return 3;
            if (name == "ipv6SyncEvent") return 4;
            if (name == "mldDebug") return 5;
            if (name == "mldEvent") return 6;
            if (name == "nd") return 7;
            if (name == "sync-event") return 8;
            if (name == "vrf") return 9;
            return -1;
        }
};

class EqptPoweroffSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "yes") return 1;
            return -1;
        }
};

class SwpkgsPackageActionResult : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf not_available;

        static int get_enum_value(const std::string & name) {
            if (name == "success") return 0;
            if (name == "failed") return 1;
            if (name == "not-available") return 2;
            return -1;
        }
};

class NvoCfgSrcT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf cli;
        static const ydk::Enum::YLeaf controller;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "cli") return 1;
            if (name == "controller") return 2;
            return -1;
        }
};

class PlatformPfcMmuCfgFault : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf Pfc_Buffer_Resource_Limitation;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "Pfc_Buffer_Resource_Limitation") return 1;
            return -1;
        }
};

class VrrpAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 1;
            if (name == "enabled") return 2;
            return -1;
        }
};

class StpBPDUGuard : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            return -1;
        }
};

class EqptAdSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class L1Layer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Layer2;
        static const ydk::Enum::YLeaf Layer3;

        static int get_enum_value(const std::string & name) {
            if (name == "Layer2") return 1;
            if (name == "Layer3") return 2;
            return -1;
        }
};

class ScrtchpdAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf create;
        static const ydk::Enum::YLeaf delete_;

        static int get_enum_value(const std::string & name) {
            if (name == "create") return 1;
            if (name == "delete") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "packets") return 1;
            if (name == "bytes") return 2;
            if (name == "kbytes") return 3;
            if (name == "mbytes") return 4;
            if (name == "gbytes") return 5;
            if (name == "ms") return 6;
            if (name == "us") return 7;
            if (name == "perc") return 8;
            return -1;
        }
};

class AnalyticsCModeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aci;
        static const ydk::Enum::YLeaf standalone;

        static int get_enum_value(const std::string & name) {
            if (name == "aci") return 0;
            if (name == "standalone") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "fail") return 0;
            if (name == "indeterminate") return 1;
            if (name == "interrupted") return 2;
            if (name == "pending") return 3;
            if (name == "not-supp") return 4;
            if (name == "not-acc") return 5;
            if (name == "pass") return 6;
            if (name == "not-tested") return 7;
            return -1;
        }
};

class ItdAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_shut;
        static const ydk::Enum::YLeaf shut;

        static int get_enum_value(const std::string & name) {
            if (name == "no_shut") return 1;
            if (name == "shut") return 0;
            return -1;
        }
};

class SpanState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down") return 2;
            return -1;
        }
};

class BgpOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf incomplete;

        static int get_enum_value(const std::string & name) {
            if (name == "igp") return 1;
            if (name == "egp") return 2;
            if (name == "incomplete") return 3;
            return -1;
        }
};

class GoldModuleDiagStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fail;
        static const ydk::Enum::YLeaf pass;
        static const ydk::Enum::YLeaf untested;

        static int get_enum_value(const std::string & name) {
            if (name == "fail") return 0;
            if (name == "pass") return 1;
            if (name == "untested") return 2;
            return -1;
        }
};

class NvoSuppressARPT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "off") return 0;
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class EpmDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ep;

        static int get_enum_value(const std::string & name) {
            if (name == "ep") return 1;
            return -1;
        }
};

class LldpAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class McastfwdLvlType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf mfwd;
        static const ydk::Enum::YLeaf mcastfwd;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "mfwd") return 1;
            if (name == "mcastfwd") return 2;
            return -1;
        }
};

class IpqosThreshUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf packets;
        static const ydk::Enum::YLeaf bytes;
        static const ydk::Enum::YLeaf kbytes;
        static const ydk::Enum::YLeaf mbytes;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "packets") return 1;
            if (name == "bytes") return 2;
            if (name == "kbytes") return 3;
            if (name == "mbytes") return 4;
            return -1;
        }
};

class SysmgrCfgAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable_all;
        static const ydk::Enum::YLeaf disable_trc_mask;
        static const ydk::Enum::YLeaf disable_fast_timer;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 0;
            if (name == "disable-all") return 1;
            if (name == "disable-trc-mask") return 2;
            if (name == "disable-fast-timer") return 3;
            return -1;
        }
};

class OspfEventLogSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf small;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf large;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "small") return 1;
            if (name == "medium") return 2;
            if (name == "large") return 3;
            return -1;
        }
};

class NbmNbmPolicyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf SENDER;
        static const ydk::Enum::YLeaf RECEIVER;
        static const ydk::Enum::YLeaf PIM;

        static int get_enum_value(const std::string & name) {
            if (name == "SENDER") return 0;
            if (name == "RECEIVER") return 1;
            if (name == "PIM") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "Active") return 0;
            if (name == "DB") return 1;
            if (name == "HB") return 2;
            if (name == "RD") return 4;
            if (name == "LD") return 8;
            if (name == "DB/HB") return 3;
            if (name == "RD/HB") return 6;
            if (name == "DB/HB/RD") return 7;
            if (name == "DB/LD") return 9;
            if (name == "HB/LD") return 10;
            if (name == "DB/HB/LD") return 11;
            if (name == "RD/LD") return 12;
            if (name == "DB/RD/LD") return 13;
            if (name == "HB/RD/LD") return 14;
            if (name == "DB/HB/RD/LD") return 15;
            return -1;
        }
};

class StpRootMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 0;
            return -1;
        }
};

class NwAdminStIfStatDirectBcast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class CompInstType_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf phys;
        static const ydk::Enum::YLeaf virt;
        static const ydk::Enum::YLeaf hv;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "phys") return 1;
            if (name == "virt") return 2;
            if (name == "hv") return 3;
            return -1;
        }
};

class BgpStReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf no_mem;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "no-mem") return 1;
            return -1;
        }
};

class OpflexHbStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf invalid_dvs;
        static const ydk::Enum::YLeaf valid_dvs;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "invalid-dvs") return 1;
            if (name == "valid-dvs") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "get") return 1;
            if (name == "put") return 2;
            if (name == "head") return 3;
            if (name == "post") return 4;
            if (name == "delete") return 5;
            if (name == "trace") return 6;
            if (name == "connect") return 7;
            if (name == "invalid") return 0;
            return -1;
        }
};

class BgpBmpSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 0;
            if (name == "disabled") return 1;
            return -1;
        }
};

class RtleakRtCtrlDir : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "static") return 0;
            if (name == "dynamic") return 1;
            if (name == "internal") return 2;
            if (name == "fabpath") return 3;
            if (name == "vpc") return 4;
            if (name == "coLearned") return 5;
            if (name == "peerLearned") return 6;
            if (name == "userConf") return 7;
            return -1;
        }
};

class L1EEELatency : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf variable;
        static const ydk::Enum::YLeaf constant;

        static int get_enum_value(const std::string & name) {
            if (name == "variable") return 1;
            if (name == "constant") return 2;
            return -1;
        }
};

class VpcPeerSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noCfg;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "noCfg") return 0;
            if (name == "down") return 1;
            if (name == "up") return 2;
            return -1;
        }
};

class NwAdminStIfStatLocalProxyArp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class BootImageVerify : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 0;
            return -1;
        }
};

class IpmcsnoopMacType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y__STAR__;
        static const ydk::Enum::YLeaf G;
        static const ydk::Enum::YLeaf R;
        static const ydk::Enum::YLeaf O;
        static const ydk::Enum::YLeaf IGMP;

        static int get_enum_value(const std::string & name) {
            if (name == "*") return 0;
            if (name == "G") return 1;
            if (name == "R") return 2;
            if (name == "O") return 3;
            if (name == "IGMP") return 4;
            return -1;
        }
};

class NbmNbmBwRecoveryEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DISABLED;
        static const ydk::Enum::YLeaf ENABLED;

        static int get_enum_value(const std::string & name) {
            if (name == "DISABLED") return 0;
            if (name == "ENABLED") return 1;
            return -1;
        }
};

class SysmgrFwT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bios;
        static const ydk::Enum::YLeaf kickstart;
        static const ydk::Enum::YLeaf system;

        static int get_enum_value(const std::string & name) {
            if (name == "bios") return 1;
            if (name == "kickstart") return 2;
            if (name == "system") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "transmit") return 1;
            if (name == "drop") return 2;
            if (name == "set-cos-transmit") return 3;
            if (name == "set-dscp-transmit") return 4;
            if (name == "set-prec-transmit") return 5;
            if (name == "set-qos-transmit") return 6;
            return -1;
        }
};

class PkiCsyncElementType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exclude;
        static const ydk::Enum::YLeaf include;

        static int get_enum_value(const std::string & name) {
            if (name == "exclude") return 0;
            if (name == "include") return 1;
            return -1;
        }
};

class RtdmcPolicyDirType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "in") return 1;
            if (name == "out") return 2;
            return -1;
        }
};

class L2DomAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf suspend;
        static const ydk::Enum::YLeaf active;

        static int get_enum_value(const std::string & name) {
            if (name == "suspend") return 1;
            if (name == "active") return 2;
            return -1;
        }
};

class AggregateVpcOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "up") return 1;
            return -1;
        }
};

class EqptPwrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf multi_boot_fail;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "off") return 1;
            if (name == "on") return 2;
            if (name == "deny") return 3;
            if (name == "multi-boot-fail") return 4;
            return -1;
        }
};

class NwAdminSt___ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class NvoHostLearnModeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DP;
        static const ydk::Enum::YLeaf CP;
        static const ydk::Enum::YLeaf Ctrlr;

        static int get_enum_value(const std::string & name) {
            if (name == "DP") return 1;
            if (name == "CP") return 2;
            if (name == "Ctrlr") return 3;
            return -1;
        }
};

class AggregateOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "up") return 1;
            if (name == "down") return 2;
            return -1;
        }
};

class OpflexEppDownloadHint : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf optimal;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "always") return 1;
            if (name == "optimal") return 2;
            return -1;
        }
};

class SnmpLogEnableType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "yes") return 1;
            return -1;
        }
};

class IsisPassiveIntfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l1;
        static const ydk::Enum::YLeaf l2;
        static const ydk::Enum::YLeaf l12;
        static const ydk::Enum::YLeaf noL1;
        static const ydk::Enum::YLeaf noL2;
        static const ydk::Enum::YLeaf noL12;
        static const ydk::Enum::YLeaf inheritDef;

        static int get_enum_value(const std::string & name) {
            if (name == "l1") return 1;
            if (name == "l2") return 2;
            if (name == "l12") return 3;
            if (name == "noL1") return 4;
            if (name == "noL2") return 5;
            if (name == "noL12") return 6;
            if (name == "inheritDef") return 7;
            return -1;
        }
};

class SysmgrOperDataMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf publish;
        static const ydk::Enum::YLeaf done;

        static int get_enum_value(const std::string & name) {
            if (name == "init") return 1;
            if (name == "publish") return 2;
            if (name == "done") return 4;
            return -1;
        }
};

class NdVaddrClientState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ICMPV6_CLIENT_STATE_INACTIVE;
        static const ydk::Enum::YLeaf ICMPV6_CLIENT_STATE_ACTIVE;
        static const ydk::Enum::YLeaf ICMPV6_CLIENT_STATE_ANYCAST_INACTIVE;

        static int get_enum_value(const std::string & name) {
            if (name == "ICMPV6_CLIENT_STATE_INACTIVE") return 0;
            if (name == "ICMPV6_CLIENT_STATE_ACTIVE") return 1;
            if (name == "ICMPV6_CLIENT_STATE_ANYCAST_INACTIVE") return 2;
            return -1;
        }
};

class PlatformPoweroffSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "yes") return 1;
            return -1;
        }
};

class OspfSegRtControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "mpls") return 1;
            if (name == "disable") return 2;
            return -1;
        }
};

class ProcCpuHistoryDurationName : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf last60seconds;

        static int get_enum_value(const std::string & name) {
            if (name == "last60seconds") return 1;
            return -1;
        }
};

class OspfDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ls;
        static const ydk::Enum::YLeaf rt;
        static const ydk::Enum::YLeaf nh;

        static int get_enum_value(const std::string & name) {
            if (name == "ls") return 1;
            if (name == "rt") return 2;
            if (name == "nh") return 3;
            return -1;
        }
};

class SpanSrcDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf rx;
        static const ydk::Enum::YLeaf tx;
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf any;

        static int get_enum_value(const std::string & name) {
            if (name == "invalid") return 0;
            if (name == "rx") return 1;
            if (name == "tx") return 2;
            if (name == "both") return 3;
            if (name == "any") return 4;
            return -1;
        }
};

class RtmapOriginT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf incomplete;

        static int get_enum_value(const std::string & name) {
            if (name == "egp") return 1;
            if (name == "igp") return 2;
            if (name == "incomplete") return 3;
            return -1;
        }
};

class DatetimeAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class EqptArchCPUArch : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf x86_32;
        static const ydk::Enum::YLeaf x86_64;
        static const ydk::Enum::YLeaf any;

        static int get_enum_value(const std::string & name) {
            if (name == "x86_32") return 1;
            if (name == "x86_64") return 2;
            if (name == "any") return 0;
            return -1;
        }
};

class MsdpAuthT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf md5;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "md5") return 1;
            return -1;
        }
};

class PlatformUnicastTrace : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class RtmapAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

        static int get_enum_value(const std::string & name) {
            if (name == "deny") return 0;
            if (name == "permit") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "routine") return 0;
            if (name == "priority") return 1;
            if (name == "immediate") return 2;
            if (name == "flash") return 3;
            if (name == "flash-override") return 4;
            if (name == "critical") return 5;
            if (name == "internet") return 6;
            if (name == "network") return 7;
            return -1;
        }
};

class OspfCapFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "yes") return 1;
            return -1;
        }
};

class AaaKeyEnc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 6;
            if (name == "7") return 7;
            return -1;
        }
};

class NvoHostReachT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Flood_and_learn;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf controller;
        static const ydk::Enum::YLeaf openflow;
        static const ydk::Enum::YLeaf openflowIR;

        static int get_enum_value(const std::string & name) {
            if (name == "Flood-and-learn") return 0;
            if (name == "bgp") return 1;
            if (name == "controller") return 2;
            if (name == "openflow") return 3;
            if (name == "openflowIR") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "loopback") return 1;
            if (name == "p2p") return 2;
            if (name == "p2mp") return 3;
            if (name == "nbma") return 4;
            if (name == "bcast") return 5;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "admin-shut") return 1;
            if (name == "no-vlan") return 2;
            if (name == "bad-vlan_t") return 3;
            if (name == "vlan-down") return 4;
            if (name == "hwprog-flfm") return 5;
            if (name == "hwprog-fles") return 6;
            if (name == "oos") return 7;
            if (name == "reinit") return 8;
            if (name == "mtuprog-fail") return 9;
            if (name == "vrf-unusable") return 10;
            if (name == "l2st-change") return 11;
            if (name == "suspended") return 12;
            if (name == "macalloc-fail") return 13;
            if (name == "nonrouted-vdc") return 14;
            if (name == "int-vlan-create-fail") return 15;
            if (name == "inbMgmt-cfg-fail") return 16;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "emergencies") return 0;
            if (name == "alerts") return 1;
            if (name == "critical") return 2;
            if (name == "errors") return 3;
            if (name == "warnings") return 4;
            if (name == "notifications") return 5;
            if (name == "information") return 6;
            if (name == "debugging") return 7;
            return -1;
        }
};

class L1BufferBoost : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class PlatformConfigState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Disabled;
        static const ydk::Enum::YLeaf Enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "Disabled") return 0;
            if (name == "Enabled") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "detect-timeout") return 1;
            if (name == "echo-fail") return 2;
            if (name == "nbr-signal-down") return 3;
            if (name == "fwd-plane-reset") return 4;
            if (name == "path-down") return 5;
            if (name == "concat-path-down") return 6;
            if (name == "admin-down") return 7;
            if (name == "rev-concat-path-down") return 8;
            return -1;
        }
};

class TunnelOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "Default") return 0;
            if (name == "QS_PORT_MODE_64X10G") return 1;
            if (name == "QS_PORT_MODE_48X10G_4X40G") return 2;
            if (name == "QS_PORT_MODE_52X10G_3X40g") return 3;
            if (name == "QS_PORT_MODE_56X10G_2X40G") return 4;
            if (name == "QS_PORT_MODE_60X10G_1X40G") return 5;
            if (name == "QS_PORT_MODE") return 6;
            if (name == "QG_PORT_MODE_32X10G_8X40G") return 9;
            if (name == "QG_PORT_MODE_16X40G") return 10;
            if (name == "QG_PORT_MODE_16X10G_12X40G") return 11;
            if (name == "QG_PORT_MODE_8X10G_14X40G") return 12;
            if (name == "NEP_PORT_MODE_32X40G") return 13;
            if (name == "NEP_PORT_MODE_24X40G") return 14;
            if (name == "NEP_PORT_MODE_26X40G") return 15;
            if (name == "NEP_PORT_MODE_32X40G_FIXED") return 16;
            if (name == "QI2_PORT_MODE_72X10G") return 17;
            if (name == "QI2_PORT_MODE_48X10G_6x40G") return 18;
            if (name == "QI2_PORT_MODE_BKOUT") return 19;
            if (name == "DV_PORT_MODE_48X25G_4X100G") return 20;
            if (name == "DV_PORT_MODE_48X25G_2X100G_4X40G") return 21;
            if (name == "PB_PORT_MODE_48X10G_6X100G") return 22;
            if (name == "PB_PORT_MODE_48X10G_4X100G_2X40G") return 23;
            if (name == "FOST_PORT_MODE_28X40G_4X100G") return 26;
            if (name == "FOST_PORT_MODE_18X100G") return 27;
            if (name == "FOST_PORT_MODE_24X40G_6X100G") return 28;
            if (name == "TET_PORT_MODE_64X100G") return 29;
            if (name == "TET_PORT_MODE_96X25G_32X100G") return 30;
            if (name == "TET_PORT_MODE_128X25G") return 31;
            return -1;
        }
};

class PcPCHashDist : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf adaptive;
        static const ydk::Enum::YLeaf fixed;

        static int get_enum_value(const std::string & name) {
            if (name == "adaptive") return 1;
            if (name == "fixed") return 2;
            return -1;
        }
};

class NetflowFltType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf ce;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            if (name == "ce") return 3;
            return -1;
        }
};

class MribMfdmType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf mfdmip;
        static const ydk::Enum::YLeaf mfdmipv4;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "mfdmip") return 1;
            if (name == "mfdmipv4") return 2;
            return -1;
        }
};

class L1SwitchingSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "enabled") return 1;
            return -1;
        }
};

class NwAdminStIfStatIpUnreach : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class OspfNssaTransRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf candidate;
        static const ydk::Enum::YLeaf never;

        static int get_enum_value(const std::string & name) {
            if (name == "always") return 1;
            if (name == "candidate") return 2;
            if (name == "never") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "matchCMap") return 1;
            if (name == "MTU") return 2;
            if (name == "setAction") return 3;
            if (name == "pause") return 4;
            if (name == "bw") return 5;
            if (name == "bwRem") return 6;
            if (name == "shape") return 7;
            if (name == "prio") return 8;
            if (name == "randomDetect") return 9;
            if (name == "queuing") return 10;
            if (name == "police") return 11;
            if (name == "qlimit") return 12;
            if (name == "microburst") return 13;
            return -1;
        }
};

class M6ribDbT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf client;
        static const ydk::Enum::YLeaf memest;
        static const ydk::Enum::YLeaf vrf;

        static int get_enum_value(const std::string & name) {
            if (name == "client") return 0;
            if (name == "memest") return 1;
            if (name == "vrf") return 2;
            return -1;
        }
};

class CdpDuplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf half;
        static const ydk::Enum::YLeaf full;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "half") return 1;
            if (name == "full") return 2;
            return -1;
        }
};

class RelnState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unformed;
        static const ydk::Enum::YLeaf formed;
        static const ydk::Enum::YLeaf missing_target;
        static const ydk::Enum::YLeaf invalid_target;

        static int get_enum_value(const std::string & name) {
            if (name == "unformed") return 0;
            if (name == "formed") return 1;
            if (name == "missing-target") return 2;
            if (name == "invalid-target") return 4;
            return -1;
        }
};

class AaaProviderGroupProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf ldap;

        static int get_enum_value(const std::string & name) {
            if (name == "tacacs") return 0;
            if (name == "radius") return 1;
            if (name == "ldap") return 2;
            return -1;
        }
};

class L2AssocOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oper;
        static const ydk::Enum::YLeaf non_oper;

        static int get_enum_value(const std::string & name) {
            if (name == "oper") return 0;
            if (name == "non-oper") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "non-sysmgr") return 1;
            if (name == "vdc-local") return 2;
            if (name == "vdc-global") return 3;
            if (name == "vdc-unaware") return 4;
            if (name == "not-running") return 5;
            if (name == "terminated-etc") return 6;
            return -1;
        }
};

class UdldPortEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf port_enabled;
        static const ydk::Enum::YLeaf port_fiber_disabled;
        static const ydk::Enum::YLeaf port_default;
        static const ydk::Enum::YLeaf port_default_disable;

        static int get_enum_value(const std::string & name) {
            if (name == "port-enabled") return 0;
            if (name == "port-fiber-disabled") return 1;
            if (name == "port-default") return 2;
            if (name == "port-default-disable") return 3;
            return -1;
        }
};

class HsrpGroupAf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            return -1;
        }
};

class NvoMultisiteStateT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            return -1;
        }
};

class PkiModulus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mod512;
        static const ydk::Enum::YLeaf mod1024;
        static const ydk::Enum::YLeaf mod1536;
        static const ydk::Enum::YLeaf mod2048;

        static int get_enum_value(const std::string & name) {
            if (name == "mod512") return 512;
            if (name == "mod1024") return 1024;
            if (name == "mod1536") return 1536;
            if (name == "mod2048") return 2048;
            return -1;
        }
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
        static const ydk::Enum::YLeaf BADIFSTATE;

        static int get_enum_value(const std::string & name) {
            if (name == "NONE") return 0;
            if (name == "POLICYDENIED") return 1;
            if (name == "POLICYDENIEDSENDER") return 2;
            if (name == "POLICYDENIEDRECEIVER") return 3;
            if (name == "RESOURCEUNAVAIL") return 4;
            if (name == "POLICERUNAVAIL") return 5;
            if (name == "BWUNAVAIL") return 6;
            if (name == "EXTBWUNAVAIL") return 7;
            if (name == "FLOWPOLUNAVAIL") return 8;
            if (name == "NOUCASTROUTE") return 9;
            if (name == "FLOWLIMITREACHED") return 10;
            if (name == "EXTFLOWLIMITREACHED") return 11;
            if (name == "EXTPOLICYDENIED") return 12;
            if (name == "EXTPOLICERUNAVAIL") return 13;
            if (name == "BADIFSTATE") return 14;
            return -1;
        }
};

class StpBpdufilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            return -1;
        }
};

class SnmpStartupAlarmType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf rising;
        static const ydk::Enum::YLeaf falling;
        static const ydk::Enum::YLeaf risingorfalling;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "rising") return 1;
            if (name == "falling") return 2;
            if (name == "risingorfalling") return 3;
            return -1;
        }
};

class Vrrpv3VrAf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            return -1;
        }
};

class RtdmcDfStates : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf offer;
        static const ydk::Enum::YLeaf lose;
        static const ydk::Enum::YLeaf winner;
        static const ydk::Enum::YLeaf backoff;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "offer") return 1;
            if (name == "lose") return 2;
            if (name == "winner") return 3;
            if (name == "backoff") return 4;
            return -1;
        }
};

class SpanHeaderVer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v2;
        static const ydk::Enum::YLeaf v3;
        static const ydk::Enum::YLeaf v3_rfc_compliant;

        static int get_enum_value(const std::string & name) {
            if (name == "v2") return 0;
            if (name == "v3") return 1;
            if (name == "v3-rfc-compliant") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "up") return 1;
            if (name == "admin-down") return 2;
            if (name == "link-down") return 3;
            if (name == "fail") return 4;
            if (name == "no-license") return 5;
            if (name == "link-up") return 6;
            if (name == "hw-fail") return 7;
            if (name == "sw-fail") return 8;
            if (name == "err-disabled") return 9;
            if (name == "sfp-missing") return 10;
            if (name == "loopback-diag-failure") return 11;
            if (name == "udld-unidir-detected") return 12;
            if (name == "udld-tx-rx-loop") return 13;
            if (name == "udld-neighbor-mismatch") return 14;
            if (name == "udld-empty-echo") return 15;
            if (name == "udld-aggressive-mode-link-failed") return 16;
            if (name == "link-flap-err") return 17;
            if (name == "err-disabled-ip-conflict") return 18;
            if (name == "ipqos-dcbxp-compat-failure") return 19;
            if (name == "link-failure") return 20;
            if (name == "offline") return 21;
            if (name == "initializing") return 22;
            if (name == "inactive") return 23;
            if (name == "channel-admin-down") return 24;
            if (name == "channel-err-disabled") return 25;
            if (name == "suspended") return 26;
            if (name == "proto-port-suspend") return 27;
            if (name == "channel-membership-update-in-progress") return 28;
            if (name == "parent-down") return 29;
            if (name == "parent-admin-down") return 30;
            if (name == "interface-removed") return 31;
            if (name == "fcot-no-present") return 32;
            if (name == "fcot-vendor-not-supported") return 33;
            if (name == "incompatible-admin-mode") return 34;
            if (name == "incompatible-admin-speed") return 35;
            if (name == "suspended-by-mode") return 36;
            if (name == "suspended-by-speed") return 37;
            if (name == "domain-max-retransmission-failure") return 38;
            if (name == "loopback-isolation") return 39;
            if (name == "upgrade-in-progress") return 40;
            if (name == "port-channel-members-down") return 41;
            if (name == "ethernet-link-down") return 42;
            if (name == "ethernet-interface-down") return 43;
            if (name == "admin-config-change") return 44;
            if (name == "module-removed") return 45;
            if (name == "vrf-unusable") return 46;
            if (name == "none") return 47;
            if (name == "xcvr-initializing") return 48;
            if (name == "cap-absent") return 49;
            if (name == "sfp-eth-compliant-err") return 50;
            if (name == "sdp-timeout") return 51;
            if (name == "sat-incompat-topo") return 52;
            if (name == "sat-not-configured") return 53;
            if (name == "auth-fail") return 54;
            if (name == "auth-pending") return 55;
            if (name == "suspended-due-to-minlinks") return 56;
            if (name == "suspended-due-to-no-lacp-pdus") return 57;
            if (name == "sat-fabric-if-down") return 58;
            if (name == "invalid-sat-fabric-if") return 59;
            if (name == "fex-sfp-invalid") return 60;
            if (name == "suspend-by-mtu") return 61;
            if (name == "suspend-by-vpc") return 62;
            if (name == "router-mac-failure") return 63;
            if (name == "xcvr-auth-failed") return 64;
            if (name == "non-sticky-externally-disabled") return 65;
            if (name == "sfp-speed-mismatch") return 66;
            if (name == "fcot-chksum-err") return 67;
            if (name == "xcvr-invalid") return 68;
            if (name == "vpc-peer-link-down") return 69;
            if (name == "vpc-cfg-in-progress") return 70;
            if (name == "vpc-no-response-from-peer") return 71;
            if (name == "bpdu-guard-err-disable") return 72;
            if (name == "hot-standby-in-bundle") return 73;
            if (name == "handshake-fail-errdisable") return 74;
            if (name == "non-participating") return 75;
            if (name == "rcf-in-progress") return 76;
            if (name == "elp-failure-isolation") return 77;
            if (name == "esc-failure-isolation") return 78;
            if (name == "domain-overlap-isolation") return 79;
            if (name == "domain-addr-assign-failure-isolation") return 80;
            if (name == "domain-other-side-eport-isolated") return 81;
            if (name == "domain-invalid-rcf-received") return 82;
            if (name == "domain-manager-disabled") return 83;
            if (name == "zone-merge-failure-isolation") return 84;
            if (name == "vsan-mismatch-isolation") return 85;
            if (name == "src-port-not-bound") return 86;
            if (name == "suspended-by-wwn") return 87;
            if (name == "epp-failure") return 88;
            if (name == "port-vsan-mismatch-isolation") return 89;
            if (name == "incompatible-admin-rxbbcredit") return 90;
            if (name == "incompatible-admin-rxbufsize") return 91;
            if (name == "zone-remote-no-resp-isolation") return 92;
            if (name == "osm-e-port-up") return 93;
            if (name == "osm-non-e-port-up") return 94;
            if (name == "peer-fcip-closed-tcp-connection") return 95;
            if (name == "peer-fcip-reset-tcp-connection") return 96;
            if (name == "tcp-max-retransmissions") return 97;
            if (name == "tcp-keep-alive-timer-expired") return 98;
            if (name == "tcp-persist-timer-expired") return 99;
            if (name == "tunnel-src-port-removed") return 100;
            if (name == "tunnel-src-module-not-online") return 101;
            if (name == "invalid-config") return 102;
            if (name == "port-bind-failure") return 103;
            if (name == "fabric-bind-failure") return 104;
            if (name == "no-trunk-oper-vsans-isolation") return 105;
            if (name == "ficon-vsan-down") return 106;
            if (name == "invalid-attachment") return 107;
            if (name == "port-blocked") return 108;
            if (name == "incompatible-admin-rxbbcredit-performance-buf") return 109;
            if (name == "too-many-invalid-flogis") return 110;
            if (name == "denied-due-to-port-binding") return 111;
            if (name == "elp-failure-revision-mismatch") return 112;
            if (name == "elp-failure-classf-param-err") return 113;
            if (name == "elp-failure-classn-param-err") return 114;
            if (name == "elp-failure-unknown-flow-ctl-code") return 115;
            if (name == "elp-failure-invalid-flow-ctl-param") return 116;
            if (name == "elp-failure-invalid-port-name") return 117;
            if (name == "elp-failure-invalid-switch-name") return 118;
            if (name == "elp-failure-ratov-edtov-mismatch") return 119;
            if (name == "elp-failure-loopback-detected") return 120;
            if (name == "elp-failure-invalid-tx-bbcredit") return 121;
            if (name == "elp-failure-invalid-payload-size") return 122;
            if (name == "bundle-miscfg") return 123;
            if (name == "bit-err-rt-thres-exceeded") return 124;
            if (name == "link-fail-link-reset") return 125;
            if (name == "link-fail-port-init-failed") return 126;
            if (name == "link-fail-port-unusable") return 127;
            if (name == "link-fail-loss-of-signal") return 128;
            if (name == "link-fail-loss-of-sync") return 129;
            if (name == "link-fail-nos-rcvd") return 130;
            if (name == "link-fail-ols-rcvd") return 131;
            if (name == "link-fail-debounce-timeout") return 132;
            if (name == "link-fail-lr-rcvd-b2b") return 133;
            if (name == "link-fail-credit-loss") return 134;
            if (name == "link-fail-rx-que-overflow") return 135;
            if (name == "link-fail-too-many-intr") return 136;
            if (name == "link-fail-lip-rcvd-b2b") return 137;
            if (name == "link-fail-credit-loss-b2b") return 138;
            if (name == "link-fail-opny-tmo-b2b") return 139;
            if (name == "link-fail-opny-ret-b2b") return 140;
            if (name == "link-fail-lip-f8-rcvd") return 141;
            if (name == "link-fail-line-card-port-shutdown") return 142;
            if (name == "fcsp-authent-failure") return 143;
            if (name == "ohms-external-lb-test") return 144;
            if (name == "invalid-fabric-binding-exchange") return 145;
            if (name == "tov-mismatch") return 146;
            if (name == "ficon-not-enabled") return 147;
            if (name == "ficon-no-portnumber") return 148;
            if (name == "ficon-being-enabled") return 149;
            if (name == "eport-prohibited") return 150;
            if (name == "trunk-not-fully-active") return 151;
            if (name == "fabric-binding-swwn-not-found") return 152;
            if (name == "fabric-binding-domain-invalid") return 153;
            if (name == "fabric-binding-database-mismatch") return 154;
            if (name == "fabric-binding-peer-not-responding") return 155;
            if (name == "tracked-port-down") return 156;
            if (name == "ec-suspended-for-loop") return 157;
            if (name == "isolate-bundle-miscfg") return 158;
            if (name == "peer-not-support-bundles") return 159;
            if (name == "port-bringup-isolation") return 160;
            if (name == "domain-not-allowed-isolation") return 161;
            if (name == "virtual-ivr-domain-overlap-isolation") return 162;
            if (name == "out-of-service") return 163;
            if (name == "bundle-stdby") return 164;
            if (name == "port-cap-fc-port-connector-type-err") return 165;
            if (name == "error-disabled-reinit-limit-reached") return 166;
            if (name == "ficon-vsan-duplicate-portnum") return 167;
            if (name == "internal-rcf-in-progress") return 168;
            if (name == "two-switches-with-same-wwn") return 169;
            if (name == "invalid-other-princ-efp-req-recd") return 170;
            if (name == "domain-isolation-unknown-reason") return 171;
            if (name == "elp-failure-all-zero-peer-wwn-rcvd") return 172;
            if (name == "prefered-path-isolation") return 173;
            if (name == "fc-redirect-isolation") return 174;
            if (name == "port-act-license-not-available") return 175;
            if (name == "sdm-isolation") return 176;
            if (name == "fcid-allocation-failed") return 177;
            if (name == "externally-disabled") return 178;
            if (name == "fcot-read-error") return 179;
            if (name == "port-guard-down-on-link-failure") return 180;
            if (name == "incomplete-config") return 181;
            if (name == "incomplete-tunnel-config") return 182;
            if (name == "hw-programming-failed") return 183;
            if (name == "tunnel-dest-not-reachable") return 184;
            if (name == "sfp-invalid") return 185;
            if (name == "tunnel-vrf-mismatch") return 186;
            if (name == "tunnel-vrf-fw-ref") return 187;
            if (name == "duplicate-tunnel-cfg") return 188;
            if (name == "primary-vlan-down") return 189;
            if (name == "dot1x-security-errdisable") return 190;
            if (name == "vf-tagging-capability-err") return 191;
            if (name == "port-disabled") return 192;
            if (name == "tunnel-mode-not-configured") return 193;
            if (name == "tunnel-source-not-configured") return 194;
            if (name == "tunnel-destination-not-configured") return 195;
            if (name == "tunnel-unable2resolve-source-ipaddress") return 196;
            if (name == "tunnel-unable2resolve-destination-ipaddress") return 197;
            if (name == "tunnel-vrf-is-down") return 198;
            if (name == "sif-admin-down") return 199;
            if (name == "phy-intf-down") return 200;
            if (name == "intf-sif-limit-exceeded") return 201;
            if (name == "insufficient-power") return 202;
            if (name == "no-fcoe") return 203;
            if (name == "dcx-compat-mismatch") return 204;
            if (name == "isolate-bundle-limit-exceeded") return 205;
            if (name == "sif-not-bound") return 206;
            if (name == "err-disable-lacp-miscfg") return 207;
            if (name == "errdisabled-pkt-err") return 208;
            if (name == "vlan-vsan-mapping-not-enabled") return 209;
            if (name == "stp-not-forwarding-in-fcoe-mapped-vlan") return 210;
            if (name == "module-offline") return 211;
            if (name == "stp-inconsist-vpc-peerlink-errdisable") return 212;
            if (name == "set-port-state-failed-errdisable") return 213;
            if (name == "tunnel-source-down") return 214;
            if (name == "cdp-info-not-avail") return 215;
            if (name == "fcot-clk-rate-mismatch") return 216;
            if (name == "port-guard-down-on-trustsec-violation") return 217;
            if (name == "wait-for-flogi") return 218;
            if (name == "npiv-not-enabled-in-upstream") return 219;
            if (name == "vsan-mismatch-with-upstream-switch-port") return 220;
            if (name == "port-guard-bit-error-rate") return 221;
            if (name == "port-guard-signal-loss") return 222;
            if (name == "port-guard-sync-loss") return 223;
            if (name == "port-guard-link-reset") return 224;
            if (name == "port-guard-credit-loss") return 225;
            if (name == "ipqos-mgr-policy-app-failed") return 226;
            if (name == "pause-rate-limit-errdisable") return 227;
            if (name == "lstgrp-uplink-down") return 228;
            if (name == "sticky-down-on-link-failure") return 229;
            if (name == "dcx-multiple-msap-ids-errdisable") return 230;
            if (name == "dcx-100-pdus-rcvd-noack-errdisable") return 231;
            if (name == "enm-sat-incompat-uplink") return 232;
            if (name == "enm-loop-detected") return 233;
            if (name == "sub-group-id-not-assigned") return 234;
            if (name == "vem-unlicensed") return 235;
            if (name == "profile-not-found") return 236;
            if (name == "vlan-does-not-exist") return 237;
            if (name == "vlan-type") return 238;
            if (name == "vlan-down") return 239;
            if (name == "vpc-peer-upgrade") return 240;
            if (name == "non-cisco-hba-vftag") return 241;
            if (name == "domain-id-config-mismatch") return 242;
            if (name == "xcvr-absent") return 243;
            if (name == "vfc-binding-invalid") return 244;
            if (name == "vlan-not-fcoe-enabled") return 245;
            if (name == "pvlan-native-vlan-err") return 246;
            if (name == "eth-l2-vlan-down") return 247;
            if (name == "eth-intf-invalid-binding") return 248;
            if (name == "pmon-failure") return 249;
            if (name == "l3-not-ready") return 250;
            if (name == "speed-mismatch") return 251;
            if (name == "flowcontrol-mismatch") return 252;
            if (name == "vdc-mode") return 253;
            if (name == "enm-pin-fail-link-down") return 254;
            if (name == "inactive-m1-port-fpath-access-vlan") return 255;
            return -1;
        }
};

class SyslogOriginIdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf hostname;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf string;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "hostname") return 1;
            if (name == "ip") return 2;
            if (name == "string") return 3;
            return -1;
        }
};

class ItdSessNodeActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add;
        static const ydk::Enum::YLeaf delete_;

        static int get_enum_value(const std::string & name) {
            if (name == "add") return 0;
            if (name == "delete") return 1;
            return -1;
        }
};

class EqptFcotDomAlert : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf high_alarm;
        static const ydk::Enum::YLeaf high_warning;
        static const ydk::Enum::YLeaf low_alarm;
        static const ydk::Enum::YLeaf low_warning;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "high-alarm") return 1;
            if (name == "high-warning") return 2;
            if (name == "low-alarm") return 3;
            if (name == "low-warning") return 4;
            return -1;
        }
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
        static const ydk::Enum::YLeaf rt_mac_list;

        static int get_enum_value(const std::string & name) {
            if (name == "reg-community") return 1;
            if (name == "ext-community") return 2;
            if (name == "rt-dst") return 3;
            if (name == "rt-nh") return 4;
            if (name == "rt-src") return 5;
            if (name == "rt-type") return 6;
            if (name == "rt-tag") return 7;
            if (name == "rt-pervasive") return 8;
            if (name == "as-path") return 9;
            if (name == "rt-dst-v6") return 10;
            if (name == "rt-asn") return 11;
            if (name == "rt-if") return 12;
            if (name == "rt-metric") return 13;
            if (name == "src-proto") return 14;
            if (name == "rt-ospf") return 15;
            if (name == "rt-nh-v6") return 16;
            if (name == "rt-src-v6") return 17;
            if (name == "rt-ipv4-mcast") return 18;
            if (name == "rt-ipv6-mcast") return 19;
            if (name == "rt-mac-list") return 20;
            return -1;
        }
};

class L3capSubj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf vrf_namespace;
        static const ydk::Enum::YLeaf lb_namespace;
        static const ydk::Enum::YLeaf rdnn_namespace;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "vrf-namespace") return 1;
            if (name == "lb-namespace") return 2;
            if (name == "rdnn-namespace") return 3;
            return -1;
        }
};

class VpcRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf election_not_done;
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf slave;

        static int get_enum_value(const std::string & name) {
            if (name == "election-not-done") return 0;
            if (name == "master") return 1;
            if (name == "slave") return 2;
            return -1;
        }
};

class ItdCtrlType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class VpcCompatSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pass;
        static const ydk::Enum::YLeaf fail;
        static const ydk::Enum::YLeaf notDone;

        static int get_enum_value(const std::string & name) {
            if (name == "pass") return 0;
            if (name == "fail") return 1;
            if (name == "notDone") return 2;
            return -1;
        }
};

class MockMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Repeated;
        static const ydk::Enum::YLeaf Once;

        static int get_enum_value(const std::string & name) {
            if (name == "Repeated") return 0;
            if (name == "Once") return 1;
            return -1;
        }
};

class L1PktT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bcast;
        static const ydk::Enum::YLeaf unk_ucast;
        static const ydk::Enum::YLeaf mcast;
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "bcast") return 1;
            if (name == "unk-ucast") return 2;
            if (name == "mcast") return 3;
            if (name == "all") return 4;
            return -1;
        }
};

class SisfRaGuardDeviceRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf host;
        static const ydk::Enum::YLeaf router;
        static const ydk::Enum::YLeaf switch_;
        static const ydk::Enum::YLeaf monitor;

        static int get_enum_value(const std::string & name) {
            if (name == "host") return 1;
            if (name == "router") return 2;
            if (name == "switch") return 3;
            if (name == "monitor") return 4;
            return -1;
        }
};

class L2PvlanTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf community;
        static const ydk::Enum::YLeaf isolated;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "primary") return 1;
            if (name == "community") return 2;
            if (name == "isolated") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "no-color") return 0;
            if (name == "green") return 1;
            if (name == "yellow") return 2;
            if (name == "amber") return 3;
            if (name == "red") return 4;
            if (name == "blue") return 5;
            return -1;
        }
};

class L1Mdix : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf mdi;
        static const ydk::Enum::YLeaf mdi_x;

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 1;
            if (name == "mdi") return 2;
            if (name == "mdi-x") return 3;
            return -1;
        }
};

class SlaActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf trapOnly;
        static const ydk::Enum::YLeaf triggerOnly;
        static const ydk::Enum::YLeaf trapAndTrigger;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "trapOnly") return 2;
            if (name == "triggerOnly") return 3;
            if (name == "trapAndTrigger") return 4;
            return -1;
        }
};

class TrackRouteState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reachability;

        static int get_enum_value(const std::string & name) {
            if (name == "reachability") return 0;
            return -1;
        }
};

class QospCongAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wred;
        static const ydk::Enum::YLeaf tail_drop;

        static int get_enum_value(const std::string & name) {
            if (name == "wred") return 0;
            if (name == "tail-drop") return 1;
            return -1;
        }
};

class HmmBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "yes") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 4;
            if (name == "rs-fec") return 2;
            if (name == "fc-fec") return 1;
            if (name == "fec-off") return 3;
            if (name == "rs-ieee") return 5;
            if (name == "rs-cons16") return 6;
            return -1;
        }
};

class MsdpSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf pflist;
        static const ydk::Enum::YLeaf rtmap;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "pflist") return 1;
            if (name == "rtmap") return 2;
            return -1;
        }
};

class EqptAcc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf read_only;
        static const ydk::Enum::YLeaf read_write;

        static int get_enum_value(const std::string & name) {
            if (name == "read-only") return 0;
            if (name == "read-write") return 1;
            return -1;
        }
};

class BgpSummaryOnly : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 0;
            return -1;
        }
};

class PoePoePriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf high;

        static int get_enum_value(const std::string & name) {
            if (name == "low") return 0;
            if (name == "high") return 1;
            return -1;
        }
};

class DatetimeClockProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf ptp;
        static const ydk::Enum::YLeaf ntp;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "ptp") return 1;
            if (name == "ntp") return 2;
            if (name == "none") return 3;
            return -1;
        }
};

class SwpkgsOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf activated;
        static const ydk::Enum::YLeaf deactivated;
        static const ydk::Enum::YLeaf committed;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "inactive") return 1;
            if (name == "activated") return 2;
            if (name == "deactivated") return 3;
            if (name == "committed") return 4;
            return -1;
        }
};

class IpqosOverrideIntfMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf off;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "off") return 1;
            return -1;
        }
};

class L2XConnect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 0;
            return -1;
        }
};

class CapLoggingType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Emergencies;
        static const ydk::Enum::YLeaf Alerts;
        static const ydk::Enum::YLeaf Critical;
        static const ydk::Enum::YLeaf Errors;
        static const ydk::Enum::YLeaf Warnings;
        static const ydk::Enum::YLeaf Notification;
        static const ydk::Enum::YLeaf Information;
        static const ydk::Enum::YLeaf Debugging;

        static int get_enum_value(const std::string & name) {
            if (name == "Emergencies") return 0;
            if (name == "Alerts") return 1;
            if (name == "Critical") return 2;
            if (name == "Errors") return 3;
            if (name == "Warnings") return 4;
            if (name == "Notification") return 5;
            if (name == "Information") return 6;
            if (name == "Debugging") return 7;
            return -1;
        }
};

class TrackListObj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf and_;
        static const ydk::Enum::YLeaf or_;
        static const ydk::Enum::YLeaf percentage;
        static const ydk::Enum::YLeaf weight;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "and") return 1;
            if (name == "or") return 2;
            if (name == "percentage") return 3;
            if (name == "weight") return 4;
            return -1;
        }
};

class NvoVniStateT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Up;
        static const ydk::Enum::YLeaf Down;

        static int get_enum_value(const std::string & name) {
            if (name == "Up") return 1;
            if (name == "Down") return 2;
            return -1;
        }
};

class InbandTelemetryProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf endpoint;
        static const ydk::Enum::YLeaf transit;

        static int get_enum_value(const std::string & name) {
            if (name == "endpoint") return 0;
            if (name == "transit") return 1;
            return -1;
        }
};

class UdldPktDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send;
        static const ydk::Enum::YLeaf recv;

        static int get_enum_value(const std::string & name) {
            if (name == "send") return 0;
            if (name == "recv") return 1;
            return -1;
        }
};

class NwOSSum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf resetting;
        static const ydk::Enum::YLeaf degraded;
        static const ydk::Enum::YLeaf ok;

        static int get_enum_value(const std::string & name) {
            if (name == "failed") return 0;
            if (name == "initializing") return 1;
            if (name == "resetting") return 2;
            if (name == "degraded") return 3;
            if (name == "ok") return 4;
            return -1;
        }
};

class UribYesNo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf No;
        static const ydk::Enum::YLeaf Yes;

        static int get_enum_value(const std::string & name) {
            if (name == "No") return 0;
            if (name == "Yes") return 1;
            return -1;
        }
};

class PlatformSwitchingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DEFAULT;
        static const ydk::Enum::YLeaf STORE_FORWARD;

        static int get_enum_value(const std::string & name) {
            if (name == "DEFAULT") return 0;
            if (name == "STORE_FORWARD") return 1;
            return -1;
        }
};

class SisfDhcpGuardDeviceRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf client;
        static const ydk::Enum::YLeaf server;
        static const ydk::Enum::YLeaf monitor;

        static int get_enum_value(const std::string & name) {
            if (name == "client") return 0;
            if (name == "server") return 1;
            if (name == "monitor") return 2;
            return -1;
        }
};

class CdpOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "ipv6Event") return 0;
            if (name == "bfdEvent") return 1;
            if (name == "syslog") return 2;
            if (name == "ipc") return 3;
            if (name == "snmp") return 4;
            if (name == "highAvailability") return 5;
            if (name == "sdb") return 6;
            return -1;
        }
};

class TraceroutePathT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;

        static int get_enum_value(const std::string & name) {
            if (name == "external") return 1;
            if (name == "internal") return 2;
            return -1;
        }
};

class IsisPassiveT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l1;
        static const ydk::Enum::YLeaf l2;
        static const ydk::Enum::YLeaf l12;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "l1") return 0;
            if (name == "l2") return 1;
            if (name == "l12") return 2;
            if (name == "unknown") return 3;
            return -1;
        }
};

class RelnResolverType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mo;
        static const ydk::Enum::YLeaf service;
        static const ydk::Enum::YLeaf local;

        static int get_enum_value(const std::string & name) {
            if (name == "mo") return 1;
            if (name == "service") return 2;
            if (name == "local") return 3;
            return -1;
        }
};

class L2Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf F;
        static const ydk::Enum::YLeaf NP;
        static const ydk::Enum::YLeaf E;
        static const ydk::Enum::YLeaf TF;
        static const ydk::Enum::YLeaf TNP;

        static int get_enum_value(const std::string & name) {
            if (name == "F") return 0;
            if (name == "NP") return 1;
            if (name == "E") return 2;
            if (name == "TF") return 3;
            if (name == "TNP") return 4;
            return -1;
        }
};

class CommProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "tcp") return 1;
            if (name == "udp") return 2;
            if (name == "all") return 3;
            return -1;
        }
};

class SisfNonGlobalTracking : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "disable") return 1;
            if (name == "enable") return 2;
            return -1;
        }
};

class OspfActive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf yes;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "yes") return 1;
            return -1;
        }
};

class PlatformLoggingType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Emergencies;
        static const ydk::Enum::YLeaf Alerts;
        static const ydk::Enum::YLeaf Critical;
        static const ydk::Enum::YLeaf Errors;
        static const ydk::Enum::YLeaf Warnings;
        static const ydk::Enum::YLeaf Notification;
        static const ydk::Enum::YLeaf Information;
        static const ydk::Enum::YLeaf Debugging;

        static int get_enum_value(const std::string & name) {
            if (name == "Emergencies") return 0;
            if (name == "Alerts") return 1;
            if (name == "Critical") return 2;
            if (name == "Errors") return 3;
            if (name == "Warnings") return 4;
            if (name == "Notification") return 5;
            if (name == "Information") return 6;
            if (name == "Debugging") return 7;
            return -1;
        }
};

class SviOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf shutdown;
        static const ydk::Enum::YLeaf out_of_srvc;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "up") return 1;
            if (name == "down") return 2;
            if (name == "shutdown") return 3;
            if (name == "out-of-srvc") return 4;
            return -1;
        }
};

class PcMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf mac_pin;

        static int get_enum_value(const std::string & name) {
            if (name == "on") return 0;
            if (name == "static") return 1;
            if (name == "active") return 2;
            if (name == "passive") return 3;
            if (name == "mac-pin") return 4;
            return -1;
        }
};

class DatetimeClockFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_24hours;
        static const ydk::Enum::YLeaf Y_12hours;

        static int get_enum_value(const std::string & name) {
            if (name == "24hours") return 0;
            if (name == "12hours") return 1;
            return -1;
        }
};

class EqptEjSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf open;
        static const ydk::Enum::YLeaf closed;

        static int get_enum_value(const std::string & name) {
            if (name == "open") return 0;
            if (name == "closed") return 1;
            return -1;
        }
};

class L1RouterMacIpv6Extract : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class IpqosQoSMatchType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_any;
        static const ydk::Enum::YLeaf match_all;
        static const ydk::Enum::YLeaf match_first;

        static int get_enum_value(const std::string & name) {
            if (name == "match-any") return 0;
            if (name == "match-all") return 1;
            if (name == "match-first") return 2;
            return -1;
        }
};

class HsrpAuthT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf simple;
        static const ydk::Enum::YLeaf md5;

        static int get_enum_value(const std::string & name) {
            if (name == "simple") return 1;
            if (name == "md5") return 2;
            return -1;
        }
};

class TestTrig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf on_demand;
        static const ydk::Enum::YLeaf boot;
        static const ydk::Enum::YLeaf forever;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "on-demand") return 1;
            if (name == "boot") return 2;
            if (name == "forever") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "root") return 1;
            if (name == "alternate") return 2;
            if (name == "designated") return 3;
            if (name == "backup") return 4;
            if (name == "master") return 5;
            return -1;
        }
};

class CompNicState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "up") return 1;
            return -1;
        }
};

class SegrtSidValueType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf index_;
        static const ydk::Enum::YLeaf absolute;

        static int get_enum_value(const std::string & name) {
            if (name == "index") return 1;
            if (name == "absolute") return 2;
            return -1;
        }
};

class PlatformTuple : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Disable;
        static const ydk::Enum::YLeaf Enable;

        static int get_enum_value(const std::string & name) {
            if (name == "Disable") return 0;
            if (name == "Enable") return 1;
            return -1;
        }
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
        static const ydk::Enum::YLeaf Y_200G;
        static const ydk::Enum::YLeaf Y_400G;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "100M") return 2;
            if (name == "1G") return 3;
            if (name == "10G") return 4;
            if (name == "40G") return 5;
            if (name == "auto") return 6;
            if (name == "auto_100M") return 7;
            if (name == "auto_100M_1G") return 8;
            if (name == "100G") return 9;
            if (name == "25G") return 10;
            if (name == "10M") return 11;
            if (name == "50G") return 12;
            if (name == "200G") return 13;
            if (name == "400G") return 14;
            return -1;
        }
};

class StpModeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf edge;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf normal;

        static int get_enum_value(const std::string & name) {
            if (name == "edge") return 1;
            if (name == "network") return 2;
            if (name == "normal") return 3;
            return -1;
        }
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
        static const ydk::Enum::YLeaf qsfpdd;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "xfp") return 1;
            if (name == "x2") return 2;
            if (name == "dummy") return 3;
            if (name == "sfp") return 4;
            if (name == "qsfp") return 5;
            if (name == "cfp-40g") return 6;
            if (name == "cfp-100g") return 7;
            if (name == "cfp") return 8;
            if (name == "qsfp28") return 9;
            if (name == "qsfpdd") return 10;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 0;
            if (name == "down") return 1;
            if (name == "no-primary-vip") return 2;
            if (name == "admin-down") return 3;
            if (name == "interface-down") return 4;
            if (name == "no-intf-ip-cfgd") return 5;
            if (name == "no-vrf-info-for-intf") return 6;
            if (name == "bd-not-allocated") return 7;
            if (name == "vmac-not-added") return 8;
            if (name == "invalid-vip") return 9;
            if (name == "IfIp-vip-subnet-mismatch") return 10;
            if (name == "internal_error") return 11;
            return -1;
        }
};

class AaaCmdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf config;
        static const ydk::Enum::YLeaf exec;

        static int get_enum_value(const std::string & name) {
            if (name == "config") return 0;
            if (name == "exec") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4-ucast") return 1;
            if (name == "ipv4-mcast") return 2;
            if (name == "vpnv4-ucast") return 3;
            if (name == "ipv6-ucast") return 5;
            if (name == "ipv6-mcast") return 6;
            if (name == "vpnv6-ucast") return 7;
            if (name == "l2vpn-evpn") return 9;
            if (name == "ipv4-lucast") return 10;
            if (name == "ipv6-lucast") return 11;
            if (name == "lnkstate") return 12;
            if (name == "ipv4-mvpn") return 13;
            if (name == "ipv6-mvpn") return 14;
            if (name == "l2vpn-vpls") return 15;
            if (name == "ipv4-mdt") return 16;
            if (name == "vpnv6-mcast") return 8;
            return -1;
        }
};

class TrackAf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            return -1;
        }
};

class BdDefaultSVIAutoState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class PlatformPcMplsLbLabelIp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DEFAULT;
        static const ydk::Enum::YLeaf LABEL_IP;

        static int get_enum_value(const std::string & name) {
            if (name == "DEFAULT") return 0;
            if (name == "LABEL_IP") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "initializing") return 1;
            if (name == "discovered") return 2;
            if (name == "connected") return 3;
            if (name == "reg") return 4;
            if (name == "regDone") return 5;
            if (name == "ready") return 6;
            if (name == "onlSeq") return 7;
            if (name == "online") return 8;
            if (name == "offReq") return 9;
            if (name == "offSeq") return 10;
            if (name == "offline") return 11;
            if (name == "imgDld") return 12;
            if (name == "failed") return 13;
            if (name == "removed") return 14;
            if (name == "hlUpgSeq") return 15;
            if (name == "chkUpgSeq") return 16;
            if (name == "svStates") return 17;
            if (name == "hlUpgIdle") return 18;
            if (name == "chkInsSeq") return 19;
            if (name == "hlUpgFail") return 20;
            if (name == "aaUpgRdy") return 21;
            if (name == "aaUpgIdle") return 22;
            if (name == "aaUpgOver") return 23;
            if (name == "aaUpgFail") return 24;
            if (name == "aaVersMismatch") return 25;
            if (name == "ExtChTypeMismatch") return 26;
            return -1;
        }
};

class TelemetryDataSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DME;
        static const ydk::Enum::YLeaf NX_API;
        static const ydk::Enum::YLeaf YANG;
        static const ydk::Enum::YLeaf NATIVE;
        static const ydk::Enum::YLeaf DEFAULT;

        static int get_enum_value(const std::string & name) {
            if (name == "DME") return 1;
            if (name == "NX-API") return 3;
            if (name == "YANG") return 4;
            if (name == "NATIVE") return 5;
            if (name == "DEFAULT") return 16;
            return -1;
        }
};

class FcAdminSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 1;
            if (name == "up") return 2;
            return -1;
        }
};

class SnmpAuthTypeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no;
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha;

        static int get_enum_value(const std::string & name) {
            if (name == "no") return 0;
            if (name == "md5") return 1;
            if (name == "sha") return 2;
            return -1;
        }
};

class FmAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class GoldBootLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bypass;
        static const ydk::Enum::YLeaf complete;

        static int get_enum_value(const std::string & name) {
            if (name == "bypass") return 0;
            if (name == "complete") return 1;
            return -1;
        }
};

class NatInterfaceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inside_source_static;
        static const ydk::Enum::YLeaf outside_source_static;
        static const ydk::Enum::YLeaf inside_source_dynamic;
        static const ydk::Enum::YLeaf outside_source_dynamic;

        static int get_enum_value(const std::string & name) {
            if (name == "inside-source-static") return 0;
            if (name == "outside-source-static") return 1;
            if (name == "inside-source-dynamic") return 2;
            if (name == "outside-source-dynamic") return 3;
            return -1;
        }
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
        static const ydk::Enum::YLeaf no_flow_id;
        static const ydk::Enum::YLeaf multi_dest_not_allowed;
        static const ydk::Enum::YLeaf invalid_vrf;
        static const ydk::Enum::YLeaf invalid_ip;
        static const ydk::Enum::YLeaf acl_disabled;
        static const ydk::Enum::YLeaf acl_no_res_string;
        static const ydk::Enum::YLeaf acl_vdc_mismatch;
        static const ydk::Enum::YLeaf no_ssn_f1_f2;
        static const ydk::Enum::YLeaf no_erspan_switch_id;
        static const ydk::Enum::YLeaf no_route;
        static const ydk::Enum::YLeaf arp_not_resolved;
        static const ydk::Enum::YLeaf no_eg_intf;
        static const ydk::Enum::YLeaf no_svi_member;
        static const ydk::Enum::YLeaf no_dce_route;
        static const ydk::Enum::YLeaf no_src_mac;
        static const ydk::Enum::YLeaf no_dce_switch_id;
        static const ydk::Enum::YLeaf no_dce_src_lid;
        static const ydk::Enum::YLeaf no_dce_egress_intf;
        static const ydk::Enum::YLeaf no_si_1qtag;
        static const ydk::Enum::YLeaf no_fpc;
        static const ydk::Enum::YLeaf unsupported_route;
        static const ydk::Enum::YLeaf erspan_dest_failed;
        static const ydk::Enum::YLeaf erspan_action_not_supported;
        static const ydk::Enum::YLeaf udf_not_present;
        static const ydk::Enum::YLeaf pfc_ns_port;
        static const ydk::Enum::YLeaf udf_unsupported_on_vlan;
        static const ydk::Enum::YLeaf hw_err;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 1;
            if (name == "no-hw-res") return 2;
            if (name == "no-oper-src-dst") return 3;
            if (name == "error") return 4;
            if (name == "no-src") return 5;
            if (name == "no-dst") return 6;
            if (name == "no-src-dst") return 7;
            if (name == "shut") return 8;
            if (name == "invalid-dst-mode") return 9;
            if (name == "invalid-src-mode") return 10;
            if (name == "no-flow-id") return 11;
            if (name == "multi-dest-not_allowed") return 12;
            if (name == "invalid-vrf") return 13;
            if (name == "invalid-ip") return 14;
            if (name == "acl-disabled") return 16;
            if (name == "acl-no-res-string") return 17;
            if (name == "acl-vdc-mismatch") return 18;
            if (name == "no-ssn-f1-f2") return 19;
            if (name == "no-erspan-switch-id") return 20;
            if (name == "no-route") return 21;
            if (name == "arp-not-resolved") return 22;
            if (name == "no-eg-intf") return 23;
            if (name == "no-svi-member") return 24;
            if (name == "no-dce-route") return 25;
            if (name == "no-src-mac") return 26;
            if (name == "no-dce-switch-id") return 27;
            if (name == "no-dce-src-lid") return 28;
            if (name == "no-dce-egress-intf") return 29;
            if (name == "no-si-1qtag") return 30;
            if (name == "no-fpc") return 31;
            if (name == "unsupported-route") return 32;
            if (name == "erspan-dest-failed") return 33;
            if (name == "erspan-action-not-supported") return 34;
            if (name == "udf-not-present") return 35;
            if (name == "pfc-ns-port") return 36;
            if (name == "udf-unsupported-on-vlan") return 37;
            if (name == "hw-err") return 38;
            return -1;
        }
};

class AnalyticsConfigLatencyResFactorT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 0;
            return -1;
        }
};

class L1PhyLayer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf sup_inband;
        static const ydk::Enum::YLeaf eobc;
        static const ydk::Enum::YLeaf mgmt;
        static const ydk::Enum::YLeaf max;

        static int get_enum_value(const std::string & name) {
            if (name == "ethernet") return 2;
            if (name == "sup-inband") return 4;
            if (name == "eobc") return 5;
            if (name == "mgmt") return 6;
            if (name == "max") return 8;
            return -1;
        }
};

class IpfibOutOperEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DEFAULT;
        static const ydk::Enum::YLeaf PUSH;
        static const ydk::Enum::YLeaf SWAP;
        static const ydk::Enum::YLeaf POP;

        static int get_enum_value(const std::string & name) {
            if (name == "DEFAULT") return 0;
            if (name == "PUSH") return 1;
            if (name == "SWAP") return 2;
            if (name == "POP") return 3;
            return -1;
        }
};

class OspfMaxLsaOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf threshold_exceeded;

        static int get_enum_value(const std::string & name) {
            if (name == "ok") return 0;
            if (name == "threshold-exceeded") return 1;
            return -1;
        }
};

class L1IntfT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf phy;
        static const ydk::Enum::YLeaf phy_shared;

        static int get_enum_value(const std::string & name) {
            if (name == "phy") return 1;
            if (name == "phy-shared") return 2;
            return -1;
        }
};

class L2NativeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf regular;
        static const ydk::Enum::YLeaf native;
        static const ydk::Enum::YLeaf untagged;

        static int get_enum_value(const std::string & name) {
            if (name == "regular") return 0;
            if (name == "native") return 1;
            if (name == "untagged") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "online") return 1;
            if (name == "offline") return 2;
            if (name == "identified") return 3;
            if (name == "compatible") return 4;
            if (name == "incompatible") return 5;
            return -1;
        }
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
        static const ydk::Enum::YLeaf socket;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "cli") return 1;
            if (name == "events") return 2;
            if (name == "periodic") return 3;
            if (name == "detail") return 4;
            if (name == "errors") return 5;
            if (name == "objstore") return 6;
            if (name == "socket") return 7;
            return -1;
        }
};

class L2TrunkMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf auto_;

        static int get_enum_value(const std::string & name) {
            if (name == "off") return 0;
            if (name == "on") return 1;
            if (name == "auto") return 2;
            return -1;
        }
};

class SrteMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf te;
        static const ydk::Enum::YLeaf igp;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "te") return 1;
            if (name == "igp") return 2;
            return -1;
        }
};

class FirmwareRunningOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf ver_mismatch;

        static int get_enum_value(const std::string & name) {
            if (name == "ok") return 0;
            if (name == "ver-mismatch") return 1;
            return -1;
        }
};

class AclVAclActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf forward;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf redirect;

        static int get_enum_value(const std::string & name) {
            if (name == "invalid") return 0;
            if (name == "forward") return 1;
            if (name == "drop") return 2;
            if (name == "redirect") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "eobc") return 1;
            if (name == "mgmt") return 2;
            if (name == "fab") return 3;
            if (name == "leaf") return 4;
            if (name == "extchhp") return 5;
            if (name == "extchfp") return 6;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "router") return 1;
            if (name == "nw") return 2;
            if (name == "summary") return 3;
            if (name == "asbr") return 4;
            if (name == "ext") return 5;
            if (name == "nssa") return 7;
            if (name == "link-opq") return 9;
            if (name == "area-opq") return 10;
            if (name == "as-opq") return 11;
            return -1;
        }
};

class SysmgrCfgMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf replay;
        static const ydk::Enum::YLeaf done;

        static int get_enum_value(const std::string & name) {
            if (name == "init") return 1;
            if (name == "replay") return 2;
            if (name == "done") return 4;
            return -1;
        }
};

class ArpStAdjOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf unspecified;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 0;
            if (name == "up") return 1;
            if (name == "unspecified") return 10;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "1000") return 3;
            if (name == "25000") return 10;
            if (name == "10000") return 4;
            if (name == "40000") return 5;
            if (name == "auto") return 6;
            return -1;
        }
};

class OspfNssaTransSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf elected;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "elected") return 2;
            if (name == "disabled") return 3;
            return -1;
        }
};

class L2DomOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down") return 2;
            if (name == "unknown") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "300") return 1;
            if (name == "1200") return 2;
            if (name == "2400") return 3;
            if (name == "4800") return 4;
            if (name == "9600") return 5;
            if (name == "38400") return 6;
            if (name == "57600") return 7;
            if (name == "115200") return 8;
            return -1;
        }
};

class AcBankT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf even;
        static const ydk::Enum::YLeaf Odd;

        static int get_enum_value(const std::string & name) {
            if (name == "even") return 1;
            if (name == "Odd") return 2;
            return -1;
        }
};

class NatProtocolType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

        static int get_enum_value(const std::string & name) {
            if (name == "any") return 0;
            if (name == "tcp") return 1;
            if (name == "udp") return 2;
            return -1;
        }
};

class FvPcEnfPref : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enforced;
        static const ydk::Enum::YLeaf unenforced;

        static int get_enum_value(const std::string & name) {
            if (name == "enforced") return 1;
            if (name == "unenforced") return 2;
            return -1;
        }
};

class HsrpHsrpVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v1;
        static const ydk::Enum::YLeaf v2;

        static int get_enum_value(const std::string & name) {
            if (name == "v1") return 1;
            if (name == "v2") return 2;
            return -1;
        }
};

class NvoEvpnMcastStT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "supervisor") return 1;
            if (name == "linecard") return 2;
            if (name == "fabriccard") return 3;
            if (name == "sysctrlcard") return 4;
            if (name == "extchcard") return 5;
            if (name == "fan-tray") return 6;
            if (name == "power-supply") return 7;
            return -1;
        }
};

class L3VrfOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down") return 2;
            return -1;
        }
};

class NvoReplModeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf replicationServer;
        static const ydk::Enum::YLeaf ingressReplication;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "replicationServer") return 1;
            if (name == "ingressReplication") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "group") return 1;
            if (name == "fabric-mcgrp") return 2;
            if (name == "querier") return 3;
            if (name == "mrouter") return 4;
            if (name == "snoopstats") return 5;
            if (name == "policy") return 6;
            if (name == "snoop") return 7;
            if (name == "exptrack") return 8;
            if (name == "stats") return 9;
            if (name == "mac") return 10;
            if (name == "macoif") return 11;
            return -1;
        }
};

class CoppConformAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Undefined;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf drop;

        static int get_enum_value(const std::string & name) {
            if (name == "Undefined") return 0;
            if (name == "transmit") return 1;
            if (name == "drop") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "assert") return 0;
            if (name == "bidir") return 1;
            if (name == "cli") return 2;
            if (name == "dataRegRecv") return 3;
            if (name == "hello") return 4;
            if (name == "joinPrune") return 5;
            if (name == "mrib") return 6;
            if (name == "nullReg") return 7;
            if (name == "packet") return 8;
            if (name == "nbm") return 9;
            if (name == "pimInternal") return 10;
            if (name == "pimLib") return 11;
            if (name == "rp") return 12;
            if (name == "txlist") return 13;
            if (name == "vpc") return 14;
            if (name == "vrf") return 15;
            if (name == "jpSum") return 16;
            if (name == "jpTw") return 17;
            return -1;
        }
};

class NwAdminStIfStatProxyArp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class FmcastOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf inactive;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 1;
            if (name == "inactive") return 2;
            return -1;
        }
};

class ItdFailactionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nofailaction;
        static const ydk::Enum::YLeaf nodeReassign;
        static const ydk::Enum::YLeaf nodeLeastBucket;
        static const ydk::Enum::YLeaf nodePerBucket;
        static const ydk::Enum::YLeaf bucketDistribute;

        static int get_enum_value(const std::string & name) {
            if (name == "nofailaction") return 0;
            if (name == "nodeReassign") return 1;
            if (name == "nodeLeastBucket") return 2;
            if (name == "nodePerBucket") return 3;
            if (name == "bucketDistribute") return 4;
            return -1;
        }
};

class SyslogOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf available;
        static const ydk::Enum::YLeaf errored;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "available") return 1;
            if (name == "errored") return 2;
            return -1;
        }
};

class LcmMulticastOptimization : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 0;
            if (name == "disable") return 1;
            return -1;
        }
};

class L1SnmpTrapSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            return -1;
        }
};

class NdAdjOperSt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf incomplete;
        static const ydk::Enum::YLeaf normal;

        static int get_enum_value(const std::string & name) {
            if (name == "unspecified") return 0;
            if (name == "incomplete") return 1;
            if (name == "normal") return 2;
            return -1;
        }
};

class CommSshKeyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsa;
        static const ydk::Enum::YLeaf dsa;
        static const ydk::Enum::YLeaf ecdsa;

        static int get_enum_value(const std::string & name) {
            if (name == "rsa") return 1;
            if (name == "dsa") return 2;
            if (name == "ecdsa") return 3;
            return -1;
        }
};

class NbmNbmNoYes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NO;
        static const ydk::Enum::YLeaf YES;
        static const ydk::Enum::YLeaf NA;

        static int get_enum_value(const std::string & name) {
            if (name == "NO") return 0;
            if (name == "YES") return 1;
            if (name == "NA") return 2;
            return -1;
        }
};

class BfdAuthT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf met_sha1;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "sha1") return 4;
            if (name == "met-sha1") return 5;
            return -1;
        }
};


}
}

#endif /* _CISCO_NX_OS_DEVICE_0_ */

