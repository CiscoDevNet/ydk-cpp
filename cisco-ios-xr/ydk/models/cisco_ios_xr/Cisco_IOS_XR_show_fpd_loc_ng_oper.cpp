
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_show_fpd_loc_ng_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_show_fpd_loc_ng_oper {

ShowFpd::ShowFpd()
    :
    locations(std::make_shared<ShowFpd::Locations>())
    , hw_module_fpd(std::make_shared<ShowFpd::HwModuleFpd>())
    , help_locations(std::make_shared<ShowFpd::HelpLocations>())
    , hw_module_fpd_help_fpd(std::make_shared<ShowFpd::HwModuleFpdHelpFpd>())
    , package(std::make_shared<ShowFpd::Package>())
    , location_help(std::make_shared<ShowFpd::LocationHelp>())
{
    locations->parent = this;
    hw_module_fpd->parent = this;
    help_locations->parent = this;
    hw_module_fpd_help_fpd->parent = this;
    package->parent = this;
    location_help->parent = this;

    yang_name = "show-fpd"; yang_parent_name = "Cisco-IOS-XR-show-fpd-loc-ng-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

ShowFpd::~ShowFpd()
{
}

bool ShowFpd::has_data() const
{
    if (is_presence_container) return true;
    return (locations !=  nullptr && locations->has_data())
	|| (hw_module_fpd !=  nullptr && hw_module_fpd->has_data())
	|| (help_locations !=  nullptr && help_locations->has_data())
	|| (hw_module_fpd_help_fpd !=  nullptr && hw_module_fpd_help_fpd->has_data())
	|| (package !=  nullptr && package->has_data())
	|| (location_help !=  nullptr && location_help->has_data());
}

bool ShowFpd::has_operation() const
{
    return is_set(yfilter)
	|| (locations !=  nullptr && locations->has_operation())
	|| (hw_module_fpd !=  nullptr && hw_module_fpd->has_operation())
	|| (help_locations !=  nullptr && help_locations->has_operation())
	|| (hw_module_fpd_help_fpd !=  nullptr && hw_module_fpd_help_fpd->has_operation())
	|| (package !=  nullptr && package->has_operation())
	|| (location_help !=  nullptr && location_help->has_operation());
}

std::string ShowFpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locations")
    {
        if(locations == nullptr)
        {
            locations = std::make_shared<ShowFpd::Locations>();
        }
        return locations;
    }

    if(child_yang_name == "hw-module-fpd")
    {
        if(hw_module_fpd == nullptr)
        {
            hw_module_fpd = std::make_shared<ShowFpd::HwModuleFpd>();
        }
        return hw_module_fpd;
    }

    if(child_yang_name == "help-locations")
    {
        if(help_locations == nullptr)
        {
            help_locations = std::make_shared<ShowFpd::HelpLocations>();
        }
        return help_locations;
    }

    if(child_yang_name == "hw-module-fpd-help-fpd")
    {
        if(hw_module_fpd_help_fpd == nullptr)
        {
            hw_module_fpd_help_fpd = std::make_shared<ShowFpd::HwModuleFpdHelpFpd>();
        }
        return hw_module_fpd_help_fpd;
    }

    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<ShowFpd::Package>();
        }
        return package;
    }

    if(child_yang_name == "location-help")
    {
        if(location_help == nullptr)
        {
            location_help = std::make_shared<ShowFpd::LocationHelp>();
        }
        return location_help;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(locations != nullptr)
    {
        _children["locations"] = locations;
    }

    if(hw_module_fpd != nullptr)
    {
        _children["hw-module-fpd"] = hw_module_fpd;
    }

    if(help_locations != nullptr)
    {
        _children["help-locations"] = help_locations;
    }

    if(hw_module_fpd_help_fpd != nullptr)
    {
        _children["hw-module-fpd-help-fpd"] = hw_module_fpd_help_fpd;
    }

    if(package != nullptr)
    {
        _children["package"] = package;
    }

    if(location_help != nullptr)
    {
        _children["location-help"] = location_help;
    }

    return _children;
}

void ShowFpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowFpd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ShowFpd::clone_ptr() const
{
    return std::make_shared<ShowFpd>();
}

std::string ShowFpd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ShowFpd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ShowFpd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ShowFpd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ShowFpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locations" || name == "hw-module-fpd" || name == "help-locations" || name == "hw-module-fpd-help-fpd" || name == "package" || name == "location-help")
        return true;
    return false;
}

ShowFpd::Locations::Locations()
    :
    location(this, {"location_name"})
{

    yang_name = "locations"; yang_parent_name = "show-fpd"; is_top_level_class = false; has_list_ancestor = false; 
}

ShowFpd::Locations::~Locations()
{
}

bool ShowFpd::Locations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::Locations::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ShowFpd::Locations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::Locations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::Locations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::Locations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<ShowFpd::Locations::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::Locations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ShowFpd::Locations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowFpd::Locations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ShowFpd::Locations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

ShowFpd::Locations::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    details(std::make_shared<ShowFpd::Locations::Location::Details>())
{
    details->parent = this;

    yang_name = "location"; yang_parent_name = "locations"; is_top_level_class = false; has_list_ancestor = false; 
}

ShowFpd::Locations::Location::~Location()
{
}

bool ShowFpd::Locations::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set
	|| (details !=  nullptr && details->has_data());
}

bool ShowFpd::Locations::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter)
	|| (details !=  nullptr && details->has_operation());
}

std::string ShowFpd::Locations::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/locations/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::Locations::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::Locations::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::Locations::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<ShowFpd::Locations::Location::Details>();
        }
        return details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::Locations::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(details != nullptr)
    {
        _children["details"] = details;
    }

    return _children;
}

void ShowFpd::Locations::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::Locations::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool ShowFpd::Locations::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details" || name == "location-name")
        return true;
    return false;
}

ShowFpd::Locations::Location::Details::Details()
    :
    detail(this, {"fpd_name"})
{

    yang_name = "details"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

ShowFpd::Locations::Location::Details::~Details()
{
}

bool ShowFpd::Locations::Location::Details::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<detail.len(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::Locations::Location::Details::has_operation() const
{
    for (std::size_t index=0; index<detail.len(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ShowFpd::Locations::Location::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::Locations::Location::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::Locations::Location::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        auto ent_ = std::make_shared<ShowFpd::Locations::Location::Details::Detail>();
        ent_->parent = this;
        detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::Locations::Location::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ShowFpd::Locations::Location::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowFpd::Locations::Location::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ShowFpd::Locations::Location::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail")
        return true;
    return false;
}

ShowFpd::Locations::Location::Details::Detail::Detail()
    :
    fpd_name{YType::str, "fpd-name"},
    upgrade_status{YType::str, "upgrade-status"}
        ,
    fpd_info_detaile(this, {})
{

    yang_name = "detail"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true; 
}

ShowFpd::Locations::Location::Details::Detail::~Detail()
{
}

bool ShowFpd::Locations::Location::Details::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fpd_info_detaile.len(); index++)
    {
        if(fpd_info_detaile[index]->has_data())
            return true;
    }
    return fpd_name.is_set
	|| upgrade_status.is_set;
}

bool ShowFpd::Locations::Location::Details::Detail::has_operation() const
{
    for (std::size_t index=0; index<fpd_info_detaile.len(); index++)
    {
        if(fpd_info_detaile[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fpd_name.yfilter)
	|| ydk::is_set(upgrade_status.yfilter);
}

std::string ShowFpd::Locations::Location::Details::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    ADD_KEY_TOKEN(fpd_name, "fpd-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::Locations::Location::Details::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpd_name.is_set || is_set(fpd_name.yfilter)) leaf_name_data.push_back(fpd_name.get_name_leafdata());
    if (upgrade_status.is_set || is_set(upgrade_status.yfilter)) leaf_name_data.push_back(upgrade_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::Locations::Location::Details::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd-info-detaile")
    {
        auto ent_ = std::make_shared<ShowFpd::Locations::Location::Details::Detail::FpdInfoDetaile>();
        ent_->parent = this;
        fpd_info_detaile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::Locations::Location::Details::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fpd_info_detaile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ShowFpd::Locations::Location::Details::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fpd-name")
    {
        fpd_name = value;
        fpd_name.value_namespace = name_space;
        fpd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upgrade-status")
    {
        upgrade_status = value;
        upgrade_status.value_namespace = name_space;
        upgrade_status.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::Locations::Location::Details::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fpd-name")
    {
        fpd_name.yfilter = yfilter;
    }
    if(value_path == "upgrade-status")
    {
        upgrade_status.yfilter = yfilter;
    }
}

bool ShowFpd::Locations::Location::Details::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd-info-detaile" || name == "fpd-name" || name == "upgrade-status")
        return true;
    return false;
}

ShowFpd::Locations::Location::Details::Detail::FpdInfoDetaile::FpdInfoDetaile()
    :
    location{YType::str, "location"},
    card_name{YType::str, "card-name"},
    fpd_name{YType::str, "fpd-name"},
    hw_version{YType::str, "hw-version"},
    secure_boot_attr{YType::str, "secure-boot-attr"},
    status{YType::str, "status"},
    running_version{YType::str, "running-version"},
    programd_version{YType::str, "programd-version"}
{

    yang_name = "fpd-info-detaile"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

ShowFpd::Locations::Location::Details::Detail::FpdInfoDetaile::~FpdInfoDetaile()
{
}

bool ShowFpd::Locations::Location::Details::Detail::FpdInfoDetaile::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| card_name.is_set
	|| fpd_name.is_set
	|| hw_version.is_set
	|| secure_boot_attr.is_set
	|| status.is_set
	|| running_version.is_set
	|| programd_version.is_set;
}

bool ShowFpd::Locations::Location::Details::Detail::FpdInfoDetaile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(card_name.yfilter)
	|| ydk::is_set(fpd_name.yfilter)
	|| ydk::is_set(hw_version.yfilter)
	|| ydk::is_set(secure_boot_attr.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(running_version.yfilter)
	|| ydk::is_set(programd_version.yfilter);
}

std::string ShowFpd::Locations::Location::Details::Detail::FpdInfoDetaile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-info-detaile";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::Locations::Location::Details::Detail::FpdInfoDetaile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (card_name.is_set || is_set(card_name.yfilter)) leaf_name_data.push_back(card_name.get_name_leafdata());
    if (fpd_name.is_set || is_set(fpd_name.yfilter)) leaf_name_data.push_back(fpd_name.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.yfilter)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (secure_boot_attr.is_set || is_set(secure_boot_attr.yfilter)) leaf_name_data.push_back(secure_boot_attr.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (running_version.is_set || is_set(running_version.yfilter)) leaf_name_data.push_back(running_version.get_name_leafdata());
    if (programd_version.is_set || is_set(programd_version.yfilter)) leaf_name_data.push_back(programd_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::Locations::Location::Details::Detail::FpdInfoDetaile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::Locations::Location::Details::Detail::FpdInfoDetaile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ShowFpd::Locations::Location::Details::Detail::FpdInfoDetaile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-name")
    {
        card_name = value;
        card_name.value_namespace = name_space;
        card_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-name")
    {
        fpd_name = value;
        fpd_name.value_namespace = name_space;
        fpd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
        hw_version.value_namespace = name_space;
        hw_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-boot-attr")
    {
        secure_boot_attr = value;
        secure_boot_attr.value_namespace = name_space;
        secure_boot_attr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running-version")
    {
        running_version = value;
        running_version.value_namespace = name_space;
        running_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "programd-version")
    {
        programd_version = value;
        programd_version.value_namespace = name_space;
        programd_version.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::Locations::Location::Details::Detail::FpdInfoDetaile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "card-name")
    {
        card_name.yfilter = yfilter;
    }
    if(value_path == "fpd-name")
    {
        fpd_name.yfilter = yfilter;
    }
    if(value_path == "hw-version")
    {
        hw_version.yfilter = yfilter;
    }
    if(value_path == "secure-boot-attr")
    {
        secure_boot_attr.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "running-version")
    {
        running_version.yfilter = yfilter;
    }
    if(value_path == "programd-version")
    {
        programd_version.yfilter = yfilter;
    }
}

bool ShowFpd::Locations::Location::Details::Detail::FpdInfoDetaile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "card-name" || name == "fpd-name" || name == "hw-version" || name == "secure-boot-attr" || name == "status" || name == "running-version" || name == "programd-version")
        return true;
    return false;
}

ShowFpd::HwModuleFpd::HwModuleFpd()
    :
    upgrade_status{YType::str, "upgrade-status"}
        ,
    fpd_info_detaile(this, {})
{

    yang_name = "hw-module-fpd"; yang_parent_name = "show-fpd"; is_top_level_class = false; has_list_ancestor = false; 
}

ShowFpd::HwModuleFpd::~HwModuleFpd()
{
}

bool ShowFpd::HwModuleFpd::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fpd_info_detaile.len(); index++)
    {
        if(fpd_info_detaile[index]->has_data())
            return true;
    }
    return upgrade_status.is_set;
}

bool ShowFpd::HwModuleFpd::has_operation() const
{
    for (std::size_t index=0; index<fpd_info_detaile.len(); index++)
    {
        if(fpd_info_detaile[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(upgrade_status.yfilter);
}

std::string ShowFpd::HwModuleFpd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::HwModuleFpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-module-fpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::HwModuleFpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (upgrade_status.is_set || is_set(upgrade_status.yfilter)) leaf_name_data.push_back(upgrade_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::HwModuleFpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd-info-detaile")
    {
        auto ent_ = std::make_shared<ShowFpd::HwModuleFpd::FpdInfoDetaile>();
        ent_->parent = this;
        fpd_info_detaile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::HwModuleFpd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fpd_info_detaile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ShowFpd::HwModuleFpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upgrade-status")
    {
        upgrade_status = value;
        upgrade_status.value_namespace = name_space;
        upgrade_status.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::HwModuleFpd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upgrade-status")
    {
        upgrade_status.yfilter = yfilter;
    }
}

bool ShowFpd::HwModuleFpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd-info-detaile" || name == "upgrade-status")
        return true;
    return false;
}

ShowFpd::HwModuleFpd::FpdInfoDetaile::FpdInfoDetaile()
    :
    location{YType::str, "location"},
    card_name{YType::str, "card-name"},
    fpd_name{YType::str, "fpd-name"},
    hw_version{YType::str, "hw-version"},
    secure_boot_attr{YType::str, "secure-boot-attr"},
    status{YType::str, "status"},
    running_version{YType::str, "running-version"},
    programd_version{YType::str, "programd-version"}
{

    yang_name = "fpd-info-detaile"; yang_parent_name = "hw-module-fpd"; is_top_level_class = false; has_list_ancestor = false; 
}

ShowFpd::HwModuleFpd::FpdInfoDetaile::~FpdInfoDetaile()
{
}

bool ShowFpd::HwModuleFpd::FpdInfoDetaile::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| card_name.is_set
	|| fpd_name.is_set
	|| hw_version.is_set
	|| secure_boot_attr.is_set
	|| status.is_set
	|| running_version.is_set
	|| programd_version.is_set;
}

bool ShowFpd::HwModuleFpd::FpdInfoDetaile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(card_name.yfilter)
	|| ydk::is_set(fpd_name.yfilter)
	|| ydk::is_set(hw_version.yfilter)
	|| ydk::is_set(secure_boot_attr.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(running_version.yfilter)
	|| ydk::is_set(programd_version.yfilter);
}

std::string ShowFpd::HwModuleFpd::FpdInfoDetaile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/hw-module-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::HwModuleFpd::FpdInfoDetaile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-info-detaile";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::HwModuleFpd::FpdInfoDetaile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (card_name.is_set || is_set(card_name.yfilter)) leaf_name_data.push_back(card_name.get_name_leafdata());
    if (fpd_name.is_set || is_set(fpd_name.yfilter)) leaf_name_data.push_back(fpd_name.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.yfilter)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (secure_boot_attr.is_set || is_set(secure_boot_attr.yfilter)) leaf_name_data.push_back(secure_boot_attr.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (running_version.is_set || is_set(running_version.yfilter)) leaf_name_data.push_back(running_version.get_name_leafdata());
    if (programd_version.is_set || is_set(programd_version.yfilter)) leaf_name_data.push_back(programd_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::HwModuleFpd::FpdInfoDetaile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::HwModuleFpd::FpdInfoDetaile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ShowFpd::HwModuleFpd::FpdInfoDetaile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-name")
    {
        card_name = value;
        card_name.value_namespace = name_space;
        card_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-name")
    {
        fpd_name = value;
        fpd_name.value_namespace = name_space;
        fpd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
        hw_version.value_namespace = name_space;
        hw_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-boot-attr")
    {
        secure_boot_attr = value;
        secure_boot_attr.value_namespace = name_space;
        secure_boot_attr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running-version")
    {
        running_version = value;
        running_version.value_namespace = name_space;
        running_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "programd-version")
    {
        programd_version = value;
        programd_version.value_namespace = name_space;
        programd_version.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::HwModuleFpd::FpdInfoDetaile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "card-name")
    {
        card_name.yfilter = yfilter;
    }
    if(value_path == "fpd-name")
    {
        fpd_name.yfilter = yfilter;
    }
    if(value_path == "hw-version")
    {
        hw_version.yfilter = yfilter;
    }
    if(value_path == "secure-boot-attr")
    {
        secure_boot_attr.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "running-version")
    {
        running_version.yfilter = yfilter;
    }
    if(value_path == "programd-version")
    {
        programd_version.yfilter = yfilter;
    }
}

bool ShowFpd::HwModuleFpd::FpdInfoDetaile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "card-name" || name == "fpd-name" || name == "hw-version" || name == "secure-boot-attr" || name == "status" || name == "running-version" || name == "programd-version")
        return true;
    return false;
}

ShowFpd::HelpLocations::HelpLocations()
    :
    help_location(this, {"location_name"})
{

    yang_name = "help-locations"; yang_parent_name = "show-fpd"; is_top_level_class = false; has_list_ancestor = false; 
}

ShowFpd::HelpLocations::~HelpLocations()
{
}

bool ShowFpd::HelpLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<help_location.len(); index++)
    {
        if(help_location[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::HelpLocations::has_operation() const
{
    for (std::size_t index=0; index<help_location.len(); index++)
    {
        if(help_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ShowFpd::HelpLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::HelpLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "help-locations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::HelpLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::HelpLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "help-location")
    {
        auto ent_ = std::make_shared<ShowFpd::HelpLocations::HelpLocation>();
        ent_->parent = this;
        help_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::HelpLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : help_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ShowFpd::HelpLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowFpd::HelpLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ShowFpd::HelpLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "help-location")
        return true;
    return false;
}

ShowFpd::HelpLocations::HelpLocation::HelpLocation()
    :
    location_name{YType::str, "location-name"}
        ,
    help_fpd(std::make_shared<ShowFpd::HelpLocations::HelpLocation::HelpFpd>())
{
    help_fpd->parent = this;

    yang_name = "help-location"; yang_parent_name = "help-locations"; is_top_level_class = false; has_list_ancestor = false; 
}

ShowFpd::HelpLocations::HelpLocation::~HelpLocation()
{
}

bool ShowFpd::HelpLocations::HelpLocation::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set
	|| (help_fpd !=  nullptr && help_fpd->has_data());
}

bool ShowFpd::HelpLocations::HelpLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter)
	|| (help_fpd !=  nullptr && help_fpd->has_operation());
}

std::string ShowFpd::HelpLocations::HelpLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/help-locations/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::HelpLocations::HelpLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "help-location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::HelpLocations::HelpLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::HelpLocations::HelpLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "help-fpd")
    {
        if(help_fpd == nullptr)
        {
            help_fpd = std::make_shared<ShowFpd::HelpLocations::HelpLocation::HelpFpd>();
        }
        return help_fpd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::HelpLocations::HelpLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(help_fpd != nullptr)
    {
        _children["help-fpd"] = help_fpd;
    }

    return _children;
}

void ShowFpd::HelpLocations::HelpLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::HelpLocations::HelpLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool ShowFpd::HelpLocations::HelpLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "help-fpd" || name == "location-name")
        return true;
    return false;
}

ShowFpd::HelpLocations::HelpLocation::HelpFpd::HelpFpd()
    :
    fpd_name(this, {})
{

    yang_name = "help-fpd"; yang_parent_name = "help-location"; is_top_level_class = false; has_list_ancestor = true; 
}

ShowFpd::HelpLocations::HelpLocation::HelpFpd::~HelpFpd()
{
}

bool ShowFpd::HelpLocations::HelpLocation::HelpFpd::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fpd_name.len(); index++)
    {
        if(fpd_name[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::HelpLocations::HelpLocation::HelpFpd::has_operation() const
{
    for (std::size_t index=0; index<fpd_name.len(); index++)
    {
        if(fpd_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ShowFpd::HelpLocations::HelpLocation::HelpFpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "help-fpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::HelpLocations::HelpLocation::HelpFpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::HelpLocations::HelpLocation::HelpFpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd-name")
    {
        auto ent_ = std::make_shared<ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName>();
        ent_->parent = this;
        fpd_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::HelpLocations::HelpLocation::HelpFpd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fpd_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ShowFpd::HelpLocations::HelpLocation::HelpFpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowFpd::HelpLocations::HelpLocation::HelpFpd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ShowFpd::HelpLocations::HelpLocation::HelpFpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd-name")
        return true;
    return false;
}

ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::FpdName()
    :
    location{YType::str, "location"},
    fpd_name{YType::str, "fpd-name"}
{

    yang_name = "fpd-name"; yang_parent_name = "help-fpd"; is_top_level_class = false; has_list_ancestor = true; 
}

ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::~FpdName()
{
}

bool ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| fpd_name.is_set;
}

bool ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(fpd_name.yfilter);
}

std::string ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-name";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (fpd_name.is_set || is_set(fpd_name.yfilter)) leaf_name_data.push_back(fpd_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-name")
    {
        fpd_name = value;
        fpd_name.value_namespace = name_space;
        fpd_name.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "fpd-name")
    {
        fpd_name.yfilter = yfilter;
    }
}

bool ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "fpd-name")
        return true;
    return false;
}

ShowFpd::HwModuleFpdHelpFpd::HwModuleFpdHelpFpd()
    :
    fpd_name(this, {})
{

    yang_name = "hw-module-fpd-help-fpd"; yang_parent_name = "show-fpd"; is_top_level_class = false; has_list_ancestor = false; 
}

ShowFpd::HwModuleFpdHelpFpd::~HwModuleFpdHelpFpd()
{
}

bool ShowFpd::HwModuleFpdHelpFpd::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fpd_name.len(); index++)
    {
        if(fpd_name[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::HwModuleFpdHelpFpd::has_operation() const
{
    for (std::size_t index=0; index<fpd_name.len(); index++)
    {
        if(fpd_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ShowFpd::HwModuleFpdHelpFpd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::HwModuleFpdHelpFpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-module-fpd-help-fpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::HwModuleFpdHelpFpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::HwModuleFpdHelpFpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd-name")
    {
        auto ent_ = std::make_shared<ShowFpd::HwModuleFpdHelpFpd::FpdName>();
        ent_->parent = this;
        fpd_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::HwModuleFpdHelpFpd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fpd_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ShowFpd::HwModuleFpdHelpFpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowFpd::HwModuleFpdHelpFpd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ShowFpd::HwModuleFpdHelpFpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd-name")
        return true;
    return false;
}

ShowFpd::HwModuleFpdHelpFpd::FpdName::FpdName()
    :
    location{YType::str, "location"},
    fpd_name{YType::str, "fpd-name"}
{

    yang_name = "fpd-name"; yang_parent_name = "hw-module-fpd-help-fpd"; is_top_level_class = false; has_list_ancestor = false; 
}

ShowFpd::HwModuleFpdHelpFpd::FpdName::~FpdName()
{
}

bool ShowFpd::HwModuleFpdHelpFpd::FpdName::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| fpd_name.is_set;
}

bool ShowFpd::HwModuleFpdHelpFpd::FpdName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(fpd_name.yfilter);
}

std::string ShowFpd::HwModuleFpdHelpFpd::FpdName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/hw-module-fpd-help-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::HwModuleFpdHelpFpd::FpdName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-name";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::HwModuleFpdHelpFpd::FpdName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (fpd_name.is_set || is_set(fpd_name.yfilter)) leaf_name_data.push_back(fpd_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::HwModuleFpdHelpFpd::FpdName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::HwModuleFpdHelpFpd::FpdName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ShowFpd::HwModuleFpdHelpFpd::FpdName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-name")
    {
        fpd_name = value;
        fpd_name.value_namespace = name_space;
        fpd_name.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::HwModuleFpdHelpFpd::FpdName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "fpd-name")
    {
        fpd_name.yfilter = yfilter;
    }
}

bool ShowFpd::HwModuleFpdHelpFpd::FpdName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "fpd-name")
        return true;
    return false;
}

ShowFpd::Package::Package()
    :
    fpd_pkg_data(this, {})
{

    yang_name = "package"; yang_parent_name = "show-fpd"; is_top_level_class = false; has_list_ancestor = false; 
}

ShowFpd::Package::~Package()
{
}

bool ShowFpd::Package::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fpd_pkg_data.len(); index++)
    {
        if(fpd_pkg_data[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::Package::has_operation() const
{
    for (std::size_t index=0; index<fpd_pkg_data.len(); index++)
    {
        if(fpd_pkg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ShowFpd::Package::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd-pkg-data")
    {
        auto ent_ = std::make_shared<ShowFpd::Package::FpdPkgData>();
        ent_->parent = this;
        fpd_pkg_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fpd_pkg_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ShowFpd::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowFpd::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ShowFpd::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd-pkg-data")
        return true;
    return false;
}

ShowFpd::Package::FpdPkgData::FpdPkgData()
    :
    card_type{YType::str, "card-type"},
    fpd_desc{YType::str, "fpd-desc"},
    upgrade_method{YType::str, "upgrade-method"},
    fpd_ver{YType::str, "fpd-ver"},
    min_sw_ver{YType::str, "min-sw-ver"},
    min_hw_ver{YType::str, "min-hw-ver"}
{

    yang_name = "fpd-pkg-data"; yang_parent_name = "package"; is_top_level_class = false; has_list_ancestor = false; 
}

ShowFpd::Package::FpdPkgData::~FpdPkgData()
{
}

bool ShowFpd::Package::FpdPkgData::has_data() const
{
    if (is_presence_container) return true;
    return card_type.is_set
	|| fpd_desc.is_set
	|| upgrade_method.is_set
	|| fpd_ver.is_set
	|| min_sw_ver.is_set
	|| min_hw_ver.is_set;
}

bool ShowFpd::Package::FpdPkgData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(fpd_desc.yfilter)
	|| ydk::is_set(upgrade_method.yfilter)
	|| ydk::is_set(fpd_ver.yfilter)
	|| ydk::is_set(min_sw_ver.yfilter)
	|| ydk::is_set(min_hw_ver.yfilter);
}

std::string ShowFpd::Package::FpdPkgData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/package/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::Package::FpdPkgData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-pkg-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::Package::FpdPkgData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (fpd_desc.is_set || is_set(fpd_desc.yfilter)) leaf_name_data.push_back(fpd_desc.get_name_leafdata());
    if (upgrade_method.is_set || is_set(upgrade_method.yfilter)) leaf_name_data.push_back(upgrade_method.get_name_leafdata());
    if (fpd_ver.is_set || is_set(fpd_ver.yfilter)) leaf_name_data.push_back(fpd_ver.get_name_leafdata());
    if (min_sw_ver.is_set || is_set(min_sw_ver.yfilter)) leaf_name_data.push_back(min_sw_ver.get_name_leafdata());
    if (min_hw_ver.is_set || is_set(min_hw_ver.yfilter)) leaf_name_data.push_back(min_hw_ver.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::Package::FpdPkgData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::Package::FpdPkgData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ShowFpd::Package::FpdPkgData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-desc")
    {
        fpd_desc = value;
        fpd_desc.value_namespace = name_space;
        fpd_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upgrade-method")
    {
        upgrade_method = value;
        upgrade_method.value_namespace = name_space;
        upgrade_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-ver")
    {
        fpd_ver = value;
        fpd_ver.value_namespace = name_space;
        fpd_ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-sw-ver")
    {
        min_sw_ver = value;
        min_sw_ver.value_namespace = name_space;
        min_sw_ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-hw-ver")
    {
        min_hw_ver = value;
        min_hw_ver.value_namespace = name_space;
        min_hw_ver.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::Package::FpdPkgData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "fpd-desc")
    {
        fpd_desc.yfilter = yfilter;
    }
    if(value_path == "upgrade-method")
    {
        upgrade_method.yfilter = yfilter;
    }
    if(value_path == "fpd-ver")
    {
        fpd_ver.yfilter = yfilter;
    }
    if(value_path == "min-sw-ver")
    {
        min_sw_ver.yfilter = yfilter;
    }
    if(value_path == "min-hw-ver")
    {
        min_hw_ver.yfilter = yfilter;
    }
}

bool ShowFpd::Package::FpdPkgData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card-type" || name == "fpd-desc" || name == "upgrade-method" || name == "fpd-ver" || name == "min-sw-ver" || name == "min-hw-ver")
        return true;
    return false;
}

ShowFpd::LocationHelp::LocationHelp()
    :
    location_name(this, {})
{

    yang_name = "location-help"; yang_parent_name = "show-fpd"; is_top_level_class = false; has_list_ancestor = false; 
}

ShowFpd::LocationHelp::~LocationHelp()
{
}

bool ShowFpd::LocationHelp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location_name.len(); index++)
    {
        if(location_name[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::LocationHelp::has_operation() const
{
    for (std::size_t index=0; index<location_name.len(); index++)
    {
        if(location_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ShowFpd::LocationHelp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::LocationHelp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location-help";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::LocationHelp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::LocationHelp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location-name")
    {
        auto ent_ = std::make_shared<ShowFpd::LocationHelp::LocationName>();
        ent_->parent = this;
        location_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::LocationHelp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ShowFpd::LocationHelp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ShowFpd::LocationHelp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ShowFpd::LocationHelp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

ShowFpd::LocationHelp::LocationName::LocationName()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location-name"; yang_parent_name = "location-help"; is_top_level_class = false; has_list_ancestor = false; 
}

ShowFpd::LocationHelp::LocationName::~LocationName()
{
}

bool ShowFpd::LocationHelp::LocationName::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool ShowFpd::LocationHelp::LocationName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string ShowFpd::LocationHelp::LocationName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/location-help/" << get_segment_path();
    return path_buffer.str();
}

std::string ShowFpd::LocationHelp::LocationName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location-name";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ShowFpd::LocationHelp::LocationName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ShowFpd::LocationHelp::LocationName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ShowFpd::LocationHelp::LocationName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ShowFpd::LocationHelp::LocationName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void ShowFpd::LocationHelp::LocationName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool ShowFpd::LocationHelp::LocationName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}


}
}

