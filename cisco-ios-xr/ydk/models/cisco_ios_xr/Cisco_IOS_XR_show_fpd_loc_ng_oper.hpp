#ifndef _CISCO_IOS_XR_SHOW_FPD_LOC_NG_OPER_
#define _CISCO_IOS_XR_SHOW_FPD_LOC_NG_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_show_fpd_loc_ng_oper {

class ShowFpd : public ydk::Entity
{
    public:
        ShowFpd();
        ~ShowFpd();

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

        class Locations; //type: ShowFpd::Locations
        class HwModuleFpd; //type: ShowFpd::HwModuleFpd
        class HelpLocations; //type: ShowFpd::HelpLocations
        class HwModuleFpdHelpFpd; //type: ShowFpd::HwModuleFpdHelpFpd
        class Package; //type: ShowFpd::Package
        class LocationHelp; //type: ShowFpd::LocationHelp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Locations> locations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HwModuleFpd> hw_module_fpd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HelpLocations> help_locations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HwModuleFpdHelpFpd> hw_module_fpd_help_fpd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Package> package;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::LocationHelp> location_help;
        
}; // ShowFpd


class ShowFpd::Locations : public ydk::Entity
{
    public:
        Locations();
        ~Locations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Location; //type: ShowFpd::Locations::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Locations::Location> > location;
        
}; // ShowFpd::Locations


class ShowFpd::Locations::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location_name; //type: string
        class Fpd; //type: ShowFpd::Locations::Location::Fpd

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Locations::Location::Fpd> > fpd;
        
}; // ShowFpd::Locations::Location


class ShowFpd::Locations::Location::Fpd : public ydk::Entity
{
    public:
        Fpd();
        ~Fpd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fpd_name; //type: string
        class FpdInfoDetaile; //type: ShowFpd::Locations::Location::Fpd::FpdInfoDetaile

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Locations::Location::Fpd::FpdInfoDetaile> > fpd_info_detaile;
        
}; // ShowFpd::Locations::Location::Fpd


class ShowFpd::Locations::Location::Fpd::FpdInfoDetaile : public ydk::Entity
{
    public:
        FpdInfoDetaile();
        ~FpdInfoDetaile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location; //type: string
        ydk::YLeaf card_name; //type: string
        ydk::YLeaf fpd_name; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf secure_boot_attr; //type: string
        ydk::YLeaf status; //type: string
        ydk::YLeaf running_version; //type: string
        ydk::YLeaf programd_version; //type: string

}; // ShowFpd::Locations::Location::Fpd::FpdInfoDetaile


class ShowFpd::HwModuleFpd : public ydk::Entity
{
    public:
        HwModuleFpd();
        ~HwModuleFpd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FpdInfoDetaile; //type: ShowFpd::HwModuleFpd::FpdInfoDetaile

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HwModuleFpd::FpdInfoDetaile> > fpd_info_detaile;
        
}; // ShowFpd::HwModuleFpd


class ShowFpd::HwModuleFpd::FpdInfoDetaile : public ydk::Entity
{
    public:
        FpdInfoDetaile();
        ~FpdInfoDetaile();

        bool has_data() const override;
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
        ydk::YLeaf card_name; //type: string
        ydk::YLeaf fpd_name; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf secure_boot_attr; //type: string
        ydk::YLeaf status; //type: string
        ydk::YLeaf running_version; //type: string
        ydk::YLeaf programd_version; //type: string

}; // ShowFpd::HwModuleFpd::FpdInfoDetaile


class ShowFpd::HelpLocations : public ydk::Entity
{
    public:
        HelpLocations();
        ~HelpLocations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class HelpLocation; //type: ShowFpd::HelpLocations::HelpLocation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HelpLocations::HelpLocation> > help_location;
        
}; // ShowFpd::HelpLocations


class ShowFpd::HelpLocations::HelpLocation : public ydk::Entity
{
    public:
        HelpLocation();
        ~HelpLocation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location_name; //type: string
        class HelpFpd; //type: ShowFpd::HelpLocations::HelpLocation::HelpFpd

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HelpLocations::HelpLocation::HelpFpd> help_fpd;
        
}; // ShowFpd::HelpLocations::HelpLocation


class ShowFpd::HelpLocations::HelpLocation::HelpFpd : public ydk::Entity
{
    public:
        HelpFpd();
        ~HelpFpd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FpdName; //type: ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName> > fpd_name;
        
}; // ShowFpd::HelpLocations::HelpLocation::HelpFpd


class ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName : public ydk::Entity
{
    public:
        FpdName();
        ~FpdName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location; //type: string
        ydk::YLeaf fpd_name; //type: string

}; // ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName


class ShowFpd::HwModuleFpdHelpFpd : public ydk::Entity
{
    public:
        HwModuleFpdHelpFpd();
        ~HwModuleFpdHelpFpd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FpdName; //type: ShowFpd::HwModuleFpdHelpFpd::FpdName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HwModuleFpdHelpFpd::FpdName> > fpd_name;
        
}; // ShowFpd::HwModuleFpdHelpFpd


class ShowFpd::HwModuleFpdHelpFpd::FpdName : public ydk::Entity
{
    public:
        FpdName();
        ~FpdName();

        bool has_data() const override;
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
        ydk::YLeaf fpd_name; //type: string

}; // ShowFpd::HwModuleFpdHelpFpd::FpdName


class ShowFpd::Package : public ydk::Entity
{
    public:
        Package();
        ~Package();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FpdPkgData; //type: ShowFpd::Package::FpdPkgData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Package::FpdPkgData> > fpd_pkg_data;
        
}; // ShowFpd::Package


class ShowFpd::Package::FpdPkgData : public ydk::Entity
{
    public:
        FpdPkgData();
        ~FpdPkgData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf card_type; //type: string
        ydk::YLeaf fpd_desc; //type: string
        ydk::YLeaf upgrade_method; //type: string
        ydk::YLeaf fpd_ver; //type: string
        ydk::YLeaf min_sw_ver; //type: string
        ydk::YLeaf min_hw_ver; //type: string

}; // ShowFpd::Package::FpdPkgData


class ShowFpd::LocationHelp : public ydk::Entity
{
    public:
        LocationHelp();
        ~LocationHelp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LocationName; //type: ShowFpd::LocationHelp::LocationName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::LocationHelp::LocationName> > location_name;
        
}; // ShowFpd::LocationHelp


class ShowFpd::LocationHelp::LocationName : public ydk::Entity
{
    public:
        LocationName();
        ~LocationName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location_name; //type: string

}; // ShowFpd::LocationHelp::LocationName


}
}

#endif /* _CISCO_IOS_XR_SHOW_FPD_LOC_NG_OPER_ */

