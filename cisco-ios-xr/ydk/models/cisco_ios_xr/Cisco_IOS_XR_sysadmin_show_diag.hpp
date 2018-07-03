#ifndef _CISCO_IOS_XR_SYSADMIN_SHOW_DIAG_
#define _CISCO_IOS_XR_SYSADMIN_SHOW_DIAG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_show_diag {

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

        class Default; //type: Diag::Default
        class Fans; //type: Diag::Fans
        class PowerSupply; //type: Diag::PowerSupply
        class Chassis; //type: Diag::Chassis
        class Summary; //type: Diag::Summary
        class Eeprom; //type: Diag::Eeprom
        class Detail; //type: Diag::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::Default> default_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::Fans> fans;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::PowerSupply> power_supply;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::Chassis> chassis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::Eeprom> eeprom;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::Detail> detail;
        
}; // Diag


class Diag::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

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

        class DefaultList; //type: Diag::Default::DefaultList

        ydk::YList default_list;
        
}; // Diag::Default


class Diag::Default::DefaultList : public ydk::Entity
{
    public:
        DefaultList();
        ~DefaultList();

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

        ydk::YLeaf location; //type: string
        class DefaultData; //type: Diag::Default::DefaultList::DefaultData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::Default::DefaultList::DefaultData> default_data;
        
}; // Diag::Default::DefaultList


class Diag::Default::DefaultList::DefaultData : public ydk::Entity
{
    public:
        DefaultData();
        ~DefaultData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList default_out_list; //type: list of  string

}; // Diag::Default::DefaultList::DefaultData


class Diag::Fans : public ydk::Entity
{
    public:
        Fans();
        ~Fans();

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

        class FansList; //type: Diag::Fans::FansList

        ydk::YList fans_list;
        
}; // Diag::Fans


class Diag::Fans::FansList : public ydk::Entity
{
    public:
        FansList();
        ~FansList();

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

        ydk::YLeaf location; //type: string
        class DefaultData; //type: Diag::Fans::FansList::DefaultData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::Fans::FansList::DefaultData> default_data;
        
}; // Diag::Fans::FansList


class Diag::Fans::FansList::DefaultData : public ydk::Entity
{
    public:
        DefaultData();
        ~DefaultData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList default_out_list; //type: list of  string

}; // Diag::Fans::FansList::DefaultData


class Diag::PowerSupply : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class PwrList; //type: Diag::PowerSupply::PwrList

        ydk::YList pwr_list;
        
}; // Diag::PowerSupply


class Diag::PowerSupply::PwrList : public ydk::Entity
{
    public:
        PwrList();
        ~PwrList();

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

        ydk::YLeaf location; //type: string
        class DefaultData; //type: Diag::PowerSupply::PwrList::DefaultData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::PowerSupply::PwrList::DefaultData> default_data;
        
}; // Diag::PowerSupply::PwrList


class Diag::PowerSupply::PwrList::DefaultData : public ydk::Entity
{
    public:
        DefaultData();
        ~DefaultData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList default_out_list; //type: list of  string

}; // Diag::PowerSupply::PwrList::DefaultData


class Diag::Chassis : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ChassisCnt; //type: Diag::Chassis::ChassisCnt
        class ChassisEepromCnt; //type: Diag::Chassis::ChassisEepromCnt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::Chassis::ChassisCnt> chassis_cnt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::Chassis::ChassisEepromCnt> chassis_eeprom_cnt;
        
}; // Diag::Chassis


class Diag::Chassis::ChassisCnt : public ydk::Entity
{
    public:
        ChassisCnt();
        ~ChassisCnt();

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

        class ChassisList; //type: Diag::Chassis::ChassisCnt::ChassisList

        ydk::YList chassis_list;
        
}; // Diag::Chassis::ChassisCnt


class Diag::Chassis::ChassisCnt::ChassisList : public ydk::Entity
{
    public:
        ChassisList();
        ~ChassisList();

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

        ydk::YLeaf location; //type: string
        class DefaultData; //type: Diag::Chassis::ChassisCnt::ChassisList::DefaultData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::Chassis::ChassisCnt::ChassisList::DefaultData> default_data;
        
}; // Diag::Chassis::ChassisCnt::ChassisList


class Diag::Chassis::ChassisCnt::ChassisList::DefaultData : public ydk::Entity
{
    public:
        DefaultData();
        ~DefaultData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList default_out_list; //type: list of  string

}; // Diag::Chassis::ChassisCnt::ChassisList::DefaultData


class Diag::Chassis::ChassisEepromCnt : public ydk::Entity
{
    public:
        ChassisEepromCnt();
        ~ChassisEepromCnt();

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

        class ChassisEepromList; //type: Diag::Chassis::ChassisEepromCnt::ChassisEepromList

        ydk::YList chassis_eeprom_list;
        
}; // Diag::Chassis::ChassisEepromCnt


class Diag::Chassis::ChassisEepromCnt::ChassisEepromList : public ydk::Entity
{
    public:
        ChassisEepromList();
        ~ChassisEepromList();

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

        ydk::YLeaf location; //type: string
        class EepromData; //type: Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData> eeprom_data;
        
}; // Diag::Chassis::ChassisEepromCnt::ChassisEepromList


class Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData : public ydk::Entity
{
    public:
        EepromData();
        ~EepromData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList raw_list; //type: list of  string

}; // Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData


class Diag::Summary : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class SummaryList; //type: Diag::Summary::SummaryList

        ydk::YList summary_list;
        
}; // Diag::Summary


class Diag::Summary::SummaryList : public ydk::Entity
{
    public:
        SummaryList();
        ~SummaryList();

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

        ydk::YLeaf location; //type: string
        class SummaryData; //type: Diag::Summary::SummaryList::SummaryData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::Summary::SummaryList::SummaryData> summary_data;
        
}; // Diag::Summary::SummaryList


class Diag::Summary::SummaryList::SummaryData : public ydk::Entity
{
    public:
        SummaryData();
        ~SummaryData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList summary_out_list; //type: list of  string

}; // Diag::Summary::SummaryList::SummaryData


class Diag::Eeprom : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class EepromList; //type: Diag::Eeprom::EepromList

        ydk::YList eeprom_list;
        
}; // Diag::Eeprom


class Diag::Eeprom::EepromList : public ydk::Entity
{
    public:
        EepromList();
        ~EepromList();

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

        ydk::YLeaf location; //type: string
        class EepromData; //type: Diag::Eeprom::EepromList::EepromData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::Eeprom::EepromList::EepromData> eeprom_data;
        
}; // Diag::Eeprom::EepromList


class Diag::Eeprom::EepromList::EepromData : public ydk::Entity
{
    public:
        EepromData();
        ~EepromData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList raw_list; //type: list of  string

}; // Diag::Eeprom::EepromList::EepromData


class Diag::Detail : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class DetailList; //type: Diag::Detail::DetailList

        ydk::YList detail_list;
        
}; // Diag::Detail


class Diag::Detail::DetailList : public ydk::Entity
{
    public:
        DetailList();
        ~DetailList();

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

        ydk::YLeaf location; //type: string
        class DetailData; //type: Diag::Detail::DetailList::DetailData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_diag::Diag::Detail::DetailList::DetailData> detail_data;
        
}; // Diag::Detail::DetailList


class Diag::Detail::DetailList::DetailData : public ydk::Entity
{
    public:
        DetailData();
        ~DetailData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList detail_out_list; //type: list of  string

}; // Diag::Detail::DetailList::DetailData


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_SHOW_DIAG_ */

