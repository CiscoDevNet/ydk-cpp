
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_show_diag.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_show_diag {

Diag::Diag()
    :
    default_(std::make_shared<Diag::Default>())
    , fans(std::make_shared<Diag::Fans>())
    , power_supply(std::make_shared<Diag::PowerSupply>())
    , chassis(std::make_shared<Diag::Chassis>())
    , summary(std::make_shared<Diag::Summary>())
    , eeprom(std::make_shared<Diag::Eeprom>())
    , detail(std::make_shared<Diag::Detail>())
{
    default_->parent = this;
    fans->parent = this;
    power_supply->parent = this;
    chassis->parent = this;
    summary->parent = this;
    eeprom->parent = this;
    detail->parent = this;

    yang_name = "diag"; yang_parent_name = "Cisco-IOS-XR-sysadmin-show-diag"; is_top_level_class = true; has_list_ancestor = false; 
}

Diag::~Diag()
{
}

bool Diag::has_data() const
{
    if (is_presence_container) return true;
    return (default_ !=  nullptr && default_->has_data())
	|| (fans !=  nullptr && fans->has_data())
	|| (power_supply !=  nullptr && power_supply->has_data())
	|| (chassis !=  nullptr && chassis->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (eeprom !=  nullptr && eeprom->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Diag::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (fans !=  nullptr && fans->has_operation())
	|| (power_supply !=  nullptr && power_supply->has_operation())
	|| (chassis !=  nullptr && chassis->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (eeprom !=  nullptr && eeprom->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Diag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Diag::Default>();
        }
        return default_;
    }

    if(child_yang_name == "fans")
    {
        if(fans == nullptr)
        {
            fans = std::make_shared<Diag::Fans>();
        }
        return fans;
    }

    if(child_yang_name == "power-supply")
    {
        if(power_supply == nullptr)
        {
            power_supply = std::make_shared<Diag::PowerSupply>();
        }
        return power_supply;
    }

    if(child_yang_name == "chassis")
    {
        if(chassis == nullptr)
        {
            chassis = std::make_shared<Diag::Chassis>();
        }
        return chassis;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Diag::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "eeprom")
    {
        if(eeprom == nullptr)
        {
            eeprom = std::make_shared<Diag::Eeprom>();
        }
        return eeprom;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Diag::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(fans != nullptr)
    {
        children["fans"] = fans;
    }

    if(power_supply != nullptr)
    {
        children["power-supply"] = power_supply;
    }

    if(chassis != nullptr)
    {
        children["chassis"] = chassis;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(eeprom != nullptr)
    {
        children["eeprom"] = eeprom;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Diag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Diag::clone_ptr() const
{
    return std::make_shared<Diag>();
}

std::string Diag::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Diag::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Diag::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Diag::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Diag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "fans" || name == "power-supply" || name == "chassis" || name == "summary" || name == "eeprom" || name == "detail")
        return true;
    return false;
}

Diag::Default::Default()
    :
    default_list(this, {"location"})
{

    yang_name = "default"; yang_parent_name = "diag"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Default::~Default()
{
}

bool Diag::Default::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<default_list.len(); index++)
    {
        if(default_list[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Default::has_operation() const
{
    for (std::size_t index=0; index<default_list.len(); index++)
    {
        if(default_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default_list")
    {
        auto c = std::make_shared<Diag::Default::DefaultList>();
        c->parent = this;
        default_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : default_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diag::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default_list")
        return true;
    return false;
}

Diag::Default::DefaultList::DefaultList()
    :
    location{YType::str, "location"}
        ,
    default_data(std::make_shared<Diag::Default::DefaultList::DefaultData>())
{
    default_data->parent = this;

    yang_name = "default_list"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Default::DefaultList::~DefaultList()
{
}

bool Diag::Default::DefaultList::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (default_data !=  nullptr && default_data->has_data());
}

bool Diag::Default::DefaultList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (default_data !=  nullptr && default_data->has_operation());
}

std::string Diag::Default::DefaultList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Default::DefaultList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default_list";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Default::DefaultList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Default::DefaultList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-data")
    {
        if(default_data == nullptr)
        {
            default_data = std::make_shared<Diag::Default::DefaultList::DefaultData>();
        }
        return default_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Default::DefaultList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_data != nullptr)
    {
        children["default-data"] = default_data;
    }

    return children;
}

void Diag::Default::DefaultList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Default::DefaultList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Diag::Default::DefaultList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-data" || name == "location")
        return true;
    return false;
}

Diag::Default::DefaultList::DefaultData::DefaultData()
    :
    default_out_list{YType::str, "default_out_list"}
{

    yang_name = "default-data"; yang_parent_name = "default_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Default::DefaultList::DefaultData::~DefaultData()
{
}

bool Diag::Default::DefaultList::DefaultData::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : default_out_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Diag::Default::DefaultList::DefaultData::has_operation() const
{
    for (auto const & leaf : default_out_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_out_list.yfilter);
}

std::string Diag::Default::DefaultList::DefaultData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Default::DefaultList::DefaultData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto default_out_list_name_datas = default_out_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), default_out_list_name_datas.begin(), default_out_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Default::DefaultList::DefaultData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Default::DefaultList::DefaultData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diag::Default::DefaultList::DefaultData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default_out_list")
    {
        default_out_list.append(value);
    }
}

void Diag::Default::DefaultList::DefaultData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default_out_list")
    {
        default_out_list.yfilter = yfilter;
    }
}

bool Diag::Default::DefaultList::DefaultData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default_out_list")
        return true;
    return false;
}

Diag::Fans::Fans()
    :
    fans_list(this, {"location"})
{

    yang_name = "fans"; yang_parent_name = "diag"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Fans::~Fans()
{
}

bool Diag::Fans::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fans_list.len(); index++)
    {
        if(fans_list[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Fans::has_operation() const
{
    for (std::size_t index=0; index<fans_list.len(); index++)
    {
        if(fans_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Fans::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Fans::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fans";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Fans::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Fans::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fans_list")
    {
        auto c = std::make_shared<Diag::Fans::FansList>();
        c->parent = this;
        fans_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Fans::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fans_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diag::Fans::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Fans::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Fans::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fans_list")
        return true;
    return false;
}

Diag::Fans::FansList::FansList()
    :
    location{YType::str, "location"}
        ,
    default_data(std::make_shared<Diag::Fans::FansList::DefaultData>())
{
    default_data->parent = this;

    yang_name = "fans_list"; yang_parent_name = "fans"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Fans::FansList::~FansList()
{
}

bool Diag::Fans::FansList::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (default_data !=  nullptr && default_data->has_data());
}

bool Diag::Fans::FansList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (default_data !=  nullptr && default_data->has_operation());
}

std::string Diag::Fans::FansList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/fans/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Fans::FansList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fans_list";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Fans::FansList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Fans::FansList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-data")
    {
        if(default_data == nullptr)
        {
            default_data = std::make_shared<Diag::Fans::FansList::DefaultData>();
        }
        return default_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Fans::FansList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_data != nullptr)
    {
        children["default-data"] = default_data;
    }

    return children;
}

void Diag::Fans::FansList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Fans::FansList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Diag::Fans::FansList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-data" || name == "location")
        return true;
    return false;
}

Diag::Fans::FansList::DefaultData::DefaultData()
    :
    default_out_list{YType::str, "default_out_list"}
{

    yang_name = "default-data"; yang_parent_name = "fans_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Fans::FansList::DefaultData::~DefaultData()
{
}

bool Diag::Fans::FansList::DefaultData::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : default_out_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Diag::Fans::FansList::DefaultData::has_operation() const
{
    for (auto const & leaf : default_out_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_out_list.yfilter);
}

std::string Diag::Fans::FansList::DefaultData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Fans::FansList::DefaultData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto default_out_list_name_datas = default_out_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), default_out_list_name_datas.begin(), default_out_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Fans::FansList::DefaultData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Fans::FansList::DefaultData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diag::Fans::FansList::DefaultData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default_out_list")
    {
        default_out_list.append(value);
    }
}

void Diag::Fans::FansList::DefaultData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default_out_list")
    {
        default_out_list.yfilter = yfilter;
    }
}

bool Diag::Fans::FansList::DefaultData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default_out_list")
        return true;
    return false;
}

Diag::PowerSupply::PowerSupply()
    :
    pwr_list(this, {"location"})
{

    yang_name = "power-supply"; yang_parent_name = "diag"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::PowerSupply::~PowerSupply()
{
}

bool Diag::PowerSupply::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pwr_list.len(); index++)
    {
        if(pwr_list[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::PowerSupply::has_operation() const
{
    for (std::size_t index=0; index<pwr_list.len(); index++)
    {
        if(pwr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::PowerSupply::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::PowerSupply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-supply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::PowerSupply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::PowerSupply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pwr_list")
    {
        auto c = std::make_shared<Diag::PowerSupply::PwrList>();
        c->parent = this;
        pwr_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::PowerSupply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pwr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diag::PowerSupply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::PowerSupply::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::PowerSupply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwr_list")
        return true;
    return false;
}

Diag::PowerSupply::PwrList::PwrList()
    :
    location{YType::str, "location"}
        ,
    default_data(std::make_shared<Diag::PowerSupply::PwrList::DefaultData>())
{
    default_data->parent = this;

    yang_name = "pwr_list"; yang_parent_name = "power-supply"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::PowerSupply::PwrList::~PwrList()
{
}

bool Diag::PowerSupply::PwrList::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (default_data !=  nullptr && default_data->has_data());
}

bool Diag::PowerSupply::PwrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (default_data !=  nullptr && default_data->has_operation());
}

std::string Diag::PowerSupply::PwrList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/power-supply/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::PowerSupply::PwrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwr_list";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::PowerSupply::PwrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::PowerSupply::PwrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-data")
    {
        if(default_data == nullptr)
        {
            default_data = std::make_shared<Diag::PowerSupply::PwrList::DefaultData>();
        }
        return default_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::PowerSupply::PwrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_data != nullptr)
    {
        children["default-data"] = default_data;
    }

    return children;
}

void Diag::PowerSupply::PwrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::PowerSupply::PwrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Diag::PowerSupply::PwrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-data" || name == "location")
        return true;
    return false;
}

Diag::PowerSupply::PwrList::DefaultData::DefaultData()
    :
    default_out_list{YType::str, "default_out_list"}
{

    yang_name = "default-data"; yang_parent_name = "pwr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::PowerSupply::PwrList::DefaultData::~DefaultData()
{
}

bool Diag::PowerSupply::PwrList::DefaultData::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : default_out_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Diag::PowerSupply::PwrList::DefaultData::has_operation() const
{
    for (auto const & leaf : default_out_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_out_list.yfilter);
}

std::string Diag::PowerSupply::PwrList::DefaultData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::PowerSupply::PwrList::DefaultData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto default_out_list_name_datas = default_out_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), default_out_list_name_datas.begin(), default_out_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::PowerSupply::PwrList::DefaultData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::PowerSupply::PwrList::DefaultData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diag::PowerSupply::PwrList::DefaultData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default_out_list")
    {
        default_out_list.append(value);
    }
}

void Diag::PowerSupply::PwrList::DefaultData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default_out_list")
    {
        default_out_list.yfilter = yfilter;
    }
}

bool Diag::PowerSupply::PwrList::DefaultData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default_out_list")
        return true;
    return false;
}

Diag::Chassis::Chassis()
    :
    chassis_cnt(std::make_shared<Diag::Chassis::ChassisCnt>())
    , chassis_eeprom_cnt(std::make_shared<Diag::Chassis::ChassisEepromCnt>())
{
    chassis_cnt->parent = this;
    chassis_eeprom_cnt->parent = this;

    yang_name = "chassis"; yang_parent_name = "diag"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Chassis::~Chassis()
{
}

bool Diag::Chassis::has_data() const
{
    if (is_presence_container) return true;
    return (chassis_cnt !=  nullptr && chassis_cnt->has_data())
	|| (chassis_eeprom_cnt !=  nullptr && chassis_eeprom_cnt->has_data());
}

bool Diag::Chassis::has_operation() const
{
    return is_set(yfilter)
	|| (chassis_cnt !=  nullptr && chassis_cnt->has_operation())
	|| (chassis_eeprom_cnt !=  nullptr && chassis_eeprom_cnt->has_operation());
}

std::string Diag::Chassis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Chassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Chassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Chassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chassis_cnt")
    {
        if(chassis_cnt == nullptr)
        {
            chassis_cnt = std::make_shared<Diag::Chassis::ChassisCnt>();
        }
        return chassis_cnt;
    }

    if(child_yang_name == "chassis_eeprom_cnt")
    {
        if(chassis_eeprom_cnt == nullptr)
        {
            chassis_eeprom_cnt = std::make_shared<Diag::Chassis::ChassisEepromCnt>();
        }
        return chassis_eeprom_cnt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Chassis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(chassis_cnt != nullptr)
    {
        children["chassis_cnt"] = chassis_cnt;
    }

    if(chassis_eeprom_cnt != nullptr)
    {
        children["chassis_eeprom_cnt"] = chassis_eeprom_cnt;
    }

    return children;
}

void Diag::Chassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Chassis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Chassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chassis_cnt" || name == "chassis_eeprom_cnt")
        return true;
    return false;
}

Diag::Chassis::ChassisCnt::ChassisCnt()
    :
    chassis_list(this, {"location"})
{

    yang_name = "chassis_cnt"; yang_parent_name = "chassis"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Chassis::ChassisCnt::~ChassisCnt()
{
}

bool Diag::Chassis::ChassisCnt::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<chassis_list.len(); index++)
    {
        if(chassis_list[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Chassis::ChassisCnt::has_operation() const
{
    for (std::size_t index=0; index<chassis_list.len(); index++)
    {
        if(chassis_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Chassis::ChassisCnt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/chassis/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Chassis::ChassisCnt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis_cnt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Chassis::ChassisCnt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Chassis::ChassisCnt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chassis_list")
    {
        auto c = std::make_shared<Diag::Chassis::ChassisCnt::ChassisList>();
        c->parent = this;
        chassis_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Chassis::ChassisCnt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : chassis_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diag::Chassis::ChassisCnt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Chassis::ChassisCnt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Chassis::ChassisCnt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chassis_list")
        return true;
    return false;
}

Diag::Chassis::ChassisCnt::ChassisList::ChassisList()
    :
    location{YType::str, "location"}
        ,
    default_data(std::make_shared<Diag::Chassis::ChassisCnt::ChassisList::DefaultData>())
{
    default_data->parent = this;

    yang_name = "chassis_list"; yang_parent_name = "chassis_cnt"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Chassis::ChassisCnt::ChassisList::~ChassisList()
{
}

bool Diag::Chassis::ChassisCnt::ChassisList::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (default_data !=  nullptr && default_data->has_data());
}

bool Diag::Chassis::ChassisCnt::ChassisList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (default_data !=  nullptr && default_data->has_operation());
}

std::string Diag::Chassis::ChassisCnt::ChassisList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/chassis/chassis_cnt/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Chassis::ChassisCnt::ChassisList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis_list";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Chassis::ChassisCnt::ChassisList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Chassis::ChassisCnt::ChassisList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-data")
    {
        if(default_data == nullptr)
        {
            default_data = std::make_shared<Diag::Chassis::ChassisCnt::ChassisList::DefaultData>();
        }
        return default_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Chassis::ChassisCnt::ChassisList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_data != nullptr)
    {
        children["default-data"] = default_data;
    }

    return children;
}

void Diag::Chassis::ChassisCnt::ChassisList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Chassis::ChassisCnt::ChassisList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Diag::Chassis::ChassisCnt::ChassisList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-data" || name == "location")
        return true;
    return false;
}

Diag::Chassis::ChassisCnt::ChassisList::DefaultData::DefaultData()
    :
    default_out_list{YType::str, "default_out_list"}
{

    yang_name = "default-data"; yang_parent_name = "chassis_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Chassis::ChassisCnt::ChassisList::DefaultData::~DefaultData()
{
}

bool Diag::Chassis::ChassisCnt::ChassisList::DefaultData::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : default_out_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Diag::Chassis::ChassisCnt::ChassisList::DefaultData::has_operation() const
{
    for (auto const & leaf : default_out_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_out_list.yfilter);
}

std::string Diag::Chassis::ChassisCnt::ChassisList::DefaultData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Chassis::ChassisCnt::ChassisList::DefaultData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto default_out_list_name_datas = default_out_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), default_out_list_name_datas.begin(), default_out_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Chassis::ChassisCnt::ChassisList::DefaultData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Chassis::ChassisCnt::ChassisList::DefaultData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diag::Chassis::ChassisCnt::ChassisList::DefaultData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default_out_list")
    {
        default_out_list.append(value);
    }
}

void Diag::Chassis::ChassisCnt::ChassisList::DefaultData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default_out_list")
    {
        default_out_list.yfilter = yfilter;
    }
}

bool Diag::Chassis::ChassisCnt::ChassisList::DefaultData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default_out_list")
        return true;
    return false;
}

Diag::Chassis::ChassisEepromCnt::ChassisEepromCnt()
    :
    chassis_eeprom_list(this, {"location"})
{

    yang_name = "chassis_eeprom_cnt"; yang_parent_name = "chassis"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Chassis::ChassisEepromCnt::~ChassisEepromCnt()
{
}

bool Diag::Chassis::ChassisEepromCnt::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<chassis_eeprom_list.len(); index++)
    {
        if(chassis_eeprom_list[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Chassis::ChassisEepromCnt::has_operation() const
{
    for (std::size_t index=0; index<chassis_eeprom_list.len(); index++)
    {
        if(chassis_eeprom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Chassis::ChassisEepromCnt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/chassis/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Chassis::ChassisEepromCnt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis_eeprom_cnt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Chassis::ChassisEepromCnt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Chassis::ChassisEepromCnt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chassis_eeprom_list")
    {
        auto c = std::make_shared<Diag::Chassis::ChassisEepromCnt::ChassisEepromList>();
        c->parent = this;
        chassis_eeprom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Chassis::ChassisEepromCnt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : chassis_eeprom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diag::Chassis::ChassisEepromCnt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Chassis::ChassisEepromCnt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Chassis::ChassisEepromCnt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chassis_eeprom_list")
        return true;
    return false;
}

Diag::Chassis::ChassisEepromCnt::ChassisEepromList::ChassisEepromList()
    :
    location{YType::str, "location"}
        ,
    eeprom_data(std::make_shared<Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData>())
{
    eeprom_data->parent = this;

    yang_name = "chassis_eeprom_list"; yang_parent_name = "chassis_eeprom_cnt"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Chassis::ChassisEepromCnt::ChassisEepromList::~ChassisEepromList()
{
}

bool Diag::Chassis::ChassisEepromCnt::ChassisEepromList::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (eeprom_data !=  nullptr && eeprom_data->has_data());
}

bool Diag::Chassis::ChassisEepromCnt::ChassisEepromList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (eeprom_data !=  nullptr && eeprom_data->has_operation());
}

std::string Diag::Chassis::ChassisEepromCnt::ChassisEepromList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/chassis/chassis_eeprom_cnt/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Chassis::ChassisEepromCnt::ChassisEepromList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis_eeprom_list";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Chassis::ChassisEepromCnt::ChassisEepromList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Chassis::ChassisEepromCnt::ChassisEepromList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eeprom-data")
    {
        if(eeprom_data == nullptr)
        {
            eeprom_data = std::make_shared<Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData>();
        }
        return eeprom_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Chassis::ChassisEepromCnt::ChassisEepromList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(eeprom_data != nullptr)
    {
        children["eeprom-data"] = eeprom_data;
    }

    return children;
}

void Diag::Chassis::ChassisEepromCnt::ChassisEepromList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Chassis::ChassisEepromCnt::ChassisEepromList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Diag::Chassis::ChassisEepromCnt::ChassisEepromList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eeprom-data" || name == "location")
        return true;
    return false;
}

Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData::EepromData()
    :
    raw_list{YType::str, "raw_list"}
{

    yang_name = "eeprom-data"; yang_parent_name = "chassis_eeprom_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData::~EepromData()
{
}

bool Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : raw_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData::has_operation() const
{
    for (auto const & leaf : raw_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(raw_list.yfilter);
}

std::string Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeprom-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto raw_list_name_datas = raw_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), raw_list_name_datas.begin(), raw_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "raw_list")
    {
        raw_list.append(value);
    }
}

void Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "raw_list")
    {
        raw_list.yfilter = yfilter;
    }
}

bool Diag::Chassis::ChassisEepromCnt::ChassisEepromList::EepromData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "raw_list")
        return true;
    return false;
}

Diag::Summary::Summary()
    :
    summary_list(this, {"location"})
{

    yang_name = "summary"; yang_parent_name = "diag"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Summary::~Summary()
{
}

bool Diag::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_list.len(); index++)
    {
        if(summary_list[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Summary::has_operation() const
{
    for (std::size_t index=0; index<summary_list.len(); index++)
    {
        if(summary_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary_list")
    {
        auto c = std::make_shared<Diag::Summary::SummaryList>();
        c->parent = this;
        summary_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : summary_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diag::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary_list")
        return true;
    return false;
}

Diag::Summary::SummaryList::SummaryList()
    :
    location{YType::str, "location"}
        ,
    summary_data(std::make_shared<Diag::Summary::SummaryList::SummaryData>())
{
    summary_data->parent = this;

    yang_name = "summary_list"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Summary::SummaryList::~SummaryList()
{
}

bool Diag::Summary::SummaryList::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (summary_data !=  nullptr && summary_data->has_data());
}

bool Diag::Summary::SummaryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (summary_data !=  nullptr && summary_data->has_operation());
}

std::string Diag::Summary::SummaryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Summary::SummaryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary_list";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Summary::SummaryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Summary::SummaryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-data")
    {
        if(summary_data == nullptr)
        {
            summary_data = std::make_shared<Diag::Summary::SummaryList::SummaryData>();
        }
        return summary_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Summary::SummaryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary_data != nullptr)
    {
        children["summary-data"] = summary_data;
    }

    return children;
}

void Diag::Summary::SummaryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Summary::SummaryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Diag::Summary::SummaryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-data" || name == "location")
        return true;
    return false;
}

Diag::Summary::SummaryList::SummaryData::SummaryData()
    :
    summary_out_list{YType::str, "summary_out_list"}
{

    yang_name = "summary-data"; yang_parent_name = "summary_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Summary::SummaryList::SummaryData::~SummaryData()
{
}

bool Diag::Summary::SummaryList::SummaryData::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : summary_out_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Diag::Summary::SummaryList::SummaryData::has_operation() const
{
    for (auto const & leaf : summary_out_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(summary_out_list.yfilter);
}

std::string Diag::Summary::SummaryList::SummaryData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Summary::SummaryList::SummaryData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto summary_out_list_name_datas = summary_out_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), summary_out_list_name_datas.begin(), summary_out_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Summary::SummaryList::SummaryData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Summary::SummaryList::SummaryData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diag::Summary::SummaryList::SummaryData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "summary_out_list")
    {
        summary_out_list.append(value);
    }
}

void Diag::Summary::SummaryList::SummaryData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "summary_out_list")
    {
        summary_out_list.yfilter = yfilter;
    }
}

bool Diag::Summary::SummaryList::SummaryData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary_out_list")
        return true;
    return false;
}

Diag::Eeprom::Eeprom()
    :
    eeprom_list(this, {"location"})
{

    yang_name = "eeprom"; yang_parent_name = "diag"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Eeprom::~Eeprom()
{
}

bool Diag::Eeprom::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eeprom_list.len(); index++)
    {
        if(eeprom_list[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Eeprom::has_operation() const
{
    for (std::size_t index=0; index<eeprom_list.len(); index++)
    {
        if(eeprom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Eeprom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Eeprom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeprom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Eeprom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Eeprom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eeprom_list")
    {
        auto c = std::make_shared<Diag::Eeprom::EepromList>();
        c->parent = this;
        eeprom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Eeprom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : eeprom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diag::Eeprom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Eeprom::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Eeprom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eeprom_list")
        return true;
    return false;
}

Diag::Eeprom::EepromList::EepromList()
    :
    location{YType::str, "location"}
        ,
    eeprom_data(std::make_shared<Diag::Eeprom::EepromList::EepromData>())
{
    eeprom_data->parent = this;

    yang_name = "eeprom_list"; yang_parent_name = "eeprom"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Eeprom::EepromList::~EepromList()
{
}

bool Diag::Eeprom::EepromList::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (eeprom_data !=  nullptr && eeprom_data->has_data());
}

bool Diag::Eeprom::EepromList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (eeprom_data !=  nullptr && eeprom_data->has_operation());
}

std::string Diag::Eeprom::EepromList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/eeprom/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Eeprom::EepromList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeprom_list";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Eeprom::EepromList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Eeprom::EepromList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eeprom-data")
    {
        if(eeprom_data == nullptr)
        {
            eeprom_data = std::make_shared<Diag::Eeprom::EepromList::EepromData>();
        }
        return eeprom_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Eeprom::EepromList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(eeprom_data != nullptr)
    {
        children["eeprom-data"] = eeprom_data;
    }

    return children;
}

void Diag::Eeprom::EepromList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Eeprom::EepromList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Diag::Eeprom::EepromList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eeprom-data" || name == "location")
        return true;
    return false;
}

Diag::Eeprom::EepromList::EepromData::EepromData()
    :
    raw_list{YType::str, "raw_list"}
{

    yang_name = "eeprom-data"; yang_parent_name = "eeprom_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Eeprom::EepromList::EepromData::~EepromData()
{
}

bool Diag::Eeprom::EepromList::EepromData::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : raw_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Diag::Eeprom::EepromList::EepromData::has_operation() const
{
    for (auto const & leaf : raw_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(raw_list.yfilter);
}

std::string Diag::Eeprom::EepromList::EepromData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeprom-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Eeprom::EepromList::EepromData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto raw_list_name_datas = raw_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), raw_list_name_datas.begin(), raw_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Eeprom::EepromList::EepromData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Eeprom::EepromList::EepromData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diag::Eeprom::EepromList::EepromData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "raw_list")
    {
        raw_list.append(value);
    }
}

void Diag::Eeprom::EepromList::EepromData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "raw_list")
    {
        raw_list.yfilter = yfilter;
    }
}

bool Diag::Eeprom::EepromList::EepromData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "raw_list")
        return true;
    return false;
}

Diag::Detail::Detail()
    :
    detail_list(this, {"location"})
{

    yang_name = "detail"; yang_parent_name = "diag"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Detail::~Detail()
{
}

bool Diag::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<detail_list.len(); index++)
    {
        if(detail_list[index]->has_data())
            return true;
    }
    return false;
}

bool Diag::Detail::has_operation() const
{
    for (std::size_t index=0; index<detail_list.len(); index++)
    {
        if(detail_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Diag::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail_list")
    {
        auto c = std::make_shared<Diag::Detail::DetailList>();
        c->parent = this;
        detail_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : detail_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Diag::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Diag::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Diag::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail_list")
        return true;
    return false;
}

Diag::Detail::DetailList::DetailList()
    :
    location{YType::str, "location"}
        ,
    detail_data(std::make_shared<Diag::Detail::DetailList::DetailData>())
{
    detail_data->parent = this;

    yang_name = "detail_list"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Diag::Detail::DetailList::~DetailList()
{
}

bool Diag::Detail::DetailList::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (detail_data !=  nullptr && detail_data->has_data());
}

bool Diag::Detail::DetailList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (detail_data !=  nullptr && detail_data->has_operation());
}

std::string Diag::Detail::DetailList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-show-diag:diag/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Diag::Detail::DetailList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail_list";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Detail::DetailList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Detail::DetailList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-data")
    {
        if(detail_data == nullptr)
        {
            detail_data = std::make_shared<Diag::Detail::DetailList::DetailData>();
        }
        return detail_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Detail::DetailList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(detail_data != nullptr)
    {
        children["detail-data"] = detail_data;
    }

    return children;
}

void Diag::Detail::DetailList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Diag::Detail::DetailList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Diag::Detail::DetailList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-data" || name == "location")
        return true;
    return false;
}

Diag::Detail::DetailList::DetailData::DetailData()
    :
    detail_out_list{YType::str, "detail_out_list"}
{

    yang_name = "detail-data"; yang_parent_name = "detail_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Diag::Detail::DetailList::DetailData::~DetailData()
{
}

bool Diag::Detail::DetailList::DetailData::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : detail_out_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Diag::Detail::DetailList::DetailData::has_operation() const
{
    for (auto const & leaf : detail_out_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(detail_out_list.yfilter);
}

std::string Diag::Detail::DetailList::DetailData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Diag::Detail::DetailList::DetailData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto detail_out_list_name_datas = detail_out_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), detail_out_list_name_datas.begin(), detail_out_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Diag::Detail::DetailList::DetailData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Diag::Detail::DetailList::DetailData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Diag::Detail::DetailList::DetailData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detail_out_list")
    {
        detail_out_list.append(value);
    }
}

void Diag::Detail::DetailList::DetailData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detail_out_list")
    {
        detail_out_list.yfilter = yfilter;
    }
}

bool Diag::Detail::DetailList::DetailData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail_out_list")
        return true;
    return false;
}


}
}

