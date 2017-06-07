
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_show_fpd_loc_ng_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_show_fpd_loc_ng_oper {

ShowFpd::ShowFpd()
    :
    help_locations(std::make_shared<ShowFpd::HelpLocations>())
	,hw_module_fpd(std::make_shared<ShowFpd::HwModuleFpd>())
	,hw_module_fpd_help_fpd(std::make_shared<ShowFpd::HwModuleFpdHelpFpd>())
	,location_help(std::make_shared<ShowFpd::LocationHelp>())
	,locations(std::make_shared<ShowFpd::Locations>())
	,package(std::make_shared<ShowFpd::Package>())
{
    help_locations->parent = this;

    hw_module_fpd->parent = this;

    hw_module_fpd_help_fpd->parent = this;

    location_help->parent = this;

    locations->parent = this;

    package->parent = this;

    yang_name = "show-fpd"; yang_parent_name = "Cisco-IOS-XR-show-fpd-loc-ng-oper";
}

ShowFpd::~ShowFpd()
{
}

bool ShowFpd::has_data() const
{
    return (help_locations !=  nullptr && help_locations->has_data())
	|| (hw_module_fpd !=  nullptr && hw_module_fpd->has_data())
	|| (hw_module_fpd_help_fpd !=  nullptr && hw_module_fpd_help_fpd->has_data())
	|| (location_help !=  nullptr && location_help->has_data())
	|| (locations !=  nullptr && locations->has_data())
	|| (package !=  nullptr && package->has_data());
}

bool ShowFpd::has_operation() const
{
    return is_set(operation)
	|| (help_locations !=  nullptr && help_locations->has_operation())
	|| (hw_module_fpd !=  nullptr && hw_module_fpd->has_operation())
	|| (hw_module_fpd_help_fpd !=  nullptr && hw_module_fpd_help_fpd->has_operation())
	|| (location_help !=  nullptr && location_help->has_operation())
	|| (locations !=  nullptr && locations->has_operation())
	|| (package !=  nullptr && package->has_operation());
}

std::string ShowFpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd";

    return path_buffer.str();

}

const EntityPath ShowFpd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "help-locations")
    {
        if(help_locations == nullptr)
        {
            help_locations = std::make_shared<ShowFpd::HelpLocations>();
        }
        return help_locations;
    }

    if(child_yang_name == "hw-module-fpd")
    {
        if(hw_module_fpd == nullptr)
        {
            hw_module_fpd = std::make_shared<ShowFpd::HwModuleFpd>();
        }
        return hw_module_fpd;
    }

    if(child_yang_name == "hw-module-fpd-help-fpd")
    {
        if(hw_module_fpd_help_fpd == nullptr)
        {
            hw_module_fpd_help_fpd = std::make_shared<ShowFpd::HwModuleFpdHelpFpd>();
        }
        return hw_module_fpd_help_fpd;
    }

    if(child_yang_name == "location-help")
    {
        if(location_help == nullptr)
        {
            location_help = std::make_shared<ShowFpd::LocationHelp>();
        }
        return location_help;
    }

    if(child_yang_name == "locations")
    {
        if(locations == nullptr)
        {
            locations = std::make_shared<ShowFpd::Locations>();
        }
        return locations;
    }

    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<ShowFpd::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(help_locations != nullptr)
    {
        children["help-locations"] = help_locations;
    }

    if(hw_module_fpd != nullptr)
    {
        children["hw-module-fpd"] = hw_module_fpd;
    }

    if(hw_module_fpd_help_fpd != nullptr)
    {
        children["hw-module-fpd-help-fpd"] = hw_module_fpd_help_fpd;
    }

    if(location_help != nullptr)
    {
        children["location-help"] = location_help;
    }

    if(locations != nullptr)
    {
        children["locations"] = locations;
    }

    if(package != nullptr)
    {
        children["package"] = package;
    }

    return children;
}

void ShowFpd::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ShowFpd::clone_ptr() const
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

ShowFpd::Locations::Locations()
{
    yang_name = "locations"; yang_parent_name = "show-fpd";
}

ShowFpd::Locations::~Locations()
{
}

bool ShowFpd::Locations::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::Locations::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ShowFpd::Locations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locations";

    return path_buffer.str();

}

const EntityPath ShowFpd::Locations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::Locations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        for(auto const & c : location)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::Locations::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::Locations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : location)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::Locations::set_value(const std::string & value_path, std::string value)
{
}

ShowFpd::Locations::Location::Location()
    :
    location_name{YType::str, "location-name"}
{
    yang_name = "location"; yang_parent_name = "locations";
}

ShowFpd::Locations::Location::~Location()
{
}

bool ShowFpd::Locations::Location::has_data() const
{
    for (std::size_t index=0; index<fpd.size(); index++)
    {
        if(fpd[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool ShowFpd::Locations::Location::has_operation() const
{
    for (std::size_t index=0; index<fpd.size(); index++)
    {
        if(fpd[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(location_name.operation);
}

std::string ShowFpd::Locations::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";

    return path_buffer.str();

}

const EntityPath ShowFpd::Locations::Location::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/locations/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.operation)) leaf_name_data.push_back(location_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::Locations::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd")
    {
        for(auto const & c : fpd)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::Locations::Location::Fpd>();
        c->parent = this;
        fpd.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::Locations::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpd)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::Locations::Location::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location-name")
    {
        location_name = value;
    }
}

ShowFpd::Locations::Location::Fpd::Fpd()
    :
    fpd_name{YType::str, "fpd-name"}
{
    yang_name = "fpd"; yang_parent_name = "location";
}

ShowFpd::Locations::Location::Fpd::~Fpd()
{
}

bool ShowFpd::Locations::Location::Fpd::has_data() const
{
    for (std::size_t index=0; index<fpd_info_detaile.size(); index++)
    {
        if(fpd_info_detaile[index]->has_data())
            return true;
    }
    return fpd_name.is_set;
}

bool ShowFpd::Locations::Location::Fpd::has_operation() const
{
    for (std::size_t index=0; index<fpd_info_detaile.size(); index++)
    {
        if(fpd_info_detaile[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(fpd_name.operation);
}

std::string ShowFpd::Locations::Location::Fpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd" <<"[fpd-name='" <<fpd_name <<"']";

    return path_buffer.str();

}

const EntityPath ShowFpd::Locations::Location::Fpd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fpd' in Cisco_IOS_XR_show_fpd_loc_ng_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpd_name.is_set || is_set(fpd_name.operation)) leaf_name_data.push_back(fpd_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::Locations::Location::Fpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd-info-detaile")
    {
        for(auto const & c : fpd_info_detaile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::Locations::Location::Fpd::FpdInfoDetaile>();
        c->parent = this;
        fpd_info_detaile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::Locations::Location::Fpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpd_info_detaile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::Locations::Location::Fpd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fpd-name")
    {
        fpd_name = value;
    }
}

ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::FpdInfoDetaile()
    :
    card_name{YType::str, "card-name"},
    fpd_name{YType::str, "fpd-name"},
    hw_version{YType::str, "hw-version"},
    location{YType::str, "location"},
    programd_version{YType::str, "programd-version"},
    running_version{YType::str, "running-version"},
    secure_boot_attr{YType::str, "secure-boot-attr"},
    status{YType::str, "status"}
{
    yang_name = "fpd-info-detaile"; yang_parent_name = "fpd";
}

ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::~FpdInfoDetaile()
{
}

bool ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::has_data() const
{
    return card_name.is_set
	|| fpd_name.is_set
	|| hw_version.is_set
	|| location.is_set
	|| programd_version.is_set
	|| running_version.is_set
	|| secure_boot_attr.is_set
	|| status.is_set;
}

bool ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::has_operation() const
{
    return is_set(operation)
	|| is_set(card_name.operation)
	|| is_set(fpd_name.operation)
	|| is_set(hw_version.operation)
	|| is_set(location.operation)
	|| is_set(programd_version.operation)
	|| is_set(running_version.operation)
	|| is_set(secure_boot_attr.operation)
	|| is_set(status.operation);
}

std::string ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-info-detaile";

    return path_buffer.str();

}

const EntityPath ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FpdInfoDetaile' in Cisco_IOS_XR_show_fpd_loc_ng_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_name.is_set || is_set(card_name.operation)) leaf_name_data.push_back(card_name.get_name_leafdata());
    if (fpd_name.is_set || is_set(fpd_name.operation)) leaf_name_data.push_back(fpd_name.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.operation)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (programd_version.is_set || is_set(programd_version.operation)) leaf_name_data.push_back(programd_version.get_name_leafdata());
    if (running_version.is_set || is_set(running_version.operation)) leaf_name_data.push_back(running_version.get_name_leafdata());
    if (secure_boot_attr.is_set || is_set(secure_boot_attr.operation)) leaf_name_data.push_back(secure_boot_attr.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ShowFpd::Locations::Location::Fpd::FpdInfoDetaile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-name")
    {
        card_name = value;
    }
    if(value_path == "fpd-name")
    {
        fpd_name = value;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "programd-version")
    {
        programd_version = value;
    }
    if(value_path == "running-version")
    {
        running_version = value;
    }
    if(value_path == "secure-boot-attr")
    {
        secure_boot_attr = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

ShowFpd::HwModuleFpd::HwModuleFpd()
{
    yang_name = "hw-module-fpd"; yang_parent_name = "show-fpd";
}

ShowFpd::HwModuleFpd::~HwModuleFpd()
{
}

bool ShowFpd::HwModuleFpd::has_data() const
{
    for (std::size_t index=0; index<fpd_info_detaile.size(); index++)
    {
        if(fpd_info_detaile[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::HwModuleFpd::has_operation() const
{
    for (std::size_t index=0; index<fpd_info_detaile.size(); index++)
    {
        if(fpd_info_detaile[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ShowFpd::HwModuleFpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-module-fpd";

    return path_buffer.str();

}

const EntityPath ShowFpd::HwModuleFpd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::HwModuleFpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd-info-detaile")
    {
        for(auto const & c : fpd_info_detaile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::HwModuleFpd::FpdInfoDetaile>();
        c->parent = this;
        fpd_info_detaile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::HwModuleFpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpd_info_detaile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::HwModuleFpd::set_value(const std::string & value_path, std::string value)
{
}

ShowFpd::HwModuleFpd::FpdInfoDetaile::FpdInfoDetaile()
    :
    card_name{YType::str, "card-name"},
    fpd_name{YType::str, "fpd-name"},
    hw_version{YType::str, "hw-version"},
    location{YType::str, "location"},
    programd_version{YType::str, "programd-version"},
    running_version{YType::str, "running-version"},
    secure_boot_attr{YType::str, "secure-boot-attr"},
    status{YType::str, "status"}
{
    yang_name = "fpd-info-detaile"; yang_parent_name = "hw-module-fpd";
}

ShowFpd::HwModuleFpd::FpdInfoDetaile::~FpdInfoDetaile()
{
}

bool ShowFpd::HwModuleFpd::FpdInfoDetaile::has_data() const
{
    return card_name.is_set
	|| fpd_name.is_set
	|| hw_version.is_set
	|| location.is_set
	|| programd_version.is_set
	|| running_version.is_set
	|| secure_boot_attr.is_set
	|| status.is_set;
}

bool ShowFpd::HwModuleFpd::FpdInfoDetaile::has_operation() const
{
    return is_set(operation)
	|| is_set(card_name.operation)
	|| is_set(fpd_name.operation)
	|| is_set(hw_version.operation)
	|| is_set(location.operation)
	|| is_set(programd_version.operation)
	|| is_set(running_version.operation)
	|| is_set(secure_boot_attr.operation)
	|| is_set(status.operation);
}

std::string ShowFpd::HwModuleFpd::FpdInfoDetaile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-info-detaile";

    return path_buffer.str();

}

const EntityPath ShowFpd::HwModuleFpd::FpdInfoDetaile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/hw-module-fpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_name.is_set || is_set(card_name.operation)) leaf_name_data.push_back(card_name.get_name_leafdata());
    if (fpd_name.is_set || is_set(fpd_name.operation)) leaf_name_data.push_back(fpd_name.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.operation)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (programd_version.is_set || is_set(programd_version.operation)) leaf_name_data.push_back(programd_version.get_name_leafdata());
    if (running_version.is_set || is_set(running_version.operation)) leaf_name_data.push_back(running_version.get_name_leafdata());
    if (secure_boot_attr.is_set || is_set(secure_boot_attr.operation)) leaf_name_data.push_back(secure_boot_attr.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::HwModuleFpd::FpdInfoDetaile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::HwModuleFpd::FpdInfoDetaile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ShowFpd::HwModuleFpd::FpdInfoDetaile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-name")
    {
        card_name = value;
    }
    if(value_path == "fpd-name")
    {
        fpd_name = value;
    }
    if(value_path == "hw-version")
    {
        hw_version = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "programd-version")
    {
        programd_version = value;
    }
    if(value_path == "running-version")
    {
        running_version = value;
    }
    if(value_path == "secure-boot-attr")
    {
        secure_boot_attr = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

ShowFpd::HelpLocations::HelpLocations()
{
    yang_name = "help-locations"; yang_parent_name = "show-fpd";
}

ShowFpd::HelpLocations::~HelpLocations()
{
}

bool ShowFpd::HelpLocations::has_data() const
{
    for (std::size_t index=0; index<help_location.size(); index++)
    {
        if(help_location[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::HelpLocations::has_operation() const
{
    for (std::size_t index=0; index<help_location.size(); index++)
    {
        if(help_location[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ShowFpd::HelpLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "help-locations";

    return path_buffer.str();

}

const EntityPath ShowFpd::HelpLocations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::HelpLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "help-location")
    {
        for(auto const & c : help_location)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::HelpLocations::HelpLocation>();
        c->parent = this;
        help_location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::HelpLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : help_location)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::HelpLocations::set_value(const std::string & value_path, std::string value)
{
}

ShowFpd::HelpLocations::HelpLocation::HelpLocation()
    :
    location_name{YType::str, "location-name"}
    	,
    help_fpd(std::make_shared<ShowFpd::HelpLocations::HelpLocation::HelpFpd>())
{
    help_fpd->parent = this;

    yang_name = "help-location"; yang_parent_name = "help-locations";
}

ShowFpd::HelpLocations::HelpLocation::~HelpLocation()
{
}

bool ShowFpd::HelpLocations::HelpLocation::has_data() const
{
    return location_name.is_set
	|| (help_fpd !=  nullptr && help_fpd->has_data());
}

bool ShowFpd::HelpLocations::HelpLocation::has_operation() const
{
    return is_set(operation)
	|| is_set(location_name.operation)
	|| (help_fpd !=  nullptr && help_fpd->has_operation());
}

std::string ShowFpd::HelpLocations::HelpLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "help-location" <<"[location-name='" <<location_name <<"']";

    return path_buffer.str();

}

const EntityPath ShowFpd::HelpLocations::HelpLocation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/help-locations/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.operation)) leaf_name_data.push_back(location_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::HelpLocations::HelpLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::HelpLocations::HelpLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(help_fpd != nullptr)
    {
        children["help-fpd"] = help_fpd;
    }

    return children;
}

void ShowFpd::HelpLocations::HelpLocation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location-name")
    {
        location_name = value;
    }
}

ShowFpd::HelpLocations::HelpLocation::HelpFpd::HelpFpd()
{
    yang_name = "help-fpd"; yang_parent_name = "help-location";
}

ShowFpd::HelpLocations::HelpLocation::HelpFpd::~HelpFpd()
{
}

bool ShowFpd::HelpLocations::HelpLocation::HelpFpd::has_data() const
{
    for (std::size_t index=0; index<fpd_name.size(); index++)
    {
        if(fpd_name[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::HelpLocations::HelpLocation::HelpFpd::has_operation() const
{
    for (std::size_t index=0; index<fpd_name.size(); index++)
    {
        if(fpd_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ShowFpd::HelpLocations::HelpLocation::HelpFpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "help-fpd";

    return path_buffer.str();

}

const EntityPath ShowFpd::HelpLocations::HelpLocation::HelpFpd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelpFpd' in Cisco_IOS_XR_show_fpd_loc_ng_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::HelpLocations::HelpLocation::HelpFpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd-name")
    {
        for(auto const & c : fpd_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName>();
        c->parent = this;
        fpd_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::HelpLocations::HelpLocation::HelpFpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpd_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::HelpLocations::HelpLocation::HelpFpd::set_value(const std::string & value_path, std::string value)
{
}

ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::FpdName()
    :
    fpd_name{YType::str, "fpd-name"},
    location{YType::str, "location"}
{
    yang_name = "fpd-name"; yang_parent_name = "help-fpd";
}

ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::~FpdName()
{
}

bool ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::has_data() const
{
    return fpd_name.is_set
	|| location.is_set;
}

bool ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::has_operation() const
{
    return is_set(operation)
	|| is_set(fpd_name.operation)
	|| is_set(location.operation);
}

std::string ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-name";

    return path_buffer.str();

}

const EntityPath ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FpdName' in Cisco_IOS_XR_show_fpd_loc_ng_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpd_name.is_set || is_set(fpd_name.operation)) leaf_name_data.push_back(fpd_name.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fpd-name")
    {
        fpd_name = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
}

ShowFpd::HwModuleFpdHelpFpd::HwModuleFpdHelpFpd()
{
    yang_name = "hw-module-fpd-help-fpd"; yang_parent_name = "show-fpd";
}

ShowFpd::HwModuleFpdHelpFpd::~HwModuleFpdHelpFpd()
{
}

bool ShowFpd::HwModuleFpdHelpFpd::has_data() const
{
    for (std::size_t index=0; index<fpd_name.size(); index++)
    {
        if(fpd_name[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::HwModuleFpdHelpFpd::has_operation() const
{
    for (std::size_t index=0; index<fpd_name.size(); index++)
    {
        if(fpd_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ShowFpd::HwModuleFpdHelpFpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-module-fpd-help-fpd";

    return path_buffer.str();

}

const EntityPath ShowFpd::HwModuleFpdHelpFpd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::HwModuleFpdHelpFpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd-name")
    {
        for(auto const & c : fpd_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::HwModuleFpdHelpFpd::FpdName>();
        c->parent = this;
        fpd_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::HwModuleFpdHelpFpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpd_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::HwModuleFpdHelpFpd::set_value(const std::string & value_path, std::string value)
{
}

ShowFpd::HwModuleFpdHelpFpd::FpdName::FpdName()
    :
    fpd_name{YType::str, "fpd-name"},
    location{YType::str, "location"}
{
    yang_name = "fpd-name"; yang_parent_name = "hw-module-fpd-help-fpd";
}

ShowFpd::HwModuleFpdHelpFpd::FpdName::~FpdName()
{
}

bool ShowFpd::HwModuleFpdHelpFpd::FpdName::has_data() const
{
    return fpd_name.is_set
	|| location.is_set;
}

bool ShowFpd::HwModuleFpdHelpFpd::FpdName::has_operation() const
{
    return is_set(operation)
	|| is_set(fpd_name.operation)
	|| is_set(location.operation);
}

std::string ShowFpd::HwModuleFpdHelpFpd::FpdName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-name";

    return path_buffer.str();

}

const EntityPath ShowFpd::HwModuleFpdHelpFpd::FpdName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/hw-module-fpd-help-fpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpd_name.is_set || is_set(fpd_name.operation)) leaf_name_data.push_back(fpd_name.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::HwModuleFpdHelpFpd::FpdName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::HwModuleFpdHelpFpd::FpdName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ShowFpd::HwModuleFpdHelpFpd::FpdName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fpd-name")
    {
        fpd_name = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
}

ShowFpd::Package::Package()
{
    yang_name = "package"; yang_parent_name = "show-fpd";
}

ShowFpd::Package::~Package()
{
}

bool ShowFpd::Package::has_data() const
{
    for (std::size_t index=0; index<fpd_pkg_data.size(); index++)
    {
        if(fpd_pkg_data[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::Package::has_operation() const
{
    for (std::size_t index=0; index<fpd_pkg_data.size(); index++)
    {
        if(fpd_pkg_data[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ShowFpd::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";

    return path_buffer.str();

}

const EntityPath ShowFpd::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd-pkg-data")
    {
        for(auto const & c : fpd_pkg_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::Package::FpdPkgData>();
        c->parent = this;
        fpd_pkg_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fpd_pkg_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::Package::set_value(const std::string & value_path, std::string value)
{
}

ShowFpd::Package::FpdPkgData::FpdPkgData()
    :
    card_type{YType::str, "card-type"},
    fpd_desc{YType::str, "fpd-desc"},
    fpd_ver{YType::str, "fpd-ver"},
    min_hw_ver{YType::str, "min-hw-ver"},
    min_sw_ver{YType::str, "min-sw-ver"},
    upgrade_method{YType::str, "upgrade-method"}
{
    yang_name = "fpd-pkg-data"; yang_parent_name = "package";
}

ShowFpd::Package::FpdPkgData::~FpdPkgData()
{
}

bool ShowFpd::Package::FpdPkgData::has_data() const
{
    return card_type.is_set
	|| fpd_desc.is_set
	|| fpd_ver.is_set
	|| min_hw_ver.is_set
	|| min_sw_ver.is_set
	|| upgrade_method.is_set;
}

bool ShowFpd::Package::FpdPkgData::has_operation() const
{
    return is_set(operation)
	|| is_set(card_type.operation)
	|| is_set(fpd_desc.operation)
	|| is_set(fpd_ver.operation)
	|| is_set(min_hw_ver.operation)
	|| is_set(min_sw_ver.operation)
	|| is_set(upgrade_method.operation);
}

std::string ShowFpd::Package::FpdPkgData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-pkg-data";

    return path_buffer.str();

}

const EntityPath ShowFpd::Package::FpdPkgData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/package/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_type.is_set || is_set(card_type.operation)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (fpd_desc.is_set || is_set(fpd_desc.operation)) leaf_name_data.push_back(fpd_desc.get_name_leafdata());
    if (fpd_ver.is_set || is_set(fpd_ver.operation)) leaf_name_data.push_back(fpd_ver.get_name_leafdata());
    if (min_hw_ver.is_set || is_set(min_hw_ver.operation)) leaf_name_data.push_back(min_hw_ver.get_name_leafdata());
    if (min_sw_ver.is_set || is_set(min_sw_ver.operation)) leaf_name_data.push_back(min_sw_ver.get_name_leafdata());
    if (upgrade_method.is_set || is_set(upgrade_method.operation)) leaf_name_data.push_back(upgrade_method.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::Package::FpdPkgData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::Package::FpdPkgData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ShowFpd::Package::FpdPkgData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-type")
    {
        card_type = value;
    }
    if(value_path == "fpd-desc")
    {
        fpd_desc = value;
    }
    if(value_path == "fpd-ver")
    {
        fpd_ver = value;
    }
    if(value_path == "min-hw-ver")
    {
        min_hw_ver = value;
    }
    if(value_path == "min-sw-ver")
    {
        min_sw_ver = value;
    }
    if(value_path == "upgrade-method")
    {
        upgrade_method = value;
    }
}

ShowFpd::LocationHelp::LocationHelp()
{
    yang_name = "location-help"; yang_parent_name = "show-fpd";
}

ShowFpd::LocationHelp::~LocationHelp()
{
}

bool ShowFpd::LocationHelp::has_data() const
{
    for (std::size_t index=0; index<location_name.size(); index++)
    {
        if(location_name[index]->has_data())
            return true;
    }
    return false;
}

bool ShowFpd::LocationHelp::has_operation() const
{
    for (std::size_t index=0; index<location_name.size(); index++)
    {
        if(location_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ShowFpd::LocationHelp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location-help";

    return path_buffer.str();

}

const EntityPath ShowFpd::LocationHelp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::LocationHelp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location-name")
    {
        for(auto const & c : location_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ShowFpd::LocationHelp::LocationName>();
        c->parent = this;
        location_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::LocationHelp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : location_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ShowFpd::LocationHelp::set_value(const std::string & value_path, std::string value)
{
}

ShowFpd::LocationHelp::LocationName::LocationName()
    :
    location_name{YType::str, "location-name"}
{
    yang_name = "location-name"; yang_parent_name = "location-help";
}

ShowFpd::LocationHelp::LocationName::~LocationName()
{
}

bool ShowFpd::LocationHelp::LocationName::has_data() const
{
    return location_name.is_set;
}

bool ShowFpd::LocationHelp::LocationName::has_operation() const
{
    return is_set(operation)
	|| is_set(location_name.operation);
}

std::string ShowFpd::LocationHelp::LocationName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location-name";

    return path_buffer.str();

}

const EntityPath ShowFpd::LocationHelp::LocationName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd/location-help/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.operation)) leaf_name_data.push_back(location_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ShowFpd::LocationHelp::LocationName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ShowFpd::LocationHelp::LocationName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ShowFpd::LocationHelp::LocationName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location-name")
    {
        location_name = value;
    }
}


}
}

