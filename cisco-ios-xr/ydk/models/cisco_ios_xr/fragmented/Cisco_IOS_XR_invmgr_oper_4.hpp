#ifndef _CISCO_IOS_XR_INVMGR_OPER_4_
#define _CISCO_IOS_XR_INVMGR_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_invmgr_oper_0.hpp"
#include "Cisco_IOS_XR_invmgr_oper_2.hpp"
#include "Cisco_IOS_XR_invmgr_oper_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_invmgr_oper {


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::PwgInfo : public ydk::Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_group_redundancy_mode; //type: int32
        ydk::YLeaf power_group_power_units; //type: string
        ydk::YLeaf power_group_available_current; //type: int32
        ydk::YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::PwgInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::EnvSensorInfoXml : public ydk::Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

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
        ydk::YLeaf units; //type: Unit
        ydk::YLeaf value_; //type: string
        ydk::YLeaf data_type; //type: SensorData
        ydk::YLeaf status; //type: SensorStatus
        ydk::YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::EnvSensorInfoXml::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        ydk::YList threshold_array;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public ydk::Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: ThresholdSeverity
        ydk::YLeaf threshold_relation; //type: ThresholdRelation
        ydk::YLeaf threshold_value; //type: int32
        ydk::YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::InvAssetBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MajorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MinorLo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MajorLo : public ydk::Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MajorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::CriticalHi : public ydk::Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MinorHi : public ydk::Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MinorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MajorHi : public ydk::Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MajorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::CriticalLo : public ydk::Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MinorLo : public ydk::Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MinorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_administrative_state; //type: int32
        ydk::YLeaf power_administrative_state; //type: int32
        ydk::YLeaf card_operational_state; //type: int32
        ydk::YLeaf card_monitor_state; //type: int32
        ydk::YLeaf card_reset_reason; //type: CardResetReason
        ydk::YLeaf power_current_measurement; //type: int32
        ydk::YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::FruInfo::CardUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::FruInfo::CardUpTime> card_up_time;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::FruInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::InvEepromInfo : public ydk::Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inv_card_type; //type: uint8
        ydk::YLeaf opaque_data; //type: string
        ydk::YLeaf opaque_data_size; //type: uint32
        ydk::YLeaf has_eeprom; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf form_factor; //type: uint32
        ydk::YLeaf connector_type; //type: uint32
        ydk::YLeaf otn_application_code; //type: uint32
        ydk::YLeaf sonet_application_code; //type: uint32
        ydk::YLeaf ethernet_compliance_code; //type: uint32
        ydk::YLeaf date_string; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::InvEepromInfo::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

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
        ydk::YLeaf idprom_format_rev; //type: string
        ydk::YLeaf controller_family; //type: string
        ydk::YLeaf controller_type; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf hwid; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf udi_description; //type: string
        ydk::YLeaf udi_name; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf eci; //type: string
        ydk::YLeaf top_assem_part_num; //type: string
        ydk::YLeaf top_assem_vid; //type: string
        ydk::YLeaf pca_num; //type: string
        ydk::YLeaf pcavid; //type: string
        ydk::YLeaf chassis_sid; //type: string
        ydk::YLeaf dev_num1; //type: string
        ydk::YLeaf dev_num2; //type: string
        ydk::YLeaf dev_num3; //type: string
        ydk::YLeaf dev_num4; //type: string
        ydk::YLeaf dev_num5; //type: string
        ydk::YLeaf dev_num6; //type: string
        ydk::YLeaf dev_num7; //type: string
        ydk::YLeaf manu_test_data; //type: string
        ydk::YLeaf asset_id; //type: string
        ydk::YLeaf asset_alias; //type: string
        ydk::YLeaf base_mac_address1; //type: string
        ydk::YLeaf mac_add_blk_size1; //type: string
        ydk::YLeaf base_mac_address2; //type: string
        ydk::YLeaf mac_add_blk_size2; //type: string
        ydk::YLeaf base_mac_address3; //type: string
        ydk::YLeaf mac_add_blk_size3; //type: string
        ydk::YLeaf base_mac_address4; //type: string
        ydk::YLeaf mac_add_blk_size4; //type: string
        ydk::YLeaf pcb_serial_num; //type: string
        ydk::YLeaf power_supply_type; //type: string
        ydk::YLeaf power_consumption; //type: string
        ydk::YLeaf block_signature; //type: string
        ydk::YLeaf block_version; //type: string
        ydk::YLeaf block_length; //type: string
        ydk::YLeaf block_checksum; //type: string
        ydk::YLeaf eeprom_size; //type: string
        ydk::YLeaf block_count; //type: string
        ydk::YLeaf fru_major_type; //type: string
        ydk::YLeaf fru_minor_type; //type: string
        ydk::YLeaf oem_string; //type: string
        ydk::YLeaf product_id; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf part_revision; //type: string
        ydk::YLeaf mfg_deviation; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf mfg_bits; //type: string
        ydk::YLeaf engineer_use; //type: string
        ydk::YLeaf snmpoid; //type: string
        ydk::YLeaf rma_code; //type: string
        ydk::YLeaf eci_alpha_number; //type: string
        class Rma; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma : public ydk::Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test_history; //type: string
        ydk::YLeaf rma_number; //type: string
        ydk::YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InvBasicBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvBasicBag
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::FruInfo
        class InvEepromInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvEepromInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold> threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvEepromInfo> inv_eeprom_info;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvBasicBag : public ydk::Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

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
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf manufacturer_name; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf asset_id_str; //type: string
        ydk::YLeaf asset_identification; //type: int32
        ydk::YLeaf is_field_replaceable_unit; //type: boolean
        ydk::YLeaf manufacturer_asset_tags; //type: int32
        ydk::YLeaf composite_class_code; //type: int32
        ydk::YLeaf memory_size; //type: int32
        ydk::YLeaf environmental_monitor_path; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf group_flag; //type: boolean
        ydk::YLeaf new_deviation_number; //type: int32
        ydk::YLeaf physical_layer_interface_module_type; //type: int32
        ydk::YLeaf unrecognized_fru; //type: boolean
        ydk::YLeaf redundancystate; //type: int32
        ydk::YLeaf ceport; //type: boolean
        ydk::YLeaf xr_scoped; //type: boolean
        ydk::YLeaf unique_id; //type: int32
        ydk::YLeaf allocated_power; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvBasicBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::EnvSensorInfo : public ydk::Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32
        ydk::YLeaf average; //type: int32
        ydk::YLeaf minimum; //type: int32
        ydk::YLeaf maximum; //type: int32
        ydk::YLeaf interval; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::PwgInfo : public ydk::Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_group_redundancy_mode; //type: int32
        ydk::YLeaf power_group_power_units; //type: string
        ydk::YLeaf power_group_available_current; //type: int32
        ydk::YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::PwgInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::EnvSensorInfoXml : public ydk::Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

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
        ydk::YLeaf units; //type: Unit
        ydk::YLeaf value_; //type: string
        ydk::YLeaf data_type; //type: SensorData
        ydk::YLeaf status; //type: SensorStatus
        ydk::YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::EnvSensorInfoXml::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        ydk::YList threshold_array;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public ydk::Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: ThresholdSeverity
        ydk::YLeaf threshold_relation; //type: ThresholdRelation
        ydk::YLeaf threshold_value; //type: int32
        ydk::YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvAssetBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MajorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MinorLo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MajorLo : public ydk::Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MajorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::CriticalHi : public ydk::Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MinorHi : public ydk::Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MinorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MajorHi : public ydk::Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MajorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::CriticalLo : public ydk::Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MinorLo : public ydk::Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MinorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_administrative_state; //type: int32
        ydk::YLeaf power_administrative_state; //type: int32
        ydk::YLeaf card_operational_state; //type: int32
        ydk::YLeaf card_monitor_state; //type: int32
        ydk::YLeaf card_reset_reason; //type: CardResetReason
        ydk::YLeaf power_current_measurement; //type: int32
        ydk::YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::FruInfo::CardUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::FruInfo::CardUpTime> card_up_time;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::FruInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvEepromInfo : public ydk::Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inv_card_type; //type: uint8
        ydk::YLeaf opaque_data; //type: string
        ydk::YLeaf opaque_data_size; //type: uint32
        ydk::YLeaf has_eeprom; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf form_factor; //type: uint32
        ydk::YLeaf connector_type; //type: uint32
        ydk::YLeaf otn_application_code; //type: uint32
        ydk::YLeaf sonet_application_code; //type: uint32
        ydk::YLeaf ethernet_compliance_code; //type: uint32
        ydk::YLeaf date_string; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvEepromInfo::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

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
        ydk::YLeaf idprom_format_rev; //type: string
        ydk::YLeaf controller_family; //type: string
        ydk::YLeaf controller_type; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf hwid; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf udi_description; //type: string
        ydk::YLeaf udi_name; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf eci; //type: string
        ydk::YLeaf top_assem_part_num; //type: string
        ydk::YLeaf top_assem_vid; //type: string
        ydk::YLeaf pca_num; //type: string
        ydk::YLeaf pcavid; //type: string
        ydk::YLeaf chassis_sid; //type: string
        ydk::YLeaf dev_num1; //type: string
        ydk::YLeaf dev_num2; //type: string
        ydk::YLeaf dev_num3; //type: string
        ydk::YLeaf dev_num4; //type: string
        ydk::YLeaf dev_num5; //type: string
        ydk::YLeaf dev_num6; //type: string
        ydk::YLeaf dev_num7; //type: string
        ydk::YLeaf manu_test_data; //type: string
        ydk::YLeaf asset_id; //type: string
        ydk::YLeaf asset_alias; //type: string
        ydk::YLeaf base_mac_address1; //type: string
        ydk::YLeaf mac_add_blk_size1; //type: string
        ydk::YLeaf base_mac_address2; //type: string
        ydk::YLeaf mac_add_blk_size2; //type: string
        ydk::YLeaf base_mac_address3; //type: string
        ydk::YLeaf mac_add_blk_size3; //type: string
        ydk::YLeaf base_mac_address4; //type: string
        ydk::YLeaf mac_add_blk_size4; //type: string
        ydk::YLeaf pcb_serial_num; //type: string
        ydk::YLeaf power_supply_type; //type: string
        ydk::YLeaf power_consumption; //type: string
        ydk::YLeaf block_signature; //type: string
        ydk::YLeaf block_version; //type: string
        ydk::YLeaf block_length; //type: string
        ydk::YLeaf block_checksum; //type: string
        ydk::YLeaf eeprom_size; //type: string
        ydk::YLeaf block_count; //type: string
        ydk::YLeaf fru_major_type; //type: string
        ydk::YLeaf fru_minor_type; //type: string
        ydk::YLeaf oem_string; //type: string
        ydk::YLeaf product_id; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf part_revision; //type: string
        ydk::YLeaf mfg_deviation; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf mfg_bits; //type: string
        ydk::YLeaf engineer_use; //type: string
        ydk::YLeaf snmpoid; //type: string
        ydk::YLeaf rma_code; //type: string
        ydk::YLeaf eci_alpha_number; //type: string
        class Rma; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma : public ydk::Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test_history; //type: string
        ydk::YLeaf rma_number; //type: string
        ydk::YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InvBasicBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvBasicBag
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::FruInfo
        class InvEepromInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvEepromInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold> threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvEepromInfo> inv_eeprom_info;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvBasicBag : public ydk::Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

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
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf manufacturer_name; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf asset_id_str; //type: string
        ydk::YLeaf asset_identification; //type: int32
        ydk::YLeaf is_field_replaceable_unit; //type: boolean
        ydk::YLeaf manufacturer_asset_tags; //type: int32
        ydk::YLeaf composite_class_code; //type: int32
        ydk::YLeaf memory_size; //type: int32
        ydk::YLeaf environmental_monitor_path; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf group_flag; //type: boolean
        ydk::YLeaf new_deviation_number; //type: int32
        ydk::YLeaf physical_layer_interface_module_type; //type: int32
        ydk::YLeaf unrecognized_fru; //type: boolean
        ydk::YLeaf redundancystate; //type: int32
        ydk::YLeaf ceport; //type: boolean
        ydk::YLeaf xr_scoped; //type: boolean
        ydk::YLeaf unique_id; //type: int32
        ydk::YLeaf allocated_power; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvBasicBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::EnvSensorInfo : public ydk::Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32
        ydk::YLeaf average; //type: int32
        ydk::YLeaf minimum; //type: int32
        ydk::YLeaf maximum; //type: int32
        ydk::YLeaf interval; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::PwgInfo : public ydk::Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_group_redundancy_mode; //type: int32
        ydk::YLeaf power_group_power_units; //type: string
        ydk::YLeaf power_group_available_current; //type: int32
        ydk::YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::PwgInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::EnvSensorInfoXml : public ydk::Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

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
        ydk::YLeaf units; //type: Unit
        ydk::YLeaf value_; //type: string
        ydk::YLeaf data_type; //type: SensorData
        ydk::YLeaf status; //type: SensorStatus
        ydk::YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::EnvSensorInfoXml::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        ydk::YList threshold_array;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public ydk::Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: ThresholdSeverity
        ydk::YLeaf threshold_relation; //type: ThresholdRelation
        ydk::YLeaf threshold_value; //type: int32
        ydk::YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvAssetBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MajorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MinorLo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MajorLo : public ydk::Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MajorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::CriticalHi : public ydk::Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MinorHi : public ydk::Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MinorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MajorHi : public ydk::Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MajorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::CriticalLo : public ydk::Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MinorLo : public ydk::Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MinorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_administrative_state; //type: int32
        ydk::YLeaf power_administrative_state; //type: int32
        ydk::YLeaf card_operational_state; //type: int32
        ydk::YLeaf card_monitor_state; //type: int32
        ydk::YLeaf card_reset_reason; //type: CardResetReason
        ydk::YLeaf power_current_measurement; //type: int32
        ydk::YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::FruInfo::CardUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::FruInfo::CardUpTime> card_up_time;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::FruInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvEepromInfo : public ydk::Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inv_card_type; //type: uint8
        ydk::YLeaf opaque_data; //type: string
        ydk::YLeaf opaque_data_size; //type: uint32
        ydk::YLeaf has_eeprom; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf form_factor; //type: uint32
        ydk::YLeaf connector_type; //type: uint32
        ydk::YLeaf otn_application_code; //type: uint32
        ydk::YLeaf sonet_application_code; //type: uint32
        ydk::YLeaf ethernet_compliance_code; //type: uint32
        ydk::YLeaf date_string; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvEepromInfo::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

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
        ydk::YLeaf idprom_format_rev; //type: string
        ydk::YLeaf controller_family; //type: string
        ydk::YLeaf controller_type; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf hwid; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf udi_description; //type: string
        ydk::YLeaf udi_name; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf eci; //type: string
        ydk::YLeaf top_assem_part_num; //type: string
        ydk::YLeaf top_assem_vid; //type: string
        ydk::YLeaf pca_num; //type: string
        ydk::YLeaf pcavid; //type: string
        ydk::YLeaf chassis_sid; //type: string
        ydk::YLeaf dev_num1; //type: string
        ydk::YLeaf dev_num2; //type: string
        ydk::YLeaf dev_num3; //type: string
        ydk::YLeaf dev_num4; //type: string
        ydk::YLeaf dev_num5; //type: string
        ydk::YLeaf dev_num6; //type: string
        ydk::YLeaf dev_num7; //type: string
        ydk::YLeaf manu_test_data; //type: string
        ydk::YLeaf asset_id; //type: string
        ydk::YLeaf asset_alias; //type: string
        ydk::YLeaf base_mac_address1; //type: string
        ydk::YLeaf mac_add_blk_size1; //type: string
        ydk::YLeaf base_mac_address2; //type: string
        ydk::YLeaf mac_add_blk_size2; //type: string
        ydk::YLeaf base_mac_address3; //type: string
        ydk::YLeaf mac_add_blk_size3; //type: string
        ydk::YLeaf base_mac_address4; //type: string
        ydk::YLeaf mac_add_blk_size4; //type: string
        ydk::YLeaf pcb_serial_num; //type: string
        ydk::YLeaf power_supply_type; //type: string
        ydk::YLeaf power_consumption; //type: string
        ydk::YLeaf block_signature; //type: string
        ydk::YLeaf block_version; //type: string
        ydk::YLeaf block_length; //type: string
        ydk::YLeaf block_checksum; //type: string
        ydk::YLeaf eeprom_size; //type: string
        ydk::YLeaf block_count; //type: string
        ydk::YLeaf fru_major_type; //type: string
        ydk::YLeaf fru_minor_type; //type: string
        ydk::YLeaf oem_string; //type: string
        ydk::YLeaf product_id; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf part_revision; //type: string
        ydk::YLeaf mfg_deviation; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf mfg_bits; //type: string
        ydk::YLeaf engineer_use; //type: string
        ydk::YLeaf snmpoid; //type: string
        ydk::YLeaf rma_code; //type: string
        ydk::YLeaf eci_alpha_number; //type: string
        class Rma; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma : public ydk::Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test_history; //type: string
        ydk::YLeaf rma_number; //type: string
        ydk::YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InvBasicBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvBasicBag
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::FruInfo
        class InvEepromInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvEepromInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold> threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvEepromInfo> inv_eeprom_info;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvBasicBag : public ydk::Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

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
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf manufacturer_name; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf asset_id_str; //type: string
        ydk::YLeaf asset_identification; //type: int32
        ydk::YLeaf is_field_replaceable_unit; //type: boolean
        ydk::YLeaf manufacturer_asset_tags; //type: int32
        ydk::YLeaf composite_class_code; //type: int32
        ydk::YLeaf memory_size; //type: int32
        ydk::YLeaf environmental_monitor_path; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf group_flag; //type: boolean
        ydk::YLeaf new_deviation_number; //type: int32
        ydk::YLeaf physical_layer_interface_module_type; //type: int32
        ydk::YLeaf unrecognized_fru; //type: boolean
        ydk::YLeaf redundancystate; //type: int32
        ydk::YLeaf ceport; //type: boolean
        ydk::YLeaf xr_scoped; //type: boolean
        ydk::YLeaf unique_id; //type: int32
        ydk::YLeaf allocated_power; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvBasicBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::EnvSensorInfo : public ydk::Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32
        ydk::YLeaf average; //type: int32
        ydk::YLeaf minimum; //type: int32
        ydk::YLeaf maximum; //type: int32
        ydk::YLeaf interval; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::PwgInfo : public ydk::Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_group_redundancy_mode; //type: int32
        ydk::YLeaf power_group_power_units; //type: string
        ydk::YLeaf power_group_available_current; //type: int32
        ydk::YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::PwgInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::EnvSensorInfoXml : public ydk::Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

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
        ydk::YLeaf units; //type: Unit
        ydk::YLeaf value_; //type: string
        ydk::YLeaf data_type; //type: SensorData
        ydk::YLeaf status; //type: SensorStatus
        ydk::YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::EnvSensorInfoXml::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        ydk::YList threshold_array;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public ydk::Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: ThresholdSeverity
        ydk::YLeaf threshold_relation; //type: ThresholdRelation
        ydk::YLeaf threshold_value; //type: int32
        ydk::YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvAssetBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MajorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MinorLo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MajorLo : public ydk::Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MajorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::CriticalHi : public ydk::Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MinorHi : public ydk::Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MinorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MajorHi : public ydk::Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MajorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::CriticalLo : public ydk::Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MinorLo : public ydk::Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MinorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_administrative_state; //type: int32
        ydk::YLeaf power_administrative_state; //type: int32
        ydk::YLeaf card_operational_state; //type: int32
        ydk::YLeaf card_monitor_state; //type: int32
        ydk::YLeaf card_reset_reason; //type: CardResetReason
        ydk::YLeaf power_current_measurement; //type: int32
        ydk::YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::FruInfo::CardUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::FruInfo::CardUpTime> card_up_time;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::FruInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvEepromInfo : public ydk::Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inv_card_type; //type: uint8
        ydk::YLeaf opaque_data; //type: string
        ydk::YLeaf opaque_data_size; //type: uint32
        ydk::YLeaf has_eeprom; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf form_factor; //type: uint32
        ydk::YLeaf connector_type; //type: uint32
        ydk::YLeaf otn_application_code; //type: uint32
        ydk::YLeaf sonet_application_code; //type: uint32
        ydk::YLeaf ethernet_compliance_code; //type: uint32
        ydk::YLeaf date_string; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvEepromInfo::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

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
        ydk::YLeaf idprom_format_rev; //type: string
        ydk::YLeaf controller_family; //type: string
        ydk::YLeaf controller_type; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf hwid; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf udi_description; //type: string
        ydk::YLeaf udi_name; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf eci; //type: string
        ydk::YLeaf top_assem_part_num; //type: string
        ydk::YLeaf top_assem_vid; //type: string
        ydk::YLeaf pca_num; //type: string
        ydk::YLeaf pcavid; //type: string
        ydk::YLeaf chassis_sid; //type: string
        ydk::YLeaf dev_num1; //type: string
        ydk::YLeaf dev_num2; //type: string
        ydk::YLeaf dev_num3; //type: string
        ydk::YLeaf dev_num4; //type: string
        ydk::YLeaf dev_num5; //type: string
        ydk::YLeaf dev_num6; //type: string
        ydk::YLeaf dev_num7; //type: string
        ydk::YLeaf manu_test_data; //type: string
        ydk::YLeaf asset_id; //type: string
        ydk::YLeaf asset_alias; //type: string
        ydk::YLeaf base_mac_address1; //type: string
        ydk::YLeaf mac_add_blk_size1; //type: string
        ydk::YLeaf base_mac_address2; //type: string
        ydk::YLeaf mac_add_blk_size2; //type: string
        ydk::YLeaf base_mac_address3; //type: string
        ydk::YLeaf mac_add_blk_size3; //type: string
        ydk::YLeaf base_mac_address4; //type: string
        ydk::YLeaf mac_add_blk_size4; //type: string
        ydk::YLeaf pcb_serial_num; //type: string
        ydk::YLeaf power_supply_type; //type: string
        ydk::YLeaf power_consumption; //type: string
        ydk::YLeaf block_signature; //type: string
        ydk::YLeaf block_version; //type: string
        ydk::YLeaf block_length; //type: string
        ydk::YLeaf block_checksum; //type: string
        ydk::YLeaf eeprom_size; //type: string
        ydk::YLeaf block_count; //type: string
        ydk::YLeaf fru_major_type; //type: string
        ydk::YLeaf fru_minor_type; //type: string
        ydk::YLeaf oem_string; //type: string
        ydk::YLeaf product_id; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf part_revision; //type: string
        ydk::YLeaf mfg_deviation; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf mfg_bits; //type: string
        ydk::YLeaf engineer_use; //type: string
        ydk::YLeaf snmpoid; //type: string
        ydk::YLeaf rma_code; //type: string
        ydk::YLeaf eci_alpha_number; //type: string
        class Rma; //type: Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma : public ydk::Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test_history; //type: string
        ydk::YLeaf rma_number; //type: string
        ydk::YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Tsi1s::Tsi1::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Powershelf::Slot::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InvBasicBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag
        class EnvSensorInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo
        class PwgInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo
        class EnvSensorInfoXml; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml
        class InvAssetBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold
        class FruInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo
        class InvEepromInfo; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag> inv_basic_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo> env_sensor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo> pwg_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml> env_sensor_info_xml;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag> inv_asset_bag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold> threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo> fru_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo> inv_eeprom_info;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag : public ydk::Entity
{
    public:
        InvBasicBag();
        ~InvBasicBag();

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
        ydk::YLeaf vendor_type; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_revision; //type: string
        ydk::YLeaf firmware_revision; //type: string
        ydk::YLeaf software_revision; //type: string
        ydk::YLeaf chip_hardware_revision; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf manufacturer_name; //type: string
        ydk::YLeaf model_name; //type: string
        ydk::YLeaf asset_id_str; //type: string
        ydk::YLeaf asset_identification; //type: int32
        ydk::YLeaf is_field_replaceable_unit; //type: boolean
        ydk::YLeaf manufacturer_asset_tags; //type: int32
        ydk::YLeaf composite_class_code; //type: int32
        ydk::YLeaf memory_size; //type: int32
        ydk::YLeaf environmental_monitor_path; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf group_flag; //type: boolean
        ydk::YLeaf new_deviation_number; //type: int32
        ydk::YLeaf physical_layer_interface_module_type; //type: int32
        ydk::YLeaf unrecognized_fru; //type: boolean
        ydk::YLeaf redundancystate; //type: int32
        ydk::YLeaf ceport; //type: boolean
        ydk::YLeaf xr_scoped; //type: boolean
        ydk::YLeaf unique_id; //type: int32
        ydk::YLeaf allocated_power; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvBasicBag


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo : public ydk::Entity
{
    public:
        EnvSensorInfo();
        ~EnvSensorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_validity_bitmap; //type: uint32
        ydk::YLeaf device_description; //type: string
        ydk::YLeaf units; //type: string
        ydk::YLeaf device_id; //type: uint32
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf alarm_type; //type: uint32
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf scale; //type: uint32
        ydk::YLeaf precision; //type: uint32
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf age_time_stamp; //type: uint32
        ydk::YLeaf update_rate; //type: uint32
        ydk::YLeaf average; //type: int32
        ydk::YLeaf minimum; //type: int32
        ydk::YLeaf maximum; //type: int32
        ydk::YLeaf interval; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfo


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo : public ydk::Entity
{
    public:
        PwgInfo();
        ~PwgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf power_group_redundancy_mode; //type: int32
        ydk::YLeaf power_group_power_units; //type: string
        ydk::YLeaf power_group_available_current; //type: int32
        ydk::YLeaf power_group_drawn_current; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::PwgInfo


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml : public ydk::Entity
{
    public:
        EnvSensorInfoXml();
        ~EnvSensorInfoXml();

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
        ydk::YLeaf units; //type: Unit
        ydk::YLeaf value_; //type: string
        ydk::YLeaf data_type; //type: SensorData
        ydk::YLeaf status; //type: SensorStatus
        ydk::YLeaf update_rate; //type: uint32
        class Threshold; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold> threshold;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdArray; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray

        ydk::YList threshold_array;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray : public ydk::Entity
{
    public:
        ThresholdArray();
        ~ThresholdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: ThresholdSeverity
        ydk::YLeaf threshold_relation; //type: ThresholdRelation
        ydk::YLeaf threshold_value; //type: int32
        ydk::YLeaf threshold_name; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::EnvSensorInfoXml::Threshold::ThresholdArray


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag : public ydk::Entity
{
    public:
        InvAssetBag();
        ~InvAssetBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf part_number; //type: string
        ydk::YLeaf manufacturer_assembly_number; //type: string
        ydk::YLeaf manufacturer_assembly_revision; //type: string
        ydk::YLeaf manufacturer_firmware_identifier; //type: string
        ydk::YLeaf manufacturer_software_identifier; //type: string
        ydk::YLeaf manufacturer_common_language_equipment_identifier; //type: string
        ydk::YLeaf original_equipment_manufacturer_string; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvAssetBag


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MajorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo
        class CriticalHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi
        class MinorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi
        class MajorHi; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi
        class CriticalLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo
        class MinorLo; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo> major_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi> critical_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi> minor_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi> major_hi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo> critical_lo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo> minor_lo;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo : public ydk::Entity
{
    public:
        MajorLo();
        ~MajorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi : public ydk::Entity
{
    public:
        CriticalHi();
        ~CriticalHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi : public ydk::Entity
{
    public:
        MinorHi();
        ~MinorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi : public ydk::Entity
{
    public:
        MajorHi();
        ~MajorHi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MajorHi::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo : public ydk::Entity
{
    public:
        CriticalLo();
        ~CriticalLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::CriticalLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo : public ydk::Entity
{
    public:
        MinorLo();
        ~MinorLo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreshBag; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag> thresh_bag;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag : public ydk::Entity
{
    public:
        ThreshBag();
        ~ThreshBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_severity; //type: uint32
        ydk::YLeaf threshold_relation; //type: uint32
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf threshold_evaluation; //type: boolean
        ydk::YLeaf threshold_notification_enabled; //type: boolean

}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::Threshold::MinorLo::ThreshBag


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo : public ydk::Entity
{
    public:
        FruInfo();
        ~FruInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_administrative_state; //type: int32
        ydk::YLeaf power_administrative_state; //type: int32
        ydk::YLeaf card_operational_state; //type: int32
        ydk::YLeaf card_monitor_state; //type: int32
        ydk::YLeaf card_reset_reason; //type: CardResetReason
        ydk::YLeaf power_current_measurement; //type: int32
        ydk::YLeaf power_operational_state; //type: int32
        class LastOperationalStateChange; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange
        class CardUpTime; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime> card_up_time;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange : public ydk::Entity
{
    public:
        LastOperationalStateChange();
        ~LastOperationalStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::LastOperationalStateChange


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime : public ydk::Entity
{
    public:
        CardUpTime();
        ~CardUpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_in_seconds; //type: int32
        ydk::YLeaf time_in_nano_seconds; //type: int32

}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::FruInfo::CardUpTime


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo : public ydk::Entity
{
    public:
        InvEepromInfo();
        ~InvEepromInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inv_card_type; //type: uint8
        ydk::YLeaf opaque_data; //type: string
        ydk::YLeaf opaque_data_size; //type: uint32
        ydk::YLeaf has_eeprom; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf form_factor; //type: uint32
        ydk::YLeaf connector_type; //type: uint32
        ydk::YLeaf otn_application_code; //type: uint32
        ydk::YLeaf sonet_application_code; //type: uint32
        ydk::YLeaf ethernet_compliance_code; //type: uint32
        ydk::YLeaf date_string; //type: string
        class Eeprom; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom> eeprom;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

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
        ydk::YLeaf idprom_format_rev; //type: string
        ydk::YLeaf controller_family; //type: string
        ydk::YLeaf controller_type; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf hwid; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf udi_description; //type: string
        ydk::YLeaf udi_name; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf eci; //type: string
        ydk::YLeaf top_assem_part_num; //type: string
        ydk::YLeaf top_assem_vid; //type: string
        ydk::YLeaf pca_num; //type: string
        ydk::YLeaf pcavid; //type: string
        ydk::YLeaf chassis_sid; //type: string
        ydk::YLeaf dev_num1; //type: string
        ydk::YLeaf dev_num2; //type: string
        ydk::YLeaf dev_num3; //type: string
        ydk::YLeaf dev_num4; //type: string
        ydk::YLeaf dev_num5; //type: string
        ydk::YLeaf dev_num6; //type: string
        ydk::YLeaf dev_num7; //type: string
        ydk::YLeaf manu_test_data; //type: string
        ydk::YLeaf asset_id; //type: string
        ydk::YLeaf asset_alias; //type: string
        ydk::YLeaf base_mac_address1; //type: string
        ydk::YLeaf mac_add_blk_size1; //type: string
        ydk::YLeaf base_mac_address2; //type: string
        ydk::YLeaf mac_add_blk_size2; //type: string
        ydk::YLeaf base_mac_address3; //type: string
        ydk::YLeaf mac_add_blk_size3; //type: string
        ydk::YLeaf base_mac_address4; //type: string
        ydk::YLeaf mac_add_blk_size4; //type: string
        ydk::YLeaf pcb_serial_num; //type: string
        ydk::YLeaf power_supply_type; //type: string
        ydk::YLeaf power_consumption; //type: string
        ydk::YLeaf block_signature; //type: string
        ydk::YLeaf block_version; //type: string
        ydk::YLeaf block_length; //type: string
        ydk::YLeaf block_checksum; //type: string
        ydk::YLeaf eeprom_size; //type: string
        ydk::YLeaf block_count; //type: string
        ydk::YLeaf fru_major_type; //type: string
        ydk::YLeaf fru_minor_type; //type: string
        ydk::YLeaf oem_string; //type: string
        ydk::YLeaf product_id; //type: string
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf part_number; //type: string
        ydk::YLeaf part_revision; //type: string
        ydk::YLeaf mfg_deviation; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf mfg_bits; //type: string
        ydk::YLeaf engineer_use; //type: string
        ydk::YLeaf snmpoid; //type: string
        ydk::YLeaf rma_code; //type: string
        ydk::YLeaf eci_alpha_number; //type: string
        class Rma; //type: Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma> rma;
        
}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom


class Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma : public ydk::Entity
{
    public:
        Rma();
        ~Rma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test_history; //type: string
        ydk::YLeaf rma_number; //type: string
        ydk::YLeaf rma_history; //type: string

}; // Inventory::Racks::Rack::Powershelf::Slot::Attributes::InvEepromInfo::Eeprom::Rma


class Inventory::Racks::Rack::Fantray : public ydk::Entity
{
    public:
        Fantray();
        ~Fantray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Slot; //type: Inventory::Racks::Rack::Fantray::Slot

        ydk::YList slot;
        
}; // Inventory::Racks::Rack::Fantray


class Inventory::Racks::Rack::Fantray::Slot : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Tsi1s; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s
        class Attributes; //type: Inventory::Racks::Rack::Fantray::Slot::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s> tsi1s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Fantray::Slot


class Inventory::Racks::Rack::Fantray::Slot::Tsi1s : public ydk::Entity
{
    public:
        Tsi1s();
        ~Tsi1s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi1; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1

        ydk::YList tsi1;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1s


class Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1 : public ydk::Entity
{
    public:
        Tsi1();
        ~Tsi1();

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
        class Tsi2s; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s
        class Attributes; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s> tsi2s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1


class Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s : public ydk::Entity
{
    public:
        Tsi2s();
        ~Tsi2s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi2; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2

        ydk::YList tsi2;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s


class Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2 : public ydk::Entity
{
    public:
        Tsi2();
        ~Tsi2();

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
        class Tsi3s; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s
        class Attributes; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s> tsi3s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2


class Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s : public ydk::Entity
{
    public:
        Tsi3s();
        ~Tsi3s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi3; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3

        ydk::YList tsi3;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s


class Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3 : public ydk::Entity
{
    public:
        Tsi3();
        ~Tsi3();

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
        class Tsi4s; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s
        class Attributes; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s> tsi4s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3


class Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s : public ydk::Entity
{
    public:
        Tsi4s();
        ~Tsi4s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi4; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4

        ydk::YList tsi4;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s


class Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4 : public ydk::Entity
{
    public:
        Tsi4();
        ~Tsi4();

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
        class Tsi5s; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s
        class Attributes; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s> tsi5s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4


class Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s : public ydk::Entity
{
    public:
        Tsi5s();
        ~Tsi5s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi5; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5

        ydk::YList tsi5;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s


class Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5 : public ydk::Entity
{
    public:
        Tsi5();
        ~Tsi5();

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
        class Tsi6s; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s
        class Attributes; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s> tsi6s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5


class Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s : public ydk::Entity
{
    public:
        Tsi6s();
        ~Tsi6s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi6; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6

        ydk::YList tsi6;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s


class Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6 : public ydk::Entity
{
    public:
        Tsi6();
        ~Tsi6();

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
        class Tsi7s; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s
        class Attributes; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s> tsi7s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6


class Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s : public ydk::Entity
{
    public:
        Tsi7s();
        ~Tsi7s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi7; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7

        ydk::YList tsi7;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s


class Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7 : public ydk::Entity
{
    public:
        Tsi7();
        ~Tsi7();

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
        class Tsi8s; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s
        class Attributes; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s> tsi8s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7


class Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s : public ydk::Entity
{
    public:
        Tsi8s();
        ~Tsi8s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tsi8; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8

        ydk::YList tsi8;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s


class Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8 : public ydk::Entity
{
    public:
        Tsi8();
        ~Tsi8();

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
        class Tsi9s; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s
        class Attributes; //type: Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Tsi9s> tsi9s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_invmgr_oper::Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8::Attributes> attributes;
        
}; // Inventory::Racks::Rack::Fantray::Slot::Tsi1s::Tsi1::Tsi2s::Tsi2::Tsi3s::Tsi3::Tsi4s::Tsi4::Tsi5s::Tsi5::Tsi6s::Tsi6::Tsi7s::Tsi7::Tsi8s::Tsi8


}
}

#endif /* _CISCO_IOS_XR_INVMGR_OPER_4_ */

