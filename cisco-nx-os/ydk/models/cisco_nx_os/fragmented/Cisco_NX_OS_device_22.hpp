#ifndef _CISCO_NX_OS_DEVICE_22_
#define _CISCO_NX_OS_DEVICE_22_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_21.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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
        class CErrDisableInterfaceEventRev1Items; //type: System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems> ciscoxcvrmonstatuschg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems> linkdown_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems> linkup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems> extendedlinkdown_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems> extendedlinkup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems> cielinkdown_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems> cielinkup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems> delayedlinkstatechange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items> cerrdisableinterfaceeventrev1_items;
        
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems


class System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items : public ydk::Entity
{
    public:
        CErrDisableInterfaceEventRev1Items();
        ~CErrDisableInterfaceEventRev1Items();

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

}; // System::SnmpItems::InstItems::TrapsItems::LinkItems::CErrDisableInterfaceEventRev1Items


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

        ydk::YLeaf trapconfigstatus; //type: SnmpTrapConfigErrorType
        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf trapconfigstatus; //type: SnmpTrapConfigErrorType
        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf trapconfigstatus; //type: SnmpTrapConfigErrorType
        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf trapconfigstatus; //type: SnmpTrapConfigErrorType
        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf trapconfigstatus; //type: SnmpTrapConfigErrorType
        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf trapconfigstatus; //type: SnmpTrapConfigErrorType
        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
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

        ydk::YLeaf trapconfigstatus; //type: SnmpTrapConfigErrorType
        ydk::YLeaf togglestate; //type: uint16
        ydk::YLeaf togglestatecount; //type: uint16
        ydk::YLeaf trapstatus; //type: SnmpSnmpTrapSt
        ydk::YLeaf istoggleaction; //type: uint16

}; // System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems


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
        ydk::YLeaf encauthpwd; //type: string
        ydk::YLeaf authpwdlen; //type: uint32
        ydk::YLeaf authtype; //type: SnmpAuthTypeT
        ydk::YLeaf privpwd; //type: string
        ydk::YLeaf encprivpwd; //type: string
        ydk::YLeaf privpwdlen; //type: uint32
        ydk::YLeaf privtype; //type: SnmpPrivTypeT
        ydk::YLeaf islocalizedkey; //type: boolean
        ydk::YLeaf isenforcepriv; //type: boolean
        ydk::YLeaf usrengineidlen; //type: uint8
        ydk::YLeaf isaaanotify; //type: SnmpBoolean

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
        ydk::YLeaf authpwd; //type: string
        ydk::YLeaf encauthpwd; //type: string
        ydk::YLeaf authpwdlen; //type: uint32
        ydk::YLeaf authtype; //type: SnmpAuthTypeT
        ydk::YLeaf privpwd; //type: string
        ydk::YLeaf encprivpwd; //type: string
        ydk::YLeaf privpwdlen; //type: uint32
        ydk::YLeaf privtype; //type: SnmpPrivTypeT
        ydk::YLeaf islocalizedkey; //type: boolean
        ydk::YLeaf isenforcepriv; //type: boolean
        ydk::YLeaf usrengineid; //type: string
        ydk::YLeaf usrengineidlen; //type: uint8
        ydk::YLeaf isaaanotify; //type: SnmpBoolean
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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string

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
        class RdstItems; //type: System::SyslogItems::RdstItems
        class SourceItems; //type: System::SyslogItems::SourceItems
        class FileItems; //type: System::SyslogItems::FileItems
        class InstItems; //type: System::SyslogItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::TimestampItems> timestamp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::LevelItems> level_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::MonitorItems> monitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SyslogItems::ConsoleItems> console_items;
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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
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
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf maxtranslation; //type: uint32
        ydk::YLeaf allhost; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class PoolItems; //type: System::NatItems::InstItems::PoolItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::PoolItems> pool_items;
        
}; // System::NatItems::InstItems


class System::NatItems::InstItems::PoolItems : public ydk::Entity
{
    public:
        PoolItems();
        ~PoolItems();

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

        class PoolList; //type: System::NatItems::InstItems::PoolItems::PoolList

        ydk::YList pool_list;
        
}; // System::NatItems::InstItems::PoolItems


class System::NatItems::InstItems::PoolItems::PoolList : public ydk::Entity
{
    public:
        PoolList();
        ~PoolList();

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

        ydk::YLeaf poolname; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf prefixlen; //type: uint32
        ydk::YLeaf noalias; //type: boolean
        class StartipItems; //type: System::NatItems::InstItems::PoolItems::PoolList::StartipItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NatItems::InstItems::PoolItems::PoolList::StartipItems> startip_items;
        
}; // System::NatItems::InstItems::PoolItems::PoolList


class System::NatItems::InstItems::PoolItems::PoolList::StartipItems : public ydk::Entity
{
    public:
        StartipItems();
        ~StartipItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PoolAddressList; //type: System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList

        ydk::YList pooladdress_list;
        
}; // System::NatItems::InstItems::PoolItems::PoolList::StartipItems


class System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList : public ydk::Entity
{
    public:
        PoolAddressList();
        ~PoolAddressList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf startip; //type: string
        ydk::YLeaf endip; //type: string
        ydk::YLeaf configerr; //type: string
        ydk::YLeaf casttomodify; //type: boolean
        ydk::YLeaf pooladdrdeleted; //type: boolean

}; // System::NatItems::InstItems::PoolItems::PoolList::StartipItems::PoolAddressList


class System::OdcreqItems : public ydk::Entity
{
    public:
        OdcreqItems();
        ~OdcreqItems();

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

        class ODevCmdReqList; //type: System::OdcreqItems::ODevCmdReqList

        ydk::YList odevcmdreq_list;
        
}; // System::OdcreqItems


class System::OdcreqItems::ODevCmdReqList : public ydk::Entity
{
    public:
        ODevCmdReqList();
        ~ODevCmdReqList();

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

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf sessid; //type: uint32
        ydk::YLeaf cmdid; //type: uint32
        ydk::YLeaf req; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::OdcreqItems::ODevCmdReqList


class System::OdcrespItems : public ydk::Entity
{
    public:
        OdcrespItems();
        ~OdcrespItems();

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

        class ODevCmdRespList; //type: System::OdcrespItems::ODevCmdRespList

        ydk::YList odevcmdresp_list;
        
}; // System::OdcrespItems


class System::OdcrespItems::ODevCmdRespList : public ydk::Entity
{
    public:
        ODevCmdRespList();
        ~ODevCmdRespList();

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

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf sessid; //type: uint32
        ydk::YLeaf cmdid; //type: uint32
        ydk::YLeaf resp; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::OdcrespItems::ODevCmdRespList


class System::OspfItems : public ydk::Entity
{
    public:
        OspfItems();
        ~OspfItems();

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
        ydk::YLeaf opererr; //type: string
        class InstItems; //type: System::OspfItems::InstItems
        class IfItems; //type: System::OspfItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems> inst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::IfItems> if_items;
        
}; // System::OspfItems


class System::OspfItems::InstItems : public ydk::Entity
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

        class InstList; //type: System::OspfItems::InstItems::InstList

        ydk::YList inst_list;
        
}; // System::OspfItems::InstItems


class System::OspfItems::InstItems::InstList : public ydk::Entity
{
    public:
        InstList();
        ~InstList();

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
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        ydk::YLeaf memalert; //type: NwMemAlertLevel
        ydk::YLeaf deletedviacli; //type: boolean
        class DomItems; //type: System::OspfItems::InstItems::InstList::DomItems
        class EvtlogsItems; //type: System::OspfItems::InstItems::InstList::EvtlogsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::EvtlogsItems> evtlogs_items;
        
}; // System::OspfItems::InstItems::InstList


class System::OspfItems::InstItems::InstList::DomItems : public ydk::Entity
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

        class DomList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems


class System::OspfItems::InstItems::InstList::DomItems::DomList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf rtrid; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf dist; //type: uint8
        ydk::YLeaf maxecmp; //type: uint8
        ydk::YLeaf bwref; //type: uint32
        ydk::YLeaf bwrefunit; //type: OspfBwRefUnit
        ydk::YLeaf defmetric; //type: uint32
        ydk::YLeaf rfc1583compat; //type: boolean
        ydk::YLeaf deletedviacli; //type: boolean
        ydk::YLeaf adjchangeloglevel; //type: OspfAdjChangeLogLevel
        ydk::YLeaf operst; //type: OspfOperSt
        ydk::YLeaf operrtrid; //type: string
        ydk::YLeaf discardroute; //type: string
        ydk::YLeaf downbitignore; //type: boolean
        ydk::YLeaf capvrflite; //type: OspfVrfLiteControl
        class AreaItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems
        class DbItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems
        class SpfcompItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems
        class LsactrlItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems
        class DomstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems
        class GrItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems
        class IfItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems
        class MaxlsapItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems
        class MaxmetriclsapItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems
        class DefrtleakItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems
        class InterleakItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems
        class LeakctrlItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems
        class RibleakItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems
        class ExtrtsumItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems
        class TrstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems> area_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems> spfcomp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems> lsactrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems> domstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems> gr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::MaxlsapItems> maxlsap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems> maxmetriclsap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DefrtleakItems> defrtleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::InterleakItems> interleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::LeakctrlItems> leakctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::RibleakItems> ribleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::ExtrtsumItems> extrtsum_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::TrstatsItems> trstats_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems : public ydk::Entity
{
    public:
        AreaItems();
        ~AreaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AreaList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList

        ydk::YList area_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList : public ydk::Entity
{
    public:
        AreaList();
        ~AreaList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: OspfAreaT
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf nssatransrole; //type: OspfNssaTransRole
        ydk::YLeaf brcnt; //type: uint32
        ydk::YLeaf asbrcnt; //type: uint32
        ydk::YLeaf lsacksumsum; //type: uint32
        ydk::YLeaf nssatransst; //type: OspfNssaTransSt
        ydk::YLeaf nssatransstabintvl; //type: uint32
        ydk::YLeaf authtype; //type: OspfAuthT
        class AreastatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems
        class DbItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems
        class VlinkItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems
        class SlinkItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems
        class LsaleakpItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems
        class LsaleakctrlpItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems
        class DefrtleakItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems
        class IartsumItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems> areastats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems> vlink_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems> slink_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems> lsaleakp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems> lsaleakctrlp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems> defrtleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems> iartsum_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems : public ydk::Entity
{
    public:
        AreastatsItems();
        ~AreastatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf areacreatedts; //type: string
        ydk::YLeaf spfruns; //type: uint32
        ydk::YLeaf lsacnt; //type: uint32
        ydk::YLeaf lastspfduration; //type: uint32
        ydk::YLeaf ifcnt; //type: uint32
        ydk::YLeaf activeifcnt; //type: uint32
        ydk::YLeaf passiveifcnt; //type: uint32
        ydk::YLeaf lpbkifcnt; //type: uint32
        ydk::YLeaf adjcnt; //type: uint32
        ydk::YLeaf grhelperpeercnt; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems : public ydk::Entity
{
    public:
        DbItems();
        ~DbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DbList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList : public ydk::Entity
{
    public:
        DbList();
        ~DbList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: OspfDbT
        ydk::YLeaf name; //type: string
        class LsaItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems
        class RtItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems> lsa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems> rt_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems : public ydk::Entity
{
    public:
        LsaItems();
        ~LsaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList

        ydk::YList lsarec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList : public ydk::Entity
{
    public:
        LsaRecList();
        ~LsaRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: OspfLsaT
        ydk::YLeaf id; //type: string
        ydk::YLeaf advrtr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf seq; //type: uint32
        ydk::YLeaf age; //type: uint32
        ydk::YLeaf arrivalts; //type: string
        ydk::YLeaf cksum; //type: uint32
        ydk::YLeaf advert; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
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
        ydk::YLeaf patht; //type: OspfPathT
        ydk::YLeaf area; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf ucastcost; //type: uint16
        ydk::YLeaf mcastcost; //type: uint16
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf dist; //type: uint8
        class UcnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems
        class McnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems> ucnh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems> mcnh_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems : public ydk::Entity
{
    public:
        UcnhItems();
        ~UcnhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UcNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList

        ydk::YList ucnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList : public ydk::Entity
{
    public:
        UcNexthopList();
        ~UcNexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf flags; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems : public ydk::Entity
{
    public:
        McnhItems();
        ~McnhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class McNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList

        ydk::YList mcnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList : public ydk::Entity
{
    public:
        McNexthopList();
        ~McNexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf flags; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems : public ydk::Entity
{
    public:
        VlinkItems();
        ~VlinkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VLinkList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList

        ydk::YList vlink_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList : public ydk::Entity
{
    public:
        VLinkList();
        ~VLinkList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nbrrtrid; //type: string
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf deadintvl; //type: uint16
        ydk::YLeaf rexmitintvl; //type: uint16
        ydk::YLeaf xmitdelay; //type: uint16
        class AdjItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems
        class AuthnewItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems> authnew_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems : public ydk::Entity
{
    public:
        AdjItems();
        ~AdjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjEpList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList : public ydk::Entity
{
    public:
        AdjEpList();
        ~AdjEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ifid; //type: uint32
        ydk::YLeaf operst; //type: OspfAdjOperSt
        ydk::YLeaf bfdst; //type: OspfBfdOperSt
        ydk::YLeaf area; //type: string
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf dr; //type: string
        ydk::YLeaf bdr; //type: string
        ydk::YLeaf peerip; //type: string
        ydk::YLeaf hellooptions; //type: uint32
        ydk::YLeaf dbdoptions; //type: uint32
        ydk::YLeaf flags; //type: string
        ydk::YLeaf peername; //type: string
        class AdjstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems
        class GrItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems> adjstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems> gr_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems : public ydk::Entity
{
    public:
        AdjstatsItems();
        ~AdjstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stchgcnt; //type: uint32
        ydk::YLeaf laststchgts; //type: string
        ydk::YLeaf lastnonhellopktts; //type: string
        ydk::YLeaf dbdseqnum; //type: uint32
        ydk::YLeaf reqlsacnt; //type: uint32
        ydk::YLeaf outstandinglsacnt; //type: uint32
        ydk::YLeaf lsareqrexmitcnt; //type: uint32
        ydk::YLeaf deadtimerexpts; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::AdjstatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems : public ydk::Entity
{
    public:
        GrItems();
        ~GrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf helperst; //type: OspfHelperSt
        ydk::YLeaf helperage; //type: uint32
        ydk::YLeaf helperexitqual; //type: OspfHelperExitQual

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AdjItems::AdjEpList::GrItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems : public ydk::Entity
{
    public:
        AuthnewItems();
        ~AuthnewItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: OspfAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf key; //type: string
        ydk::YLeaf keysecuremode; //type: boolean
        ydk::YLeaf md5key; //type: string
        ydk::YLeaf md5keysecuremode; //type: boolean
        ydk::YLeaf keychain; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::VlinkItems::VLinkList::AuthnewItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems : public ydk::Entity
{
    public:
        SlinkItems();
        ~SlinkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SLinkList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList

        ydk::YList slink_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList : public ydk::Entity
{
    public:
        SLinkList();
        ~SLinkList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf dstaddr; //type: string
        ydk::YLeaf demandckt; //type: boolean
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf deadintvl; //type: uint16
        ydk::YLeaf rexmitintvl; //type: uint16
        ydk::YLeaf xmitdelay; //type: uint16
        ydk::YLeaf cost; //type: uint16
        class AuthnewItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems> authnew_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems : public ydk::Entity
{
    public:
        AuthnewItems();
        ~AuthnewItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: OspfAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf key; //type: string
        ydk::YLeaf keysecuremode; //type: boolean
        ydk::YLeaf md5key; //type: string
        ydk::YLeaf md5keysecuremode; //type: boolean
        ydk::YLeaf keychain; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::SlinkItems::SLinkList::AuthnewItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems : public ydk::Entity
{
    public:
        LsaleakpItems();
        ~LsaleakpItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf operst; //type: OspfLsaLeakOperSt

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakpItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems : public ydk::Entity
{
    public:
        LsaleakctrlpItems();
        ~LsaleakctrlpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaLeakCtrlPList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList

        ydk::YList lsaleakctrlp_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList : public ydk::Entity
{
    public:
        LsaLeakCtrlPList();
        ~LsaLeakCtrlPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dir; //type: RtleakRtCtrlDir
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf operst; //type: OspfLsaLeakOperSt

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::LsaleakctrlpItems::LsaLeakCtrlPList


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems : public ydk::Entity
{
    public:
        DefrtleakItems();
        ~DefrtleakItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf always; //type: OspfAlways

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DefrtleakItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems : public ydk::Entity
{
    public:
        IartsumItems();
        ~IartsumItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterAreaRtSumList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList

        ydk::YList interareartsum_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList : public ydk::Entity
{
    public:
        InterAreaRtSumList();
        ~InterAreaRtSumList();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf comprtcnt; //type: uint32
        ydk::YLeaf opercost; //type: uint32
        ydk::YLeaf cost; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::IartsumItems::InterAreaRtSumList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems : public ydk::Entity
{
    public:
        DbItems();
        ~DbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DbList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList : public ydk::Entity
{
    public:
        DbList();
        ~DbList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: OspfDbT
        ydk::YLeaf name; //type: string
        class LsaItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems
        class RtItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems> lsa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems> rt_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems : public ydk::Entity
{
    public:
        LsaItems();
        ~LsaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList

        ydk::YList lsarec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList : public ydk::Entity
{
    public:
        LsaRecList();
        ~LsaRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: OspfLsaT
        ydk::YLeaf id; //type: string
        ydk::YLeaf advrtr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf seq; //type: uint32
        ydk::YLeaf age; //type: uint32
        ydk::YLeaf arrivalts; //type: string
        ydk::YLeaf cksum; //type: uint32
        ydk::YLeaf advert; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
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
        ydk::YLeaf patht; //type: OspfPathT
        ydk::YLeaf area; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf ucastcost; //type: uint16
        ydk::YLeaf mcastcost; //type: uint16
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf dist; //type: uint8
        class UcnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems
        class McnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems> ucnh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems> mcnh_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems : public ydk::Entity
{
    public:
        UcnhItems();
        ~UcnhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UcNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList

        ydk::YList ucnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList : public ydk::Entity
{
    public:
        UcNexthopList();
        ~UcNexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf flags; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems : public ydk::Entity
{
    public:
        McnhItems();
        ~McnhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class McNexthopList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList

        ydk::YList mcnexthop_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList : public ydk::Entity
{
    public:
        McNexthopList();
        ~McNexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf flags; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList


class System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems : public ydk::Entity
{
    public:
        SpfcompItems();
        ~SpfcompItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf initintvl; //type: uint32
        ydk::YLeaf holdintvl; //type: uint32
        ydk::YLeaf maxintvl; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::SpfcompItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems : public ydk::Entity
{
    public:
        LsactrlItems();
        ~LsactrlItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf gppacingintvl; //type: uint16
        ydk::YLeaf arrivalintvl; //type: uint32
        ydk::YLeaf startintvl; //type: uint32
        ydk::YLeaf holdintvl; //type: uint32
        ydk::YLeaf maxintvl; //type: uint32

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::LsactrlItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems : public ydk::Entity
{
    public:
        DomstatsItems();
        ~DomstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ifcnt; //type: uint32
        ydk::YLeaf areacnt; //type: uint32
        ydk::YLeaf stubareacnt; //type: uint32
        ydk::YLeaf nssaareacnt; //type: uint32
        ydk::YLeaf extareacnt; //type: uint32
        ydk::YLeaf activestubareacnt; //type: uint32
        ydk::YLeaf activenssaareacnt; //type: uint32
        ydk::YLeaf activeextareacnt; //type: uint32
        ydk::YLeaf activeareacnt; //type: uint32
        ydk::YLeaf laststatsclearts; //type: string
        ydk::YLeaf peercnt; //type: uint32
        ydk::YLeaf extlsacnt; //type: uint32
        ydk::YLeaf opaqueaslsacnt; //type: uint32
        ydk::YLeaf totalaslsacnt; //type: uint32
        ydk::YLeaf newlsarxcnt; //type: uint32
        ydk::YLeaf newlsatxcnt; //type: uint32
        ydk::YLeaf areabdrrtr; //type: uint8
        ydk::YLeaf asbdrrtr; //type: uint8

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::DomstatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems : public ydk::Entity
{
    public:
        GrItems();
        ~GrItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf ctrl; //type: OspfGrCtrl
        ydk::YLeaf helper; //type: boolean
        ydk::YLeaf graceperiod; //type: uint32
        ydk::YLeaf restartstatus; //type: OspfRestartStatus
        ydk::YLeaf restartage; //type: uint32
        ydk::YLeaf restartexitreason; //type: OspfRestartExitReason

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::GrItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList : public ydk::Entity
{
    public:
        IfList();
        ~IfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf passivectrl; //type: OspfPassiveControl
        ydk::YLeaf bfdctrl; //type: OspfBfdControl
        ydk::YLeaf nwt; //type: OspfNwT
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf area; //type: string
        ydk::YLeaf advertisesecondaries; //type: boolean
        ydk::YLeaf operst; //type: OspfIfOperSt
        ydk::YLeaf failstqual; //type: string
        ydk::YLeaf type; //type: OspfIfType
        ydk::YLeaf flags; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf dr; //type: string
        ydk::YLeaf bdr; //type: string
        ydk::YLeaf drid; //type: string
        ydk::YLeaf bdrid; //type: string
        ydk::YLeaf lsacksumsum; //type: uint32
        ydk::YLeaf opercost; //type: uint16
        ydk::YLeaf operdeadintvl; //type: uint16
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf deadintvl; //type: uint16
        ydk::YLeaf rexmitintvl; //type: uint16
        ydk::YLeaf xmitdelay; //type: uint16
        ydk::YLeaf cost; //type: uint16
        class AdjItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems
        class AuthItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems
        class AuthnewItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems
        class DbItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems
        class IfstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems
        class MultiareaItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems
        class TrstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems
        class RtospfIfDefToOspfIfItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems
        class RtvrfMbrItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems> auth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems> authnew_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MultiareaItems> multiarea_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems> trstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfIfItems> rtospfifdeftoospfif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems : public ydk::Entity
{
    public:
        AdjItems();
        ~AdjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjEpList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList : public ydk::Entity
{
    public:
        AdjEpList();
        ~AdjEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ifid; //type: uint32
        ydk::YLeaf operst; //type: OspfAdjOperSt
        ydk::YLeaf bfdst; //type: OspfBfdOperSt
        ydk::YLeaf area; //type: string
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf dr; //type: string
        ydk::YLeaf bdr; //type: string
        ydk::YLeaf peerip; //type: string
        ydk::YLeaf hellooptions; //type: uint32
        ydk::YLeaf dbdoptions; //type: uint32
        ydk::YLeaf flags; //type: string
        ydk::YLeaf peername; //type: string
        class AdjstatsItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems
        class GrItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems> adjstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems> gr_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems : public ydk::Entity
{
    public:
        AdjstatsItems();
        ~AdjstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stchgcnt; //type: uint32
        ydk::YLeaf laststchgts; //type: string
        ydk::YLeaf lastnonhellopktts; //type: string
        ydk::YLeaf dbdseqnum; //type: uint32
        ydk::YLeaf reqlsacnt; //type: uint32
        ydk::YLeaf outstandinglsacnt; //type: uint32
        ydk::YLeaf lsareqrexmitcnt; //type: uint32
        ydk::YLeaf deadtimerexpts; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems : public ydk::Entity
{
    public:
        GrItems();
        ~GrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf helperst; //type: OspfHelperSt
        ydk::YLeaf helperage; //type: uint32
        ydk::YLeaf helperexitqual; //type: OspfHelperExitQual

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems : public ydk::Entity
{
    public:
        AuthItems();
        ~AuthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: OspfAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf key; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems : public ydk::Entity
{
    public:
        AuthnewItems();
        ~AuthnewItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: OspfAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf key; //type: string
        ydk::YLeaf keysecuremode; //type: boolean
        ydk::YLeaf md5key; //type: string
        ydk::YLeaf md5keysecuremode; //type: boolean
        ydk::YLeaf keychain; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AuthnewItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems : public ydk::Entity
{
    public:
        DbItems();
        ~DbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DbList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList : public ydk::Entity
{
    public:
        DbList();
        ~DbList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: OspfDbT
        ydk::YLeaf name; //type: string
        class LsaItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems
        class RtItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems> lsa_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems> rt_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems : public ydk::Entity
{
    public:
        LsaItems();
        ~LsaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaRecList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList

        ydk::YList lsarec_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList : public ydk::Entity
{
    public:
        LsaRecList();
        ~LsaRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: OspfLsaT
        ydk::YLeaf id; //type: string
        ydk::YLeaf advrtr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf seq; //type: uint32
        ydk::YLeaf age; //type: uint32
        ydk::YLeaf arrivalts; //type: string
        ydk::YLeaf cksum; //type: uint32
        ydk::YLeaf advert; //type: string

}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems


class System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
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
        ydk::YLeaf patht; //type: OspfPathT
        ydk::YLeaf area; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf ucastcost; //type: uint16
        ydk::YLeaf mcastcost; //type: uint16
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf dist; //type: uint8
        class UcnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems
        class McnhItems; //type: System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems> ucnh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems> mcnh_items;
        
}; // System::OspfItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList


}
}

#endif /* _CISCO_NX_OS_DEVICE_22_ */

