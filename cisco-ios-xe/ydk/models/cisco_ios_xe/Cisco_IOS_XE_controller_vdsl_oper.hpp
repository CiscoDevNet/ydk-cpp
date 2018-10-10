#ifndef _CISCO_IOS_XE_CONTROLLER_VDSL_OPER_
#define _CISCO_IOS_XE_CONTROLLER_VDSL_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_controller_vdsl_oper {

class VdslOperData : public ydk::Entity
{
    public:
        VdslOperData();
        ~VdslOperData();

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

        class VdslInfo; //type: VdslOperData::VdslInfo

        ydk::YList vdsl_info;
        
}; // VdslOperData


class VdslOperData::VdslInfo : public ydk::Entity
{
    public:
        VdslInfo();
        ~VdslInfo();

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

        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf subslot_num; //type: uint32
        ydk::YLeaf state; //type: IdbStates
        ydk::YLeaf mode; //type: ModeTc
        ydk::YLeaf modem_status; //type: string
        ydk::YLeaf trained_mode; //type: string
        ydk::YLeaf firmware_version; //type: string
        ydk::YLeaf phy_version; //type: string
        class CpeStats; //type: VdslOperData::VdslInfo::CpeStats
        class CoStats; //type: VdslOperData::VdslInfo::CoStats

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_controller_vdsl_oper::VdslOperData::VdslInfo::CpeStats> cpe_stats;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_controller_vdsl_oper::VdslOperData::VdslInfo::CoStats> co_stats;
        
}; // VdslOperData::VdslInfo


class VdslOperData::VdslInfo::CpeStats : public ydk::Entity
{
    public:
        CpeStats();
        ~CpeStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chip_vendor; //type: string
        ydk::YLeaf line_attenuation; //type: string
        ydk::YLeaf noise_margin; //type: string
        ydk::YLeaf attainable_rate; //type: uint32
        ydk::YLeaf actual_power; //type: string
        ydk::YLeaf speed; //type: uint32

}; // VdslOperData::VdslInfo::CpeStats


class VdslOperData::VdslInfo::CoStats : public ydk::Entity
{
    public:
        CoStats();
        ~CoStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chip_vendor; //type: string
        ydk::YLeaf line_attenuation; //type: string
        ydk::YLeaf noise_margin; //type: string
        ydk::YLeaf attainable_rate; //type: uint32
        ydk::YLeaf actual_power; //type: string
        ydk::YLeaf speed; //type: uint32

}; // VdslOperData::VdslInfo::CoStats

class IdbStates : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf going_down;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf testing;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf admindown;
        static const ydk::Enum::YLeaf deleted;

};

class ModeTc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ptm;
        static const ydk::Enum::YLeaf atm;

};


}
}

#endif /* _CISCO_IOS_XE_CONTROLLER_VDSL_OPER_ */

