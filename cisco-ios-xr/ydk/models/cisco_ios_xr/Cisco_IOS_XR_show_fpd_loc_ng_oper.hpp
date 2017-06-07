#ifndef _CISCO_IOS_XR_SHOW_FPD_LOC_NG_OPER_
#define _CISCO_IOS_XR_SHOW_FPD_LOC_NG_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_show_fpd_loc_ng_oper {

class ShowFpd : public Entity
{
    public:
        ShowFpd();
        ~ShowFpd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Locations; //type: ShowFpd::Locations
        class HwModuleFpd; //type: ShowFpd::HwModuleFpd
        class HelpLocations; //type: ShowFpd::HelpLocations
        class HwModuleFpdHelpFpd; //type: ShowFpd::HwModuleFpdHelpFpd
        class Package; //type: ShowFpd::Package
        class LocationHelp; //type: ShowFpd::LocationHelp

        std::shared_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HelpLocations> help_locations;
        std::shared_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HwModuleFpd> hw_module_fpd;
        std::shared_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HwModuleFpdHelpFpd> hw_module_fpd_help_fpd;
        std::shared_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::LocationHelp> location_help;
        std::shared_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Locations> locations;
        std::shared_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Package> package;
        
}; // ShowFpd


class ShowFpd::Locations : public Entity
{
    public:
        Locations();
        ~Locations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Location; //type: ShowFpd::Locations::Location

        std::vector<std::shared_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Locations::Location> > location;
        
}; // ShowFpd::Locations


class ShowFpd::Locations::Location : public Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location_name; //type: string
        class Fpd; //type: ShowFpd::Locations::Location::Fpd

        std::vector<std::shared_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Locations::Location::Fpd> > fpd;
        
}; // ShowFpd::Locations::Location


class ShowFpd::Locations::Location::Fpd : public Entity
{
    public:
        Fpd();
        ~Fpd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fpd_name; //type: string
        class FpdInfoDetaile; //type: ShowFpd::Locations::Location::Fpd::FpdInfoDetaile

        std::vector<std::shared_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Locations::Location::Fpd::FpdInfoDetaile> > fpd_info_detaile;
        
}; // ShowFpd::Locations::Location::Fpd


class ShowFpd::Locations::Location::Fpd::FpdInfoDetaile : public Entity
{
    public:
        FpdInfoDetaile();
        ~FpdInfoDetaile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        YLeaf card_name; //type: string
        YLeaf fpd_name; //type: string
        YLeaf hw_version; //type: string
        YLeaf secure_boot_attr; //type: string
        YLeaf status; //type: string
        YLeaf running_version; //type: string
        YLeaf programd_version; //type: string

}; // ShowFpd::Locations::Location::Fpd::FpdInfoDetaile


class ShowFpd::HwModuleFpd : public Entity
{
    public:
        HwModuleFpd();
        ~HwModuleFpd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FpdInfoDetaile; //type: ShowFpd::HwModuleFpd::FpdInfoDetaile

        std::vector<std::shared_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HwModuleFpd::FpdInfoDetaile> > fpd_info_detaile;
        
}; // ShowFpd::HwModuleFpd


class ShowFpd::HwModuleFpd::FpdInfoDetaile : public Entity
{
    public:
        FpdInfoDetaile();
        ~FpdInfoDetaile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        YLeaf card_name; //type: string
        YLeaf fpd_name; //type: string
        YLeaf hw_version; //type: string
        YLeaf secure_boot_attr; //type: string
        YLeaf status; //type: string
        YLeaf running_version; //type: string
        YLeaf programd_version; //type: string

}; // ShowFpd::HwModuleFpd::FpdInfoDetaile


class ShowFpd::HelpLocations : public Entity
{
    public:
        HelpLocations();
        ~HelpLocations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HelpLocation; //type: ShowFpd::HelpLocations::HelpLocation

        std::vector<std::shared_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HelpLocations::HelpLocation> > help_location;
        
}; // ShowFpd::HelpLocations


class ShowFpd::HelpLocations::HelpLocation : public Entity
{
    public:
        HelpLocation();
        ~HelpLocation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location_name; //type: string
        class HelpFpd; //type: ShowFpd::HelpLocations::HelpLocation::HelpFpd

        std::shared_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HelpLocations::HelpLocation::HelpFpd> help_fpd;
        
}; // ShowFpd::HelpLocations::HelpLocation


class ShowFpd::HelpLocations::HelpLocation::HelpFpd : public Entity
{
    public:
        HelpFpd();
        ~HelpFpd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FpdName; //type: ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName

        std::vector<std::shared_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName> > fpd_name;
        
}; // ShowFpd::HelpLocations::HelpLocation::HelpFpd


class ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName : public Entity
{
    public:
        FpdName();
        ~FpdName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        YLeaf fpd_name; //type: string

}; // ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName


class ShowFpd::HwModuleFpdHelpFpd : public Entity
{
    public:
        HwModuleFpdHelpFpd();
        ~HwModuleFpdHelpFpd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FpdName; //type: ShowFpd::HwModuleFpdHelpFpd::FpdName

        std::vector<std::shared_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HwModuleFpdHelpFpd::FpdName> > fpd_name;
        
}; // ShowFpd::HwModuleFpdHelpFpd


class ShowFpd::HwModuleFpdHelpFpd::FpdName : public Entity
{
    public:
        FpdName();
        ~FpdName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        YLeaf fpd_name; //type: string

}; // ShowFpd::HwModuleFpdHelpFpd::FpdName


class ShowFpd::Package : public Entity
{
    public:
        Package();
        ~Package();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FpdPkgData; //type: ShowFpd::Package::FpdPkgData

        std::vector<std::shared_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Package::FpdPkgData> > fpd_pkg_data;
        
}; // ShowFpd::Package


class ShowFpd::Package::FpdPkgData : public Entity
{
    public:
        FpdPkgData();
        ~FpdPkgData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf card_type; //type: string
        YLeaf fpd_desc; //type: string
        YLeaf upgrade_method; //type: string
        YLeaf fpd_ver; //type: string
        YLeaf min_sw_ver; //type: string
        YLeaf min_hw_ver; //type: string

}; // ShowFpd::Package::FpdPkgData


class ShowFpd::LocationHelp : public Entity
{
    public:
        LocationHelp();
        ~LocationHelp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LocationName; //type: ShowFpd::LocationHelp::LocationName

        std::vector<std::shared_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::LocationHelp::LocationName> > location_name;
        
}; // ShowFpd::LocationHelp


class ShowFpd::LocationHelp::LocationName : public Entity
{
    public:
        LocationName();
        ~LocationName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location_name; //type: string

}; // ShowFpd::LocationHelp::LocationName


}
}

#endif /* _CISCO_IOS_XR_SHOW_FPD_LOC_NG_OPER_ */

