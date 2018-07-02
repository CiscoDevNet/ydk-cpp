#ifndef _CISCO_IOS_XR_ASR9K_SC_DIAG_ADMIN_OPER_
#define _CISCO_IOS_XR_ASR9K_SC_DIAG_ADMIN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_sc_diag_admin_oper {

class Diag : public ydk::Entity
{
    public:
        Diag();
        ~Diag();

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

        class Racks; //type: Diag::Racks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks> racks;
        
}; // Diag


class Diag::Racks : public ydk::Entity
{
    public:
        Racks();
        ~Racks();

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

        class Rack; //type: Diag::Racks::Rack

        ydk::YList rack;
        
}; // Diag::Racks


class Diag::Racks::Rack : public ydk::Entity
{
    public:
        Rack();
        ~Rack();

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

        ydk::YLeaf rack_name; //type: uint32
        class FanTraies; //type: Diag::Racks::Rack::FanTraies
        class PowerSupplies; //type: Diag::Racks::Rack::PowerSupplies
        class Slots; //type: Diag::Racks::Rack::Slots
        class Chassis; //type: Diag::Racks::Rack::Chassis
        class Summary; //type: Diag::Racks::Rack::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies> fan_traies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies> power_supplies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots> slots;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Chassis> chassis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Summary> summary;
        
}; // Diag::Racks::Rack


class Diag::Racks::Rack::FanTraies : public ydk::Entity
{
    public:
        FanTraies();
        ~FanTraies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FanTray; //type: Diag::Racks::Rack::FanTraies::FanTray

        ydk::YList fan_tray;
        
}; // Diag::Racks::Rack::FanTraies


class Diag::Racks::Rack::FanTraies::FanTray : public ydk::Entity
{
    public:
        FanTray();
        ~FanTray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fan_tray_name; //type: string
        class Detail; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail> detail;
        
}; // Diag::Racks::Rack::FanTraies::FanTray


class Diag::Racks::Rack::FanTraies::FanTray::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Node; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Node
        class Spa; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Node> node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa> spa;
        
}; // Diag::Racks::Rack::FanTraies::FanTray::Detail


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf tan; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf new_deviation_number; //type: uint32
        ydk::YLeaf clei; //type: string
        ydk::YLeaf board_state; //type: NodeState
        ydk::YLeaf pld_motherboard; //type: string
        ydk::YLeaf pld_power; //type: string
        ydk::YLeaf monlib; //type: string
        ydk::YLeaf rommon; //type: string
        ydk::YLeaf cpu0; //type: DiagProcessor
        class Pld; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::Pld
        class HardwareRevision; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision
        class CbcActivePartition; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::CbcActivePartition
        class CbcInactivePartition; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::CbcInactivePartition

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::Pld> pld;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision> hardware_revision;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::CbcActivePartition> cbc_active_partition;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::CbcInactivePartition> cbc_inactive_partition;
        
}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Node


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::Pld : public ydk::Entity
{
    public:
        Pld();
        ~Pld();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint32
        ydk::YLeaf processor_higher_version; //type: uint32
        ydk::YLeaf processor_lower_version; //type: uint32

}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::Pld


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision : public ydk::Entity
{
    public:
        HardwareRevision();
        ~HardwareRevision();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HardwareRevision_; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_

        ydk::YList hardware_revision;
        
}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_ : public ydk::Entity
{
    public:
        HardwareRevision_();
        ~HardwareRevision_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_description; //type: string
        ydk::YLeaf version; //type: string
        class HwRev; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev
        class FwRev; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev
        class SwRev; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev
        class DimmRev; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev
        class SsdRev; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev> hw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev> fw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev> sw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev> dimm_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev> ssd_rev;
        
}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev : public ydk::Entity
{
    public:
        HwRev();
        ~HwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::HwRev


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev : public ydk::Entity
{
    public:
        FwRev();
        ~FwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::FwRev


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev : public ydk::Entity
{
    public:
        SwRev();
        ~SwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SwRev


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev : public ydk::Entity
{
    public:
        DimmRev();
        ~DimmRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint32
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf locator; //type: string
        ydk::YLeaf cas; //type: uint32

}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev : public ydk::Entity
{
    public:
        SsdRev();
        ~SsdRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: string
        ydk::YLeaf fw_rev; //type: string
        ydk::YLeaf serial_number; //type: string

}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::CbcActivePartition : public ydk::Entity
{
    public:
        CbcActivePartition();
        ~CbcActivePartition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::CbcActivePartition


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::CbcInactivePartition : public ydk::Entity
{
    public:
        CbcInactivePartition();
        ~CbcInactivePartition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Node::CbcInactivePartition


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa : public ydk::Entity
{
    public:
        Spa();
        ~Spa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf pca_unit_number; //type: string
        ydk::YLeaf pca_revision; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf node_state; //type: NodeState
        class Main; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::Main
        class HardwareRevision; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::Main> main;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision> hardware_revision;
        
}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::Main : public ydk::Entity
{
    public:
        Main();
        ~Main();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf board_type; //type: uint32
        ydk::YLeaf tan; //type: string
        ydk::YLeaf tan_revision; //type: string
        ydk::YLeaf deviation_number; //type: uint32
        ydk::YLeaf serial_number; //type: string

}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::Main


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision : public ydk::Entity
{
    public:
        HardwareRevision();
        ~HardwareRevision();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HardwareRevision_; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_

        ydk::YList hardware_revision;
        
}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_ : public ydk::Entity
{
    public:
        HardwareRevision_();
        ~HardwareRevision_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_description; //type: string
        ydk::YLeaf version; //type: string
        class HwRev; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev
        class FwRev; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev
        class SwRev; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev
        class DimmRev; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev
        class SsdRev; //type: Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev> hw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev> fw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev> sw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev> dimm_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev> ssd_rev;
        
}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev : public ydk::Entity
{
    public:
        HwRev();
        ~HwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev : public ydk::Entity
{
    public:
        FwRev();
        ~FwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev : public ydk::Entity
{
    public:
        SwRev();
        ~SwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev : public ydk::Entity
{
    public:
        DimmRev();
        ~DimmRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint32
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf locator; //type: string
        ydk::YLeaf cas; //type: uint32

}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev


class Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev : public ydk::Entity
{
    public:
        SsdRev();
        ~SsdRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: string
        ydk::YLeaf fw_rev; //type: string
        ydk::YLeaf serial_number; //type: string

}; // Diag::Racks::Rack::FanTraies::FanTray::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev


class Diag::Racks::Rack::PowerSupplies : public ydk::Entity
{
    public:
        PowerSupplies();
        ~PowerSupplies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PowerSupply; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply

        ydk::YList power_supply;
        
}; // Diag::Racks::Rack::PowerSupplies


class Diag::Racks::Rack::PowerSupplies::PowerSupply : public ydk::Entity
{
    public:
        PowerSupply();
        ~PowerSupply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_supply_name; //type: string
        class Detail; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail> detail;
        
}; // Diag::Racks::Rack::PowerSupplies::PowerSupply


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Node; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node
        class Spa; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node> node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa> spa;
        
}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf tan; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf new_deviation_number; //type: uint32
        ydk::YLeaf clei; //type: string
        ydk::YLeaf board_state; //type: NodeState
        ydk::YLeaf pld_motherboard; //type: string
        ydk::YLeaf pld_power; //type: string
        ydk::YLeaf monlib; //type: string
        ydk::YLeaf rommon; //type: string
        ydk::YLeaf cpu0; //type: DiagProcessor
        class Pld; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld
        class HardwareRevision; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision
        class CbcActivePartition; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition
        class CbcInactivePartition; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld> pld;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision> hardware_revision;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition> cbc_active_partition;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition> cbc_inactive_partition;
        
}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld : public ydk::Entity
{
    public:
        Pld();
        ~Pld();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint32
        ydk::YLeaf processor_higher_version; //type: uint32
        ydk::YLeaf processor_lower_version; //type: uint32

}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::Pld


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision : public ydk::Entity
{
    public:
        HardwareRevision();
        ~HardwareRevision();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HardwareRevision_; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_

        ydk::YList hardware_revision;
        
}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_ : public ydk::Entity
{
    public:
        HardwareRevision_();
        ~HardwareRevision_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_description; //type: string
        ydk::YLeaf version; //type: string
        class HwRev; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev
        class FwRev; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev
        class SwRev; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev
        class DimmRev; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev
        class SsdRev; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev> hw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev> fw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev> sw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev> dimm_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev> ssd_rev;
        
}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev : public ydk::Entity
{
    public:
        HwRev();
        ~HwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::HwRev


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev : public ydk::Entity
{
    public:
        FwRev();
        ~FwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::FwRev


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev : public ydk::Entity
{
    public:
        SwRev();
        ~SwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SwRev


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev : public ydk::Entity
{
    public:
        DimmRev();
        ~DimmRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint32
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf locator; //type: string
        ydk::YLeaf cas; //type: uint32

}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev : public ydk::Entity
{
    public:
        SsdRev();
        ~SsdRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: string
        ydk::YLeaf fw_rev; //type: string
        ydk::YLeaf serial_number; //type: string

}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition : public ydk::Entity
{
    public:
        CbcActivePartition();
        ~CbcActivePartition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcActivePartition


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition : public ydk::Entity
{
    public:
        CbcInactivePartition();
        ~CbcInactivePartition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Node::CbcInactivePartition


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa : public ydk::Entity
{
    public:
        Spa();
        ~Spa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf pca_unit_number; //type: string
        ydk::YLeaf pca_revision; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf node_state; //type: NodeState
        class Main; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main
        class HardwareRevision; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main> main;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision> hardware_revision;
        
}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main : public ydk::Entity
{
    public:
        Main();
        ~Main();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf board_type; //type: uint32
        ydk::YLeaf tan; //type: string
        ydk::YLeaf tan_revision; //type: string
        ydk::YLeaf deviation_number; //type: uint32
        ydk::YLeaf serial_number; //type: string

}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::Main


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision : public ydk::Entity
{
    public:
        HardwareRevision();
        ~HardwareRevision();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HardwareRevision_; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_

        ydk::YList hardware_revision;
        
}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_ : public ydk::Entity
{
    public:
        HardwareRevision_();
        ~HardwareRevision_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_description; //type: string
        ydk::YLeaf version; //type: string
        class HwRev; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev
        class FwRev; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev
        class SwRev; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev
        class DimmRev; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev
        class SsdRev; //type: Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev> hw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev> fw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev> sw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev> dimm_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev> ssd_rev;
        
}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev : public ydk::Entity
{
    public:
        HwRev();
        ~HwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev : public ydk::Entity
{
    public:
        FwRev();
        ~FwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev : public ydk::Entity
{
    public:
        SwRev();
        ~SwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev : public ydk::Entity
{
    public:
        DimmRev();
        ~DimmRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint32
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf locator; //type: string
        ydk::YLeaf cas; //type: uint32

}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev


class Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev : public ydk::Entity
{
    public:
        SsdRev();
        ~SsdRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: string
        ydk::YLeaf fw_rev; //type: string
        ydk::YLeaf serial_number; //type: string

}; // Diag::Racks::Rack::PowerSupplies::PowerSupply::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev


class Diag::Racks::Rack::Slots : public ydk::Entity
{
    public:
        Slots();
        ~Slots();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Slot; //type: Diag::Racks::Rack::Slots::Slot

        ydk::YList slot;
        
}; // Diag::Racks::Rack::Slots


class Diag::Racks::Rack::Slots::Slot : public ydk::Entity
{
    public:
        Slot();
        ~Slot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slot_name; //type: string
        class Detail; //type: Diag::Racks::Rack::Slots::Slot::Detail
        class Instances; //type: Diag::Racks::Rack::Slots::Slot::Instances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances> instances;
        
}; // Diag::Racks::Rack::Slots::Slot


class Diag::Racks::Rack::Slots::Slot::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeDetail; //type: Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail
        class SpaDetail; //type: Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail

        ydk::YList node_detail;
        ydk::YList spa_detail;
        
}; // Diag::Racks::Rack::Slots::Slot::Detail


class Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail : public ydk::Entity
{
    public:
        NodeDetail();
        ~NodeDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf tan; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf new_deviation_number; //type: uint32
        ydk::YLeaf clei; //type: string
        ydk::YLeaf board_state; //type: NodeState
        ydk::YLeaf pld_motherboard; //type: string
        ydk::YLeaf pld_power; //type: string
        ydk::YLeaf monlib; //type: string
        ydk::YLeaf rommon; //type: string
        ydk::YLeaf cpu0; //type: DiagProcessor
        class Pld; //type: Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld
        class HardwareRevision; //type: Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision
        class CbcActivePartition; //type: Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition
        class CbcInactivePartition; //type: Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld> pld;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision> hardware_revision;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition> cbc_active_partition;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition> cbc_inactive_partition;
        
}; // Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail


class Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld : public ydk::Entity
{
    public:
        Pld();
        ~Pld();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint32
        ydk::YLeaf processor_higher_version; //type: uint32
        ydk::YLeaf processor_lower_version; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::Pld


class Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision : public ydk::Entity
{
    public:
        HardwareRevision();
        ~HardwareRevision();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HardwareRevision_; //type: Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_

        ydk::YList hardware_revision;
        
}; // Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision


class Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_ : public ydk::Entity
{
    public:
        HardwareRevision_();
        ~HardwareRevision_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_description; //type: string
        ydk::YLeaf version; //type: string
        class HwRev; //type: Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev
        class FwRev; //type: Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev
        class SwRev; //type: Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev
        class DimmRev; //type: Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev
        class SsdRev; //type: Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev> hw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev> fw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev> sw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev> dimm_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev> ssd_rev;
        
}; // Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_


class Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev : public ydk::Entity
{
    public:
        HwRev();
        ~HwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::HwRev


class Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev : public ydk::Entity
{
    public:
        FwRev();
        ~FwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::FwRev


class Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev : public ydk::Entity
{
    public:
        SwRev();
        ~SwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SwRev


class Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev : public ydk::Entity
{
    public:
        DimmRev();
        ~DimmRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint32
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf locator; //type: string
        ydk::YLeaf cas; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::DimmRev


class Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev : public ydk::Entity
{
    public:
        SsdRev();
        ~SsdRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: string
        ydk::YLeaf fw_rev; //type: string
        ydk::YLeaf serial_number; //type: string

}; // Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::HardwareRevision::HardwareRevision_::SsdRev


class Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition : public ydk::Entity
{
    public:
        CbcActivePartition();
        ~CbcActivePartition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcActivePartition


class Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition : public ydk::Entity
{
    public:
        CbcInactivePartition();
        ~CbcInactivePartition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Detail::NodeDetail::CbcInactivePartition


class Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail : public ydk::Entity
{
    public:
        SpaDetail();
        ~SpaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf pca_unit_number; //type: string
        ydk::YLeaf pca_revision; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf node_state; //type: NodeState
        class Main; //type: Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main
        class HardwareRevision; //type: Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main> main;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision> hardware_revision;
        
}; // Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail


class Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main : public ydk::Entity
{
    public:
        Main();
        ~Main();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf board_type; //type: uint32
        ydk::YLeaf tan; //type: string
        ydk::YLeaf tan_revision; //type: string
        ydk::YLeaf deviation_number; //type: uint32
        ydk::YLeaf serial_number; //type: string

}; // Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::Main


class Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision : public ydk::Entity
{
    public:
        HardwareRevision();
        ~HardwareRevision();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HardwareRevision_; //type: Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_

        ydk::YList hardware_revision;
        
}; // Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision


class Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_ : public ydk::Entity
{
    public:
        HardwareRevision_();
        ~HardwareRevision_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_description; //type: string
        ydk::YLeaf version; //type: string
        class HwRev; //type: Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev
        class FwRev; //type: Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev
        class SwRev; //type: Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev
        class DimmRev; //type: Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev
        class SsdRev; //type: Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev> hw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev> fw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev> sw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev> dimm_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev> ssd_rev;
        
}; // Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_


class Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev : public ydk::Entity
{
    public:
        HwRev();
        ~HwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::HwRev


class Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev : public ydk::Entity
{
    public:
        FwRev();
        ~FwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::FwRev


class Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev : public ydk::Entity
{
    public:
        SwRev();
        ~SwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SwRev


class Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev : public ydk::Entity
{
    public:
        DimmRev();
        ~DimmRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint32
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf locator; //type: string
        ydk::YLeaf cas; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::DimmRev


class Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev : public ydk::Entity
{
    public:
        SsdRev();
        ~SsdRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: string
        ydk::YLeaf fw_rev; //type: string
        ydk::YLeaf serial_number; //type: string

}; // Diag::Racks::Rack::Slots::Slot::Detail::SpaDetail::HardwareRevision::HardwareRevision_::SsdRev


class Diag::Racks::Rack::Slots::Slot::Instances : public ydk::Entity
{
    public:
        Instances();
        ~Instances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance

        ydk::YList instance;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances


class Diag::Racks::Rack::Slots::Slot::Instances::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_name; //type: string
        class Detail; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail> detail;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Node; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node
        class Spa; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node> node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa> spa;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf tan; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf new_deviation_number; //type: uint32
        ydk::YLeaf clei; //type: string
        ydk::YLeaf board_state; //type: NodeState
        ydk::YLeaf pld_motherboard; //type: string
        ydk::YLeaf pld_power; //type: string
        ydk::YLeaf monlib; //type: string
        ydk::YLeaf rommon; //type: string
        ydk::YLeaf cpu0; //type: DiagProcessor
        class Pld; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld
        class HardwareRevision; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision
        class CbcActivePartition; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition
        class CbcInactivePartition; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld> pld;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision> hardware_revision;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition> cbc_active_partition;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition> cbc_inactive_partition;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld : public ydk::Entity
{
    public:
        Pld();
        ~Pld();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint32
        ydk::YLeaf processor_higher_version; //type: uint32
        ydk::YLeaf processor_lower_version; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::Pld


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision : public ydk::Entity
{
    public:
        HardwareRevision();
        ~HardwareRevision();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HardwareRevision_; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_

        ydk::YList hardware_revision;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_ : public ydk::Entity
{
    public:
        HardwareRevision_();
        ~HardwareRevision_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_description; //type: string
        ydk::YLeaf version; //type: string
        class HwRev; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev
        class FwRev; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev
        class SwRev; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev
        class DimmRev; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev
        class SsdRev; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev> hw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev> fw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev> sw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev> dimm_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev> ssd_rev;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev : public ydk::Entity
{
    public:
        HwRev();
        ~HwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::HwRev


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev : public ydk::Entity
{
    public:
        FwRev();
        ~FwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::FwRev


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev : public ydk::Entity
{
    public:
        SwRev();
        ~SwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SwRev


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev : public ydk::Entity
{
    public:
        DimmRev();
        ~DimmRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint32
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf locator; //type: string
        ydk::YLeaf cas; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::DimmRev


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev : public ydk::Entity
{
    public:
        SsdRev();
        ~SsdRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: string
        ydk::YLeaf fw_rev; //type: string
        ydk::YLeaf serial_number; //type: string

}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::HardwareRevision::HardwareRevision_::SsdRev


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition : public ydk::Entity
{
    public:
        CbcActivePartition();
        ~CbcActivePartition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcActivePartition


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition : public ydk::Entity
{
    public:
        CbcInactivePartition();
        ~CbcInactivePartition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Node::CbcInactivePartition


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa : public ydk::Entity
{
    public:
        Spa();
        ~Spa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf pca_unit_number; //type: string
        ydk::YLeaf pca_revision; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf node_state; //type: NodeState
        class Main; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main
        class HardwareRevision; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main> main;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision> hardware_revision;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main : public ydk::Entity
{
    public:
        Main();
        ~Main();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf board_type; //type: uint32
        ydk::YLeaf tan; //type: string
        ydk::YLeaf tan_revision; //type: string
        ydk::YLeaf deviation_number; //type: uint32
        ydk::YLeaf serial_number; //type: string

}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::Main


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision : public ydk::Entity
{
    public:
        HardwareRevision();
        ~HardwareRevision();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HardwareRevision_; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_

        ydk::YList hardware_revision;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_ : public ydk::Entity
{
    public:
        HardwareRevision_();
        ~HardwareRevision_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_description; //type: string
        ydk::YLeaf version; //type: string
        class HwRev; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev
        class FwRev; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev
        class SwRev; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev
        class DimmRev; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev
        class SsdRev; //type: Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev> hw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev> fw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev> sw_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev> dimm_rev;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_sc_diag_admin_oper::Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev> ssd_rev;
        
}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev : public ydk::Entity
{
    public:
        HwRev();
        ~HwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::HwRev


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev : public ydk::Entity
{
    public:
        FwRev();
        ~FwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::FwRev


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev : public ydk::Entity
{
    public:
        SwRev();
        ~SwRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf major_revision; //type: uint32
        ydk::YLeaf minor_revision; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SwRev


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev : public ydk::Entity
{
    public:
        DimmRev();
        ~DimmRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint32
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf locator; //type: string
        ydk::YLeaf cas; //type: uint32

}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::DimmRev


class Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev : public ydk::Entity
{
    public:
        SsdRev();
        ~SsdRev();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: string
        ydk::YLeaf fw_rev; //type: string
        ydk::YLeaf serial_number; //type: string

}; // Diag::Racks::Rack::Slots::Slot::Instances::Instance::Detail::Spa::HardwareRevision::HardwareRevision_::SsdRev


class Diag::Racks::Rack::Chassis : public ydk::Entity
{
    public:
        Chassis();
        ~Chassis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf tan; //type: string

}; // Diag::Racks::Rack::Chassis


class Diag::Racks::Rack::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Summary_; //type: Diag::Racks::Rack::Summary::Summary_

        ydk::YList summary;
        
}; // Diag::Racks::Rack::Summary


class Diag::Racks::Rack::Summary::Summary_ : public ydk::Entity
{
    public:
        Summary_();
        ~Summary_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: DiagNode
        ydk::YLeaf node; //type: string
        ydk::YLeaf slot_type; //type: DiagSlot
        ydk::YLeaf description; //type: string

}; // Diag::Racks::Rack::Summary::Summary_

class DiagProcessor : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpc8614d;

};

class DiagSlot : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fan_tray;
        static const ydk::Enum::YLeaf power_module;
        static const ydk::Enum::YLeaf module;

};

class NodeState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_present;
        static const ydk::Enum::YLeaf present;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf rommon;
        static const ydk::Enum::YLeaf mbi_boot;
        static const ydk::Enum::YLeaf mbi_run;
        static const ydk::Enum::YLeaf xr_run;
        static const ydk::Enum::YLeaf bring_down;
        static const ydk::Enum::YLeaf xr_fail;
        static const ydk::Enum::YLeaf fdiag_run;
        static const ydk::Enum::YLeaf fdiag_fail;
        static const ydk::Enum::YLeaf power;
        static const ydk::Enum::YLeaf unpower;
        static const ydk::Enum::YLeaf mdr_warm_reload;
        static const ydk::Enum::YLeaf mdr_mbi_run;
        static const ydk::Enum::YLeaf maintenance_mode;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf not_monitor;
        static const ydk::Enum::YLeaf unknown_card;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf missing;
        static const ydk::Enum::YLeaf diag_download;
        static const ydk::Enum::YLeaf diag_not_monitor;
        static const ydk::Enum::YLeaf fabric_diag_not_monitor;
        static const ydk::Enum::YLeaf diag_rp_launch;
        static const ydk::Enum::YLeaf diag_run;
        static const ydk::Enum::YLeaf diag_pass;
        static const ydk::Enum::YLeaf diag_fail;
        static const ydk::Enum::YLeaf diag_timeout;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf spa_boot;
        static const ydk::Enum::YLeaf not_allowed_online;
        static const ydk::Enum::YLeaf stop;
        static const ydk::Enum::YLeaf incomp_version;
        static const ydk::Enum::YLeaf fpd_hold;
        static const ydk::Enum::YLeaf xr_preparation;
        static const ydk::Enum::YLeaf sync_ready;
        static const ydk::Enum::YLeaf xr_isolate;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf operational_lock;
        static const ydk::Enum::YLeaf going_down;
        static const ydk::Enum::YLeaf going_offline;
        static const ydk::Enum::YLeaf going_online;
        static const ydk::Enum::YLeaf offline;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf max;
        static const ydk::Enum::YLeaf unknown;

};

class DiagNode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf spa;

};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_SC_DIAG_ADMIN_OPER_ */

