#ifndef _CISCO_NX_OS_DEVICE_21_
#define _CISCO_NX_OS_DEVICE_21_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_20.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems : public ydk::Entity
{
    public:
        AclItems();
        ~AclItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf useaclname; //type: string
        ydk::YLeaf useipv4aclname; //type: string
        ydk::YLeaf useipv6aclname; //type: string

}; // System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems


class System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems : public ydk::Entity
{
    public:
        RscommToCtxAttItems();
        ~RscommToCtxAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf operst; //type: NwOSSum
        ydk::YLeaf operstqual; //type: string

}; // System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems


class System::SnmpItems::InstItems::UserItems : public ydk::Entity
{
    public:
        UserItems();
        ~UserItems();

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

        class UserSecPList; //type: System::SnmpItems::InstItems::UserItems::UserSecPList

        ydk::YList usersecp_list;
        
}; // System::SnmpItems::InstItems::UserItems


class System::SnmpItems::InstItems::UserItems::UserSecPList : public ydk::Entity
{
    public:
        UserSecPList();
        ~UserSecPList();

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
        ydk::YLeaf operst; //type: NwOSSum
        ydk::YLeaf descr; //type: string
        ydk::YLeaf authtype; //type: SnmpAuthType
        ydk::YLeaf authkey; //type: string
        ydk::YLeaf privtype; //type: SnmpPrivType
        ydk::YLeaf privkey; //type: string

}; // System::SnmpItems::InstItems::UserItems::UserSecPList


class System::SnmpItems::InstItems::CtxItems : public ydk::Entity
{
    public:
        CtxItems();
        ~CtxItems();

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

        class CtxList; //type: System::SnmpItems::InstItems::CtxItems::CtxList

        ydk::YList ctx_list;
        
}; // System::SnmpItems::InstItems::CtxItems


class System::SnmpItems::InstItems::CtxItems::CtxList : public ydk::Entity
{
    public:
        CtxList();
        ~CtxList();

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
        ydk::YLeaf ctxinstance; //type: string
        ydk::YLeaf ctxtopology; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf operst; //type: NwOSSum
        ydk::YLeaf descr; //type: string

}; // System::SnmpItems::InstItems::CtxItems::CtxList


class System::SnmpItems::InstItems::SysinfoItems : public ydk::Entity
{
    public:
        SysinfoItems();
        ~SysinfoItems();

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

        ydk::YLeaf syslocation; //type: string
        ydk::YLeaf syscontact; //type: string
        ydk::YLeaf sysdescription; //type: string

}; // System::SnmpItems::InstItems::SysinfoItems


class System::SnmpItems::InstItems::TrapsItems : public ydk::Entity
{
    public:
        TrapsItems();
        ~TrapsItems();

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

        class StormcontrolItems; //type: System::SnmpItems::InstItems::TrapsItems::StormcontrolItems
        class AaaItems; //type: System::SnmpItems::InstItems::TrapsItems::AaaItems
        class BfdItems; //type: System::SnmpItems::InstItems::TrapsItems::BfdItems
        class BridgeItems; //type: System::SnmpItems::InstItems::TrapsItems::BridgeItems
        class CallhomeItems; //type: System::SnmpItems::InstItems::TrapsItems::CallhomeItems
        class CfsItems; //type: System::SnmpItems::InstItems::TrapsItems::CfsItems
        class ConfigItems; //type: System::SnmpItems::InstItems::TrapsItems::ConfigItems
        class EntityItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems
        class FeaturecontrolItems; //type: System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems
        class HsrpItems; //type: System::SnmpItems::InstItems::TrapsItems::HsrpItems
        class GenericItems; //type: System::SnmpItems::InstItems::TrapsItems::GenericItems
        class IpItems; //type: System::SnmpItems::InstItems::TrapsItems::IpItems
        class LicenseItems; //type: System::SnmpItems::InstItems::TrapsItems::LicenseItems
        class PoeItems; //type: System::SnmpItems::InstItems::TrapsItems::PoeItems
        class LinkItems; //type: System::SnmpItems::InstItems::TrapsItems::LinkItems
        class LldpItems; //type: System::SnmpItems::InstItems::TrapsItems::LldpItems
        class MsdpItems; //type: System::SnmpItems::InstItems::TrapsItems::MsdpItems
        class MmodeItems; //type: System::SnmpItems::InstItems::TrapsItems::MmodeItems
        class PimItems; //type: System::SnmpItems::InstItems::TrapsItems::PimItems
        class RfItems; //type: System::SnmpItems::InstItems::TrapsItems::RfItems
        class RmonItems; //type: System::SnmpItems::InstItems::TrapsItems::RmonItems
        class SnmpItems_; //type: System::SnmpItems::InstItems::TrapsItems::SnmpItems_
        class StpxItems; //type: System::SnmpItems::InstItems::TrapsItems::StpxItems
        class SysmgrItems; //type: System::SnmpItems::InstItems::TrapsItems::SysmgrItems
        class SystemItems; //type: System::SnmpItems::InstItems::TrapsItems::SystemItems
        class UpgradeItems; //type: System::SnmpItems::InstItems::TrapsItems::UpgradeItems
        class VsanItems; //type: System::SnmpItems::InstItems::TrapsItems::VsanItems
        class VtpItems; //type: System::SnmpItems::InstItems::TrapsItems::VtpItems
        class PortsecurityItems; //type: System::SnmpItems::InstItems::TrapsItems::PortsecurityItems
        class MplsItems; //type: System::SnmpItems::InstItems::TrapsItems::MplsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::StormcontrolItems> stormcontrol_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::AaaItems> aaa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::BfdItems> bfd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::BridgeItems> bridge_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::CallhomeItems> callhome_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::CfsItems> cfs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::ConfigItems> config_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems> entity_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems> featurecontrol_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::HsrpItems> hsrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::GenericItems> generic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LicenseItems> license_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::PoeItems> poe_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems> link_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LldpItems> lldp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::MsdpItems> msdp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::MmodeItems> mmode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::PimItems> pim_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::RfItems> rf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::RmonItems> rmon_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::SnmpItems_> snmp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::StpxItems> stpx_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::SysmgrItems> sysmgr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::SystemItems> system_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::UpgradeItems> upgrade_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::VsanItems> vsan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::VtpItems> vtp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::PortsecurityItems> portsecurity_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::MplsItems> mpls_items;
        
}; // System::SnmpItems::InstItems::TrapsItems


class System::SnmpItems::InstItems::TrapsItems::StormcontrolItems : public ydk::Entity
{
    public:
        StormcontrolItems();
        ~StormcontrolItems();

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

        ydk::YLeaf traprate; //type: uint16
        class CpscEventRev1Items; //type: System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items> cpsceventrev1_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::StormcontrolItems


class System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items : public ydk::Entity
{
    public:
        CpscEventRev1Items();
        ~CpscEventRev1Items();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items


class System::SnmpItems::InstItems::TrapsItems::AaaItems : public ydk::Entity
{
    public:
        AaaItems();
        ~AaaItems();

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

        class ServerstatechangeItems; //type: System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems> serverstatechange_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::AaaItems


class System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems : public ydk::Entity
{
    public:
        ServerstatechangeItems();
        ~ServerstatechangeItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems


class System::SnmpItems::InstItems::TrapsItems::BfdItems : public ydk::Entity
{
    public:
        BfdItems();
        ~BfdItems();

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

        class SessiondownItems; //type: System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems
        class SessionupItems; //type: System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems> sessiondown_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems> sessionup_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::BfdItems


class System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems : public ydk::Entity
{
    public:
        SessiondownItems();
        ~SessiondownItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems


class System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems : public ydk::Entity
{
    public:
        SessionupItems();
        ~SessionupItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems


class System::SnmpItems::InstItems::TrapsItems::BridgeItems : public ydk::Entity
{
    public:
        BridgeItems();
        ~BridgeItems();

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

        class NewrootItems; //type: System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems
        class TopologychangeItems; //type: System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems> newroot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems> topologychange_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::BridgeItems


class System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems : public ydk::Entity
{
    public:
        NewrootItems();
        ~NewrootItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems


class System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems : public ydk::Entity
{
    public:
        TopologychangeItems();
        ~TopologychangeItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems


class System::SnmpItems::InstItems::TrapsItems::CallhomeItems : public ydk::Entity
{
    public:
        CallhomeItems();
        ~CallhomeItems();

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

        class EventnotifyItems; //type: System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems
        class SmtpsendfailItems; //type: System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems> eventnotify_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems> smtpsendfail_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::CallhomeItems


class System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems : public ydk::Entity
{
    public:
        EventnotifyItems();
        ~EventnotifyItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems


class System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems : public ydk::Entity
{
    public:
        SmtpsendfailItems();
        ~SmtpsendfailItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems


class System::SnmpItems::InstItems::TrapsItems::CfsItems : public ydk::Entity
{
    public:
        CfsItems();
        ~CfsItems();

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

        class StatechangenotifItems; //type: System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems
        class MergefailureItems; //type: System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems> statechangenotif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems> mergefailure_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::CfsItems


class System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems : public ydk::Entity
{
    public:
        StatechangenotifItems();
        ~StatechangenotifItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems


class System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems : public ydk::Entity
{
    public:
        MergefailureItems();
        ~MergefailureItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems


class System::SnmpItems::InstItems::TrapsItems::ConfigItems : public ydk::Entity
{
    public:
        ConfigItems();
        ~ConfigItems();

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

        class CcmCLIRunningConfigChangedItems; //type: System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems> ccmclirunningconfigchanged_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::ConfigItems


class System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems : public ydk::Entity
{
    public:
        CcmCLIRunningConfigChangedItems();
        ~CcmCLIRunningConfigChangedItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems : public ydk::Entity
{
    public:
        EntityItems();
        ~EntityItems();

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

        class EntitymibchangeItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems
        class EntitymodulestatuschangeItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems
        class EntitypowerstatuschangeItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems
        class EntitymoduleinsertedItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems
        class EntitymoduleremovedItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems
        class EntityunrecognisedmoduleItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems
        class EntityfanstatuschangeItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems
        class EntitypoweroutchangeItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems
        class EntitysensorItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems
        class CefcMIBEnableStatusNotificationItems; //type: System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems> entitymibchange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems> entitymodulestatuschange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems> entitypowerstatuschange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems> entitymoduleinserted_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems> entitymoduleremoved_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems> entityunrecognisedmodule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems> entityfanstatuschange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems> entitypoweroutchange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems> entitysensor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems> cefcmibenablestatusnotification_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::EntityItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems : public ydk::Entity
{
    public:
        EntitymibchangeItems();
        ~EntitymibchangeItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems : public ydk::Entity
{
    public:
        EntitymodulestatuschangeItems();
        ~EntitymodulestatuschangeItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems : public ydk::Entity
{
    public:
        EntitypowerstatuschangeItems();
        ~EntitypowerstatuschangeItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems : public ydk::Entity
{
    public:
        EntitymoduleinsertedItems();
        ~EntitymoduleinsertedItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems : public ydk::Entity
{
    public:
        EntitymoduleremovedItems();
        ~EntitymoduleremovedItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems : public ydk::Entity
{
    public:
        EntityunrecognisedmoduleItems();
        ~EntityunrecognisedmoduleItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems : public ydk::Entity
{
    public:
        EntityfanstatuschangeItems();
        ~EntityfanstatuschangeItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems : public ydk::Entity
{
    public:
        EntitypoweroutchangeItems();
        ~EntitypoweroutchangeItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems : public ydk::Entity
{
    public:
        EntitysensorItems();
        ~EntitysensorItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems


class System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems : public ydk::Entity
{
    public:
        CefcMIBEnableStatusNotificationItems();
        ~CefcMIBEnableStatusNotificationItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems


class System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems : public ydk::Entity
{
    public:
        FeaturecontrolItems();
        ~FeaturecontrolItems();

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

        class FeatureOpStatusChangeItems; //type: System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems
        class CiscoFeatOpStatusChangeItems; //type: System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems> featureopstatuschange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems> ciscofeatopstatuschange_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems


class System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems : public ydk::Entity
{
    public:
        FeatureOpStatusChangeItems();
        ~FeatureOpStatusChangeItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems


class System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems : public ydk::Entity
{
    public:
        CiscoFeatOpStatusChangeItems();
        ~CiscoFeatOpStatusChangeItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems


class System::SnmpItems::InstItems::TrapsItems::HsrpItems : public ydk::Entity
{
    public:
        HsrpItems();
        ~HsrpItems();

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

        class StatechangeItems; //type: System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems> statechange_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::HsrpItems


class System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems : public ydk::Entity
{
    public:
        StatechangeItems();
        ~StatechangeItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems


class System::SnmpItems::InstItems::TrapsItems::GenericItems : public ydk::Entity
{
    public:
        GenericItems();
        ~GenericItems();

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

        class ColdStartItems; //type: System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems
        class WarmStartItems; //type: System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems> coldstart_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems> warmstart_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::GenericItems


class System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems : public ydk::Entity
{
    public:
        ColdStartItems();
        ~ColdStartItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems


class System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems : public ydk::Entity
{
    public:
        WarmStartItems();
        ~WarmStartItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems


class System::SnmpItems::InstItems::TrapsItems::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

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

        class SlaItems; //type: System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems> sla_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::IpItems


class System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems : public ydk::Entity
{
    public:
        SlaItems();
        ~SlaItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems


class System::SnmpItems::InstItems::TrapsItems::LicenseItems : public ydk::Entity
{
    public:
        LicenseItems();
        ~LicenseItems();

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

        class NotifylicenseexpiryItems; //type: System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems
        class NotifylicenseexpirywarningItems; //type: System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems
        class NotifylicensefilemissingItems; //type: System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems
        class NotifynolicenseforfeatureItems; //type: System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems> notifylicenseexpiry_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems> notifylicenseexpirywarning_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems> notifylicensefilemissing_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems> notifynolicenseforfeature_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::LicenseItems


class System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems : public ydk::Entity
{
    public:
        NotifylicenseexpiryItems();
        ~NotifylicenseexpiryItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems


class System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems : public ydk::Entity
{
    public:
        NotifylicenseexpirywarningItems();
        ~NotifylicenseexpirywarningItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems


class System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems : public ydk::Entity
{
    public:
        NotifylicensefilemissingItems();
        ~NotifylicensefilemissingItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems


class System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems : public ydk::Entity
{
    public:
        NotifynolicenseforfeatureItems();
        ~NotifynolicenseforfeatureItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems


class System::SnmpItems::InstItems::TrapsItems::PoeItems : public ydk::Entity
{
    public:
        PoeItems();
        ~PoeItems();

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

        class PolicenotifyItems; //type: System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems
        class ControlenableItems; //type: System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems> policenotify_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems> controlenable_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::PoeItems


class System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems : public ydk::Entity
{
    public:
        PolicenotifyItems();
        ~PolicenotifyItems();

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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems


class System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems : public ydk::Entity
{
    public:
        ControlenableItems();
        ~ControlenableItems();

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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems


class System::SnmpItems::InstItems::TrapsItems::LinkItems : public ydk::Entity
{
    public:
        LinkItems();
        ~LinkItems();

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

        class CiscoxcvrmonstatuschgItems; //type: System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems
        class LinkDownItems; //type: System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems
        class LinkUpItems; //type: System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems
        class ExtendedlinkDownItems; //type: System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems
        class ExtendedlinkUpItems; //type: System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems
        class CieLinkDownItems; //type: System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems
        class CieLinkUpItems; //type: System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems
        class DelayedlinkstatechangeItems; //type: System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems
        class Cerrdisableinterfaceeventrev1Items; //type: System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items
        class CmnmacmovenotificationItems; //type: System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems> ciscoxcvrmonstatuschg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems> linkdown_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems> linkup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems> extendedlinkdown_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems> extendedlinkup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems> cielinkdown_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems> cielinkup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems> delayedlinkstatechange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items> cerrdisableinterfaceeventrev1_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems> cmnmacmovenotification_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::LinkItems


class System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems : public ydk::Entity
{
    public:
        CiscoxcvrmonstatuschgItems();
        ~CiscoxcvrmonstatuschgItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems


class System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems : public ydk::Entity
{
    public:
        LinkDownItems();
        ~LinkDownItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems


class System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems : public ydk::Entity
{
    public:
        LinkUpItems();
        ~LinkUpItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems


class System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems : public ydk::Entity
{
    public:
        ExtendedlinkDownItems();
        ~ExtendedlinkDownItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems


class System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems : public ydk::Entity
{
    public:
        ExtendedlinkUpItems();
        ~ExtendedlinkUpItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems


class System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems : public ydk::Entity
{
    public:
        CieLinkDownItems();
        ~CieLinkDownItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems


class System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems : public ydk::Entity
{
    public:
        CieLinkUpItems();
        ~CieLinkUpItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems


class System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems : public ydk::Entity
{
    public:
        DelayedlinkstatechangeItems();
        ~DelayedlinkstatechangeItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems


class System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items : public ydk::Entity
{
    public:
        Cerrdisableinterfaceeventrev1Items();
        ~Cerrdisableinterfaceeventrev1Items();

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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items


class System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems : public ydk::Entity
{
    public:
        CmnmacmovenotificationItems();
        ~CmnmacmovenotificationItems();

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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems


class System::SnmpItems::InstItems::TrapsItems::LldpItems : public ydk::Entity
{
    public:
        LldpItems();
        ~LldpItems();

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

        class LldpRemTablesChangeItems; //type: System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems> lldpremtableschange_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::LldpItems


class System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems : public ydk::Entity
{
    public:
        LldpRemTablesChangeItems();
        ~LldpRemTablesChangeItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems


class System::SnmpItems::InstItems::TrapsItems::MsdpItems : public ydk::Entity
{
    public:
        MsdpItems();
        ~MsdpItems();

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

        class MsdpBackwardTransitionItems; //type: System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems> msdpbackwardtransition_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::MsdpItems


class System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems : public ydk::Entity
{
    public:
        MsdpBackwardTransitionItems();
        ~MsdpBackwardTransitionItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems


class System::SnmpItems::InstItems::TrapsItems::MmodeItems : public ydk::Entity
{
    public:
        MmodeItems();
        ~MmodeItems();

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

        class CseMaintModeChangeNotifyItems; //type: System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems
        class CseNormalModeChangeNotifyItems; //type: System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems> csemaintmodechangenotify_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems> csenormalmodechangenotify_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::MmodeItems


class System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems : public ydk::Entity
{
    public:
        CseMaintModeChangeNotifyItems();
        ~CseMaintModeChangeNotifyItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems


class System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems : public ydk::Entity
{
    public:
        CseNormalModeChangeNotifyItems();
        ~CseNormalModeChangeNotifyItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems


class System::SnmpItems::InstItems::TrapsItems::PimItems : public ydk::Entity
{
    public:
        PimItems();
        ~PimItems();

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

        class PimNeighborLossItems; //type: System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems> pimneighborloss_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::PimItems


class System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems : public ydk::Entity
{
    public:
        PimNeighborLossItems();
        ~PimNeighborLossItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems


class System::SnmpItems::InstItems::TrapsItems::RfItems : public ydk::Entity
{
    public:
        RfItems();
        ~RfItems();

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

        class RedundancyframeworkItems; //type: System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems> redundancyframework_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::RfItems


class System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems : public ydk::Entity
{
    public:
        RedundancyframeworkItems();
        ~RedundancyframeworkItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems


class System::SnmpItems::InstItems::TrapsItems::RmonItems : public ydk::Entity
{
    public:
        RmonItems();
        ~RmonItems();

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

        class RisingAlarmItems; //type: System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems
        class FallingAlarmItems; //type: System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems
        class HcRisingAlarmItems; //type: System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems
        class HcFallingAlarmItems; //type: System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems> risingalarm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems> fallingalarm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems> hcrisingalarm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems> hcfallingalarm_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::RmonItems


class System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems : public ydk::Entity
{
    public:
        RisingAlarmItems();
        ~RisingAlarmItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems


class System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems : public ydk::Entity
{
    public:
        FallingAlarmItems();
        ~FallingAlarmItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems


class System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems : public ydk::Entity
{
    public:
        HcRisingAlarmItems();
        ~HcRisingAlarmItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems


class System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems : public ydk::Entity
{
    public:
        HcFallingAlarmItems();
        ~HcFallingAlarmItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems


class System::SnmpItems::InstItems::TrapsItems::SnmpItems_ : public ydk::Entity
{
    public:
        SnmpItems_();
        ~SnmpItems_();

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

        class AuthenticationItems; //type: System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems> authentication_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::SnmpItems_


class System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems : public ydk::Entity
{
    public:
        AuthenticationItems();
        ~AuthenticationItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems


class System::SnmpItems::InstItems::TrapsItems::StpxItems : public ydk::Entity
{
    public:
        StpxItems();
        ~StpxItems();

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

        class InconsistencyItems; //type: System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems
        class RootinconsistencyItems; //type: System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems
        class LoopinconsistencyItems; //type: System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems> inconsistency_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems> rootinconsistency_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems> loopinconsistency_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::StpxItems


class System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems : public ydk::Entity
{
    public:
        InconsistencyItems();
        ~InconsistencyItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems


class System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems : public ydk::Entity
{
    public:
        RootinconsistencyItems();
        ~RootinconsistencyItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems


class System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems : public ydk::Entity
{
    public:
        LoopinconsistencyItems();
        ~LoopinconsistencyItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems


class System::SnmpItems::InstItems::TrapsItems::SysmgrItems : public ydk::Entity
{
    public:
        SysmgrItems();
        ~SysmgrItems();

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

        class CseFailSwCoreNotifyExtendedItems; //type: System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems> csefailswcorenotifyextended_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::SysmgrItems


class System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems : public ydk::Entity
{
    public:
        CseFailSwCoreNotifyExtendedItems();
        ~CseFailSwCoreNotifyExtendedItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems


class System::SnmpItems::InstItems::TrapsItems::SystemItems : public ydk::Entity
{
    public:
        SystemItems();
        ~SystemItems();

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

        class ClockchangenotificationItems; //type: System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems> clockchangenotification_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::SystemItems


class System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems : public ydk::Entity
{
    public:
        ClockchangenotificationItems();
        ~ClockchangenotificationItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems


class System::SnmpItems::InstItems::TrapsItems::UpgradeItems : public ydk::Entity
{
    public:
        UpgradeItems();
        ~UpgradeItems();

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

        class UpgradeJobStatusNotifyItems; //type: System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems> upgradejobstatusnotify_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::UpgradeItems


class System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems : public ydk::Entity
{
    public:
        UpgradeJobStatusNotifyItems();
        ~UpgradeJobStatusNotifyItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems


class System::SnmpItems::InstItems::TrapsItems::VsanItems : public ydk::Entity
{
    public:
        VsanItems();
        ~VsanItems();

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

        class VsanPortMembershipChangeItems; //type: System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems
        class VsanStatusChangeItems; //type: System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems> vsanportmembershipchange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems> vsanstatuschange_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::VsanItems


class System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems : public ydk::Entity
{
    public:
        VsanPortMembershipChangeItems();
        ~VsanPortMembershipChangeItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems


class System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems : public ydk::Entity
{
    public:
        VsanStatusChangeItems();
        ~VsanStatusChangeItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems


class System::SnmpItems::InstItems::TrapsItems::VtpItems : public ydk::Entity
{
    public:
        VtpItems();
        ~VtpItems();

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

        class NotifsItems; //type: System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems
        class VlancreateItems; //type: System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems
        class VlandeleteItems; //type: System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems> notifs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems> vlancreate_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems> vlandelete_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::VtpItems


class System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems : public ydk::Entity
{
    public:
        NotifsItems();
        ~NotifsItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems


class System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems : public ydk::Entity
{
    public:
        VlancreateItems();
        ~VlancreateItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems


class System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems : public ydk::Entity
{
    public:
        VlandeleteItems();
        ~VlandeleteItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems


class System::SnmpItems::InstItems::TrapsItems::PortsecurityItems : public ydk::Entity
{
    public:
        PortsecurityItems();
        ~PortsecurityItems();

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

        class AccesssecuremacviolationItems; //type: System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems
        class TrunksecuremacviolationItems; //type: System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems> accesssecuremacviolation_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems> trunksecuremacviolation_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::PortsecurityItems


class System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems : public ydk::Entity
{
    public:
        AccesssecuremacviolationItems();
        ~AccesssecuremacviolationItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems


class System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems : public ydk::Entity
{
    public:
        TrunksecuremacviolationItems();
        ~TrunksecuremacviolationItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems


class System::SnmpItems::InstItems::TrapsItems::MplsItems : public ydk::Entity
{
    public:
        MplsItems();
        ~MplsItems();

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

        class LdpItems; //type: System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems> ldp_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::MplsItems


class System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems : public ydk::Entity
{
    public:
        LdpItems();
        ~LdpItems();

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

        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16
        class LdpsessiondownItems; //type: System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems
        class LdpsessionupItems; //type: System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems> ldpsessiondown_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems> ldpsessionup_items;
        
}; // System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems


class System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems : public ydk::Entity
{
    public:
        LdpsessiondownItems();
        ~LdpsessiondownItems();

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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems


class System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems : public ydk::Entity
{
    public:
        LdpsessionupItems();
        ~LdpsessionupItems();

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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems


class System::SnmpItems::InstItems::RmtUserItems : public ydk::Entity
{
    public:
        RmtUserItems();
        ~RmtUserItems();

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

        class RemoteUserList; //type: System::SnmpItems::InstItems::RmtUserItems::RemoteUserList

        ydk::YList remoteuser_list;
        
}; // System::SnmpItems::InstItems::RmtUserItems


class System::SnmpItems::InstItems::RmtUserItems::RemoteUserList : public ydk::Entity
{
    public:
        RemoteUserList();
        ~RemoteUserList();

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

        ydk::YLeaf username; //type: string
        ydk::YLeaf usrengineid; //type: string
        ydk::YLeaf authpwd; //type: string
        ydk::YLeaf authtype; //type: SnmpAuthTypeT
        ydk::YLeaf privpwd; //type: string
        ydk::YLeaf privtype; //type: SnmpPrivTypeT
        ydk::YLeaf islocalizedkey; //type: boolean
        ydk::YLeaf isenforcepriv; //type: boolean
        ydk::YLeaf usrengineidlen; //type: uint8

}; // System::SnmpItems::InstItems::RmtUserItems::RemoteUserList


class System::SnmpItems::InstItems::LclUserItems : public ydk::Entity
{
    public:
        LclUserItems();
        ~LclUserItems();

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

        class LocalUserList; //type: System::SnmpItems::InstItems::LclUserItems::LocalUserList

        ydk::YList localuser_list;
        
}; // System::SnmpItems::InstItems::LclUserItems


class System::SnmpItems::InstItems::LclUserItems::LocalUserList : public ydk::Entity
{
    public:
        LocalUserList();
        ~LocalUserList();

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

        ydk::YLeaf username; //type: string
        ydk::YLeaf ipv4aclname; //type: string
        ydk::YLeaf ipv6aclname; //type: string
        ydk::YLeaf authpwd; //type: string
        ydk::YLeaf authtype; //type: SnmpAuthTypeT
        ydk::YLeaf privpwd; //type: string
        ydk::YLeaf privtype; //type: SnmpPrivTypeT
        ydk::YLeaf islocalizedkey; //type: boolean
        ydk::YLeaf isenforcepriv; //type: boolean
        ydk::YLeaf usrengineid; //type: string
        ydk::YLeaf usrengineidlen; //type: uint8
        class GroupItems; //type: System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems> group_items;
        
}; // System::SnmpItems::InstItems::LclUserItems::LocalUserList


class System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems : public ydk::Entity
{
    public:
        GroupItems();
        ~GroupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UserGroupList; //type: System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList

        ydk::YList usergroup_list;
        
}; // System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems


class System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList : public ydk::Entity
{
    public:
        UserGroupList();
        ~UserGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf groupname; //type: string

}; // System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList


class System::SnmpItems::ServershutdownItems : public ydk::Entity
{
    public:
        ServershutdownItems();
        ~ServershutdownItems();

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

        ydk::YLeaf sysshutdown; //type: SnmpBoolean

}; // System::SnmpItems::ServershutdownItems


class System::SyslogacctItems : public ydk::Entity
{
    public:
        SyslogacctItems();
        ~SyslogacctItems();

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

        ydk::YLeaf timertick; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt

}; // System::SyslogacctItems


class System::SyslogItems : public ydk::Entity
{
    public:
        SyslogItems();
        ~SyslogItems();

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

        class TimestampItems; //type: System::SyslogItems::TimestampItems
        class LevelItems; //type: System::SyslogItems::LevelItems
        class MonitorItems; //type: System::SyslogItems::MonitorItems
        class ConsoleItems; //type: System::SyslogItems::ConsoleItems
        class OriginidItems; //type: System::SyslogItems::OriginidItems
        class RdstItems; //type: System::SyslogItems::RdstItems
        class SourceItems; //type: System::SyslogItems::SourceItems
        class FileItems; //type: System::SyslogItems::FileItems
        class InstItems; //type: System::SyslogItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::TimestampItems> timestamp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::LevelItems> level_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::MonitorItems> monitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::ConsoleItems> console_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::OriginidItems> originid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::RdstItems> rdst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::SourceItems> source_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::FileItems> file_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::InstItems> inst_items;
        
}; // System::SyslogItems


class System::SyslogItems::TimestampItems : public ydk::Entity
{
    public:
        TimestampItems();
        ~TimestampItems();

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

        ydk::YLeaf format; //type: SyslogTimeStampFormat

}; // System::SyslogItems::TimestampItems


class System::SyslogItems::LevelItems : public ydk::Entity
{
    public:
        LevelItems();
        ~LevelItems();

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

        class LevelList; //type: System::SyslogItems::LevelItems::LevelList

        ydk::YList level_list;
        
}; // System::SyslogItems::LevelItems


class System::SyslogItems::LevelItems::LevelList : public ydk::Entity
{
    public:
        LevelList();
        ~LevelList();

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

        ydk::YLeaf facility; //type: SyslogFacility
        ydk::YLeaf severity; //type: SyslogSeverityLevelSeverity

}; // System::SyslogItems::LevelItems::LevelList


class System::SyslogItems::MonitorItems : public ydk::Entity
{
    public:
        MonitorItems();
        ~MonitorItems();

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

        ydk::YLeaf adminstate; //type: MonAdminState
        ydk::YLeaf severity; //type: SyslogSeverity

}; // System::SyslogItems::MonitorItems


class System::SyslogItems::ConsoleItems : public ydk::Entity
{
    public:
        ConsoleItems();
        ~ConsoleItems();

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

        ydk::YLeaf adminstate; //type: MonAdminState
        ydk::YLeaf severity; //type: SyslogSeverity

}; // System::SyslogItems::ConsoleItems


class System::SyslogItems::OriginidItems : public ydk::Entity
{
    public:
        OriginidItems();
        ~OriginidItems();

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

        ydk::YLeaf idtype; //type: SyslogOriginIdType
        ydk::YLeaf idvalue; //type: string

}; // System::SyslogItems::OriginidItems


class System::SyslogItems::RdstItems : public ydk::Entity
{
    public:
        RdstItems();
        ~RdstItems();

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

        class RemoteDestList; //type: System::SyslogItems::RdstItems::RemoteDestList

        ydk::YList remotedest_list;
        
}; // System::SyslogItems::RdstItems


class System::SyslogItems::RdstItems::RemoteDestList : public ydk::Entity
{
    public:
        RemoteDestList();
        ~RemoteDestList();

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

        ydk::YLeaf host; //type: string
        ydk::YLeaf severity; //type: SyslogSeverity
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf transport; //type: MonTransport
        ydk::YLeaf trustpointclientidentity; //type: string
        ydk::YLeaf forwardingfacility; //type: SyslogFacility
        ydk::YLeaf adminstate; //type: MonAdminState
        ydk::YLeaf vrfid; //type: uint32
        ydk::YLeaf ip; //type: string
        ydk::YLeaf operstate; //type: SyslogOperState
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf epgdn; //type: string
        ydk::YLeaf vrfname; //type: string
        class DeststItems; //type: System::SyslogItems::RdstItems::RemoteDestList::DeststItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::RdstItems::RemoteDestList::DeststItems> destst_items;
        
}; // System::SyslogItems::RdstItems::RemoteDestList


class System::SyslogItems::RdstItems::RemoteDestList::DeststItems : public ydk::Entity
{
    public:
        DeststItems();
        ~DeststItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestStateList; //type: System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList

        ydk::YList deststate_list;
        
}; // System::SyslogItems::RdstItems::RemoteDestList::DeststItems


class System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList : public ydk::Entity
{
    public:
        DestStateList();
        ~DestStateList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf operstate; //type: SyslogOperState
        ydk::YLeaf vrfid; //type: uint32
        ydk::YLeaf ip; //type: string
        ydk::YLeaf totalbufferedmsgs; //type: uint32
        ydk::YLeaf totaldroppedmsgs; //type: uint32
        ydk::YLeaf descr; //type: string
        class MsgItems; //type: System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems> msg_items;
        
}; // System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList


class System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems : public ydk::Entity
{
    public:
        MsgItems();
        ~MsgItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LogMsgList; //type: System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList

        ydk::YList logmsg_list;
        
}; // System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems


class System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList : public ydk::Entity
{
    public:
        LogMsgList();
        ~LogMsgList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf message; //type: string
        ydk::YLeaf facility; //type: string
        ydk::YLeaf severity; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList


class System::SyslogItems::SourceItems : public ydk::Entity
{
    public:
        SourceItems();
        ~SourceItems();

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

        ydk::YLeaf adminstate; //type: MonAdminState
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf operstate; //type: SyslogOperState

}; // System::SyslogItems::SourceItems


class System::SyslogItems::FileItems : public ydk::Entity
{
    public:
        FileItems();
        ~FileItems();

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

        ydk::YLeaf adminstate; //type: MonAdminState
        ydk::YLeaf severity; //type: SyslogSeverity
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::SyslogItems::FileItems


class System::SyslogItems::InstItems : public ydk::Entity
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

        ydk::YLeaf modadminstate; //type: MonAdminState
        ydk::YLeaf modseverity; //type: SyslogSeverity

}; // System::SyslogItems::InstItems


class System::MtsItems : public ydk::Entity
{
    public:
        MtsItems();
        ~MtsItems();

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

        class TopsapsItems; //type: System::MtsItems::TopsapsItems
        class QfullsapsItems; //type: System::MtsItems::QfullsapsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MtsItems::TopsapsItems> topsaps_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MtsItems::QfullsapsItems> qfullsaps_items;
        
}; // System::MtsItems


class System::MtsItems::TopsapsItems : public ydk::Entity
{
    public:
        TopsapsItems();
        ~TopsapsItems();

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

        ydk::YLeaf memused; //type: uint32
        class TsapItems; //type: System::MtsItems::TopsapsItems::TsapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MtsItems::TopsapsItems::TsapItems> tsap_items;
        
}; // System::MtsItems::TopsapsItems


class System::MtsItems::TopsapsItems::TsapItems : public ydk::Entity
{
    public:
        TsapItems();
        ~TsapItems();

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

        class TSapList; //type: System::MtsItems::TopsapsItems::TsapItems::TSapList

        ydk::YList tsap_list;
        
}; // System::MtsItems::TopsapsItems::TsapItems


class System::MtsItems::TopsapsItems::TsapItems::TSapList : public ydk::Entity
{
    public:
        TSapList();
        ~TSapList();

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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf sapid; //type: uint32
        ydk::YLeaf desc; //type: string
        ydk::YLeaf process; //type: string
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf msgcount; //type: uint32
        ydk::YLeaf bytescount; //type: uint32
        ydk::YLeaf memusedintotalmem; //type: uint32
        ydk::YLeaf memusedinsapshare; //type: uint32
        ydk::YLeaf nodeid; //type: uint32

}; // System::MtsItems::TopsapsItems::TsapItems::TSapList


class System::MtsItems::QfullsapsItems : public ydk::Entity
{
    public:
        QfullsapsItems();
        ~QfullsapsItems();

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

        class QsapItems; //type: System::MtsItems::QfullsapsItems::QsapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MtsItems::QfullsapsItems::QsapItems> qsap_items;
        
}; // System::MtsItems::QfullsapsItems


class System::MtsItems::QfullsapsItems::QsapItems : public ydk::Entity
{
    public:
        QsapItems();
        ~QsapItems();

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

        class QSapList; //type: System::MtsItems::QfullsapsItems::QsapItems::QSapList

        ydk::YList qsap_list;
        
}; // System::MtsItems::QfullsapsItems::QsapItems


class System::MtsItems::QfullsapsItems::QsapItems::QSapList : public ydk::Entity
{
    public:
        QSapList();
        ~QSapList();

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

        ydk::YLeaf sapid; //type: uint32
        ydk::YLeaf qstate; //type: string
        ydk::YLeaf desc; //type: string
        ydk::YLeaf process; //type: string
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf msgcount; //type: uint32
        ydk::YLeaf bytescount; //type: uint32
        ydk::YLeaf memusedintotalmem; //type: uint32
        ydk::YLeaf memusedinsapshare; //type: uint32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf nodeid; //type: uint32

}; // System::MtsItems::QfullsapsItems::QsapItems::QSapList


class System::NatItems : public ydk::Entity
{
    public:
        NatItems();
        ~NatItems();

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
        class InstItems; //type: System::NatItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems> inst_items;
        
}; // System::NatItems


class System::NatItems::InstItems : public ydk::Entity
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

        ydk::YLeaf tcptimeout; //type: uint32
        ydk::YLeaf udptimeout; //type: uint32
        ydk::YLeaf icmptimeout; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf samplingtimeout; //type: uint32
        ydk::YLeaf finrsttimeout; //type: int32
        ydk::YLeaf syntimeout; //type: int32
        ydk::YLeaf configerror; //type: NatConfigErrNat
        ydk::YLeaf logginglevel; //type: ArpLoggingLevel
        ydk::YLeaf creationdelay; //type: NatBatchTimeout
        ydk::YLeaf maxtranslation; //type: uint32
        ydk::YLeaf allhost; //type: uint32
        ydk::YLeaf name; //type: string
        class GlobalstatsItems; //type: System::NatItems::InstItems::GlobalstatsItems
        class DomItems; //type: System::NatItems::InstItems::DomItems
        class PoolItems; //type: System::NatItems::InstItems::PoolItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::GlobalstatsItems> globalstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::PoolItems> pool_items;
        
}; // System::NatItems::InstItems


class System::NatItems::InstItems::GlobalstatsItems : public ydk::Entity
{
    public:
        GlobalstatsItems();
        ~GlobalstatsItems();

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

        class NattransstatsItems; //type: System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems
        class NattransexpiredstatsItems; //type: System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems
        class NatpacketstatsItems; //type: System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems
        class NattcpstatsItems; //type: System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems
        class NatpktdropsItems; //type: System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems
        class AclItems; //type: System::NatItems::InstItems::GlobalstatsItems::AclItems
        class NatifstatsItems; //type: System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems> nattransstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems> nattransexpiredstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems> natpacketstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems> nattcpstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems> natpktdrops_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::GlobalstatsItems::AclItems> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems> natifstats_items;
        
}; // System::NatItems::InstItems::GlobalstatsItems


class System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems : public ydk::Entity
{
    public:
        NattransstatsItems();
        ~NattransstatsItems();

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

        ydk::YLeaf maxdyntransallowed; //type: uint64
        ydk::YLeaf maxperhosttransallowed; //type: uint64
        ydk::YLeaf noofactivestatic; //type: uint64
        ydk::YLeaf noofactivedyanamic; //type: uint64
        ydk::YLeaf noofactiveicmp; //type: uint64

}; // System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems


class System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems : public ydk::Entity
{
    public:
        NattransexpiredstatsItems();
        ~NattransexpiredstatsItems();

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

        ydk::YLeaf totalnoofexpiredtranslations; //type: uint64
        ydk::YLeaf noofsyntimerexpired; //type: uint64
        ydk::YLeaf nooffinrsttimerexpired; //type: uint64
        ydk::YLeaf noofinactivetimerexpired; //type: uint64

}; // System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems


class System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems : public ydk::Entity
{
    public:
        NatpacketstatsItems();
        ~NatpacketstatsItems();

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

        ydk::YLeaf totalhits; //type: uint64
        ydk::YLeaf hitintoout; //type: uint64
        ydk::YLeaf hitouttoin; //type: uint64
        ydk::YLeaf totalmisses; //type: uint64
        ydk::YLeaf missintoout; //type: uint64
        ydk::YLeaf missouttoin; //type: uint64
        ydk::YLeaf totalswtranslation; //type: uint64
        ydk::YLeaf swtranslationintoout; //type: uint64
        ydk::YLeaf swtranslationouttoin; //type: uint64

}; // System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems


class System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems : public ydk::Entity
{
    public:
        NattcpstatsItems();
        ~NattcpstatsItems();

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

        ydk::YLeaf tcpestablished; //type: uint64
        ydk::YLeaf tcpclosed; //type: uint64

}; // System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems


class System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems : public ydk::Entity
{
    public:
        NatpktdropsItems();
        ~NatpktdropsItems();

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

        ydk::YLeaf addrallocdrops; //type: uint64
        ydk::YLeaf portallocdrops; //type: uint64
        ydk::YLeaf maxlimitdrops; //type: uint64
        ydk::YLeaf icmpmaxlimitdrops; //type: uint64
        ydk::YLeaf allowedhostlimitdrops; //type: uint64
        ydk::YLeaf totalswdrops; //type: uint64
        ydk::YLeaf swdropintoout; //type: uint64
        ydk::YLeaf swdropouttoin; //type: uint64

}; // System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems


class System::NatItems::InstItems::GlobalstatsItems::AclItems : public ydk::Entity
{
    public:
        AclItems();
        ~AclItems();

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

        class NatAclPooldbList; //type: System::NatItems::InstItems::GlobalstatsItems::AclItems::NatAclPooldbList

        ydk::YList nataclpooldb_list;
        
}; // System::NatItems::InstItems::GlobalstatsItems::AclItems


class System::NatItems::InstItems::GlobalstatsItems::AclItems::NatAclPooldbList : public ydk::Entity
{
    public:
        NatAclPooldbList();
        ~NatAclPooldbList();

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

        ydk::YLeaf aclname; //type: string
        ydk::YLeaf overload; //type: string
        ydk::YLeaf poolname; //type: string
        ydk::YLeaf ruletype; //type: string
        ydk::YLeaf noofaddrinpool; //type: uint64
        ydk::YLeaf noofallocated; //type: uint64
        ydk::YLeaf noofmissed; //type: uint64
        ydk::YLeaf ifoverloadname; //type: string
        ydk::YLeaf ifoverloadaddr; //type: string
        ydk::YLeaf ifoverloadstate; //type: string

}; // System::NatItems::InstItems::GlobalstatsItems::AclItems::NatAclPooldbList


class System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems : public ydk::Entity
{
    public:
        NatifstatsItems();
        ~NatifstatsItems();

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

        ydk::YLeaf noofinsideinterface; //type: uint64
        ydk::YLeaf noofoutsideinterface; //type: uint64

}; // System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_21_ */

