#ifndef _CISCO_IOS_XR_PFM_OPER_
#define _CISCO_IOS_XR_PFM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pfm_oper {

class PlatformFaultManager : public ydk::Entity
{
    public:
        PlatformFaultManager();
        ~PlatformFaultManager();

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

        class Exclude; //type: PlatformFaultManager::Exclude
        class Racks; //type: PlatformFaultManager::Racks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Exclude> exclude;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Racks> racks;
        
}; // PlatformFaultManager


class PlatformFaultManager::Exclude : public ydk::Entity
{
    public:
        Exclude();
        ~Exclude();

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

        class FaultType1s; //type: PlatformFaultManager::Exclude::FaultType1s

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Exclude::FaultType1s> fault_type1s;
        
}; // PlatformFaultManager::Exclude


class PlatformFaultManager::Exclude::FaultType1s : public ydk::Entity
{
    public:
        FaultType1s();
        ~FaultType1s();

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

        class FaultType1; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1

        ydk::YList fault_type1;
        
}; // PlatformFaultManager::Exclude::FaultType1s


class PlatformFaultManager::Exclude::FaultType1s::FaultType1 : public ydk::Entity
{
    public:
        FaultType1();
        ~FaultType1();

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

        ydk::YLeaf hw_fault_type1; //type: string
        class FaultType2s; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s
        class Racks; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s> fault_type2s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks> racks;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s : public ydk::Entity
{
    public:
        FaultType2s();
        ~FaultType2s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FaultType2; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2

        ydk::YList fault_type2;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2 : public ydk::Entity
{
    public:
        FaultType2();
        ~FaultType2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hw_fault_type2; //type: string
        class FaultType3s; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s
        class Racks; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s> fault_type3s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks> racks;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s : public ydk::Entity
{
    public:
        FaultType3s();
        ~FaultType3s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FaultType3; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3

        ydk::YList fault_type3;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3 : public ydk::Entity
{
    public:
        FaultType3();
        ~FaultType3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hw_fault_type3; //type: string
        class Racks; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks> racks;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks : public ydk::Entity
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

        class Rack; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack

        ydk::YList rack;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack : public ydk::Entity
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

        ydk::YLeaf rack; //type: uint32
        class Slots; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots> slots;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots : public ydk::Entity
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

        class Slot; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot

        ydk::YList slot;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot : public ydk::Entity
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

        ydk::YLeaf slot; //type: string
        class FaultSummary; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot::FaultSummary
        class HardwareFaultDevices; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot::FaultSummary> fault_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices> hardware_fault_devices;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot::FaultSummary : public ydk::Entity
{
    public:
        FaultSummary();
        ~FaultSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity_critical_count; //type: int32
        ydk::YLeaf severity_emergency_or_alert_count; //type: int32
        ydk::YLeaf total; //type: int32
        ydk::YLeaf severity_error_count; //type: int32

}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot::FaultSummary


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices : public ydk::Entity
{
    public:
        HardwareFaultDevices();
        ~HardwareFaultDevices();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HardwareFaultDevice; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice

        ydk::YList hardware_fault_device;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice : public ydk::Entity
{
    public:
        HardwareFaultDevice();
        ~HardwareFaultDevice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hw_fault_device; //type: string
        class HardwareFaultType; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType

        ydk::YList hardware_fault_type;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType : public ydk::Entity
{
    public:
        HardwareFaultType();
        ~HardwareFaultType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hw_fault_type; //type: string
        ydk::YLeaf condition_description; //type: string
        ydk::YLeaf condition_name; //type: string
        ydk::YLeaf device_key; //type: string
        ydk::YLeaf device_version; //type: int32
        ydk::YLeaf condition_raised_timestamp; //type: string
        ydk::YLeaf process_id; //type: int32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf condition_severity; //type: string

}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::FaultType3s::FaultType3::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks : public ydk::Entity
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

        class Rack; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack

        ydk::YList rack;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack : public ydk::Entity
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

        ydk::YLeaf rack; //type: uint32
        class Slots; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots> slots;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots : public ydk::Entity
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

        class Slot; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot

        ydk::YList slot;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot : public ydk::Entity
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

        ydk::YLeaf slot; //type: string
        class FaultSummary; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot::FaultSummary
        class HardwareFaultDevices; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot::FaultSummary> fault_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices> hardware_fault_devices;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot::FaultSummary : public ydk::Entity
{
    public:
        FaultSummary();
        ~FaultSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity_critical_count; //type: int32
        ydk::YLeaf severity_emergency_or_alert_count; //type: int32
        ydk::YLeaf total; //type: int32
        ydk::YLeaf severity_error_count; //type: int32

}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot::FaultSummary


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices : public ydk::Entity
{
    public:
        HardwareFaultDevices();
        ~HardwareFaultDevices();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HardwareFaultDevice; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice

        ydk::YList hardware_fault_device;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice : public ydk::Entity
{
    public:
        HardwareFaultDevice();
        ~HardwareFaultDevice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hw_fault_device; //type: string
        class HardwareFaultType; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType

        ydk::YList hardware_fault_type;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType : public ydk::Entity
{
    public:
        HardwareFaultType();
        ~HardwareFaultType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hw_fault_type; //type: string
        ydk::YLeaf condition_description; //type: string
        ydk::YLeaf condition_name; //type: string
        ydk::YLeaf device_key; //type: string
        ydk::YLeaf device_version; //type: int32
        ydk::YLeaf condition_raised_timestamp; //type: string
        ydk::YLeaf process_id; //type: int32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf condition_severity; //type: string

}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::FaultType2s::FaultType2::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks : public ydk::Entity
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

        class Rack; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack

        ydk::YList rack;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack : public ydk::Entity
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

        ydk::YLeaf rack; //type: uint32
        class Slots; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots> slots;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots : public ydk::Entity
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

        class Slot; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot

        ydk::YList slot;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot : public ydk::Entity
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

        ydk::YLeaf slot; //type: string
        class FaultSummary; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot::FaultSummary
        class HardwareFaultDevices; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot::FaultSummary> fault_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices> hardware_fault_devices;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot::FaultSummary : public ydk::Entity
{
    public:
        FaultSummary();
        ~FaultSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity_critical_count; //type: int32
        ydk::YLeaf severity_emergency_or_alert_count; //type: int32
        ydk::YLeaf total; //type: int32
        ydk::YLeaf severity_error_count; //type: int32

}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot::FaultSummary


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices : public ydk::Entity
{
    public:
        HardwareFaultDevices();
        ~HardwareFaultDevices();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HardwareFaultDevice; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice

        ydk::YList hardware_fault_device;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice : public ydk::Entity
{
    public:
        HardwareFaultDevice();
        ~HardwareFaultDevice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hw_fault_device; //type: string
        class HardwareFaultType; //type: PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType

        ydk::YList hardware_fault_type;
        
}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice


class PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType : public ydk::Entity
{
    public:
        HardwareFaultType();
        ~HardwareFaultType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hw_fault_type; //type: string
        ydk::YLeaf condition_description; //type: string
        ydk::YLeaf condition_name; //type: string
        ydk::YLeaf device_key; //type: string
        ydk::YLeaf device_version; //type: int32
        ydk::YLeaf condition_raised_timestamp; //type: string
        ydk::YLeaf process_id; //type: int32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf condition_severity; //type: string

}; // PlatformFaultManager::Exclude::FaultType1s::FaultType1::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType


class PlatformFaultManager::Racks : public ydk::Entity
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

        class Rack; //type: PlatformFaultManager::Racks::Rack

        ydk::YList rack;
        
}; // PlatformFaultManager::Racks


class PlatformFaultManager::Racks::Rack : public ydk::Entity
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

        ydk::YLeaf rack; //type: uint32
        class Slots; //type: PlatformFaultManager::Racks::Rack::Slots

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Racks::Rack::Slots> slots;
        
}; // PlatformFaultManager::Racks::Rack


class PlatformFaultManager::Racks::Rack::Slots : public ydk::Entity
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

        class Slot; //type: PlatformFaultManager::Racks::Rack::Slots::Slot

        ydk::YList slot;
        
}; // PlatformFaultManager::Racks::Rack::Slots


class PlatformFaultManager::Racks::Rack::Slots::Slot : public ydk::Entity
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

        ydk::YLeaf slot; //type: string
        class FaultSummary; //type: PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary
        class HardwareFaultDevices; //type: PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary> fault_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfm_oper::PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices> hardware_fault_devices;
        
}; // PlatformFaultManager::Racks::Rack::Slots::Slot


class PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary : public ydk::Entity
{
    public:
        FaultSummary();
        ~FaultSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity_critical_count; //type: int32
        ydk::YLeaf severity_emergency_or_alert_count; //type: int32
        ydk::YLeaf total; //type: int32
        ydk::YLeaf severity_error_count; //type: int32

}; // PlatformFaultManager::Racks::Rack::Slots::Slot::FaultSummary


class PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices : public ydk::Entity
{
    public:
        HardwareFaultDevices();
        ~HardwareFaultDevices();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HardwareFaultDevice; //type: PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice

        ydk::YList hardware_fault_device;
        
}; // PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices


class PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice : public ydk::Entity
{
    public:
        HardwareFaultDevice();
        ~HardwareFaultDevice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hw_fault_device; //type: string
        class HardwareFaultType; //type: PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType

        ydk::YList hardware_fault_type;
        
}; // PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice


class PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType : public ydk::Entity
{
    public:
        HardwareFaultType();
        ~HardwareFaultType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hw_fault_type; //type: string
        ydk::YLeaf condition_description; //type: string
        ydk::YLeaf condition_name; //type: string
        ydk::YLeaf device_key; //type: string
        ydk::YLeaf device_version; //type: int32
        ydk::YLeaf condition_raised_timestamp; //type: string
        ydk::YLeaf process_id; //type: int32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf condition_severity; //type: string

}; // PlatformFaultManager::Racks::Rack::Slots::Slot::HardwareFaultDevices::HardwareFaultDevice::HardwareFaultType


}
}

#endif /* _CISCO_IOS_XR_PFM_OPER_ */

