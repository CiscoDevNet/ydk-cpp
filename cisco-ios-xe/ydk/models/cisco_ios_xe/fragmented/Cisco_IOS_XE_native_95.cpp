
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_95.hpp"
#include "Cisco_IOS_XE_native_96.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::ParameterMap::AggressiveAging::High::High()
    :
    absolute(std::make_shared<Native::ParameterMap::AggressiveAging::High::Absolute>())
	,percent(std::make_shared<Native::ParameterMap::AggressiveAging::High::Percent>())
{
    absolute->parent = this;
    percent->parent = this;

    yang_name = "high"; yang_parent_name = "aggressive-aging"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::AggressiveAging::High::~High()
{
}

bool Native::ParameterMap::AggressiveAging::High::has_data() const
{
    return (absolute !=  nullptr && absolute->has_data())
	|| (percent !=  nullptr && percent->has_data());
}

bool Native::ParameterMap::AggressiveAging::High::has_operation() const
{
    return is_set(yfilter)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (percent !=  nullptr && percent->has_operation());
}

std::string Native::ParameterMap::AggressiveAging::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::AggressiveAging::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::AggressiveAging::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::ParameterMap::AggressiveAging::High::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "percent")
    {
        if(percent == nullptr)
        {
            percent = std::make_shared<Native::ParameterMap::AggressiveAging::High::Percent>();
        }
        return percent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::AggressiveAging::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(percent != nullptr)
    {
        children["percent"] = percent;
    }

    return children;
}

void Native::ParameterMap::AggressiveAging::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::AggressiveAging::High::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::AggressiveAging::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "percent")
        return true;
    return false;
}

Native::ParameterMap::AggressiveAging::High::Absolute::Absolute()
    :
    value_{YType::uint64, "value"},
    low{YType::uint64, "low"}
{

    yang_name = "absolute"; yang_parent_name = "high"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::AggressiveAging::High::Absolute::~Absolute()
{
}

bool Native::ParameterMap::AggressiveAging::High::Absolute::has_data() const
{
    return value_.is_set
	|| low.is_set;
}

bool Native::ParameterMap::AggressiveAging::High::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Native::ParameterMap::AggressiveAging::High::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::AggressiveAging::High::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::AggressiveAging::High::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::AggressiveAging::High::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::AggressiveAging::High::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::AggressiveAging::High::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::ParameterMap::AggressiveAging::High::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "low")
        return true;
    return false;
}

Native::ParameterMap::AggressiveAging::High::Percent::Percent()
    :
    value_{YType::uint8, "value"},
    low_percent{YType::uint8, "low_percent"}
{

    yang_name = "percent"; yang_parent_name = "high"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::AggressiveAging::High::Percent::~Percent()
{
}

bool Native::ParameterMap::AggressiveAging::High::Percent::has_data() const
{
    return value_.is_set
	|| low_percent.is_set;
}

bool Native::ParameterMap::AggressiveAging::High::Percent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(low_percent.yfilter);
}

std::string Native::ParameterMap::AggressiveAging::High::Percent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "percent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::AggressiveAging::High::Percent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (low_percent.is_set || is_set(low_percent.yfilter)) leaf_name_data.push_back(low_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::AggressiveAging::High::Percent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::AggressiveAging::High::Percent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::AggressiveAging::High::Percent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low_percent")
    {
        low_percent = value;
        low_percent.value_namespace = name_space;
        low_percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::AggressiveAging::High::Percent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "low_percent")
    {
        low_percent.yfilter = yfilter;
    }
}

bool Native::ParameterMap::AggressiveAging::High::Percent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "low_percent")
        return true;
    return false;
}

Native::ParameterMap::Global::Global()
    :
    fail_open{YType::empty, "fail-open"},
    logging{YType::empty, "logging"},
    redirect_list{YType::str, "redirect-list"}
    	,
    license(std::make_shared<Native::ParameterMap::Global::License>())
	,primary(nullptr) // presence node
	,secondary(nullptr) // presence node
	,whitelist(nullptr) // presence node
{
    license->parent = this;

    yang_name = "global"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::~Global()
{
}

bool Native::ParameterMap::Global::has_data() const
{
    return fail_open.is_set
	|| logging.is_set
	|| redirect_list.is_set
	|| (license !=  nullptr && license->has_data())
	|| (primary !=  nullptr && primary->has_data())
	|| (secondary !=  nullptr && secondary->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::ParameterMap::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fail_open.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(redirect_list.yfilter)
	|| (license !=  nullptr && license->has_operation())
	|| (primary !=  nullptr && primary->has_operation())
	|| (secondary !=  nullptr && secondary->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::ParameterMap::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fail_open.is_set || is_set(fail_open.yfilter)) leaf_name_data.push_back(fail_open.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.yfilter)) leaf_name_data.push_back(redirect_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "license")
    {
        if(license == nullptr)
        {
            license = std::make_shared<Native::ParameterMap::Global::License>();
        }
        return license;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::ParameterMap::Global::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        if(secondary == nullptr)
        {
            secondary = std::make_shared<Native::ParameterMap::Global::Secondary>();
        }
        return secondary;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::ParameterMap::Global::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(license != nullptr)
    {
        children["license"] = license;
    }

    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    if(secondary != nullptr)
    {
        children["secondary"] = secondary;
    }

    if(whitelist != nullptr)
    {
        children["whitelist"] = whitelist;
    }

    return children;
}

void Native::ParameterMap::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fail-open")
    {
        fail_open = value;
        fail_open.value_namespace = name_space;
        fail_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect-list")
    {
        redirect_list = value;
        redirect_list.value_namespace = name_space;
        redirect_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fail-open")
    {
        fail_open.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "redirect-list")
    {
        redirect_list.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "license" || name == "primary" || name == "secondary" || name == "whitelist" || name == "fail-open" || name == "logging" || name == "redirect-list")
        return true;
    return false;
}

Native::ParameterMap::Global::License::License()
    :
    unencypted(std::make_shared<Native::ParameterMap::Global::License::Unencypted>())
	,encrypted(std::make_shared<Native::ParameterMap::Global::License::Encrypted>())
{
    unencypted->parent = this;
    encrypted->parent = this;

    yang_name = "license"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::License::~License()
{
}

bool Native::ParameterMap::Global::License::has_data() const
{
    return (unencypted !=  nullptr && unencypted->has_data())
	|| (encrypted !=  nullptr && encrypted->has_data());
}

bool Native::ParameterMap::Global::License::has_operation() const
{
    return is_set(yfilter)
	|| (unencypted !=  nullptr && unencypted->has_operation())
	|| (encrypted !=  nullptr && encrypted->has_operation());
}

std::string Native::ParameterMap::Global::License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::License::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Unencypted")
    {
        if(unencypted == nullptr)
        {
            unencypted = std::make_shared<Native::ParameterMap::Global::License::Unencypted>();
        }
        return unencypted;
    }

    if(child_yang_name == "Encrypted")
    {
        if(encrypted == nullptr)
        {
            encrypted = std::make_shared<Native::ParameterMap::Global::License::Encrypted>();
        }
        return encrypted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::License::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unencypted != nullptr)
    {
        children["Unencypted"] = unencypted;
    }

    if(encrypted != nullptr)
    {
        children["Encrypted"] = encrypted;
    }

    return children;
}

void Native::ParameterMap::Global::License::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Global::License::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Global::License::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Unencypted" || name == "Encrypted")
        return true;
    return false;
}

Native::ParameterMap::Global::License::Unencypted::Unencypted()
    :
    hex_string{YType::str, "Hex-string"}
{

    yang_name = "Unencypted"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::License::Unencypted::~Unencypted()
{
}

bool Native::ParameterMap::Global::License::Unencypted::has_data() const
{
    return hex_string.is_set;
}

bool Native::ParameterMap::Global::License::Unencypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string Native::ParameterMap::Global::License::Unencypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Unencypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::License::Unencypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::License::Unencypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::License::Unencypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::Global::License::Unencypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::License::Unencypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::License::Unencypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Hex-string")
        return true;
    return false;
}

Native::ParameterMap::Global::License::Encrypted::Encrypted()
    :
    hex_string{YType::str, "Hex-string"}
{

    yang_name = "Encrypted"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::License::Encrypted::~Encrypted()
{
}

bool Native::ParameterMap::Global::License::Encrypted::has_data() const
{
    return hex_string.is_set;
}

bool Native::ParameterMap::Global::License::Encrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string Native::ParameterMap::Global::License::Encrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::License::Encrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::License::Encrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::License::Encrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::Global::License::Encrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::License::Encrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::License::Encrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Hex-string")
        return true;
    return false;
}

Native::ParameterMap::Global::Primary::Primary()
    :
    tower(std::make_shared<Native::ParameterMap::Global::Primary::Tower>())
{
    tower->parent = this;

    yang_name = "primary"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Primary::~Primary()
{
}

bool Native::ParameterMap::Global::Primary::has_data() const
{
    return (tower !=  nullptr && tower->has_data());
}

bool Native::ParameterMap::Global::Primary::has_operation() const
{
    return is_set(yfilter)
	|| (tower !=  nullptr && tower->has_operation());
}

std::string Native::ParameterMap::Global::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tower")
    {
        if(tower == nullptr)
        {
            tower = std::make_shared<Native::ParameterMap::Global::Primary::Tower>();
        }
        return tower;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tower != nullptr)
    {
        children["tower"] = tower;
    }

    return children;
}

void Native::ParameterMap::Global::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Global::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Global::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tower")
        return true;
    return false;
}

Native::ParameterMap::Global::Primary::Tower::Tower()
    :
    ipv4{YType::str, "ipv4"},
    name{YType::str, "name"}
{

    yang_name = "tower"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Primary::Tower::~Tower()
{
}

bool Native::ParameterMap::Global::Primary::Tower::has_data() const
{
    return ipv4.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Global::Primary::Tower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Global::Primary::Tower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tower";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Primary::Tower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Primary::Tower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Primary::Tower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::Global::Primary::Tower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::Primary::Tower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::Primary::Tower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Global::Secondary::Secondary()
    :
    tower(std::make_shared<Native::ParameterMap::Global::Secondary::Tower>())
{
    tower->parent = this;

    yang_name = "secondary"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Secondary::~Secondary()
{
}

bool Native::ParameterMap::Global::Secondary::has_data() const
{
    return (tower !=  nullptr && tower->has_data());
}

bool Native::ParameterMap::Global::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| (tower !=  nullptr && tower->has_operation());
}

std::string Native::ParameterMap::Global::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tower")
    {
        if(tower == nullptr)
        {
            tower = std::make_shared<Native::ParameterMap::Global::Secondary::Tower>();
        }
        return tower;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tower != nullptr)
    {
        children["tower"] = tower;
    }

    return children;
}

void Native::ParameterMap::Global::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Global::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Global::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tower")
        return true;
    return false;
}

Native::ParameterMap::Global::Secondary::Tower::Tower()
    :
    ipv4{YType::str, "ipv4"},
    name{YType::str, "name"}
{

    yang_name = "tower"; yang_parent_name = "secondary"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Secondary::Tower::~Tower()
{
}

bool Native::ParameterMap::Global::Secondary::Tower::has_data() const
{
    return ipv4.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Global::Secondary::Tower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Global::Secondary::Tower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tower";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Secondary::Tower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Secondary::Tower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Secondary::Tower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::Global::Secondary::Tower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::Secondary::Tower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::Secondary::Tower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Global::Whitelist::Whitelist()
    :
    acl(std::make_shared<Native::ParameterMap::Global::Whitelist::Acl>())
	,domain_name(std::make_shared<Native::ParameterMap::Global::Whitelist::DomainName>())
	,download(nullptr) // presence node
{
    acl->parent = this;
    domain_name->parent = this;

    yang_name = "whitelist"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Whitelist::~Whitelist()
{
}

bool Native::ParameterMap::Global::Whitelist::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (domain_name !=  nullptr && domain_name->has_data())
	|| (download !=  nullptr && download->has_data());
}

bool Native::ParameterMap::Global::Whitelist::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (domain_name !=  nullptr && domain_name->has_operation())
	|| (download !=  nullptr && download->has_operation());
}

std::string Native::ParameterMap::Global::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::ParameterMap::Global::Whitelist::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::ParameterMap::Global::Whitelist::DomainName>();
        }
        return domain_name;
    }

    if(child_yang_name == "download")
    {
        if(download == nullptr)
        {
            download = std::make_shared<Native::ParameterMap::Global::Whitelist::Download>();
        }
        return download;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(domain_name != nullptr)
    {
        children["domain-name"] = domain_name;
    }

    if(download != nullptr)
    {
        children["download"] = download;
    }

    return children;
}

void Native::ParameterMap::Global::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Global::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Global::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "domain-name" || name == "download")
        return true;
    return false;
}

Native::ParameterMap::Global::Whitelist::Acl::Acl()
    :
    acl_number{YType::str, "acl-number"},
    name{YType::str, "name"}
{

    yang_name = "acl"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Whitelist::Acl::~Acl()
{
}

bool Native::ParameterMap::Global::Whitelist::Acl::has_data() const
{
    return acl_number.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Global::Whitelist::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_number.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Global::Whitelist::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Whitelist::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_number.is_set || is_set(acl_number.yfilter)) leaf_name_data.push_back(acl_number.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Whitelist::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Whitelist::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::Global::Whitelist::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-number")
    {
        acl_number = value;
        acl_number.value_namespace = name_space;
        acl_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::Whitelist::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-number")
    {
        acl_number.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::Whitelist::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-number" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Global::Whitelist::DomainName::DomainName()
    :
    regex{YType::str, "regex"}
{

    yang_name = "domain-name"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Whitelist::DomainName::~DomainName()
{
}

bool Native::ParameterMap::Global::Whitelist::DomainName::has_data() const
{
    return regex.is_set;
}

bool Native::ParameterMap::Global::Whitelist::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string Native::ParameterMap::Global::Whitelist::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Whitelist::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Whitelist::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Whitelist::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::Global::Whitelist::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::Whitelist::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::Whitelist::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex")
        return true;
    return false;
}

Native::ParameterMap::Global::Whitelist::Download::Download()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "download"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Whitelist::Download::~Download()
{
}

bool Native::ParameterMap::Global::Whitelist::Download::has_data() const
{
    return interval.is_set;
}

bool Native::ParameterMap::Global::Whitelist::Download::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::ParameterMap::Global::Whitelist::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Whitelist::Download::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Whitelist::Download::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Whitelist::Download::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::Global::Whitelist::Download::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::Whitelist::Download::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::Whitelist::Download::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::ParameterMap::Icmp::Icmp()
    :
    idle_time{YType::uint32, "idle-time"}
{

    yang_name = "icmp"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Icmp::~Icmp()
{
}

bool Native::ParameterMap::Icmp::has_data() const
{
    return idle_time.is_set;
}

bool Native::ParameterMap::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Native::ParameterMap::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time")
        return true;
    return false;
}

Native::ParameterMap::Lisp::Lisp()
    :
    inner_packet_inspection{YType::empty, "inner-packet-inspection"}
{

    yang_name = "lisp"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Lisp::~Lisp()
{
}

bool Native::ParameterMap::Lisp::has_data() const
{
    return inner_packet_inspection.is_set;
}

bool Native::ParameterMap::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inner_packet_inspection.yfilter);
}

std::string Native::ParameterMap::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_packet_inspection.is_set || is_set(inner_packet_inspection.yfilter)) leaf_name_data.push_back(inner_packet_inspection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner-packet-inspection")
    {
        inner_packet_inspection = value;
        inner_packet_inspection.value_namespace = name_space;
        inner_packet_inspection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner-packet-inspection")
    {
        inner_packet_inspection.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner-packet-inspection")
        return true;
    return false;
}

Native::ParameterMap::Log::Log()
    :
    dropped_packets{YType::empty, "dropped-packets"}
    	,
    flow_export(std::make_shared<Native::ParameterMap::Log::FlowExport>())
{
    flow_export->parent = this;

    yang_name = "log"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::~Log()
{
}

bool Native::ParameterMap::Log::has_data() const
{
    return dropped_packets.is_set
	|| (flow_export !=  nullptr && flow_export->has_data());
}

bool Native::ParameterMap::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| (flow_export !=  nullptr && flow_export->has_operation());
}

std::string Native::ParameterMap::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-export")
    {
        if(flow_export == nullptr)
        {
            flow_export = std::make_shared<Native::ParameterMap::Log::FlowExport>();
        }
        return flow_export;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flow_export != nullptr)
    {
        children["flow-export"] = flow_export;
    }

    return children;
}

void Native::ParameterMap::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-export" || name == "dropped-packets")
        return true;
    return false;
}

Native::ParameterMap::Log::FlowExport::FlowExport()
    :
    template_(std::make_shared<Native::ParameterMap::Log::FlowExport::Template>())
	,v9(std::make_shared<Native::ParameterMap::Log::FlowExport::V9>())
{
    template_->parent = this;
    v9->parent = this;

    yang_name = "flow-export"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::FlowExport::~FlowExport()
{
}

bool Native::ParameterMap::Log::FlowExport::has_data() const
{
    return (template_ !=  nullptr && template_->has_data())
	|| (v9 !=  nullptr && v9->has_data());
}

bool Native::ParameterMap::Log::FlowExport::has_operation() const
{
    return is_set(yfilter)
	|| (template_ !=  nullptr && template_->has_operation())
	|| (v9 !=  nullptr && v9->has_operation());
}

std::string Native::ParameterMap::Log::FlowExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::FlowExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::ParameterMap::Log::FlowExport::Template>();
        }
        return template_;
    }

    if(child_yang_name == "v9")
    {
        if(v9 == nullptr)
        {
            v9 = std::make_shared<Native::ParameterMap::Log::FlowExport::V9>();
        }
        return v9;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(v9 != nullptr)
    {
        children["v9"] = v9;
    }

    return children;
}

void Native::ParameterMap::Log::FlowExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Log::FlowExport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Log::FlowExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template" || name == "v9")
        return true;
    return false;
}

Native::ParameterMap::Log::FlowExport::Template::Template()
    :
    timeout_rate{YType::uint32, "timeout-rate"}
{

    yang_name = "template"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::FlowExport::Template::~Template()
{
}

bool Native::ParameterMap::Log::FlowExport::Template::has_data() const
{
    return timeout_rate.is_set;
}

bool Native::ParameterMap::Log::FlowExport::Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout_rate.yfilter);
}

std::string Native::ParameterMap::Log::FlowExport::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::FlowExport::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout_rate.is_set || is_set(timeout_rate.yfilter)) leaf_name_data.push_back(timeout_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::Log::FlowExport::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout-rate")
    {
        timeout_rate = value;
        timeout_rate.value_namespace = name_space;
        timeout_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Log::FlowExport::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout-rate")
    {
        timeout_rate.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Log::FlowExport::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout-rate")
        return true;
    return false;
}

Native::ParameterMap::Log::FlowExport::V9::V9()
    :
    udp(std::make_shared<Native::ParameterMap::Log::FlowExport::V9::Udp>())
{
    udp->parent = this;

    yang_name = "v9"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::FlowExport::V9::~V9()
{
}

bool Native::ParameterMap::Log::FlowExport::V9::has_data() const
{
    return (udp !=  nullptr && udp->has_data());
}

bool Native::ParameterMap::Log::FlowExport::V9::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::ParameterMap::Log::FlowExport::V9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v9";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::FlowExport::V9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::V9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::ParameterMap::Log::FlowExport::V9::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::V9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::ParameterMap::Log::FlowExport::V9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Log::FlowExport::V9::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Log::FlowExport::V9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp")
        return true;
    return false;
}

Native::ParameterMap::Log::FlowExport::V9::Udp::Udp()
    :
    destination(std::make_shared<Native::ParameterMap::Log::FlowExport::V9::Udp::Destination>())
{
    destination->parent = this;

    yang_name = "udp"; yang_parent_name = "v9"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::FlowExport::V9::Udp::~Udp()
{
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::has_data() const
{
    return (destination !=  nullptr && destination->has_data());
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::ParameterMap::Log::FlowExport::V9::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::FlowExport::V9::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::V9::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::ParameterMap::Log::FlowExport::V9::Udp::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::V9::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
}

void Native::ParameterMap::Log::FlowExport::V9::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Log::FlowExport::V9::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::Destination()
    :
    dst_ip{YType::str, "dst-ip"},
    dst_port{YType::uint16, "dst-port"}
{

    yang_name = "destination"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::~Destination()
{
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::has_data() const
{
    return dst_ip.is_set
	|| dst_port.is_set;
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(dst_port.yfilter);
}

std::string Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (dst_port.is_set || is_set(dst_port.yfilter)) leaf_name_data.push_back(dst_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-port")
    {
        dst_port = value;
        dst_port.value_namespace = name_space;
        dst_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "dst-port")
    {
        dst_port.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-ip" || name == "dst-port")
        return true;
    return false;
}

Native::ParameterMap::MaxIncomplete::MaxIncomplete()
    :
    high{YType::uint32, "high"},
    low{YType::uint32, "low"}
{

    yang_name = "max-incomplete"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::MaxIncomplete::~MaxIncomplete()
{
}

bool Native::ParameterMap::MaxIncomplete::has_data() const
{
    return high.is_set
	|| low.is_set;
}

bool Native::ParameterMap::MaxIncomplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Native::ParameterMap::MaxIncomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:max-incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::MaxIncomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::MaxIncomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::MaxIncomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::MaxIncomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::MaxIncomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::ParameterMap::MaxIncomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::ParameterMap::OneMinute::OneMinute()
    :
    high{YType::uint32, "high"},
    low{YType::uint32, "low"}
{

    yang_name = "one-minute"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::OneMinute::~OneMinute()
{
}

bool Native::ParameterMap::OneMinute::has_data() const
{
    return high.is_set
	|| low.is_set;
}

bool Native::ParameterMap::OneMinute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Native::ParameterMap::OneMinute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:one-minute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::OneMinute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::OneMinute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::OneMinute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::OneMinute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::OneMinute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::ParameterMap::OneMinute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::ParameterMap::Sessions::Sessions()
    :
    maximum{YType::uint32, "maximum"}
    	,
    queue(std::make_shared<Native::ParameterMap::Sessions::Queue>())
{
    queue->parent = this;

    yang_name = "sessions"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Sessions::~Sessions()
{
}

bool Native::ParameterMap::Sessions::has_data() const
{
    return maximum.is_set
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::ParameterMap::Sessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::ParameterMap::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::ParameterMap::Sessions::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::ParameterMap::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "maximum")
        return true;
    return false;
}

Native::ParameterMap::Sessions::Queue::Queue()
    :
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"}
{

    yang_name = "queue"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Sessions::Queue::~Queue()
{
}

bool Native::ParameterMap::Sessions::Queue::has_data() const
{
    return max_threshold.is_set
	|| min_threshold.is_set;
}

bool Native::ParameterMap::Sessions::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(min_threshold.yfilter);
}

std::string Native::ParameterMap::Sessions::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Sessions::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Sessions::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Sessions::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::Sessions::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Sessions::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Sessions::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-threshold" || name == "min-threshold")
        return true;
    return false;
}

Native::ParameterMap::TcpInspect::TcpInspect()
    :
    tcp(std::make_shared<Native::ParameterMap::TcpInspect::Tcp>())
{
    tcp->parent = this;

    yang_name = "tcp-inspect"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspect::~TcpInspect()
{
}

bool Native::ParameterMap::TcpInspect::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data());
}

bool Native::ParameterMap::TcpInspect::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::ParameterMap::TcpInspect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:tcp-inspect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::TcpInspect::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    return children;
}

void Native::ParameterMap::TcpInspect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::TcpInspect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::TcpInspect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp")
        return true;
    return false;
}

Native::ParameterMap::TcpInspect::Tcp::Tcp()
    :
    finwait_time{YType::uint32, "finwait-time"},
    idle_time{YType::uint32, "idle-time"},
    synwait_time{YType::uint32, "synwait-time"}
    	,
    max_incomplete(std::make_shared<Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete>())
{
    max_incomplete->parent = this;

    yang_name = "tcp"; yang_parent_name = "tcp-inspect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspect::Tcp::~Tcp()
{
}

bool Native::ParameterMap::TcpInspect::Tcp::has_data() const
{
    return finwait_time.is_set
	|| idle_time.is_set
	|| synwait_time.is_set
	|| (max_incomplete !=  nullptr && max_incomplete->has_data());
}

bool Native::ParameterMap::TcpInspect::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(finwait_time.yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(synwait_time.yfilter)
	|| (max_incomplete !=  nullptr && max_incomplete->has_operation());
}

std::string Native::ParameterMap::TcpInspect::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspect::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (finwait_time.is_set || is_set(finwait_time.yfilter)) leaf_name_data.push_back(finwait_time.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (synwait_time.is_set || is_set(synwait_time.yfilter)) leaf_name_data.push_back(synwait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspect::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-incomplete")
    {
        if(max_incomplete == nullptr)
        {
            max_incomplete = std::make_shared<Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete>();
        }
        return max_incomplete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspect::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(max_incomplete != nullptr)
    {
        children["max-incomplete"] = max_incomplete;
    }

    return children;
}

void Native::ParameterMap::TcpInspect::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "finwait-time")
    {
        finwait_time = value;
        finwait_time.value_namespace = name_space;
        finwait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synwait-time")
    {
        synwait_time = value;
        synwait_time.value_namespace = name_space;
        synwait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::TcpInspect::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "finwait-time")
    {
        finwait_time.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "synwait-time")
    {
        synwait_time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::TcpInspect::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-incomplete" || name == "finwait-time" || name == "idle-time" || name == "synwait-time")
        return true;
    return false;
}

Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::MaxIncomplete()
    :
    host{YType::uint32, "host"}
{

    yang_name = "max-incomplete"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::~MaxIncomplete()
{
}

bool Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::has_data() const
{
    return host.is_set;
}

bool Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::ParameterMap::TcpInspectZone::TcpInspectZone()
    :
    tcp(std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp>())
{
    tcp->parent = this;

    yang_name = "tcp-inspect-zone"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspectZone::~TcpInspectZone()
{
}

bool Native::ParameterMap::TcpInspectZone::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data());
}

bool Native::ParameterMap::TcpInspectZone::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::ParameterMap::TcpInspectZone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:tcp-inspect-zone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspectZone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspectZone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspectZone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    return children;
}

void Native::ParameterMap::TcpInspectZone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::TcpInspectZone::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::TcpInspectZone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp")
        return true;
    return false;
}

Native::ParameterMap::TcpInspectZone::Tcp::Tcp()
    :
    syn_flood(std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp::SynFlood>())
{
    syn_flood->parent = this;

    yang_name = "tcp"; yang_parent_name = "tcp-inspect-zone"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspectZone::Tcp::~Tcp()
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::has_data() const
{
    return (syn_flood !=  nullptr && syn_flood->has_data());
}

bool Native::ParameterMap::TcpInspectZone::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (syn_flood !=  nullptr && syn_flood->has_operation());
}

std::string Native::ParameterMap::TcpInspectZone::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspectZone::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspectZone::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syn-flood")
    {
        if(syn_flood == nullptr)
        {
            syn_flood = std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp::SynFlood>();
        }
        return syn_flood;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspectZone::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(syn_flood != nullptr)
    {
        children["syn-flood"] = syn_flood;
    }

    return children;
}

void Native::ParameterMap::TcpInspectZone::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::TcpInspectZone::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syn-flood")
        return true;
    return false;
}

Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::SynFlood()
    :
    rate(std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate>())
{
    rate->parent = this;

    yang_name = "syn-flood"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::~SynFlood()
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::has_data() const
{
    return (rate !=  nullptr && rate->has_data());
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::has_operation() const
{
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::Rate()
    :
    per_destination{YType::uint32, "per-destination"}
{

    yang_name = "rate"; yang_parent_name = "syn-flood"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::~Rate()
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::has_data() const
{
    return per_destination.is_set;
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_destination.yfilter);
}

std::string Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_destination.is_set || is_set(per_destination.yfilter)) leaf_name_data.push_back(per_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-destination")
    {
        per_destination = value;
        per_destination.value_namespace = name_space;
        per_destination.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-destination")
    {
        per_destination.yfilter = yfilter;
    }
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-destination")
        return true;
    return false;
}

Native::ParameterMap::ThreatDetection::ThreatDetection()
    :
    basic_threat{YType::empty, "basic-threat"}
    	,
    rate(std::make_shared<Native::ParameterMap::ThreatDetection::Rate>())
{
    rate->parent = this;

    yang_name = "threat-detection"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::ThreatDetection::~ThreatDetection()
{
}

bool Native::ParameterMap::ThreatDetection::has_data() const
{
    return basic_threat.is_set
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::ParameterMap::ThreatDetection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(basic_threat.yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::ParameterMap::ThreatDetection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:threat-detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::ThreatDetection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (basic_threat.is_set || is_set(basic_threat.yfilter)) leaf_name_data.push_back(basic_threat.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::ParameterMap::ThreatDetection::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::ParameterMap::ThreatDetection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "basic-threat")
    {
        basic_threat = value;
        basic_threat.value_namespace = name_space;
        basic_threat.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::ThreatDetection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "basic-threat")
    {
        basic_threat.yfilter = yfilter;
    }
}

bool Native::ParameterMap::ThreatDetection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "basic-threat")
        return true;
    return false;
}

Native::ParameterMap::ThreatDetection::Rate::Rate()
    :
    fw_drop(std::make_shared<Native::ParameterMap::ThreatDetection::Rate::FwDrop>())
	,inspect_drop(std::make_shared<Native::ParameterMap::ThreatDetection::Rate::InspectDrop>())
	,syn_attack(std::make_shared<Native::ParameterMap::ThreatDetection::Rate::SynAttack>())
{
    fw_drop->parent = this;
    inspect_drop->parent = this;
    syn_attack->parent = this;

    yang_name = "rate"; yang_parent_name = "threat-detection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::ThreatDetection::Rate::~Rate()
{
}

bool Native::ParameterMap::ThreatDetection::Rate::has_data() const
{
    return (fw_drop !=  nullptr && fw_drop->has_data())
	|| (inspect_drop !=  nullptr && inspect_drop->has_data())
	|| (syn_attack !=  nullptr && syn_attack->has_data());
}

bool Native::ParameterMap::ThreatDetection::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (fw_drop !=  nullptr && fw_drop->has_operation())
	|| (inspect_drop !=  nullptr && inspect_drop->has_operation())
	|| (syn_attack !=  nullptr && syn_attack->has_operation());
}

std::string Native::ParameterMap::ThreatDetection::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::ThreatDetection::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fw-drop")
    {
        if(fw_drop == nullptr)
        {
            fw_drop = std::make_shared<Native::ParameterMap::ThreatDetection::Rate::FwDrop>();
        }
        return fw_drop;
    }

    if(child_yang_name == "inspect-drop")
    {
        if(inspect_drop == nullptr)
        {
            inspect_drop = std::make_shared<Native::ParameterMap::ThreatDetection::Rate::InspectDrop>();
        }
        return inspect_drop;
    }

    if(child_yang_name == "syn-attack")
    {
        if(syn_attack == nullptr)
        {
            syn_attack = std::make_shared<Native::ParameterMap::ThreatDetection::Rate::SynAttack>();
        }
        return syn_attack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fw_drop != nullptr)
    {
        children["fw-drop"] = fw_drop;
    }

    if(inspect_drop != nullptr)
    {
        children["inspect-drop"] = inspect_drop;
    }

    if(syn_attack != nullptr)
    {
        children["syn-attack"] = syn_attack;
    }

    return children;
}

void Native::ParameterMap::ThreatDetection::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::ThreatDetection::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::ThreatDetection::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fw-drop" || name == "inspect-drop" || name == "syn-attack")
        return true;
    return false;
}

Native::ParameterMap::ThreatDetection::Rate::FwDrop::FwDrop()
    :
    average_time_frame{YType::uint32, "average-time-frame"},
    average_threshold{YType::uint64, "average-threshold"},
    burst_threshold{YType::uint64, "burst-threshold"}
{

    yang_name = "fw-drop"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::ThreatDetection::Rate::FwDrop::~FwDrop()
{
}

bool Native::ParameterMap::ThreatDetection::Rate::FwDrop::has_data() const
{
    return average_time_frame.is_set
	|| average_threshold.is_set
	|| burst_threshold.is_set;
}

bool Native::ParameterMap::ThreatDetection::Rate::FwDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_time_frame.yfilter)
	|| ydk::is_set(average_threshold.yfilter)
	|| ydk::is_set(burst_threshold.yfilter);
}

std::string Native::ParameterMap::ThreatDetection::Rate::FwDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::ThreatDetection::Rate::FwDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_time_frame.is_set || is_set(average_time_frame.yfilter)) leaf_name_data.push_back(average_time_frame.get_name_leafdata());
    if (average_threshold.is_set || is_set(average_threshold.yfilter)) leaf_name_data.push_back(average_threshold.get_name_leafdata());
    if (burst_threshold.is_set || is_set(burst_threshold.yfilter)) leaf_name_data.push_back(burst_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::Rate::FwDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::Rate::FwDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::ThreatDetection::Rate::FwDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame = value;
        average_time_frame.value_namespace = name_space;
        average_time_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-threshold")
    {
        average_threshold = value;
        average_threshold.value_namespace = name_space;
        average_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold = value;
        burst_threshold.value_namespace = name_space;
        burst_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::ThreatDetection::Rate::FwDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame.yfilter = yfilter;
    }
    if(value_path == "average-threshold")
    {
        average_threshold.yfilter = yfilter;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold.yfilter = yfilter;
    }
}

bool Native::ParameterMap::ThreatDetection::Rate::FwDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-time-frame" || name == "average-threshold" || name == "burst-threshold")
        return true;
    return false;
}

Native::ParameterMap::ThreatDetection::Rate::InspectDrop::InspectDrop()
    :
    average_time_frame{YType::uint32, "average-time-frame"},
    average_threshold{YType::uint64, "average-threshold"},
    burst_threshold{YType::uint64, "burst-threshold"}
{

    yang_name = "inspect-drop"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::ThreatDetection::Rate::InspectDrop::~InspectDrop()
{
}

bool Native::ParameterMap::ThreatDetection::Rate::InspectDrop::has_data() const
{
    return average_time_frame.is_set
	|| average_threshold.is_set
	|| burst_threshold.is_set;
}

bool Native::ParameterMap::ThreatDetection::Rate::InspectDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_time_frame.yfilter)
	|| ydk::is_set(average_threshold.yfilter)
	|| ydk::is_set(burst_threshold.yfilter);
}

std::string Native::ParameterMap::ThreatDetection::Rate::InspectDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspect-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::ThreatDetection::Rate::InspectDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_time_frame.is_set || is_set(average_time_frame.yfilter)) leaf_name_data.push_back(average_time_frame.get_name_leafdata());
    if (average_threshold.is_set || is_set(average_threshold.yfilter)) leaf_name_data.push_back(average_threshold.get_name_leafdata());
    if (burst_threshold.is_set || is_set(burst_threshold.yfilter)) leaf_name_data.push_back(burst_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::Rate::InspectDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::Rate::InspectDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::ThreatDetection::Rate::InspectDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame = value;
        average_time_frame.value_namespace = name_space;
        average_time_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-threshold")
    {
        average_threshold = value;
        average_threshold.value_namespace = name_space;
        average_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold = value;
        burst_threshold.value_namespace = name_space;
        burst_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::ThreatDetection::Rate::InspectDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame.yfilter = yfilter;
    }
    if(value_path == "average-threshold")
    {
        average_threshold.yfilter = yfilter;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold.yfilter = yfilter;
    }
}

bool Native::ParameterMap::ThreatDetection::Rate::InspectDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-time-frame" || name == "average-threshold" || name == "burst-threshold")
        return true;
    return false;
}

Native::ParameterMap::ThreatDetection::Rate::SynAttack::SynAttack()
    :
    average_time_frame{YType::uint32, "average-time-frame"},
    average_threshold{YType::uint64, "average-threshold"},
    burst_threshold{YType::uint64, "burst-threshold"}
{

    yang_name = "syn-attack"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::ThreatDetection::Rate::SynAttack::~SynAttack()
{
}

bool Native::ParameterMap::ThreatDetection::Rate::SynAttack::has_data() const
{
    return average_time_frame.is_set
	|| average_threshold.is_set
	|| burst_threshold.is_set;
}

bool Native::ParameterMap::ThreatDetection::Rate::SynAttack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_time_frame.yfilter)
	|| ydk::is_set(average_threshold.yfilter)
	|| ydk::is_set(burst_threshold.yfilter);
}

std::string Native::ParameterMap::ThreatDetection::Rate::SynAttack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-attack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::ThreatDetection::Rate::SynAttack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_time_frame.is_set || is_set(average_time_frame.yfilter)) leaf_name_data.push_back(average_time_frame.get_name_leafdata());
    if (average_threshold.is_set || is_set(average_threshold.yfilter)) leaf_name_data.push_back(average_threshold.get_name_leafdata());
    if (burst_threshold.is_set || is_set(burst_threshold.yfilter)) leaf_name_data.push_back(burst_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::Rate::SynAttack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::Rate::SynAttack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::ThreatDetection::Rate::SynAttack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame = value;
        average_time_frame.value_namespace = name_space;
        average_time_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-threshold")
    {
        average_threshold = value;
        average_threshold.value_namespace = name_space;
        average_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold = value;
        burst_threshold.value_namespace = name_space;
        burst_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::ThreatDetection::Rate::SynAttack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-time-frame")
    {
        average_time_frame.yfilter = yfilter;
    }
    if(value_path == "average-threshold")
    {
        average_threshold.yfilter = yfilter;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold.yfilter = yfilter;
    }
}

bool Native::ParameterMap::ThreatDetection::Rate::SynAttack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-time-frame" || name == "average-threshold" || name == "burst-threshold")
        return true;
    return false;
}

Native::ParameterMap::Udp::Udp()
    :
    idle_time{YType::uint32, "idle-time"}
{

    yang_name = "udp"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Udp::~Udp()
{
}

bool Native::ParameterMap::Udp::has_data() const
{
    return idle_time.is_set;
}

bool Native::ParameterMap::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Native::ParameterMap::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time")
        return true;
    return false;
}

Native::ParameterMap::Vrf::Vrf()
    :
    name{YType::str, "name"},
    inspect{YType::str, "inspect"}
{

    yang_name = "vrf"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Vrf::~Vrf()
{
}

bool Native::ParameterMap::Vrf::has_data() const
{
    return name.is_set
	|| inspect.is_set;
}

bool Native::ParameterMap::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(inspect.yfilter);
}

std::string Native::ParameterMap::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (inspect.is_set || is_set(inspect.yfilter)) leaf_name_data.push_back(inspect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inspect")
    {
        inspect = value;
        inspect.value_namespace = name_space;
        inspect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "inspect")
    {
        inspect.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "inspect")
        return true;
    return false;
}

Native::ParameterMap::UmbrellaGlobal::UmbrellaGlobal()
    :
    token{YType::str, "token"},
    local_domain{YType::str, "local-domain"},
    dnscrypt{YType::boolean, "dnscrypt"},
    public_key{YType::str, "public-key"},
    udp_timeout{YType::uint8, "udp-timeout"}
    	,
    resolver(std::make_shared<Native::ParameterMap::UmbrellaGlobal::Resolver>())
{
    resolver->parent = this;

    yang_name = "umbrella-global"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::UmbrellaGlobal::~UmbrellaGlobal()
{
}

bool Native::ParameterMap::UmbrellaGlobal::has_data() const
{
    return token.is_set
	|| local_domain.is_set
	|| dnscrypt.is_set
	|| public_key.is_set
	|| udp_timeout.is_set
	|| (resolver !=  nullptr && resolver->has_data());
}

bool Native::ParameterMap::UmbrellaGlobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(token.yfilter)
	|| ydk::is_set(local_domain.yfilter)
	|| ydk::is_set(dnscrypt.yfilter)
	|| ydk::is_set(public_key.yfilter)
	|| ydk::is_set(udp_timeout.yfilter)
	|| (resolver !=  nullptr && resolver->has_operation());
}

std::string Native::ParameterMap::UmbrellaGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-umbrella:umbrella-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::UmbrellaGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (token.is_set || is_set(token.yfilter)) leaf_name_data.push_back(token.get_name_leafdata());
    if (local_domain.is_set || is_set(local_domain.yfilter)) leaf_name_data.push_back(local_domain.get_name_leafdata());
    if (dnscrypt.is_set || is_set(dnscrypt.yfilter)) leaf_name_data.push_back(dnscrypt.get_name_leafdata());
    if (public_key.is_set || is_set(public_key.yfilter)) leaf_name_data.push_back(public_key.get_name_leafdata());
    if (udp_timeout.is_set || is_set(udp_timeout.yfilter)) leaf_name_data.push_back(udp_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::UmbrellaGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resolver")
    {
        if(resolver == nullptr)
        {
            resolver = std::make_shared<Native::ParameterMap::UmbrellaGlobal::Resolver>();
        }
        return resolver;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::UmbrellaGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(resolver != nullptr)
    {
        children["resolver"] = resolver;
    }

    return children;
}

void Native::ParameterMap::UmbrellaGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "token")
    {
        token = value;
        token.value_namespace = name_space;
        token.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-domain")
    {
        local_domain = value;
        local_domain.value_namespace = name_space;
        local_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnscrypt")
    {
        dnscrypt = value;
        dnscrypt.value_namespace = name_space;
        dnscrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "public-key")
    {
        public_key = value;
        public_key.value_namespace = name_space;
        public_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-timeout")
    {
        udp_timeout = value;
        udp_timeout.value_namespace = name_space;
        udp_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::UmbrellaGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "token")
    {
        token.yfilter = yfilter;
    }
    if(value_path == "local-domain")
    {
        local_domain.yfilter = yfilter;
    }
    if(value_path == "dnscrypt")
    {
        dnscrypt.yfilter = yfilter;
    }
    if(value_path == "public-key")
    {
        public_key.yfilter = yfilter;
    }
    if(value_path == "udp-timeout")
    {
        udp_timeout.yfilter = yfilter;
    }
}

bool Native::ParameterMap::UmbrellaGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resolver" || name == "token" || name == "local-domain" || name == "dnscrypt" || name == "public-key" || name == "udp-timeout")
        return true;
    return false;
}

Native::ParameterMap::UmbrellaGlobal::Resolver::Resolver()
{

    yang_name = "resolver"; yang_parent_name = "umbrella-global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::UmbrellaGlobal::Resolver::~Resolver()
{
}

bool Native::ParameterMap::UmbrellaGlobal::Resolver::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ParameterMap::UmbrellaGlobal::Resolver::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ParameterMap::UmbrellaGlobal::Resolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resolver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::UmbrellaGlobal::Resolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::UmbrellaGlobal::Resolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto c = std::make_shared<Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        auto c = std::make_shared<Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::UmbrellaGlobal::Resolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ipv6)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::ParameterMap::UmbrellaGlobal::Resolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::UmbrellaGlobal::Resolver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::UmbrellaGlobal::Resolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv4::Ipv4()
    :
    address{YType::str, "address"}
{

    yang_name = "ipv4"; yang_parent_name = "resolver"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv4::~Ipv4()
{
}

bool Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv4::has_data() const
{
    return address.is_set;
}

bool Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv6::Ipv6()
    :
    address{YType::str, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "resolver"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv6::~Ipv6()
{
}

bool Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv6::has_data() const
{
    return address.is_set;
}

bool Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::ParameterMap::UmbrellaGlobal::Resolver::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Ppp::Ppp()
    :
    packet(std::make_shared<Native::Ppp::Packet>())
{
    packet->parent = this;

    yang_name = "ppp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ppp::~Ppp()
{
}

bool Native::Ppp::has_data() const
{
    return (packet !=  nullptr && packet->has_data());
}

bool Native::Ppp::has_operation() const
{
    return is_set(yfilter)
	|| (packet !=  nullptr && packet->has_operation());
}

std::string Native::Ppp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-ppp:packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Ppp::Packet>();
        }
        return packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(packet != nullptr)
    {
        children["Cisco-IOS-XE-ppp:packet"] = packet;
    }

    return children;
}

void Native::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet")
        return true;
    return false;
}

Native::Ppp::Packet::Packet()
    :
    throttle{YType::uint32, "throttle"},
    allow_time{YType::uint32, "allow_time"},
    block_time{YType::uint32, "block_time"}
{

    yang_name = "packet"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ppp::Packet::~Packet()
{
}

bool Native::Ppp::Packet::has_data() const
{
    return throttle.is_set
	|| allow_time.is_set
	|| block_time.is_set;
}

bool Native::Ppp::Packet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(throttle.yfilter)
	|| ydk::is_set(allow_time.yfilter)
	|| ydk::is_set(block_time.yfilter);
}

std::string Native::Ppp::Packet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ppp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ppp::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ppp:packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ppp::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (throttle.is_set || is_set(throttle.yfilter)) leaf_name_data.push_back(throttle.get_name_leafdata());
    if (allow_time.is_set || is_set(allow_time.yfilter)) leaf_name_data.push_back(allow_time.get_name_leafdata());
    if (block_time.is_set || is_set(block_time.yfilter)) leaf_name_data.push_back(block_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ppp::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ppp::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ppp::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "throttle")
    {
        throttle = value;
        throttle.value_namespace = name_space;
        throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow_time")
    {
        allow_time = value;
        allow_time.value_namespace = name_space;
        allow_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block_time")
    {
        block_time = value;
        block_time.value_namespace = name_space;
        block_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ppp::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "throttle")
    {
        throttle.yfilter = yfilter;
    }
    if(value_path == "allow_time")
    {
        allow_time.yfilter = yfilter;
    }
    if(value_path == "block_time")
    {
        block_time.yfilter = yfilter;
    }
}

bool Native::Ppp::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle" || name == "allow_time" || name == "block_time")
        return true;
    return false;
}

Native::Mac::Mac()
    :
    address_table(std::make_shared<Native::Mac::AddressTable>())
	,access_list(std::make_shared<Native::Mac::AccessList>())
{
    address_table->parent = this;
    access_list->parent = this;

    yang_name = "mac"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::~Mac()
{
}

bool Native::Mac::has_data() const
{
    return (address_table !=  nullptr && address_table->has_data())
	|| (access_list !=  nullptr && access_list->has_data());
}

bool Native::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (address_table !=  nullptr && address_table->has_operation())
	|| (access_list !=  nullptr && access_list->has_operation());
}

std::string Native::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-table")
    {
        if(address_table == nullptr)
        {
            address_table = std::make_shared<Native::Mac::AddressTable>();
        }
        return address_table;
    }

    if(child_yang_name == "Cisco-IOS-XE-acl:access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Mac::AccessList>();
        }
        return access_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(address_table != nullptr)
    {
        children["address-table"] = address_table;
    }

    if(access_list != nullptr)
    {
        children["Cisco-IOS-XE-acl:access-list"] = access_list;
    }

    return children;
}

void Native::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-table" || name == "access-list")
        return true;
    return false;
}

Native::Mac::AddressTable::AddressTable()
    :
    control_packet_learn{YType::empty, "control-packet-learn"}
    	,
    aging_time(std::make_shared<Native::Mac::AddressTable::AgingTime>())
	,learning(std::make_shared<Native::Mac::AddressTable::Learning>())
	,notification(std::make_shared<Native::Mac::AddressTable::Notification>())
	,static_(std::make_shared<Native::Mac::AddressTable::Static>())
{
    aging_time->parent = this;
    learning->parent = this;
    notification->parent = this;
    static_->parent = this;

    yang_name = "address-table"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::~AddressTable()
{
}

bool Native::Mac::AddressTable::has_data() const
{
    return control_packet_learn.is_set
	|| (aging_time !=  nullptr && aging_time->has_data())
	|| (learning !=  nullptr && learning->has_data())
	|| (notification !=  nullptr && notification->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Mac::AddressTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_packet_learn.yfilter)
	|| (aging_time !=  nullptr && aging_time->has_operation())
	|| (learning !=  nullptr && learning->has_operation())
	|| (notification !=  nullptr && notification->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Mac::AddressTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_packet_learn.is_set || is_set(control_packet_learn.yfilter)) leaf_name_data.push_back(control_packet_learn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging-time")
    {
        if(aging_time == nullptr)
        {
            aging_time = std::make_shared<Native::Mac::AddressTable::AgingTime>();
        }
        return aging_time;
    }

    if(child_yang_name == "learning")
    {
        if(learning == nullptr)
        {
            learning = std::make_shared<Native::Mac::AddressTable::Learning>();
        }
        return learning;
    }

    if(child_yang_name == "notification")
    {
        if(notification == nullptr)
        {
            notification = std::make_shared<Native::Mac::AddressTable::Notification>();
        }
        return notification;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Mac::AddressTable::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(aging_time != nullptr)
    {
        children["aging-time"] = aging_time;
    }

    if(learning != nullptr)
    {
        children["learning"] = learning;
    }

    if(notification != nullptr)
    {
        children["notification"] = notification;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Mac::AddressTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control-packet-learn")
    {
        control_packet_learn = value;
        control_packet_learn.value_namespace = name_space;
        control_packet_learn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-packet-learn")
    {
        control_packet_learn.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging-time" || name == "learning" || name == "notification" || name == "static" || name == "control-packet-learn")
        return true;
    return false;
}

Native::Mac::AddressTable::AgingTime::AgingTime()
    :
    val{YType::uint32, "val"},
    routed_mac{YType::empty, "routed-mac"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "aging-time"; yang_parent_name = "address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::AgingTime::~AgingTime()
{
}

bool Native::Mac::AddressTable::AgingTime::has_data() const
{
    return val.is_set
	|| routed_mac.is_set
	|| vlan.is_set;
}

bool Native::Mac::AddressTable::AgingTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(routed_mac.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Mac::AddressTable::AgingTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::AgingTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::AgingTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (routed_mac.is_set || is_set(routed_mac.yfilter)) leaf_name_data.push_back(routed_mac.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::AgingTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::AgingTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mac::AddressTable::AgingTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routed-mac")
    {
        routed_mac = value;
        routed_mac.value_namespace = name_space;
        routed_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::AgingTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "routed-mac")
    {
        routed_mac.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::AgingTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "routed-mac" || name == "vlan")
        return true;
    return false;
}

Native::Mac::AddressTable::Learning::Learning()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "learning"; yang_parent_name = "address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Learning::~Learning()
{
}

bool Native::Mac::AddressTable::Learning::has_data() const
{
    return vlan.is_set;
}

bool Native::Mac::AddressTable::Learning::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Mac::AddressTable::Learning::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Learning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Learning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Learning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Learning::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mac::AddressTable::Learning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Learning::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Learning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Mac::AddressTable::Notification::Notification()
    :
    mac_move{YType::empty, "mac-move"}
    	,
    change(nullptr) // presence node
	,threshold(nullptr) // presence node
{

    yang_name = "notification"; yang_parent_name = "address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Notification::~Notification()
{
}

bool Native::Mac::AddressTable::Notification::has_data() const
{
    return mac_move.is_set
	|| (change !=  nullptr && change->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Mac::AddressTable::Notification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_move.yfilter)
	|| (change !=  nullptr && change->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Mac::AddressTable::Notification::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_move.is_set || is_set(mac_move.yfilter)) leaf_name_data.push_back(mac_move.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change")
    {
        if(change == nullptr)
        {
            change = std::make_shared<Native::Mac::AddressTable::Notification::Change>();
        }
        return change;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Mac::AddressTable::Notification::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(change != nullptr)
    {
        children["change"] = change;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Mac::AddressTable::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-move")
    {
        mac_move = value;
        mac_move.value_namespace = name_space;
        mac_move.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-move")
    {
        mac_move.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change" || name == "threshold" || name == "mac-move")
        return true;
    return false;
}

Native::Mac::AddressTable::Notification::Change::Change()
    :
    history_size{YType::uint16, "history-size"},
    interval{YType::uint32, "interval"}
{

    yang_name = "change"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Notification::Change::~Change()
{
}

bool Native::Mac::AddressTable::Notification::Change::has_data() const
{
    return history_size.is_set
	|| interval.is_set;
}

bool Native::Mac::AddressTable::Notification::Change::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_size.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Mac::AddressTable::Notification::Change::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Notification::Change::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Notification::Change::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_size.is_set || is_set(history_size.yfilter)) leaf_name_data.push_back(history_size.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Notification::Change::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Notification::Change::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mac::AddressTable::Notification::Change::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history-size")
    {
        history_size = value;
        history_size.value_namespace = name_space;
        history_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Notification::Change::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history-size")
    {
        history_size.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Notification::Change::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history-size" || name == "interval")
        return true;
    return false;
}

Native::Mac::AddressTable::Notification::Threshold::Threshold()
    :
    interval{YType::uint32, "interval"}
    	,
    limit(std::make_shared<Native::Mac::AddressTable::Notification::Threshold::Limit>())
{
    limit->parent = this;

    yang_name = "threshold"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Notification::Threshold::~Threshold()
{
}

bool Native::Mac::AddressTable::Notification::Threshold::has_data() const
{
    return interval.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Mac::AddressTable::Notification::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Mac::AddressTable::Notification::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Notification::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Notification::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Notification::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Mac::AddressTable::Notification::Threshold::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Notification::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Mac::AddressTable::Notification::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Notification::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Notification::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "interval")
        return true;
    return false;
}

Native::Mac::AddressTable::Notification::Threshold::Limit::Limit()
    :
    percentage{YType::uint8, "percentage"},
    interval{YType::uint32, "interval"}
{

    yang_name = "limit"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Notification::Threshold::Limit::~Limit()
{
}

bool Native::Mac::AddressTable::Notification::Threshold::Limit::has_data() const
{
    return percentage.is_set
	|| interval.is_set;
}

bool Native::Mac::AddressTable::Notification::Threshold::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percentage.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Mac::AddressTable::Notification::Threshold::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/notification/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Notification::Threshold::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Notification::Threshold::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percentage.is_set || is_set(percentage.yfilter)) leaf_name_data.push_back(percentage.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Notification::Threshold::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Notification::Threshold::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mac::AddressTable::Notification::Threshold::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percentage")
    {
        percentage = value;
        percentage.value_namespace = name_space;
        percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Notification::Threshold::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percentage")
    {
        percentage.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Notification::Threshold::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percentage" || name == "interval")
        return true;
    return false;
}

Native::Mac::AddressTable::Static::Static()
    :
    mac_address{YType::str, "mac-address"},
    vlan{YType::uint16, "vlan"},
    drop{YType::empty, "drop"},
    interface{YType::str, "interface"}
{

    yang_name = "static"; yang_parent_name = "address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Static::~Static()
{
}

bool Native::Mac::AddressTable::Static::has_data() const
{
    return mac_address.is_set
	|| vlan.is_set
	|| drop.is_set
	|| interface.is_set;
}

bool Native::Mac::AddressTable::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Mac::AddressTable::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mac::AddressTable::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "vlan" || name == "drop" || name == "interface")
        return true;
    return false;
}

Native::Mac::AccessList::AccessList()
{

    yang_name = "access-list"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AccessList::~AccessList()
{
}

bool Native::Mac::AccessList::has_data() const
{
    for (std::size_t index=0; index<extended.size(); index++)
    {
        if(extended[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mac::AccessList::has_operation() const
{
    for (std::size_t index=0; index<extended.size(); index++)
    {
        if(extended[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mac::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended")
    {
        auto c = std::make_shared<Native::Mac::AccessList::Extended>();
        c->parent = this;
        extended.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : extended)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Mac::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mac::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mac::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Extended()
    :
    id{YType::str, "id"}
{

    yang_name = "extended"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AccessList::Extended::~Extended()
{
}

bool Native::Mac::AccessList::Extended::has_data() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return id.is_set;
}

bool Native::Mac::AccessList::Extended::has_operation() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Mac::AccessList::Extended::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/Cisco-IOS-XE-acl:access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AccessList::Extended::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        auto c = std::make_shared<Native::Mac::AccessList::Extended::Entry>();
        c->parent = this;
        entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Mac::AccessList::Extended::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry" || name == "id")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Entry::Entry()
    :
    action{YType::enumeration, "action"},
    values{YType::str, "values"}
{

    yang_name = "entry"; yang_parent_name = "extended"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mac::AccessList::Extended::Entry::~Entry()
{
}

bool Native::Mac::AccessList::Extended::Entry::has_data() const
{
    return action.is_set
	|| values.is_set;
}

bool Native::Mac::AccessList::Extended::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(values.yfilter);
}

std::string Native::Mac::AccessList::Extended::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry" <<"[action='" <<action <<"']" <<"[values='" <<values <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (values.is_set || is_set(values.yfilter)) leaf_name_data.push_back(values.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mac::AccessList::Extended::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "values")
    {
        values = value;
        values.value_namespace = name_space;
        values.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "values")
    {
        values.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "values")
        return true;
    return false;
}

Native::Tacacs::Tacacs()
{

    yang_name = "tacacs"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Tacacs::~Tacacs()
{
}

bool Native::Tacacs::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Tacacs::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Tacacs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Tacacs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-aaa:server")
    {
        auto c = std::make_shared<Native::Tacacs::Server>();
        c->parent = this;
        server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Tacacs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : server)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Tacacs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Tacacs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Tacacs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Tacacs::Server::Server()
    :
    name{YType::str, "name"}
    	,
    address(std::make_shared<Native::Tacacs::Server::Address>())
	,key(std::make_shared<Native::Tacacs::Server::Key>())
{
    address->parent = this;
    key->parent = this;

    yang_name = "server"; yang_parent_name = "tacacs"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Tacacs::Server::~Server()
{
}

bool Native::Tacacs::Server::has_data() const
{
    return name.is_set
	|| (address !=  nullptr && address->has_data())
	|| (key !=  nullptr && key->has_data());
}

bool Native::Tacacs::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Tacacs::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tacacs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Tacacs::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:server" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Tacacs::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Tacacs::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Tacacs::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Tacacs::Server::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Tacacs::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Tacacs::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Tacacs::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Tacacs::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "key" || name == "name")
        return true;
    return false;
}

Native::Tacacs::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Tacacs::Server::Address::~Address()
{
}

bool Native::Tacacs::Server::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Tacacs::Server::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Tacacs::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Tacacs::Server::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Tacacs::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Tacacs::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Tacacs::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Tacacs::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Tacacs::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Tacacs::Server::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Tacacs::Server::Key::~Key()
{
}

bool Native::Tacacs::Server::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Tacacs::Server::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Tacacs::Server::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Tacacs::Server::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Tacacs::Server::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Tacacs::Server::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Tacacs::Server::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Tacacs::Server::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Tacacs::Server::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::TacacsServer::TacacsServer()
    :
    timeout{YType::uint16, "Cisco-IOS-XE-aaa:timeout"}
    	,
    directed_request(nullptr) // presence node
	,key(std::make_shared<Native::TacacsServer::Key>())
{
    key->parent = this;

    yang_name = "tacacs-server"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TacacsServer::~TacacsServer()
{
}

bool Native::TacacsServer::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return timeout.is_set
	|| (directed_request !=  nullptr && directed_request->has_data())
	|| (key !=  nullptr && key->has_data());
}

bool Native::TacacsServer::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (directed_request !=  nullptr && directed_request->has_operation())
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::TacacsServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TacacsServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TacacsServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TacacsServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-aaa:host")
    {
        auto c = std::make_shared<Native::TacacsServer::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:directed-request")
    {
        if(directed_request == nullptr)
        {
            directed_request = std::make_shared<Native::TacacsServer::DirectedRequest>();
        }
        return directed_request;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::TacacsServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TacacsServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : host)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(directed_request != nullptr)
    {
        children["Cisco-IOS-XE-aaa:directed-request"] = directed_request;
    }

    if(key != nullptr)
    {
        children["Cisco-IOS-XE-aaa:key"] = key;
    }

    return children;
}

void Native::TacacsServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-aaa:timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TacacsServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::TacacsServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "directed-request" || name == "key" || name == "timeout")
        return true;
    return false;
}

Native::TacacsServer::Host::Host()
    :
    name{YType::str, "name"},
    port{YType::uint16, "port"},
    key{YType::str, "key"},
    encryption_key{YType::str, "encryption-key"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "host"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TacacsServer::Host::~Host()
{
}

bool Native::TacacsServer::Host::has_data() const
{
    return name.is_set
	|| port.is_set
	|| key.is_set
	|| encryption_key.is_set
	|| timeout.is_set;
}

bool Native::TacacsServer::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption_key.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::TacacsServer::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TacacsServer::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:host" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TacacsServer::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption_key.is_set || is_set(encryption_key.yfilter)) leaf_name_data.push_back(encryption_key.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TacacsServer::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TacacsServer::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::TacacsServer::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-key")
    {
        encryption_key = value;
        encryption_key.value_namespace = name_space;
        encryption_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TacacsServer::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption-key")
    {
        encryption_key.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::TacacsServer::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "port" || name == "key" || name == "encryption-key" || name == "timeout")
        return true;
    return false;
}

Native::TacacsServer::DirectedRequest::DirectedRequest()
    :
    restricted{YType::empty, "restricted"},
    no_truncate{YType::empty, "no-truncate"}
{

    yang_name = "directed-request"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TacacsServer::DirectedRequest::~DirectedRequest()
{
}

bool Native::TacacsServer::DirectedRequest::has_data() const
{
    return restricted.is_set
	|| no_truncate.is_set;
}

bool Native::TacacsServer::DirectedRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restricted.yfilter)
	|| ydk::is_set(no_truncate.yfilter);
}

std::string Native::TacacsServer::DirectedRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TacacsServer::DirectedRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:directed-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TacacsServer::DirectedRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restricted.is_set || is_set(restricted.yfilter)) leaf_name_data.push_back(restricted.get_name_leafdata());
    if (no_truncate.is_set || is_set(no_truncate.yfilter)) leaf_name_data.push_back(no_truncate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TacacsServer::DirectedRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TacacsServer::DirectedRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::TacacsServer::DirectedRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restricted")
    {
        restricted = value;
        restricted.value_namespace = name_space;
        restricted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-truncate")
    {
        no_truncate = value;
        no_truncate.value_namespace = name_space;
        no_truncate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TacacsServer::DirectedRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restricted")
    {
        restricted.yfilter = yfilter;
    }
    if(value_path == "no-truncate")
    {
        no_truncate.yfilter = yfilter;
    }
}

bool Native::TacacsServer::DirectedRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restricted" || name == "no-truncate")
        return true;
    return false;
}

Native::TacacsServer::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key"; yang_parent_name = "tacacs-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TacacsServer::Key::~Key()
{
}

bool Native::TacacsServer::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::TacacsServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::TacacsServer::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tacacs-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TacacsServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TacacsServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TacacsServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TacacsServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::TacacsServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TacacsServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::TacacsServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Software::Software()
    :
    auto_upgrade(std::make_shared<Native::Software::AutoUpgrade>())
{
    auto_upgrade->parent = this;

    yang_name = "software"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Software::~Software()
{
}

bool Native::Software::has_data() const
{
    return (auto_upgrade !=  nullptr && auto_upgrade->has_data());
}

bool Native::Software::has_operation() const
{
    return is_set(yfilter)
	|| (auto_upgrade !=  nullptr && auto_upgrade->has_operation());
}

std::string Native::Software::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Software::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "software";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Software::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Software::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-upgrade")
    {
        if(auto_upgrade == nullptr)
        {
            auto_upgrade = std::make_shared<Native::Software::AutoUpgrade>();
        }
        return auto_upgrade;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Software::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_upgrade != nullptr)
    {
        children["auto-upgrade"] = auto_upgrade;
    }

    return children;
}

void Native::Software::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Software::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Software::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-upgrade")
        return true;
    return false;
}

Native::Software::AutoUpgrade::AutoUpgrade()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "auto-upgrade"; yang_parent_name = "software"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Software::AutoUpgrade::~AutoUpgrade()
{
}

bool Native::Software::AutoUpgrade::has_data() const
{
    return enable.is_set;
}

bool Native::Software::AutoUpgrade::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Software::AutoUpgrade::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/software/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Software::AutoUpgrade::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-upgrade";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Software::AutoUpgrade::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Software::AutoUpgrade::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Software::AutoUpgrade::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Software::AutoUpgrade::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Software::AutoUpgrade::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Software::AutoUpgrade::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Upgrade::Upgrade()
    :
    fpd(std::make_shared<Native::Upgrade::Fpd>())
{
    fpd->parent = this;

    yang_name = "upgrade"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Upgrade::~Upgrade()
{
}

bool Native::Upgrade::has_data() const
{
    return (fpd !=  nullptr && fpd->has_data());
}

bool Native::Upgrade::has_operation() const
{
    return is_set(yfilter)
	|| (fpd !=  nullptr && fpd->has_operation());
}

std::string Native::Upgrade::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Upgrade::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upgrade";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Upgrade::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Upgrade::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd")
    {
        if(fpd == nullptr)
        {
            fpd = std::make_shared<Native::Upgrade::Fpd>();
        }
        return fpd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Upgrade::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fpd != nullptr)
    {
        children["fpd"] = fpd;
    }

    return children;
}

void Native::Upgrade::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Upgrade::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Upgrade::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd")
        return true;
    return false;
}

Native::Upgrade::Fpd::Fpd()
    :
    auto_{YType::empty, "auto"},
    path{YType::str, "path"}
{

    yang_name = "fpd"; yang_parent_name = "upgrade"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Upgrade::Fpd::~Fpd()
{
}

bool Native::Upgrade::Fpd::has_data() const
{
    return auto_.is_set
	|| path.is_set;
}

bool Native::Upgrade::Fpd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| ydk::is_set(path.yfilter);
}

std::string Native::Upgrade::Fpd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/upgrade/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Upgrade::Fpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Upgrade::Fpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Upgrade::Fpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Upgrade::Fpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Upgrade::Fpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Upgrade::Fpd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool Native::Upgrade::Fpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "path")
        return true;
    return false;
}

Native::Vtp::Vtp()
    :
    file{YType::str, "Cisco-IOS-XE-vtp:file"},
    pruning{YType::empty, "Cisco-IOS-XE-vtp:pruning"},
    version{YType::uint8, "Cisco-IOS-XE-vtp:version"},
    domain{YType::str, "Cisco-IOS-XE-vtp:domain"}
    	,
    interface(std::make_shared<Native::Vtp::Interface>())
	,password(std::make_shared<Native::Vtp::Password>())
	,mode(std::make_shared<Native::Vtp::Mode>())
{
    interface->parent = this;
    password->parent = this;
    mode->parent = this;

    yang_name = "vtp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vtp::~Vtp()
{
}

bool Native::Vtp::has_data() const
{
    return file.is_set
	|| pruning.is_set
	|| version.is_set
	|| domain.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Vtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(pruning.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Vtp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (pruning.is_set || is_set(pruning.yfilter)) leaf_name_data.push_back(pruning.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-vtp:interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Vtp::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "Cisco-IOS-XE-vtp:password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Vtp::Password>();
        }
        return password;
    }

    if(child_yang_name == "Cisco-IOS-XE-vtp:mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Vtp::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface != nullptr)
    {
        children["Cisco-IOS-XE-vtp:interface"] = interface;
    }

    if(password != nullptr)
    {
        children["Cisco-IOS-XE-vtp:password"] = password;
    }

    if(mode != nullptr)
    {
        children["Cisco-IOS-XE-vtp:mode"] = mode;
    }

    return children;
}

void Native::Vtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-vtp:file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-vtp:pruning")
    {
        pruning = value;
        pruning.value_namespace = name_space;
        pruning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-vtp:version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-vtp:domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "pruning")
    {
        pruning.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Vtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "password" || name == "mode" || name == "file" || name == "pruning" || name == "version" || name == "domain")
        return true;
    return false;
}

Native::Vtp::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    only{YType::empty, "only"}
{

    yang_name = "interface"; yang_parent_name = "vtp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vtp::Interface::~Interface()
{
}

bool Native::Vtp::Interface::has_data() const
{
    return interface_name.is_set
	|| only.is_set;
}

bool Native::Vtp::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(only.yfilter);
}

std::string Native::Vtp::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vtp:interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (only.is_set || is_set(only.yfilter)) leaf_name_data.push_back(only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vtp::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vtp::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only")
    {
        only = value;
        only.value_namespace = name_space;
        only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "only")
    {
        only.yfilter = yfilter;
    }
}

bool Native::Vtp::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "only")
        return true;
    return false;
}

Native::Vtp::Password::Password()
    :
    password{YType::str, "password"},
    hidden{YType::empty, "hidden"},
    secret{YType::empty, "secret"}
{

    yang_name = "password"; yang_parent_name = "vtp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vtp::Password::~Password()
{
}

bool Native::Vtp::Password::has_data() const
{
    return password.is_set
	|| hidden.is_set
	|| secret.is_set;
}

bool Native::Vtp::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(hidden.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Vtp::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vtp:password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (hidden.is_set || is_set(hidden.yfilter)) leaf_name_data.push_back(hidden.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vtp::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vtp::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hidden")
    {
        hidden = value;
        hidden.value_namespace = name_space;
        hidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "hidden")
    {
        hidden.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Vtp::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "hidden" || name == "secret")
        return true;
    return false;
}

Native::Vtp::Mode::Mode()
    :
    client(nullptr) // presence node
	,off(nullptr) // presence node
	,server(nullptr) // presence node
	,transparent(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "vtp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vtp::Mode::~Mode()
{
}

bool Native::Vtp::Mode::has_data() const
{
    return (client !=  nullptr && client->has_data())
	|| (off !=  nullptr && off->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (transparent !=  nullptr && transparent->has_data());
}

bool Native::Vtp::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (off !=  nullptr && off->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (transparent !=  nullptr && transparent->has_operation());
}

std::string Native::Vtp::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vtp:mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vtp::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Vtp::Mode::Client>();
        }
        return client;
    }

    if(child_yang_name == "off")
    {
        if(off == nullptr)
        {
            off = std::make_shared<Native::Vtp::Mode::Off>();
        }
        return off;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Vtp::Mode::Server>();
        }
        return server;
    }

    if(child_yang_name == "transparent")
    {
        if(transparent == nullptr)
        {
            transparent = std::make_shared<Native::Vtp::Mode::Transparent>();
        }
        return transparent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(off != nullptr)
    {
        children["off"] = off;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(transparent != nullptr)
    {
        children["transparent"] = transparent;
    }

    return children;
}

void Native::Vtp::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vtp::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vtp::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "off" || name == "server" || name == "transparent")
        return true;
    return false;
}

Native::Vtp::Mode::Client::Client()
    :
    mst{YType::empty, "mst"},
    unknown{YType::empty, "unknown"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "client"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vtp::Mode::Client::~Client()
{
}

bool Native::Vtp::Mode::Client::has_data() const
{
    return mst.is_set
	|| unknown.is_set
	|| vlan.is_set;
}

bool Native::Vtp::Mode::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Vtp::Mode::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/Cisco-IOS-XE-vtp:mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Mode::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Mode::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst.is_set || is_set(mst.yfilter)) leaf_name_data.push_back(mst.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vtp::Mode::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Mode::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vtp::Mode::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst")
    {
        mst = value;
        mst.value_namespace = name_space;
        mst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Mode::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst")
    {
        mst.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Vtp::Mode::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst" || name == "unknown" || name == "vlan")
        return true;
    return false;
}

Native::Vtp::Mode::Off::Off()
    :
    mst{YType::empty, "mst"},
    unknown{YType::empty, "unknown"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "off"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vtp::Mode::Off::~Off()
{
}

bool Native::Vtp::Mode::Off::has_data() const
{
    return mst.is_set
	|| unknown.is_set
	|| vlan.is_set;
}

bool Native::Vtp::Mode::Off::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Vtp::Mode::Off::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/Cisco-IOS-XE-vtp:mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Mode::Off::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "off";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Mode::Off::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst.is_set || is_set(mst.yfilter)) leaf_name_data.push_back(mst.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vtp::Mode::Off::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Mode::Off::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vtp::Mode::Off::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst")
    {
        mst = value;
        mst.value_namespace = name_space;
        mst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Mode::Off::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst")
    {
        mst.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Vtp::Mode::Off::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst" || name == "unknown" || name == "vlan")
        return true;
    return false;
}

Native::Vtp::Mode::Server::Server()
    :
    mst{YType::empty, "mst"},
    unknown{YType::empty, "unknown"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "server"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vtp::Mode::Server::~Server()
{
}

bool Native::Vtp::Mode::Server::has_data() const
{
    return mst.is_set
	|| unknown.is_set
	|| vlan.is_set;
}

bool Native::Vtp::Mode::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Vtp::Mode::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/Cisco-IOS-XE-vtp:mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Mode::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Mode::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst.is_set || is_set(mst.yfilter)) leaf_name_data.push_back(mst.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vtp::Mode::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Mode::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vtp::Mode::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst")
    {
        mst = value;
        mst.value_namespace = name_space;
        mst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Mode::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst")
    {
        mst.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Vtp::Mode::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst" || name == "unknown" || name == "vlan")
        return true;
    return false;
}

Native::Vtp::Mode::Transparent::Transparent()
    :
    mst{YType::empty, "mst"},
    unknown{YType::empty, "unknown"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "transparent"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vtp::Mode::Transparent::~Transparent()
{
}

bool Native::Vtp::Mode::Transparent::has_data() const
{
    return mst.is_set
	|| unknown.is_set
	|| vlan.is_set;
}

bool Native::Vtp::Mode::Transparent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Vtp::Mode::Transparent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vtp/Cisco-IOS-XE-vtp:mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vtp::Mode::Transparent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transparent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vtp::Mode::Transparent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst.is_set || is_set(mst.yfilter)) leaf_name_data.push_back(mst.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vtp::Mode::Transparent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Mode::Transparent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vtp::Mode::Transparent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst")
    {
        mst = value;
        mst.value_namespace = name_space;
        mst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Mode::Transparent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst")
    {
        mst.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Vtp::Mode::Transparent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst" || name == "unknown" || name == "vlan")
        return true;
    return false;
}

Native::Xconnect::Xconnect()
    :
    logging(std::make_shared<Native::Xconnect::Logging>())
{
    logging->parent = this;

    yang_name = "xconnect"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Xconnect::~Xconnect()
{
}

bool Native::Xconnect::has_data() const
{
    return (logging !=  nullptr && logging->has_data());
}

bool Native::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::Xconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-l2vpn:logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Xconnect::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(logging != nullptr)
    {
        children["Cisco-IOS-XE-l2vpn:logging"] = logging;
    }

    return children;
}

void Native::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

Native::Xconnect::Logging::Logging()
    :
    redundancy{YType::empty, "redundancy"}
    	,
    pseudowire(std::make_shared<Native::Xconnect::Logging::Pseudowire>())
{
    pseudowire->parent = this;

    yang_name = "logging"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Xconnect::Logging::~Logging()
{
}

bool Native::Xconnect::Logging::has_data() const
{
    return redundancy.is_set
	|| (pseudowire !=  nullptr && pseudowire->has_data());
}

bool Native::Xconnect::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| (pseudowire !=  nullptr && pseudowire->has_operation());
}

std::string Native::Xconnect::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/xconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Xconnect::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Xconnect::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Xconnect::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Native::Xconnect::Logging::Pseudowire>();
        }
        return pseudowire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Xconnect::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pseudowire != nullptr)
    {
        children["pseudowire"] = pseudowire;
    }

    return children;
}

void Native::Xconnect::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Xconnect::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
}

bool Native::Xconnect::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire" || name == "redundancy")
        return true;
    return false;
}

Native::Xconnect::Logging::Pseudowire::Pseudowire()
    :
    status{YType::empty, "status"}
{

    yang_name = "pseudowire"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Xconnect::Logging::Pseudowire::~Pseudowire()
{
}

bool Native::Xconnect::Logging::Pseudowire::has_data() const
{
    return status.is_set;
}

bool Native::Xconnect::Logging::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::Xconnect::Logging::Pseudowire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/xconnect/Cisco-IOS-XE-l2vpn:logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Xconnect::Logging::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Xconnect::Logging::Pseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Xconnect::Logging::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Xconnect::Logging::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Xconnect::Logging::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Xconnect::Logging::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::Xconnect::Logging::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::Fabric::Fabric()
    :
    switching_mode(std::make_shared<Native::Fabric::SwitchingMode>())
{
    switching_mode->parent = this;

    yang_name = "fabric"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fabric::~Fabric()
{
}

bool Native::Fabric::has_data() const
{
    return (switching_mode !=  nullptr && switching_mode->has_data());
}

bool Native::Fabric::has_operation() const
{
    return is_set(yfilter)
	|| (switching_mode !=  nullptr && switching_mode->has_operation());
}

std::string Native::Fabric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switching-mode")
    {
        if(switching_mode == nullptr)
        {
            switching_mode = std::make_shared<Native::Fabric::SwitchingMode>();
        }
        return switching_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fabric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(switching_mode != nullptr)
    {
        children["switching-mode"] = switching_mode;
    }

    return children;
}

void Native::Fabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switching-mode")
        return true;
    return false;
}

Native::Fabric::SwitchingMode::SwitchingMode()
    :
    allow(std::make_shared<Native::Fabric::SwitchingMode::Allow>())
	,force(std::make_shared<Native::Fabric::SwitchingMode::Force>())
{
    allow->parent = this;
    force->parent = this;

    yang_name = "switching-mode"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fabric::SwitchingMode::~SwitchingMode()
{
}

bool Native::Fabric::SwitchingMode::has_data() const
{
    return (allow !=  nullptr && allow->has_data())
	|| (force !=  nullptr && force->has_data());
}

bool Native::Fabric::SwitchingMode::has_operation() const
{
    return is_set(yfilter)
	|| (allow !=  nullptr && allow->has_operation())
	|| (force !=  nullptr && force->has_operation());
}

std::string Native::Fabric::SwitchingMode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fabric::SwitchingMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switching-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fabric::SwitchingMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fabric::SwitchingMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::Fabric::SwitchingMode::Allow>();
        }
        return allow;
    }

    if(child_yang_name == "force")
    {
        if(force == nullptr)
        {
            force = std::make_shared<Native::Fabric::SwitchingMode::Force>();
        }
        return force;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fabric::SwitchingMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(allow != nullptr)
    {
        children["allow"] = allow;
    }

    if(force != nullptr)
    {
        children["force"] = force;
    }

    return children;
}

void Native::Fabric::SwitchingMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fabric::SwitchingMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fabric::SwitchingMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "force")
        return true;
    return false;
}

Native::Fabric::SwitchingMode::Allow::Allow()
    :
    bus_mode{YType::empty, "bus-mode"}
    	,
    truncated(nullptr) // presence node
{

    yang_name = "allow"; yang_parent_name = "switching-mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fabric::SwitchingMode::Allow::~Allow()
{
}

bool Native::Fabric::SwitchingMode::Allow::has_data() const
{
    return bus_mode.is_set
	|| (truncated !=  nullptr && truncated->has_data());
}

bool Native::Fabric::SwitchingMode::Allow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bus_mode.yfilter)
	|| (truncated !=  nullptr && truncated->has_operation());
}

std::string Native::Fabric::SwitchingMode::Allow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fabric/switching-mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fabric::SwitchingMode::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fabric::SwitchingMode::Allow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bus_mode.is_set || is_set(bus_mode.yfilter)) leaf_name_data.push_back(bus_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fabric::SwitchingMode::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "truncated")
    {
        if(truncated == nullptr)
        {
            truncated = std::make_shared<Native::Fabric::SwitchingMode::Allow::Truncated>();
        }
        return truncated;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fabric::SwitchingMode::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(truncated != nullptr)
    {
        children["truncated"] = truncated;
    }

    return children;
}

void Native::Fabric::SwitchingMode::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bus-mode")
    {
        bus_mode = value;
        bus_mode.value_namespace = name_space;
        bus_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fabric::SwitchingMode::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bus-mode")
    {
        bus_mode.yfilter = yfilter;
    }
}

bool Native::Fabric::SwitchingMode::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "truncated" || name == "bus-mode")
        return true;
    return false;
}

Native::Fabric::SwitchingMode::Allow::Truncated::Truncated()
    :
    threshold{YType::uint8, "threshold"}
{

    yang_name = "truncated"; yang_parent_name = "allow"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fabric::SwitchingMode::Allow::Truncated::~Truncated()
{
}

bool Native::Fabric::SwitchingMode::Allow::Truncated::has_data() const
{
    return threshold.is_set;
}

bool Native::Fabric::SwitchingMode::Allow::Truncated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Fabric::SwitchingMode::Allow::Truncated::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fabric/switching-mode/allow/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fabric::SwitchingMode::Allow::Truncated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "truncated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fabric::SwitchingMode::Allow::Truncated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fabric::SwitchingMode::Allow::Truncated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fabric::SwitchingMode::Allow::Truncated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Fabric::SwitchingMode::Allow::Truncated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fabric::SwitchingMode::Allow::Truncated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Fabric::SwitchingMode::Allow::Truncated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Fabric::SwitchingMode::Force::Force()
    :
    bus_mode{YType::empty, "bus-mode"}
{

    yang_name = "force"; yang_parent_name = "switching-mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fabric::SwitchingMode::Force::~Force()
{
}

bool Native::Fabric::SwitchingMode::Force::has_data() const
{
    return bus_mode.is_set;
}

bool Native::Fabric::SwitchingMode::Force::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bus_mode.yfilter);
}

std::string Native::Fabric::SwitchingMode::Force::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fabric/switching-mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fabric::SwitchingMode::Force::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "force";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fabric::SwitchingMode::Force::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bus_mode.is_set || is_set(bus_mode.yfilter)) leaf_name_data.push_back(bus_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fabric::SwitchingMode::Force::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fabric::SwitchingMode::Force::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Fabric::SwitchingMode::Force::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bus-mode")
    {
        bus_mode = value;
        bus_mode.value_namespace = name_space;
        bus_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fabric::SwitchingMode::Force::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bus-mode")
    {
        bus_mode.yfilter = yfilter;
    }
}

bool Native::Fabric::SwitchingMode::Force::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bus-mode")
        return true;
    return false;
}

Native::PortChannel::PortChannel()
    :
    auto_{YType::empty, "Cisco-IOS-XE-ethernet:auto"}
    	,
    load_balance(std::make_shared<Native::PortChannel::LoadBalance>())
	,load_balancing(std::make_shared<Native::PortChannel::LoadBalancing>())
{
    load_balance->parent = this;
    load_balancing->parent = this;

    yang_name = "port-channel"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PortChannel::~PortChannel()
{
}

bool Native::PortChannel::has_data() const
{
    return auto_.is_set
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (load_balancing !=  nullptr && load_balancing->has_data());
}

bool Native::PortChannel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (load_balancing !=  nullptr && load_balancing->has_operation());
}

std::string Native::PortChannel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PortChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-channel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PortChannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PortChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-ethernet:load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Native::PortChannel::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:load-balancing")
    {
        if(load_balancing == nullptr)
        {
            load_balancing = std::make_shared<Native::PortChannel::LoadBalancing>();
        }
        return load_balancing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PortChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(load_balance != nullptr)
    {
        children["Cisco-IOS-XE-ethernet:load-balance"] = load_balance;
    }

    if(load_balancing != nullptr)
    {
        children["Cisco-IOS-XE-ethernet:load-balancing"] = load_balancing;
    }

    return children;
}

void Native::PortChannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-ethernet:auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PortChannel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::PortChannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance" || name == "load-balancing" || name == "auto")
        return true;
    return false;
}

Native::PortChannel::LoadBalance::LoadBalance()
    :
    load_balance{YType::enumeration, "load-balance"}
    	,
    extended(nullptr) // presence node
{

    yang_name = "load-balance"; yang_parent_name = "port-channel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PortChannel::LoadBalance::~LoadBalance()
{
}

bool Native::PortChannel::LoadBalance::has_data() const
{
    return load_balance.is_set
	|| (extended !=  nullptr && extended->has_data());
}

bool Native::PortChannel::LoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_balance.yfilter)
	|| (extended !=  nullptr && extended->has_operation());
}

std::string Native::PortChannel::LoadBalance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/port-channel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PortChannel::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PortChannel::LoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_balance.is_set || is_set(load_balance.yfilter)) leaf_name_data.push_back(load_balance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PortChannel::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended")
    {
        if(extended == nullptr)
        {
            extended = std::make_shared<Native::PortChannel::LoadBalance::Extended>();
        }
        return extended;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PortChannel::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(extended != nullptr)
    {
        children["extended"] = extended;
    }

    return children;
}

void Native::PortChannel::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-balance")
    {
        load_balance = value;
        load_balance.value_namespace = name_space;
        load_balance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PortChannel::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-balance")
    {
        load_balance.yfilter = yfilter;
    }
}

bool Native::PortChannel::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended" || name == "load-balance")
        return true;
    return false;
}

Native::PortChannel::LoadBalance::Extended::Extended()
    :
    extended{YType::enumeration, "extended"}
{

    yang_name = "extended"; yang_parent_name = "load-balance"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PortChannel::LoadBalance::Extended::~Extended()
{
}

bool Native::PortChannel::LoadBalance::Extended::has_data() const
{
    for (auto const & leaf : extended.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::PortChannel::LoadBalance::Extended::has_operation() const
{
    for (auto const & leaf : extended.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter);
}

std::string Native::PortChannel::LoadBalance::Extended::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/port-channel/Cisco-IOS-XE-ethernet:load-balance/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PortChannel::LoadBalance::Extended::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PortChannel::LoadBalance::Extended::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto extended_name_datas = extended.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_name_datas.begin(), extended_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PortChannel::LoadBalance::Extended::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PortChannel::LoadBalance::Extended::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::PortChannel::LoadBalance::Extended::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended.append(value);
    }
}

void Native::PortChannel::LoadBalance::Extended::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
}

bool Native::PortChannel::LoadBalance::Extended::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended")
        return true;
    return false;
}

Native::PortChannel::LoadBalancing::LoadBalancing()
    :
    vlan_manual{YType::empty, "vlan-manual"}
{

    yang_name = "load-balancing"; yang_parent_name = "port-channel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PortChannel::LoadBalancing::~LoadBalancing()
{
}

bool Native::PortChannel::LoadBalancing::has_data() const
{
    return vlan_manual.is_set;
}

bool Native::PortChannel::LoadBalancing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_manual.yfilter);
}

std::string Native::PortChannel::LoadBalancing::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/port-channel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PortChannel::LoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:load-balancing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PortChannel::LoadBalancing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_manual.is_set || is_set(vlan_manual.yfilter)) leaf_name_data.push_back(vlan_manual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PortChannel::LoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PortChannel::LoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::PortChannel::LoadBalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-manual")
    {
        vlan_manual = value;
        vlan_manual.value_namespace = name_space;
        vlan_manual.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PortChannel::LoadBalancing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-manual")
    {
        vlan_manual.yfilter = yfilter;
    }
}

bool Native::PortChannel::LoadBalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-manual")
        return true;
    return false;
}

Native::Key::Key()
{

    yang_name = "key"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Key::~Key()
{
}

bool Native::Key::has_data() const
{
    for (std::size_t index=0; index<chain.size(); index++)
    {
        if(chain[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Key::has_operation() const
{
    for (std::size_t index=0; index<chain.size(); index++)
    {
        if(chain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-crypto:chain")
    {
        auto c = std::make_shared<Native::Key::Chain>();
        c->parent = this;
        chain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : chain)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chain")
        return true;
    return false;
}

Native::Key::Chain::Chain()
    :
    name{YType::str, "name"},
    macsec{YType::empty, "macsec"}
{

    yang_name = "chain"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Key::Chain::~Chain()
{
}

bool Native::Key::Chain::has_data() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_data())
            return true;
    }
    return name.is_set
	|| macsec.is_set;
}

bool Native::Key::Chain::has_operation() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(macsec.yfilter);
}

std::string Native::Key::Chain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Key::Chain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:chain" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (macsec.is_set || is_set(macsec.yfilter)) leaf_name_data.push_back(macsec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Key::Chain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        auto c = std::make_shared<Native::Key::Chain::Key_>();
        c->parent = this;
        key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::Chain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : key)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Key::Chain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsec")
    {
        macsec = value;
        macsec.value_namespace = name_space;
        macsec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Key::Chain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "macsec")
    {
        macsec.yfilter = yfilter;
    }
}

bool Native::Key::Chain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "name" || name == "macsec")
        return true;
    return false;
}

Native::Key::Chain::Key_::Key_()
    :
    id{YType::str, "id"},
    cryptographic_algorithm{YType::enumeration, "cryptographic-algorithm"}
    	,
    key_string(std::make_shared<Native::Key::Chain::Key_::KeyString>())
	,lifetime(std::make_shared<Native::Key::Chain::Key_::Lifetime>())
	,lifetime_local(std::make_shared<Native::Key::Chain::Key_::LifetimeLocal>())
{
    key_string->parent = this;
    lifetime->parent = this;
    lifetime_local->parent = this;

    yang_name = "key"; yang_parent_name = "chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Key::Chain::Key_::~Key_()
{
}

bool Native::Key::Chain::Key_::has_data() const
{
    return id.is_set
	|| cryptographic_algorithm.is_set
	|| (key_string !=  nullptr && key_string->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (lifetime_local !=  nullptr && lifetime_local->has_data());
}

bool Native::Key::Chain::Key_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cryptographic_algorithm.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (lifetime_local !=  nullptr && lifetime_local->has_operation());
}

std::string Native::Key::Chain::Key_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::Key_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cryptographic_algorithm.is_set || is_set(cryptographic_algorithm.yfilter)) leaf_name_data.push_back(cryptographic_algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Key::Chain::Key_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Key::Chain::Key_::KeyString>();
        }
        return key_string;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Key::Chain::Key_::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "lifetime-local")
    {
        if(lifetime_local == nullptr)
        {
            lifetime_local = std::make_shared<Native::Key::Chain::Key_::LifetimeLocal>();
        }
        return lifetime_local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::Chain::Key_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(lifetime_local != nullptr)
    {
        children["lifetime-local"] = lifetime_local;
    }

    return children;
}

void Native::Key::Chain::Key_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm = value;
        cryptographic_algorithm.value_namespace = name_space;
        cryptographic_algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Key::Chain::Key_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm.yfilter = yfilter;
    }
}

bool Native::Key::Chain::Key_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "lifetime" || name == "lifetime-local" || name == "id" || name == "cryptographic-algorithm")
        return true;
    return false;
}

Native::Key::Chain::Key_::KeyString::KeyString()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{

    yang_name = "key-string"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Key::Chain::Key_::KeyString::~KeyString()
{
}

bool Native::Key::Chain::Key_::KeyString::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Key::Chain::Key_::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Key::Chain::Key_::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::Key_::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Key::Chain::Key_::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::Chain::Key_::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Key::Chain::Key_::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Key::Chain::Key_::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Key::Chain::Key_::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Key::Chain::Key_::Lifetime::Lifetime()
    :
    lifetime_group(std::make_shared<Native::Key::Chain::Key_::Lifetime::LifetimeGroup>())
{
    lifetime_group->parent = this;

    yang_name = "lifetime"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Key::Chain::Key_::Lifetime::~Lifetime()
{
}

bool Native::Key::Chain::Key_::Lifetime::has_data() const
{
    return (lifetime_group !=  nullptr && lifetime_group->has_data());
}

bool Native::Key::Chain::Key_::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| (lifetime_group !=  nullptr && lifetime_group->has_operation());
}

std::string Native::Key::Chain::Key_::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::Key_::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Key::Chain::Key_::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime-group")
    {
        if(lifetime_group == nullptr)
        {
            lifetime_group = std::make_shared<Native::Key::Chain::Key_::Lifetime::LifetimeGroup>();
        }
        return lifetime_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::Chain::Key_::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lifetime_group != nullptr)
    {
        children["lifetime-group"] = lifetime_group;
    }

    return children;
}

void Native::Key::Chain::Key_::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Key::Chain::Key_::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Key::Chain::Key_::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime-group")
        return true;
    return false;
}

Native::Key::Chain::Key_::Lifetime::LifetimeGroup::LifetimeGroup()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"},
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    duration{YType::uint32, "duration"},
    hh_mm_ss1{YType::str, "hh-mm-ss1"},
    date3{YType::uint8, "date3"},
    month3{YType::str, "month3"},
    date4{YType::uint8, "date4"},
    month4{YType::str, "month4"},
    year1{YType::uint16, "year1"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "lifetime-group"; yang_parent_name = "lifetime"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Key::Chain::Key_::Lifetime::LifetimeGroup::~LifetimeGroup()
{
}

bool Native::Key::Chain::Key_::Lifetime::LifetimeGroup::has_data() const
{
    return hh_mm_ss.is_set
	|| date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| duration.is_set
	|| hh_mm_ss1.is_set
	|| date3.is_set
	|| month3.is_set
	|| date4.is_set
	|| month4.is_set
	|| year1.is_set
	|| infinite.is_set;
}

bool Native::Key::Chain::Key_::Lifetime::LifetimeGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(hh_mm_ss1.yfilter)
	|| ydk::is_set(date3.yfilter)
	|| ydk::is_set(month3.yfilter)
	|| ydk::is_set(date4.yfilter)
	|| ydk::is_set(month4.yfilter)
	|| ydk::is_set(year1.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string Native::Key::Chain::Key_::Lifetime::LifetimeGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::Key_::Lifetime::LifetimeGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());
    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (hh_mm_ss1.is_set || is_set(hh_mm_ss1.yfilter)) leaf_name_data.push_back(hh_mm_ss1.get_name_leafdata());
    if (date3.is_set || is_set(date3.yfilter)) leaf_name_data.push_back(date3.get_name_leafdata());
    if (month3.is_set || is_set(month3.yfilter)) leaf_name_data.push_back(month3.get_name_leafdata());
    if (date4.is_set || is_set(date4.yfilter)) leaf_name_data.push_back(date4.get_name_leafdata());
    if (month4.is_set || is_set(month4.yfilter)) leaf_name_data.push_back(month4.get_name_leafdata());
    if (year1.is_set || is_set(year1.yfilter)) leaf_name_data.push_back(year1.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Key::Chain::Key_::Lifetime::LifetimeGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::Chain::Key_::Lifetime::LifetimeGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Key::Chain::Key_::Lifetime::LifetimeGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm-ss1")
    {
        hh_mm_ss1 = value;
        hh_mm_ss1.value_namespace = name_space;
        hh_mm_ss1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date3")
    {
        date3 = value;
        date3.value_namespace = name_space;
        date3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month3")
    {
        month3 = value;
        month3.value_namespace = name_space;
        month3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date4")
    {
        date4 = value;
        date4.value_namespace = name_space;
        date4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month4")
    {
        month4 = value;
        month4.value_namespace = name_space;
        month4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year1")
    {
        year1 = value;
        year1.value_namespace = name_space;
        year1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Key::Chain::Key_::Lifetime::LifetimeGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "hh-mm-ss1")
    {
        hh_mm_ss1.yfilter = yfilter;
    }
    if(value_path == "date3")
    {
        date3.yfilter = yfilter;
    }
    if(value_path == "month3")
    {
        month3.yfilter = yfilter;
    }
    if(value_path == "date4")
    {
        date4.yfilter = yfilter;
    }
    if(value_path == "month4")
    {
        month4.yfilter = yfilter;
    }
    if(value_path == "year1")
    {
        year1.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Native::Key::Chain::Key_::Lifetime::LifetimeGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss" || name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "duration" || name == "hh-mm-ss1" || name == "date3" || name == "month3" || name == "date4" || name == "month4" || name == "year1" || name == "infinite")
        return true;
    return false;
}

Native::Key::Chain::Key_::LifetimeLocal::LifetimeLocal()
    :
    local(std::make_shared<Native::Key::Chain::Key_::LifetimeLocal::Local>())
{
    local->parent = this;

    yang_name = "lifetime-local"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Key::Chain::Key_::LifetimeLocal::~LifetimeLocal()
{
}

bool Native::Key::Chain::Key_::LifetimeLocal::has_data() const
{
    return (local !=  nullptr && local->has_data());
}

bool Native::Key::Chain::Key_::LifetimeLocal::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Key::Chain::Key_::LifetimeLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::Key_::LifetimeLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Key::Chain::Key_::LifetimeLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Key::Chain::Key_::LifetimeLocal::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::Chain::Key_::LifetimeLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void Native::Key::Chain::Key_::LifetimeLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Key::Chain::Key_::LifetimeLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Key::Chain::Key_::LifetimeLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::Key::Chain::Key_::LifetimeLocal::Local::Local()
    :
    lifetime_group(std::make_shared<Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup>())
{
    lifetime_group->parent = this;

    yang_name = "local"; yang_parent_name = "lifetime-local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Key::Chain::Key_::LifetimeLocal::Local::~Local()
{
}

bool Native::Key::Chain::Key_::LifetimeLocal::Local::has_data() const
{
    return (lifetime_group !=  nullptr && lifetime_group->has_data());
}

bool Native::Key::Chain::Key_::LifetimeLocal::Local::has_operation() const
{
    return is_set(yfilter)
	|| (lifetime_group !=  nullptr && lifetime_group->has_operation());
}

std::string Native::Key::Chain::Key_::LifetimeLocal::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::Key_::LifetimeLocal::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Key::Chain::Key_::LifetimeLocal::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime-group")
    {
        if(lifetime_group == nullptr)
        {
            lifetime_group = std::make_shared<Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup>();
        }
        return lifetime_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::Chain::Key_::LifetimeLocal::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lifetime_group != nullptr)
    {
        children["lifetime-group"] = lifetime_group;
    }

    return children;
}

void Native::Key::Chain::Key_::LifetimeLocal::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Key::Chain::Key_::LifetimeLocal::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Key::Chain::Key_::LifetimeLocal::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime-group")
        return true;
    return false;
}

Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::LifetimeGroup()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"},
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    duration{YType::uint32, "duration"},
    hh_mm_ss1{YType::str, "hh-mm-ss1"},
    date3{YType::uint8, "date3"},
    month3{YType::str, "month3"},
    date4{YType::uint8, "date4"},
    month4{YType::str, "month4"},
    year1{YType::uint16, "year1"},
    infinite{YType::empty, "infinite"}
{

    yang_name = "lifetime-group"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::~LifetimeGroup()
{
}

bool Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::has_data() const
{
    return hh_mm_ss.is_set
	|| date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| duration.is_set
	|| hh_mm_ss1.is_set
	|| date3.is_set
	|| month3.is_set
	|| date4.is_set
	|| month4.is_set
	|| year1.is_set
	|| infinite.is_set;
}

bool Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(hh_mm_ss1.yfilter)
	|| ydk::is_set(date3.yfilter)
	|| ydk::is_set(month3.yfilter)
	|| ydk::is_set(date4.yfilter)
	|| ydk::is_set(month4.yfilter)
	|| ydk::is_set(year1.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());
    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (hh_mm_ss1.is_set || is_set(hh_mm_ss1.yfilter)) leaf_name_data.push_back(hh_mm_ss1.get_name_leafdata());
    if (date3.is_set || is_set(date3.yfilter)) leaf_name_data.push_back(date3.get_name_leafdata());
    if (month3.is_set || is_set(month3.yfilter)) leaf_name_data.push_back(month3.get_name_leafdata());
    if (date4.is_set || is_set(date4.yfilter)) leaf_name_data.push_back(date4.get_name_leafdata());
    if (month4.is_set || is_set(month4.yfilter)) leaf_name_data.push_back(month4.get_name_leafdata());
    if (year1.is_set || is_set(year1.yfilter)) leaf_name_data.push_back(year1.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm-ss1")
    {
        hh_mm_ss1 = value;
        hh_mm_ss1.value_namespace = name_space;
        hh_mm_ss1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date3")
    {
        date3 = value;
        date3.value_namespace = name_space;
        date3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month3")
    {
        month3 = value;
        month3.value_namespace = name_space;
        month3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date4")
    {
        date4 = value;
        date4.value_namespace = name_space;
        date4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month4")
    {
        month4 = value;
        month4.value_namespace = name_space;
        month4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year1")
    {
        year1 = value;
        year1.value_namespace = name_space;
        year1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "hh-mm-ss1")
    {
        hh_mm_ss1.yfilter = yfilter;
    }
    if(value_path == "date3")
    {
        date3.yfilter = yfilter;
    }
    if(value_path == "month3")
    {
        month3.yfilter = yfilter;
    }
    if(value_path == "date4")
    {
        date4.yfilter = yfilter;
    }
    if(value_path == "month4")
    {
        month4.yfilter = yfilter;
    }
    if(value_path == "year1")
    {
        year1.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Native::Key::Chain::Key_::LifetimeLocal::Local::LifetimeGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss" || name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "duration" || name == "hh-mm-ss1" || name == "date3" || name == "month3" || name == "date4" || name == "month4" || name == "year1" || name == "infinite")
        return true;
    return false;
}

Native::L2::L2()
    :
    router_id{YType::str, "router-id"}
{

    yang_name = "l2"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2::~L2()
{
}

bool Native::L2::has_data() const
{
    for (std::size_t index=0; index<vfi.size(); index++)
    {
        if(vfi[index]->has_data())
            return true;
    }
    return router_id.is_set;
}

bool Native::L2::has_operation() const
{
    for (std::size_t index=0; index<vfi.size(); index++)
    {
        if(vfi[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Native::L2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-l2vpn:vfi")
    {
        auto c = std::make_shared<Native::L2::Vfi>();
        c->parent = this;
        vfi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vfi)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::L2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Native::L2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfi" || name == "router-id")
        return true;
    return false;
}

Native::L2::Vfi::Vfi()
    :
    name{YType::str, "name"},
    mode{YType::enumeration, "mode"},
    evc{YType::str, "evc"},
    bridge_domain{YType::uint16, "bridge-domain"},
    mtu{YType::uint32, "mtu"}
    	,
    vpn(std::make_shared<Native::L2::Vfi::Vpn>())
{
    vpn->parent = this;

    yang_name = "vfi"; yang_parent_name = "l2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2::Vfi::~Vfi()
{
}

bool Native::L2::Vfi::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return name.is_set
	|| mode.is_set
	|| evc.is_set
	|| bridge_domain.is_set
	|| mtu.is_set
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::L2::Vfi::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(evc.yfilter)
	|| ydk::is_set(bridge_domain.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::L2::Vfi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2::Vfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:vfi" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2::Vfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (evc.is_set || is_set(evc.yfilter)) leaf_name_data.push_back(evc.get_name_leafdata());
    if (bridge_domain.is_set || is_set(bridge_domain.yfilter)) leaf_name_data.push_back(bridge_domain.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2::Vfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::L2::Vfi::Vpn>();
        }
        return vpn;
    }

    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Native::L2::Vfi::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2::Vfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vpn != nullptr)
    {
        children["vpn"] = vpn;
    }

    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::L2::Vfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc")
    {
        evc = value;
        evc.value_namespace = name_space;
        evc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain")
    {
        bridge_domain = value;
        bridge_domain.value_namespace = name_space;
        bridge_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2::Vfi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "evc")
    {
        evc.yfilter = yfilter;
    }
    if(value_path == "bridge-domain")
    {
        bridge_domain.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::L2::Vfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpn" || name == "neighbor" || name == "name" || name == "mode" || name == "evc" || name == "bridge-domain" || name == "mtu")
        return true;
    return false;
}

Native::L2::Vfi::Vpn::Vpn()
    :
    id{YType::uint64, "id"}
{

    yang_name = "vpn"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2::Vfi::Vpn::~Vpn()
{
}

bool Native::L2::Vfi::Vpn::has_data() const
{
    return id.is_set;
}

bool Native::L2::Vfi::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::L2::Vfi::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2::Vfi::Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2::Vfi::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2::Vfi::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::L2::Vfi::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2::Vfi::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::L2::Vfi::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::L2::Vfi::Neighbor::Neighbor()
    :
    router_id{YType::str, "router-id"},
    vc_id{YType::uint64, "vc-id"},
    encapsulation{YType::enumeration, "encapsulation"},
    pw_class{YType::str, "pw-class"}
{

    yang_name = "neighbor"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2::Vfi::Neighbor::~Neighbor()
{
}

bool Native::L2::Vfi::Neighbor::has_data() const
{
    return router_id.is_set
	|| vc_id.is_set
	|| encapsulation.is_set
	|| pw_class.is_set;
}

bool Native::L2::Vfi::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(vc_id.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(pw_class.yfilter);
}

std::string Native::L2::Vfi::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[router-id='" <<router_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2::Vfi::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (vc_id.is_set || is_set(vc_id.yfilter)) leaf_name_data.push_back(vc_id.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2::Vfi::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2::Vfi::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::L2::Vfi::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-id")
    {
        vc_id = value;
        vc_id.value_namespace = name_space;
        vc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2::Vfi::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "vc-id")
    {
        vc_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
}

bool Native::L2::Vfi::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "vc-id" || name == "encapsulation" || name == "pw-class")
        return true;
    return false;
}

Native::System::System()
{

    yang_name = "system"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::~System()
{
}

bool Native::System::has_data() const
{
    return false;
}

bool Native::System::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Errdisable::Errdisable()
    :
    detect(std::make_shared<Native::Errdisable::Detect>())
	,flap_setting(std::make_shared<Native::Errdisable::FlapSetting>())
	,recovery(std::make_shared<Native::Errdisable::Recovery>())
{
    detect->parent = this;
    flap_setting->parent = this;
    recovery->parent = this;

    yang_name = "errdisable"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::~Errdisable()
{
}

bool Native::Errdisable::has_data() const
{
    return (detect !=  nullptr && detect->has_data())
	|| (flap_setting !=  nullptr && flap_setting->has_data())
	|| (recovery !=  nullptr && recovery->has_data());
}

bool Native::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| (detect !=  nullptr && detect->has_operation())
	|| (flap_setting !=  nullptr && flap_setting->has_operation())
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Errdisable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detect")
    {
        if(detect == nullptr)
        {
            detect = std::make_shared<Native::Errdisable::Detect>();
        }
        return detect;
    }

    if(child_yang_name == "flap-setting")
    {
        if(flap_setting == nullptr)
        {
            flap_setting = std::make_shared<Native::Errdisable::FlapSetting>();
        }
        return flap_setting;
    }

    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Errdisable::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(detect != nullptr)
    {
        children["detect"] = detect;
    }

    if(flap_setting != nullptr)
    {
        children["flap-setting"] = flap_setting;
    }

    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detect" || name == "flap-setting" || name == "recovery")
        return true;
    return false;
}

Native::Errdisable::Detect::Detect()
    :
    cause(std::make_shared<Native::Errdisable::Detect::Cause>())
{
    cause->parent = this;

    yang_name = "detect"; yang_parent_name = "errdisable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::Detect::~Detect()
{
}

bool Native::Errdisable::Detect::has_data() const
{
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Errdisable::Detect::has_operation() const
{
    return is_set(yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Errdisable::Detect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Detect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Detect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::Detect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Errdisable::Detect::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Detect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cause != nullptr)
    {
        children["cause"] = cause;
    }

    return children;
}

void Native::Errdisable::Detect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::Detect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::Detect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause")
        return true;
    return false;
}

Native::Errdisable::Detect::Cause::Cause()
    :
    all{YType::empty, "all"},
    arp_inspection{YType::empty, "arp-inspection"},
    bpduguard{YType::empty, "bpduguard"},
    dhcp_rate_limit{YType::empty, "dhcp-rate-limit"},
    dtp_flap{YType::empty, "dtp-flap"},
    gbic_invalid{YType::empty, "gbic-invalid"},
    inline_power{YType::empty, "inline-power"},
    l2ptguard{YType::empty, "l2ptguard"},
    link_flap{YType::empty, "link-flap"},
    loopback{YType::empty, "loopback"},
    mlacp_minlink{YType::empty, "mlacp-minlink"},
    pagp_flap{YType::empty, "pagp-flap"},
    pppoe_ia_rate_limit{YType::empty, "pppoe-ia-rate-limit"},
    sfp_config_mismatch{YType::empty, "sfp-config-mismatch"},
    small_frame{YType::empty, "small-frame"}
    	,
    security_violation(std::make_shared<Native::Errdisable::Detect::Cause::SecurityViolation>())
{
    security_violation->parent = this;

    yang_name = "cause"; yang_parent_name = "detect"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::Detect::Cause::~Cause()
{
}

bool Native::Errdisable::Detect::Cause::has_data() const
{
    return all.is_set
	|| arp_inspection.is_set
	|| bpduguard.is_set
	|| dhcp_rate_limit.is_set
	|| dtp_flap.is_set
	|| gbic_invalid.is_set
	|| inline_power.is_set
	|| l2ptguard.is_set
	|| link_flap.is_set
	|| loopback.is_set
	|| mlacp_minlink.is_set
	|| pagp_flap.is_set
	|| pppoe_ia_rate_limit.is_set
	|| sfp_config_mismatch.is_set
	|| small_frame.is_set
	|| (security_violation !=  nullptr && security_violation->has_data());
}

bool Native::Errdisable::Detect::Cause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(arp_inspection.yfilter)
	|| ydk::is_set(bpduguard.yfilter)
	|| ydk::is_set(dhcp_rate_limit.yfilter)
	|| ydk::is_set(dtp_flap.yfilter)
	|| ydk::is_set(gbic_invalid.yfilter)
	|| ydk::is_set(inline_power.yfilter)
	|| ydk::is_set(l2ptguard.yfilter)
	|| ydk::is_set(link_flap.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(mlacp_minlink.yfilter)
	|| ydk::is_set(pagp_flap.yfilter)
	|| ydk::is_set(pppoe_ia_rate_limit.yfilter)
	|| ydk::is_set(sfp_config_mismatch.yfilter)
	|| ydk::is_set(small_frame.yfilter)
	|| (security_violation !=  nullptr && security_violation->has_operation());
}

std::string Native::Errdisable::Detect::Cause::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/detect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Detect::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Detect::Cause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (arp_inspection.is_set || is_set(arp_inspection.yfilter)) leaf_name_data.push_back(arp_inspection.get_name_leafdata());
    if (bpduguard.is_set || is_set(bpduguard.yfilter)) leaf_name_data.push_back(bpduguard.get_name_leafdata());
    if (dhcp_rate_limit.is_set || is_set(dhcp_rate_limit.yfilter)) leaf_name_data.push_back(dhcp_rate_limit.get_name_leafdata());
    if (dtp_flap.is_set || is_set(dtp_flap.yfilter)) leaf_name_data.push_back(dtp_flap.get_name_leafdata());
    if (gbic_invalid.is_set || is_set(gbic_invalid.yfilter)) leaf_name_data.push_back(gbic_invalid.get_name_leafdata());
    if (inline_power.is_set || is_set(inline_power.yfilter)) leaf_name_data.push_back(inline_power.get_name_leafdata());
    if (l2ptguard.is_set || is_set(l2ptguard.yfilter)) leaf_name_data.push_back(l2ptguard.get_name_leafdata());
    if (link_flap.is_set || is_set(link_flap.yfilter)) leaf_name_data.push_back(link_flap.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (mlacp_minlink.is_set || is_set(mlacp_minlink.yfilter)) leaf_name_data.push_back(mlacp_minlink.get_name_leafdata());
    if (pagp_flap.is_set || is_set(pagp_flap.yfilter)) leaf_name_data.push_back(pagp_flap.get_name_leafdata());
    if (pppoe_ia_rate_limit.is_set || is_set(pppoe_ia_rate_limit.yfilter)) leaf_name_data.push_back(pppoe_ia_rate_limit.get_name_leafdata());
    if (sfp_config_mismatch.is_set || is_set(sfp_config_mismatch.yfilter)) leaf_name_data.push_back(sfp_config_mismatch.get_name_leafdata());
    if (small_frame.is_set || is_set(small_frame.yfilter)) leaf_name_data.push_back(small_frame.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::Detect::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security-violation")
    {
        if(security_violation == nullptr)
        {
            security_violation = std::make_shared<Native::Errdisable::Detect::Cause::SecurityViolation>();
        }
        return security_violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Detect::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(security_violation != nullptr)
    {
        children["security-violation"] = security_violation;
    }

    return children;
}

void Native::Errdisable::Detect::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-inspection")
    {
        arp_inspection = value;
        arp_inspection.value_namespace = name_space;
        arp_inspection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpduguard")
    {
        bpduguard = value;
        bpduguard.value_namespace = name_space;
        bpduguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-rate-limit")
    {
        dhcp_rate_limit = value;
        dhcp_rate_limit.value_namespace = name_space;
        dhcp_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtp-flap")
    {
        dtp_flap = value;
        dtp_flap.value_namespace = name_space;
        dtp_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gbic-invalid")
    {
        gbic_invalid = value;
        gbic_invalid.value_namespace = name_space;
        gbic_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inline-power")
    {
        inline_power = value;
        inline_power.value_namespace = name_space;
        inline_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2ptguard")
    {
        l2ptguard = value;
        l2ptguard.value_namespace = name_space;
        l2ptguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-flap")
    {
        link_flap = value;
        link_flap.value_namespace = name_space;
        link_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-minlink")
    {
        mlacp_minlink = value;
        mlacp_minlink.value_namespace = name_space;
        mlacp_minlink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pagp-flap")
    {
        pagp_flap = value;
        pagp_flap.value_namespace = name_space;
        pagp_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-ia-rate-limit")
    {
        pppoe_ia_rate_limit = value;
        pppoe_ia_rate_limit.value_namespace = name_space;
        pppoe_ia_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-config-mismatch")
    {
        sfp_config_mismatch = value;
        sfp_config_mismatch.value_namespace = name_space;
        sfp_config_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "small-frame")
    {
        small_frame = value;
        small_frame.value_namespace = name_space;
        small_frame.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Detect::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "arp-inspection")
    {
        arp_inspection.yfilter = yfilter;
    }
    if(value_path == "bpduguard")
    {
        bpduguard.yfilter = yfilter;
    }
    if(value_path == "dhcp-rate-limit")
    {
        dhcp_rate_limit.yfilter = yfilter;
    }
    if(value_path == "dtp-flap")
    {
        dtp_flap.yfilter = yfilter;
    }
    if(value_path == "gbic-invalid")
    {
        gbic_invalid.yfilter = yfilter;
    }
    if(value_path == "inline-power")
    {
        inline_power.yfilter = yfilter;
    }
    if(value_path == "l2ptguard")
    {
        l2ptguard.yfilter = yfilter;
    }
    if(value_path == "link-flap")
    {
        link_flap.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "mlacp-minlink")
    {
        mlacp_minlink.yfilter = yfilter;
    }
    if(value_path == "pagp-flap")
    {
        pagp_flap.yfilter = yfilter;
    }
    if(value_path == "pppoe-ia-rate-limit")
    {
        pppoe_ia_rate_limit.yfilter = yfilter;
    }
    if(value_path == "sfp-config-mismatch")
    {
        sfp_config_mismatch.yfilter = yfilter;
    }
    if(value_path == "small-frame")
    {
        small_frame.yfilter = yfilter;
    }
}

bool Native::Errdisable::Detect::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-violation" || name == "all" || name == "arp-inspection" || name == "bpduguard" || name == "dhcp-rate-limit" || name == "dtp-flap" || name == "gbic-invalid" || name == "inline-power" || name == "l2ptguard" || name == "link-flap" || name == "loopback" || name == "mlacp-minlink" || name == "pagp-flap" || name == "pppoe-ia-rate-limit" || name == "sfp-config-mismatch" || name == "small-frame")
        return true;
    return false;
}

Native::Errdisable::Detect::Cause::SecurityViolation::SecurityViolation()
    :
    shutdown(std::make_shared<Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown>())
{
    shutdown->parent = this;

    yang_name = "security-violation"; yang_parent_name = "cause"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::Detect::Cause::SecurityViolation::~SecurityViolation()
{
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::has_data() const
{
    return (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::has_operation() const
{
    return is_set(yfilter)
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Errdisable::Detect::Cause::SecurityViolation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/detect/cause/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Detect::Cause::SecurityViolation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-violation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Detect::Cause::SecurityViolation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::Detect::Cause::SecurityViolation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Detect::Cause::SecurityViolation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    return children;
}

void Native::Errdisable::Detect::Cause::SecurityViolation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::Detect::Cause::SecurityViolation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown")
        return true;
    return false;
}

Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::Shutdown()
    :
    vlan{YType::empty, "vlan"}
{

    yang_name = "shutdown"; yang_parent_name = "security-violation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::~Shutdown()
{
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::has_data() const
{
    return vlan.is_set;
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/detect/cause/security-violation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::FlapSetting()
    :
    cause(std::make_shared<Native::Errdisable::FlapSetting::Cause>())
{
    cause->parent = this;

    yang_name = "flap-setting"; yang_parent_name = "errdisable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::FlapSetting::~FlapSetting()
{
}

bool Native::Errdisable::FlapSetting::has_data() const
{
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Errdisable::FlapSetting::has_operation() const
{
    return is_set(yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Errdisable::FlapSetting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::FlapSetting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flap-setting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::FlapSetting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::FlapSetting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Errdisable::FlapSetting::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::FlapSetting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cause != nullptr)
    {
        children["cause"] = cause;
    }

    return children;
}

void Native::Errdisable::FlapSetting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::FlapSetting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::FlapSetting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::Cause::Cause()
    :
    dtp_flap(std::make_shared<Native::Errdisable::FlapSetting::Cause::DtpFlap>())
	,link_flap(std::make_shared<Native::Errdisable::FlapSetting::Cause::LinkFlap>())
	,pagp_flap(std::make_shared<Native::Errdisable::FlapSetting::Cause::PagpFlap>())
{
    dtp_flap->parent = this;
    link_flap->parent = this;
    pagp_flap->parent = this;

    yang_name = "cause"; yang_parent_name = "flap-setting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::FlapSetting::Cause::~Cause()
{
}

bool Native::Errdisable::FlapSetting::Cause::has_data() const
{
    return (dtp_flap !=  nullptr && dtp_flap->has_data())
	|| (link_flap !=  nullptr && link_flap->has_data())
	|| (pagp_flap !=  nullptr && pagp_flap->has_data());
}

bool Native::Errdisable::FlapSetting::Cause::has_operation() const
{
    return is_set(yfilter)
	|| (dtp_flap !=  nullptr && dtp_flap->has_operation())
	|| (link_flap !=  nullptr && link_flap->has_operation())
	|| (pagp_flap !=  nullptr && pagp_flap->has_operation());
}

std::string Native::Errdisable::FlapSetting::Cause::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/flap-setting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::FlapSetting::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::FlapSetting::Cause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::FlapSetting::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dtp-flap")
    {
        if(dtp_flap == nullptr)
        {
            dtp_flap = std::make_shared<Native::Errdisable::FlapSetting::Cause::DtpFlap>();
        }
        return dtp_flap;
    }

    if(child_yang_name == "link-flap")
    {
        if(link_flap == nullptr)
        {
            link_flap = std::make_shared<Native::Errdisable::FlapSetting::Cause::LinkFlap>();
        }
        return link_flap;
    }

    if(child_yang_name == "pagp-flap")
    {
        if(pagp_flap == nullptr)
        {
            pagp_flap = std::make_shared<Native::Errdisable::FlapSetting::Cause::PagpFlap>();
        }
        return pagp_flap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::FlapSetting::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dtp_flap != nullptr)
    {
        children["dtp-flap"] = dtp_flap;
    }

    if(link_flap != nullptr)
    {
        children["link-flap"] = link_flap;
    }

    if(pagp_flap != nullptr)
    {
        children["pagp-flap"] = pagp_flap;
    }

    return children;
}

void Native::Errdisable::FlapSetting::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::FlapSetting::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::FlapSetting::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dtp-flap" || name == "link-flap" || name == "pagp-flap")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::Cause::DtpFlap::DtpFlap()
    :
    max_flaps{YType::uint8, "max-flaps"},
    time{YType::uint8, "time"}
{

    yang_name = "dtp-flap"; yang_parent_name = "cause"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::FlapSetting::Cause::DtpFlap::~DtpFlap()
{
}

bool Native::Errdisable::FlapSetting::Cause::DtpFlap::has_data() const
{
    return max_flaps.is_set
	|| time.is_set;
}

bool Native::Errdisable::FlapSetting::Cause::DtpFlap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_flaps.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Errdisable::FlapSetting::Cause::DtpFlap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/flap-setting/cause/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::FlapSetting::Cause::DtpFlap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dtp-flap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::FlapSetting::Cause::DtpFlap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_flaps.is_set || is_set(max_flaps.yfilter)) leaf_name_data.push_back(max_flaps.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::FlapSetting::Cause::DtpFlap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::FlapSetting::Cause::DtpFlap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Errdisable::FlapSetting::Cause::DtpFlap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-flaps")
    {
        max_flaps = value;
        max_flaps.value_namespace = name_space;
        max_flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::FlapSetting::Cause::DtpFlap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-flaps")
    {
        max_flaps.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Errdisable::FlapSetting::Cause::DtpFlap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-flaps" || name == "time")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::Cause::LinkFlap::LinkFlap()
    :
    max_flaps{YType::uint8, "max-flaps"},
    time{YType::uint8, "time"}
{

    yang_name = "link-flap"; yang_parent_name = "cause"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::FlapSetting::Cause::LinkFlap::~LinkFlap()
{
}

bool Native::Errdisable::FlapSetting::Cause::LinkFlap::has_data() const
{
    return max_flaps.is_set
	|| time.is_set;
}

bool Native::Errdisable::FlapSetting::Cause::LinkFlap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_flaps.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Errdisable::FlapSetting::Cause::LinkFlap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/flap-setting/cause/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::FlapSetting::Cause::LinkFlap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::FlapSetting::Cause::LinkFlap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_flaps.is_set || is_set(max_flaps.yfilter)) leaf_name_data.push_back(max_flaps.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::FlapSetting::Cause::LinkFlap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::FlapSetting::Cause::LinkFlap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Errdisable::FlapSetting::Cause::LinkFlap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-flaps")
    {
        max_flaps = value;
        max_flaps.value_namespace = name_space;
        max_flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::FlapSetting::Cause::LinkFlap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-flaps")
    {
        max_flaps.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Errdisable::FlapSetting::Cause::LinkFlap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-flaps" || name == "time")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::Cause::PagpFlap::PagpFlap()
    :
    max_flaps{YType::uint8, "max-flaps"},
    time{YType::uint8, "time"}
{

    yang_name = "pagp-flap"; yang_parent_name = "cause"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::FlapSetting::Cause::PagpFlap::~PagpFlap()
{
}

bool Native::Errdisable::FlapSetting::Cause::PagpFlap::has_data() const
{
    return max_flaps.is_set
	|| time.is_set;
}

bool Native::Errdisable::FlapSetting::Cause::PagpFlap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_flaps.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Errdisable::FlapSetting::Cause::PagpFlap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/flap-setting/cause/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::FlapSetting::Cause::PagpFlap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pagp-flap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::FlapSetting::Cause::PagpFlap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_flaps.is_set || is_set(max_flaps.yfilter)) leaf_name_data.push_back(max_flaps.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::FlapSetting::Cause::PagpFlap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::FlapSetting::Cause::PagpFlap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Errdisable::FlapSetting::Cause::PagpFlap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-flaps")
    {
        max_flaps = value;
        max_flaps.value_namespace = name_space;
        max_flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::FlapSetting::Cause::PagpFlap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-flaps")
    {
        max_flaps.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Errdisable::FlapSetting::Cause::PagpFlap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-flaps" || name == "time")
        return true;
    return false;
}

Native::Errdisable::Recovery::Recovery()
    :
    interval{YType::uint32, "interval"}
    	,
    cause(std::make_shared<Native::Errdisable::Recovery::Cause>())
{
    cause->parent = this;

    yang_name = "recovery"; yang_parent_name = "errdisable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::Recovery::~Recovery()
{
}

bool Native::Errdisable::Recovery::has_data() const
{
    return interval.is_set
	|| (cause !=  nullptr && cause->has_data());
}

bool Native::Errdisable::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Errdisable::Recovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Errdisable::Recovery::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cause != nullptr)
    {
        children["cause"] = cause;
    }

    return children;
}

void Native::Errdisable::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Errdisable::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause" || name == "interval")
        return true;
    return false;
}

Native::Errdisable::Recovery::Cause::Cause()
    :
    all{YType::empty, "all"},
    arp_inspection{YType::empty, "arp-inspection"},
    bpduguard{YType::empty, "bpduguard"},
    channel_misconfig{YType::empty, "channel-misconfig"},
    dhcp_rate_limit{YType::empty, "dhcp-rate-limit"},
    dtp_flap{YType::empty, "dtp-flap"},
    gbic_invalid{YType::empty, "gbic-invalid"},
    inline_power{YType::empty, "inline-power"},
    l2ptguard{YType::empty, "l2ptguard"},
    link_flap{YType::empty, "link-flap"},
    link_monitor_failure{YType::empty, "link-monitor-failure"},
    loopback{YType::empty, "loopback"},
    mac_limit{YType::empty, "mac-limit"},
    mlacp_minlink{YType::empty, "mlacp-minlink"},
    pagp_flap{YType::empty, "pagp-flap"},
    port_mode_failure{YType::empty, "port-mode-failure"},
    pppoe_ia_rate_limit{YType::empty, "pppoe-ia-rate-limit"},
    psp{YType::empty, "psp"},
    psecure_violation{YType::empty, "psecure-violation"},
    security_violation{YType::empty, "security-violation"},
    sfp_config_mismatch{YType::empty, "sfp-config-mismatch"},
    small_frame{YType::empty, "small-frame"},
    storm_control{YType::empty, "storm-control"},
    udld{YType::empty, "udld"},
    unicast_flood{YType::empty, "unicast-flood"},
    vmps{YType::empty, "vmps"}
    	,
    oam_remote_failure(nullptr) // presence node
{

    yang_name = "cause"; yang_parent_name = "recovery"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::Recovery::Cause::~Cause()
{
}

bool Native::Errdisable::Recovery::Cause::has_data() const
{
    return all.is_set
	|| arp_inspection.is_set
	|| bpduguard.is_set
	|| channel_misconfig.is_set
	|| dhcp_rate_limit.is_set
	|| dtp_flap.is_set
	|| gbic_invalid.is_set
	|| inline_power.is_set
	|| l2ptguard.is_set
	|| link_flap.is_set
	|| link_monitor_failure.is_set
	|| loopback.is_set
	|| mac_limit.is_set
	|| mlacp_minlink.is_set
	|| pagp_flap.is_set
	|| port_mode_failure.is_set
	|| pppoe_ia_rate_limit.is_set
	|| psp.is_set
	|| psecure_violation.is_set
	|| security_violation.is_set
	|| sfp_config_mismatch.is_set
	|| small_frame.is_set
	|| storm_control.is_set
	|| udld.is_set
	|| unicast_flood.is_set
	|| vmps.is_set
	|| (oam_remote_failure !=  nullptr && oam_remote_failure->has_data());
}

bool Native::Errdisable::Recovery::Cause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(arp_inspection.yfilter)
	|| ydk::is_set(bpduguard.yfilter)
	|| ydk::is_set(channel_misconfig.yfilter)
	|| ydk::is_set(dhcp_rate_limit.yfilter)
	|| ydk::is_set(dtp_flap.yfilter)
	|| ydk::is_set(gbic_invalid.yfilter)
	|| ydk::is_set(inline_power.yfilter)
	|| ydk::is_set(l2ptguard.yfilter)
	|| ydk::is_set(link_flap.yfilter)
	|| ydk::is_set(link_monitor_failure.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mlacp_minlink.yfilter)
	|| ydk::is_set(pagp_flap.yfilter)
	|| ydk::is_set(port_mode_failure.yfilter)
	|| ydk::is_set(pppoe_ia_rate_limit.yfilter)
	|| ydk::is_set(psp.yfilter)
	|| ydk::is_set(psecure_violation.yfilter)
	|| ydk::is_set(security_violation.yfilter)
	|| ydk::is_set(sfp_config_mismatch.yfilter)
	|| ydk::is_set(small_frame.yfilter)
	|| ydk::is_set(storm_control.yfilter)
	|| ydk::is_set(udld.yfilter)
	|| ydk::is_set(unicast_flood.yfilter)
	|| ydk::is_set(vmps.yfilter)
	|| (oam_remote_failure !=  nullptr && oam_remote_failure->has_operation());
}

std::string Native::Errdisable::Recovery::Cause::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/recovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Recovery::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Recovery::Cause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (arp_inspection.is_set || is_set(arp_inspection.yfilter)) leaf_name_data.push_back(arp_inspection.get_name_leafdata());
    if (bpduguard.is_set || is_set(bpduguard.yfilter)) leaf_name_data.push_back(bpduguard.get_name_leafdata());
    if (channel_misconfig.is_set || is_set(channel_misconfig.yfilter)) leaf_name_data.push_back(channel_misconfig.get_name_leafdata());
    if (dhcp_rate_limit.is_set || is_set(dhcp_rate_limit.yfilter)) leaf_name_data.push_back(dhcp_rate_limit.get_name_leafdata());
    if (dtp_flap.is_set || is_set(dtp_flap.yfilter)) leaf_name_data.push_back(dtp_flap.get_name_leafdata());
    if (gbic_invalid.is_set || is_set(gbic_invalid.yfilter)) leaf_name_data.push_back(gbic_invalid.get_name_leafdata());
    if (inline_power.is_set || is_set(inline_power.yfilter)) leaf_name_data.push_back(inline_power.get_name_leafdata());
    if (l2ptguard.is_set || is_set(l2ptguard.yfilter)) leaf_name_data.push_back(l2ptguard.get_name_leafdata());
    if (link_flap.is_set || is_set(link_flap.yfilter)) leaf_name_data.push_back(link_flap.get_name_leafdata());
    if (link_monitor_failure.is_set || is_set(link_monitor_failure.yfilter)) leaf_name_data.push_back(link_monitor_failure.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mlacp_minlink.is_set || is_set(mlacp_minlink.yfilter)) leaf_name_data.push_back(mlacp_minlink.get_name_leafdata());
    if (pagp_flap.is_set || is_set(pagp_flap.yfilter)) leaf_name_data.push_back(pagp_flap.get_name_leafdata());
    if (port_mode_failure.is_set || is_set(port_mode_failure.yfilter)) leaf_name_data.push_back(port_mode_failure.get_name_leafdata());
    if (pppoe_ia_rate_limit.is_set || is_set(pppoe_ia_rate_limit.yfilter)) leaf_name_data.push_back(pppoe_ia_rate_limit.get_name_leafdata());
    if (psp.is_set || is_set(psp.yfilter)) leaf_name_data.push_back(psp.get_name_leafdata());
    if (psecure_violation.is_set || is_set(psecure_violation.yfilter)) leaf_name_data.push_back(psecure_violation.get_name_leafdata());
    if (security_violation.is_set || is_set(security_violation.yfilter)) leaf_name_data.push_back(security_violation.get_name_leafdata());
    if (sfp_config_mismatch.is_set || is_set(sfp_config_mismatch.yfilter)) leaf_name_data.push_back(sfp_config_mismatch.get_name_leafdata());
    if (small_frame.is_set || is_set(small_frame.yfilter)) leaf_name_data.push_back(small_frame.get_name_leafdata());
    if (storm_control.is_set || is_set(storm_control.yfilter)) leaf_name_data.push_back(storm_control.get_name_leafdata());
    if (udld.is_set || is_set(udld.yfilter)) leaf_name_data.push_back(udld.get_name_leafdata());
    if (unicast_flood.is_set || is_set(unicast_flood.yfilter)) leaf_name_data.push_back(unicast_flood.get_name_leafdata());
    if (vmps.is_set || is_set(vmps.yfilter)) leaf_name_data.push_back(vmps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::Recovery::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam-remote-failure")
    {
        if(oam_remote_failure == nullptr)
        {
            oam_remote_failure = std::make_shared<Native::Errdisable::Recovery::Cause::OamRemoteFailure>();
        }
        return oam_remote_failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Recovery::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oam_remote_failure != nullptr)
    {
        children["oam-remote-failure"] = oam_remote_failure;
    }

    return children;
}

void Native::Errdisable::Recovery::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-inspection")
    {
        arp_inspection = value;
        arp_inspection.value_namespace = name_space;
        arp_inspection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpduguard")
    {
        bpduguard = value;
        bpduguard.value_namespace = name_space;
        bpduguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-misconfig")
    {
        channel_misconfig = value;
        channel_misconfig.value_namespace = name_space;
        channel_misconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-rate-limit")
    {
        dhcp_rate_limit = value;
        dhcp_rate_limit.value_namespace = name_space;
        dhcp_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtp-flap")
    {
        dtp_flap = value;
        dtp_flap.value_namespace = name_space;
        dtp_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gbic-invalid")
    {
        gbic_invalid = value;
        gbic_invalid.value_namespace = name_space;
        gbic_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inline-power")
    {
        inline_power = value;
        inline_power.value_namespace = name_space;
        inline_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2ptguard")
    {
        l2ptguard = value;
        l2ptguard.value_namespace = name_space;
        l2ptguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-flap")
    {
        link_flap = value;
        link_flap.value_namespace = name_space;
        link_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-monitor-failure")
    {
        link_monitor_failure = value;
        link_monitor_failure.value_namespace = name_space;
        link_monitor_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-minlink")
    {
        mlacp_minlink = value;
        mlacp_minlink.value_namespace = name_space;
        mlacp_minlink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pagp-flap")
    {
        pagp_flap = value;
        pagp_flap.value_namespace = name_space;
        pagp_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-mode-failure")
    {
        port_mode_failure = value;
        port_mode_failure.value_namespace = name_space;
        port_mode_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-ia-rate-limit")
    {
        pppoe_ia_rate_limit = value;
        pppoe_ia_rate_limit.value_namespace = name_space;
        pppoe_ia_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psp")
    {
        psp = value;
        psp.value_namespace = name_space;
        psp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psecure-violation")
    {
        psecure_violation = value;
        psecure_violation.value_namespace = name_space;
        psecure_violation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-violation")
    {
        security_violation = value;
        security_violation.value_namespace = name_space;
        security_violation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-config-mismatch")
    {
        sfp_config_mismatch = value;
        sfp_config_mismatch.value_namespace = name_space;
        sfp_config_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "small-frame")
    {
        small_frame = value;
        small_frame.value_namespace = name_space;
        small_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control")
    {
        storm_control = value;
        storm_control.value_namespace = name_space;
        storm_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udld")
    {
        udld = value;
        udld.value_namespace = name_space;
        udld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-flood")
    {
        unicast_flood = value;
        unicast_flood.value_namespace = name_space;
        unicast_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmps")
    {
        vmps = value;
        vmps.value_namespace = name_space;
        vmps.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Recovery::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "arp-inspection")
    {
        arp_inspection.yfilter = yfilter;
    }
    if(value_path == "bpduguard")
    {
        bpduguard.yfilter = yfilter;
    }
    if(value_path == "channel-misconfig")
    {
        channel_misconfig.yfilter = yfilter;
    }
    if(value_path == "dhcp-rate-limit")
    {
        dhcp_rate_limit.yfilter = yfilter;
    }
    if(value_path == "dtp-flap")
    {
        dtp_flap.yfilter = yfilter;
    }
    if(value_path == "gbic-invalid")
    {
        gbic_invalid.yfilter = yfilter;
    }
    if(value_path == "inline-power")
    {
        inline_power.yfilter = yfilter;
    }
    if(value_path == "l2ptguard")
    {
        l2ptguard.yfilter = yfilter;
    }
    if(value_path == "link-flap")
    {
        link_flap.yfilter = yfilter;
    }
    if(value_path == "link-monitor-failure")
    {
        link_monitor_failure.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mlacp-minlink")
    {
        mlacp_minlink.yfilter = yfilter;
    }
    if(value_path == "pagp-flap")
    {
        pagp_flap.yfilter = yfilter;
    }
    if(value_path == "port-mode-failure")
    {
        port_mode_failure.yfilter = yfilter;
    }
    if(value_path == "pppoe-ia-rate-limit")
    {
        pppoe_ia_rate_limit.yfilter = yfilter;
    }
    if(value_path == "psp")
    {
        psp.yfilter = yfilter;
    }
    if(value_path == "psecure-violation")
    {
        psecure_violation.yfilter = yfilter;
    }
    if(value_path == "security-violation")
    {
        security_violation.yfilter = yfilter;
    }
    if(value_path == "sfp-config-mismatch")
    {
        sfp_config_mismatch.yfilter = yfilter;
    }
    if(value_path == "small-frame")
    {
        small_frame.yfilter = yfilter;
    }
    if(value_path == "storm-control")
    {
        storm_control.yfilter = yfilter;
    }
    if(value_path == "udld")
    {
        udld.yfilter = yfilter;
    }
    if(value_path == "unicast-flood")
    {
        unicast_flood.yfilter = yfilter;
    }
    if(value_path == "vmps")
    {
        vmps.yfilter = yfilter;
    }
}

bool Native::Errdisable::Recovery::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam-remote-failure" || name == "all" || name == "arp-inspection" || name == "bpduguard" || name == "channel-misconfig" || name == "dhcp-rate-limit" || name == "dtp-flap" || name == "gbic-invalid" || name == "inline-power" || name == "l2ptguard" || name == "link-flap" || name == "link-monitor-failure" || name == "loopback" || name == "mac-limit" || name == "mlacp-minlink" || name == "pagp-flap" || name == "port-mode-failure" || name == "pppoe-ia-rate-limit" || name == "psp" || name == "psecure-violation" || name == "security-violation" || name == "sfp-config-mismatch" || name == "small-frame" || name == "storm-control" || name == "udld" || name == "unicast-flood" || name == "vmps")
        return true;
    return false;
}

Native::Errdisable::Recovery::Cause::OamRemoteFailure::OamRemoteFailure()
    :
    critical_event{YType::empty, "critical-event"},
    dying_gasp{YType::empty, "dying-gasp"},
    link_fault{YType::empty, "link-fault"}
{

    yang_name = "oam-remote-failure"; yang_parent_name = "cause"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Errdisable::Recovery::Cause::OamRemoteFailure::~OamRemoteFailure()
{
}

bool Native::Errdisable::Recovery::Cause::OamRemoteFailure::has_data() const
{
    return critical_event.is_set
	|| dying_gasp.is_set
	|| link_fault.is_set;
}

bool Native::Errdisable::Recovery::Cause::OamRemoteFailure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical_event.yfilter)
	|| ydk::is_set(dying_gasp.yfilter)
	|| ydk::is_set(link_fault.yfilter);
}

std::string Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/errdisable/recovery/cause/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-remote-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical_event.is_set || is_set(critical_event.yfilter)) leaf_name_data.push_back(critical_event.get_name_leafdata());
    if (dying_gasp.is_set || is_set(dying_gasp.yfilter)) leaf_name_data.push_back(dying_gasp.get_name_leafdata());
    if (link_fault.is_set || is_set(link_fault.yfilter)) leaf_name_data.push_back(link_fault.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Errdisable::Recovery::Cause::OamRemoteFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical-event")
    {
        critical_event = value;
        critical_event.value_namespace = name_space;
        critical_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dying-gasp")
    {
        dying_gasp = value;
        dying_gasp.value_namespace = name_space;
        dying_gasp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-fault")
    {
        link_fault = value;
        link_fault.value_namespace = name_space;
        link_fault.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Recovery::Cause::OamRemoteFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical-event")
    {
        critical_event.yfilter = yfilter;
    }
    if(value_path == "dying-gasp")
    {
        dying_gasp.yfilter = yfilter;
    }
    if(value_path == "link-fault")
    {
        link_fault.yfilter = yfilter;
    }
}

bool Native::Errdisable::Recovery::Cause::OamRemoteFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical-event" || name == "dying-gasp" || name == "link-fault")
        return true;
    return false;
}

Native::Identity::Identity()
    :
    profile(std::make_shared<Native::Identity::Profile>())
{
    profile->parent = this;

    yang_name = "identity"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Identity::~Identity()
{
}

bool Native::Identity::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return (profile !=  nullptr && profile->has_data());
}

bool Native::Identity::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Native::Identity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        auto c = std::make_shared<Native::Identity::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Identity::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    return children;
}

void Native::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "profile")
        return true;
    return false;
}

Native::Identity::Policy::Policy()
    :
    name{YType::str, "name"},
    absolute_timer{YType::uint16, "absolute-timer"},
    access_group{YType::str, "access-group"},
    description{YType::str, "description"},
    inactivity_timer{YType::uint16, "inactivity-timer"},
    interface_template{YType::str, "interface-template"},
    sgt{YType::uint16, "sgt"},
    tag{YType::str, "tag"},
    vlan{YType::uint16, "vlan"}
    	,
    no(std::make_shared<Native::Identity::Policy::No>())
	,linksec(std::make_shared<Native::Identity::Policy::Linksec>())
	,redirect(std::make_shared<Native::Identity::Policy::Redirect>())
	,service_policy(std::make_shared<Native::Identity::Policy::ServicePolicy>())
	,tunnel(std::make_shared<Native::Identity::Policy::Tunnel>())
	,voice(std::make_shared<Native::Identity::Policy::Voice>())
{
    no->parent = this;
    linksec->parent = this;
    redirect->parent = this;
    service_policy->parent = this;
    tunnel->parent = this;
    voice->parent = this;

    yang_name = "policy"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Identity::Policy::~Policy()
{
}

bool Native::Identity::Policy::has_data() const
{
    return name.is_set
	|| absolute_timer.is_set
	|| access_group.is_set
	|| description.is_set
	|| inactivity_timer.is_set
	|| interface_template.is_set
	|| sgt.is_set
	|| tag.is_set
	|| vlan.is_set
	|| (no !=  nullptr && no->has_data())
	|| (linksec !=  nullptr && linksec->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::Identity::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(absolute_timer.yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(inactivity_timer.yfilter)
	|| ydk::is_set(interface_template.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (no !=  nullptr && no->has_operation())
	|| (linksec !=  nullptr && linksec->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::Identity::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/identity/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Identity::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (absolute_timer.is_set || is_set(absolute_timer.yfilter)) leaf_name_data.push_back(absolute_timer.get_name_leafdata());
    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (inactivity_timer.is_set || is_set(inactivity_timer.yfilter)) leaf_name_data.push_back(inactivity_timer.get_name_leafdata());
    if (interface_template.is_set || is_set(interface_template.yfilter)) leaf_name_data.push_back(interface_template.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no")
    {
        if(no == nullptr)
        {
            no = std::make_shared<Native::Identity::Policy::No>();
        }
        return no;
    }

    if(child_yang_name == "linksec")
    {
        if(linksec == nullptr)
        {
            linksec = std::make_shared<Native::Identity::Policy::Linksec>();
        }
        return linksec;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Identity::Policy::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Identity::Policy::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Identity::Policy::Tunnel>();
        }
        return tunnel;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Identity::Policy::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(no != nullptr)
    {
        children["no"] = no;
    }

    if(linksec != nullptr)
    {
        children["linksec"] = linksec;
    }

    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::Identity::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-timer")
    {
        absolute_timer = value;
        absolute_timer.value_namespace = name_space;
        absolute_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactivity-timer")
    {
        inactivity_timer = value;
        inactivity_timer.value_namespace = name_space;
        inactivity_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-template")
    {
        interface_template = value;
        interface_template.value_namespace = name_space;
        interface_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "absolute-timer")
    {
        absolute_timer.yfilter = yfilter;
    }
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "inactivity-timer")
    {
        inactivity_timer.yfilter = yfilter;
    }
    if(value_path == "interface-template")
    {
        interface_template.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no" || name == "linksec" || name == "redirect" || name == "service-policy" || name == "tunnel" || name == "voice" || name == "name" || name == "absolute-timer" || name == "access-group" || name == "description" || name == "inactivity-timer" || name == "interface-template" || name == "sgt" || name == "tag" || name == "vlan")
        return true;
    return false;
}

Native::Identity::Policy::No::No()
    :
    absolute_timer{YType::uint16, "absolute-timer"},
    access_group{YType::str, "access-group"},
    description{YType::str, "description"},
    inactivity_timer{YType::uint16, "inactivity-timer"},
    interface_template{YType::str, "interface-template"},
    sgt{YType::uint16, "sgt"},
    tag{YType::str, "tag"},
    vlan{YType::uint16, "vlan"}
    	,
    linksec(std::make_shared<Native::Identity::Policy::No::Linksec>())
	,redirect(std::make_shared<Native::Identity::Policy::No::Redirect>())
	,service_policy(std::make_shared<Native::Identity::Policy::No::ServicePolicy>())
	,tunnel(std::make_shared<Native::Identity::Policy::No::Tunnel>())
	,voice(std::make_shared<Native::Identity::Policy::No::Voice>())
{
    linksec->parent = this;
    redirect->parent = this;
    service_policy->parent = this;
    tunnel->parent = this;
    voice->parent = this;

    yang_name = "no"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::No::~No()
{
}

bool Native::Identity::Policy::No::has_data() const
{
    return absolute_timer.is_set
	|| access_group.is_set
	|| description.is_set
	|| inactivity_timer.is_set
	|| interface_template.is_set
	|| sgt.is_set
	|| tag.is_set
	|| vlan.is_set
	|| (linksec !=  nullptr && linksec->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::Identity::Policy::No::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolute_timer.yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(inactivity_timer.yfilter)
	|| ydk::is_set(interface_template.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (linksec !=  nullptr && linksec->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::Identity::Policy::No::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_timer.is_set || is_set(absolute_timer.yfilter)) leaf_name_data.push_back(absolute_timer.get_name_leafdata());
    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (inactivity_timer.is_set || is_set(inactivity_timer.yfilter)) leaf_name_data.push_back(inactivity_timer.get_name_leafdata());
    if (interface_template.is_set || is_set(interface_template.yfilter)) leaf_name_data.push_back(interface_template.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::No::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "linksec")
    {
        if(linksec == nullptr)
        {
            linksec = std::make_shared<Native::Identity::Policy::No::Linksec>();
        }
        return linksec;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Identity::Policy::No::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Identity::Policy::No::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Identity::Policy::No::Tunnel>();
        }
        return tunnel;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Identity::Policy::No::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::No::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(linksec != nullptr)
    {
        children["linksec"] = linksec;
    }

    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::Identity::Policy::No::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "absolute-timer")
    {
        absolute_timer = value;
        absolute_timer.value_namespace = name_space;
        absolute_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactivity-timer")
    {
        inactivity_timer = value;
        inactivity_timer.value_namespace = name_space;
        inactivity_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-template")
    {
        interface_template = value;
        interface_template.value_namespace = name_space;
        interface_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::No::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "absolute-timer")
    {
        absolute_timer.yfilter = yfilter;
    }
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "inactivity-timer")
    {
        inactivity_timer.yfilter = yfilter;
    }
    if(value_path == "interface-template")
    {
        interface_template.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::No::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "linksec" || name == "redirect" || name == "service-policy" || name == "tunnel" || name == "voice" || name == "absolute-timer" || name == "access-group" || name == "description" || name == "inactivity-timer" || name == "interface-template" || name == "sgt" || name == "tag" || name == "vlan")
        return true;
    return false;
}

Native::Identity::Policy::No::Linksec::Linksec()
    :
    policy{YType::enumeration, "policy"}
{

    yang_name = "linksec"; yang_parent_name = "no"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::No::Linksec::~Linksec()
{
}

bool Native::Identity::Policy::No::Linksec::has_data() const
{
    return policy.is_set;
}

bool Native::Identity::Policy::No::Linksec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Identity::Policy::No::Linksec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linksec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::Linksec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::No::Linksec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::No::Linksec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Identity::Policy::No::Linksec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::No::Linksec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::No::Linksec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Identity::Policy::No::Redirect::Redirect()
    :
    url{YType::str, "url"}
{

    yang_name = "redirect"; yang_parent_name = "no"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::No::Redirect::~Redirect()
{
}

bool Native::Identity::Policy::No::Redirect::has_data() const
{
    return url.is_set;
}

bool Native::Identity::Policy::No::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string Native::Identity::Policy::No::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::No::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::No::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Identity::Policy::No::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::No::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::No::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url")
        return true;
    return false;
}

Native::Identity::Policy::No::ServicePolicy::ServicePolicy()
{

    yang_name = "service-policy"; yang_parent_name = "no"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::No::ServicePolicy::~ServicePolicy()
{
}

bool Native::Identity::Policy::No::ServicePolicy::has_data() const
{
    for (std::size_t index=0; index<qos.size(); index++)
    {
        if(qos[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Identity::Policy::No::ServicePolicy::has_operation() const
{
    for (std::size_t index=0; index<qos.size(); index++)
    {
        if(qos[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Identity::Policy::No::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::No::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        auto c = std::make_shared<Native::Identity::Policy::No::ServicePolicy::Qos>();
        c->parent = this;
        qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::No::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : qos)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Identity::Policy::No::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Identity::Policy::No::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Identity::Policy::No::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos")
        return true;
    return false;
}

Native::Identity::Policy::No::ServicePolicy::Qos::Qos()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "qos"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::No::ServicePolicy::Qos::~Qos()
{
}

bool Native::Identity::Policy::No::ServicePolicy::Qos::has_data() const
{
    return direction.is_set
	|| name.is_set;
}

bool Native::Identity::Policy::No::ServicePolicy::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Identity::Policy::No::ServicePolicy::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::ServicePolicy::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::No::ServicePolicy::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::No::ServicePolicy::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Identity::Policy::No::ServicePolicy::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::No::ServicePolicy::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::No::ServicePolicy::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Identity::Policy::No::Tunnel::Tunnel()
    :
    type(std::make_shared<Native::Identity::Policy::No::Tunnel::Type>())
{
    type->parent = this;

    yang_name = "tunnel"; yang_parent_name = "no"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::No::Tunnel::~Tunnel()
{
}

bool Native::Identity::Policy::No::Tunnel::has_data() const
{
    return (type !=  nullptr && type->has_data());
}

bool Native::Identity::Policy::No::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Identity::Policy::No::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::No::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Identity::Policy::No::Tunnel::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::No::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Identity::Policy::No::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Identity::Policy::No::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Identity::Policy::No::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Identity::Policy::No::Tunnel::Type::Type()
    :
    capwap(std::make_shared<Native::Identity::Policy::No::Tunnel::Type::Capwap>())
{
    capwap->parent = this;

    yang_name = "type"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::No::Tunnel::Type::~Type()
{
}

bool Native::Identity::Policy::No::Tunnel::Type::has_data() const
{
    return (capwap !=  nullptr && capwap->has_data());
}

bool Native::Identity::Policy::No::Tunnel::Type::has_operation() const
{
    return is_set(yfilter)
	|| (capwap !=  nullptr && capwap->has_operation());
}

std::string Native::Identity::Policy::No::Tunnel::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::Tunnel::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::No::Tunnel::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capwap")
    {
        if(capwap == nullptr)
        {
            capwap = std::make_shared<Native::Identity::Policy::No::Tunnel::Type::Capwap>();
        }
        return capwap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::No::Tunnel::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(capwap != nullptr)
    {
        children["capwap"] = capwap;
    }

    return children;
}

void Native::Identity::Policy::No::Tunnel::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Identity::Policy::No::Tunnel::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Identity::Policy::No::Tunnel::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capwap")
        return true;
    return false;
}

Native::Identity::Policy::No::Tunnel::Type::Capwap::Capwap()
    :
    name{YType::str, "name"}
{

    yang_name = "capwap"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::No::Tunnel::Type::Capwap::~Capwap()
{
}

bool Native::Identity::Policy::No::Tunnel::Type::Capwap::has_data() const
{
    return name.is_set;
}

bool Native::Identity::Policy::No::Tunnel::Type::Capwap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Identity::Policy::No::Tunnel::Type::Capwap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capwap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::Tunnel::Type::Capwap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::No::Tunnel::Type::Capwap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::No::Tunnel::Type::Capwap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Identity::Policy::No::Tunnel::Type::Capwap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::No::Tunnel::Type::Capwap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::No::Tunnel::Type::Capwap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Identity::Policy::No::Voice::Voice()
    :
    vlan{YType::empty, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "no"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::No::Voice::~Voice()
{
}

bool Native::Identity::Policy::No::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::Identity::Policy::No::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Identity::Policy::No::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::No::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::No::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::No::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Identity::Policy::No::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::No::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::No::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Identity::Policy::Linksec::Linksec()
    :
    policy{YType::enumeration, "policy"}
{

    yang_name = "linksec"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::Linksec::~Linksec()
{
}

bool Native::Identity::Policy::Linksec::has_data() const
{
    return policy.is_set;
}

bool Native::Identity::Policy::Linksec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Identity::Policy::Linksec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linksec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::Linksec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::Linksec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::Linksec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Identity::Policy::Linksec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::Linksec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::Linksec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Identity::Policy::Redirect::Redirect()
    :
    url{YType::str, "url"}
{

    yang_name = "redirect"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::Redirect::~Redirect()
{
}

bool Native::Identity::Policy::Redirect::has_data() const
{
    return url.is_set;
}

bool Native::Identity::Policy::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string Native::Identity::Policy::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Identity::Policy::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url")
        return true;
    return false;
}

Native::Identity::Policy::ServicePolicy::ServicePolicy()
{

    yang_name = "service-policy"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::ServicePolicy::~ServicePolicy()
{
}

bool Native::Identity::Policy::ServicePolicy::has_data() const
{
    for (std::size_t index=0; index<qos.size(); index++)
    {
        if(qos[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Identity::Policy::ServicePolicy::has_operation() const
{
    for (std::size_t index=0; index<qos.size(); index++)
    {
        if(qos[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Identity::Policy::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        auto c = std::make_shared<Native::Identity::Policy::ServicePolicy::Qos>();
        c->parent = this;
        qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : qos)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Identity::Policy::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Identity::Policy::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Identity::Policy::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos")
        return true;
    return false;
}

Native::Identity::Policy::ServicePolicy::Qos::Qos()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "qos"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::ServicePolicy::Qos::~Qos()
{
}

bool Native::Identity::Policy::ServicePolicy::Qos::has_data() const
{
    return direction.is_set
	|| name.is_set;
}

bool Native::Identity::Policy::ServicePolicy::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Identity::Policy::ServicePolicy::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::ServicePolicy::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::ServicePolicy::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::ServicePolicy::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Identity::Policy::ServicePolicy::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::ServicePolicy::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::ServicePolicy::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Identity::Policy::Tunnel::Tunnel()
    :
    type(std::make_shared<Native::Identity::Policy::Tunnel::Type>())
{
    type->parent = this;

    yang_name = "tunnel"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::Tunnel::~Tunnel()
{
}

bool Native::Identity::Policy::Tunnel::has_data() const
{
    return (type !=  nullptr && type->has_data());
}

bool Native::Identity::Policy::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Identity::Policy::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Identity::Policy::Tunnel::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Identity::Policy::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Identity::Policy::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Identity::Policy::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Identity::Policy::Tunnel::Type::Type()
    :
    capwap(std::make_shared<Native::Identity::Policy::Tunnel::Type::Capwap>())
{
    capwap->parent = this;

    yang_name = "type"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::Tunnel::Type::~Type()
{
}

bool Native::Identity::Policy::Tunnel::Type::has_data() const
{
    return (capwap !=  nullptr && capwap->has_data());
}

bool Native::Identity::Policy::Tunnel::Type::has_operation() const
{
    return is_set(yfilter)
	|| (capwap !=  nullptr && capwap->has_operation());
}

std::string Native::Identity::Policy::Tunnel::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::Tunnel::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::Tunnel::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capwap")
    {
        if(capwap == nullptr)
        {
            capwap = std::make_shared<Native::Identity::Policy::Tunnel::Type::Capwap>();
        }
        return capwap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::Tunnel::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(capwap != nullptr)
    {
        children["capwap"] = capwap;
    }

    return children;
}

void Native::Identity::Policy::Tunnel::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Identity::Policy::Tunnel::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Identity::Policy::Tunnel::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capwap")
        return true;
    return false;
}

Native::Identity::Policy::Tunnel::Type::Capwap::Capwap()
    :
    name{YType::str, "name"}
{

    yang_name = "capwap"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::Tunnel::Type::Capwap::~Capwap()
{
}

bool Native::Identity::Policy::Tunnel::Type::Capwap::has_data() const
{
    return name.is_set;
}

bool Native::Identity::Policy::Tunnel::Type::Capwap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Identity::Policy::Tunnel::Type::Capwap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capwap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::Tunnel::Type::Capwap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::Tunnel::Type::Capwap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::Tunnel::Type::Capwap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Identity::Policy::Tunnel::Type::Capwap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::Tunnel::Type::Capwap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::Tunnel::Type::Capwap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Identity::Policy::Voice::Voice()
    :
    vlan{YType::empty, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Identity::Policy::Voice::~Voice()
{
}

bool Native::Identity::Policy::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::Identity::Policy::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Identity::Policy::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Policy::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Policy::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Policy::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Identity::Policy::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Policy::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Identity::Policy::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Identity::Profile::Profile()
    :
    dot1x{YType::empty, "dot1x"},
    default_{YType::empty, "default"}
{

    yang_name = "profile"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Identity::Profile::~Profile()
{
}

bool Native::Identity::Profile::has_data() const
{
    return dot1x.is_set
	|| default_.is_set;
}

bool Native::Identity::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Identity::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/identity/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Identity::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Identity::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Identity::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Identity::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Identity::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "default")
        return true;
    return false;
}

Native::Monitor::Monitor()
    :
    event_trace(std::make_shared<Native::Monitor::EventTrace>())
{
    event_trace->parent = this;

    yang_name = "monitor"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Monitor::~Monitor()
{
}

bool Native::Monitor::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return (event_trace !=  nullptr && event_trace->has_data());
}

bool Native::Monitor::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (event_trace !=  nullptr && event_trace->has_operation());
}

std::string Native::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-trace")
    {
        if(event_trace == nullptr)
        {
            event_trace = std::make_shared<Native::Monitor::EventTrace>();
        }
        return event_trace;
    }

    if(child_yang_name == "session")
    {
        auto c = std::make_shared<Native::Monitor::Session>();
        c->parent = this;
        session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(event_trace != nullptr)
    {
        children["event-trace"] = event_trace;
    }

    count = 0;
    for (auto const & c : session)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-trace" || name == "session")
        return true;
    return false;
}

Native::Monitor::EventTrace::EventTrace()
    :
    sequence_number{YType::empty, "sequence-number"}
    	,
    atom(std::make_shared<Native::Monitor::EventTrace::Atom>())
{
    atom->parent = this;

    yang_name = "event-trace"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Monitor::EventTrace::~EventTrace()
{
}

bool Native::Monitor::EventTrace::has_data() const
{
    return sequence_number.is_set
	|| (atom !=  nullptr && atom->has_data());
}

bool Native::Monitor::EventTrace::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| (atom !=  nullptr && atom->has_operation());
}

std::string Native::Monitor::EventTrace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::EventTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::EventTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::EventTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<Native::Monitor::EventTrace::Atom>();
        }
        return atom;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::EventTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atom != nullptr)
    {
        children["atom"] = atom;
    }

    return children;
}

void Native::Monitor::EventTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::EventTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Native::Monitor::EventTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atom" || name == "sequence-number")
        return true;
    return false;
}

Native::Monitor::EventTrace::Atom::Atom()
    :
    error(std::make_shared<Native::Monitor::EventTrace::Atom::Error>())
	,event(std::make_shared<Native::Monitor::EventTrace::Atom::Event>())
	,major_(std::make_shared<Native::Monitor::EventTrace::Atom::Major>())
{
    error->parent = this;
    event->parent = this;
    major_->parent = this;

    yang_name = "atom"; yang_parent_name = "event-trace"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Monitor::EventTrace::Atom::~Atom()
{
}

bool Native::Monitor::EventTrace::Atom::has_data() const
{
    return (error !=  nullptr && error->has_data())
	|| (event !=  nullptr && event->has_data())
	|| (major_ !=  nullptr && major_->has_data());
}

bool Native::Monitor::EventTrace::Atom::has_operation() const
{
    return is_set(yfilter)
	|| (error !=  nullptr && error->has_operation())
	|| (event !=  nullptr && event->has_operation())
	|| (major_ !=  nullptr && major_->has_operation());
}

std::string Native::Monitor::EventTrace::Atom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/monitor/event-trace/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::EventTrace::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::EventTrace::Atom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::EventTrace::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        if(error == nullptr)
        {
            error = std::make_shared<Native::Monitor::EventTrace::Atom::Error>();
        }
        return error;
    }

    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Monitor::EventTrace::Atom::Event>();
        }
        return event;
    }

    if(child_yang_name == "major")
    {
        if(major_ == nullptr)
        {
            major_ = std::make_shared<Native::Monitor::EventTrace::Atom::Major>();
        }
        return major_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::EventTrace::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(error != nullptr)
    {
        children["error"] = error;
    }

    if(event != nullptr)
    {
        children["event"] = event;
    }

    if(major_ != nullptr)
    {
        children["major"] = major_;
    }

    return children;
}

void Native::Monitor::EventTrace::Atom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::EventTrace::Atom::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::EventTrace::Atom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "event" || name == "major")
        return true;
    return false;
}

Native::Monitor::EventTrace::Atom::Error::Error()
    :
    enable{YType::empty, "enable"},
    disable{YType::empty, "disable"},
    include{YType::enumeration, "include"}
{

    yang_name = "error"; yang_parent_name = "atom"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Monitor::EventTrace::Atom::Error::~Error()
{
}

bool Native::Monitor::EventTrace::Atom::Error::has_data() const
{
    for (auto const & leaf : include.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enable.is_set
	|| disable.is_set;
}

bool Native::Monitor::EventTrace::Atom::Error::has_operation() const
{
    for (auto const & leaf : include.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(include.yfilter);
}

std::string Native::Monitor::EventTrace::Atom::Error::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/monitor/event-trace/atom/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::EventTrace::Atom::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::EventTrace::Atom::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    auto include_name_datas = include.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_name_datas.begin(), include_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::EventTrace::Atom::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::EventTrace::Atom::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Monitor::EventTrace::Atom::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include")
    {
        include.append(value);
    }
}

void Native::Monitor::EventTrace::Atom::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "include")
    {
        include.yfilter = yfilter;
    }
}

bool Native::Monitor::EventTrace::Atom::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "disable" || name == "include")
        return true;
    return false;
}

Native::Monitor::EventTrace::Atom::Event::Event()
    :
    enable{YType::empty, "enable"},
    disable{YType::empty, "disable"},
    size{YType::uint32, "size"},
    exclude{YType::enumeration, "exclude"}
{

    yang_name = "event"; yang_parent_name = "atom"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Monitor::EventTrace::Atom::Event::~Event()
{
}

bool Native::Monitor::EventTrace::Atom::Event::has_data() const
{
    for (auto const & leaf : exclude.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enable.is_set
	|| disable.is_set
	|| size.is_set;
}

bool Native::Monitor::EventTrace::Atom::Event::has_operation() const
{
    for (auto const & leaf : exclude.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(exclude.yfilter);
}

std::string Native::Monitor::EventTrace::Atom::Event::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/monitor/event-trace/atom/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::EventTrace::Atom::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::EventTrace::Atom::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    auto exclude_name_datas = exclude.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_name_datas.begin(), exclude_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::EventTrace::Atom::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::EventTrace::Atom::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Monitor::EventTrace::Atom::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude")
    {
        exclude.append(value);
    }
}

void Native::Monitor::EventTrace::Atom::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "exclude")
    {
        exclude.yfilter = yfilter;
    }
}

bool Native::Monitor::EventTrace::Atom::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "disable" || name == "size" || name == "exclude")
        return true;
    return false;
}

Native::Monitor::EventTrace::Atom::Major::Major()
    :
    enable{YType::empty, "enable"},
    disable{YType::empty, "disable"},
    include{YType::enumeration, "include"}
{

    yang_name = "major"; yang_parent_name = "atom"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Monitor::EventTrace::Atom::Major::~Major()
{
}

bool Native::Monitor::EventTrace::Atom::Major::has_data() const
{
    for (auto const & leaf : include.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enable.is_set
	|| disable.is_set;
}

bool Native::Monitor::EventTrace::Atom::Major::has_operation() const
{
    for (auto const & leaf : include.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(include.yfilter);
}

std::string Native::Monitor::EventTrace::Atom::Major::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/monitor/event-trace/atom/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::EventTrace::Atom::Major::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "major";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::EventTrace::Atom::Major::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    auto include_name_datas = include.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), include_name_datas.begin(), include_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::EventTrace::Atom::Major::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::EventTrace::Atom::Major::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Monitor::EventTrace::Atom::Major::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include")
    {
        include.append(value);
    }
}

void Native::Monitor::EventTrace::Atom::Major::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "include")
    {
        include.yfilter = yfilter;
    }
}

bool Native::Monitor::EventTrace::Atom::Major::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "disable" || name == "include")
        return true;
    return false;
}

Native::Monitor::Session::Session()
    :
    id{YType::uint8, "id"}
    	,
    destination(std::make_shared<Native::Monitor::Session::Destination>())
	,filter(std::make_shared<Native::Monitor::Session::Filter>())
	,source(std::make_shared<Native::Monitor::Session::Source>())
	,type(std::make_shared<Native::Monitor::Session::Type>())
{
    destination->parent = this;
    filter->parent = this;
    source->parent = this;
    type->parent = this;

    yang_name = "session"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Monitor::Session::~Session()
{
}

bool Native::Monitor::Session::has_data() const
{
    return id.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Native::Monitor::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Monitor::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Monitor::Session::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Monitor::Session::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Monitor::Session::Source>();
        }
        return source;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Monitor::Session::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Monitor::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "filter" || name == "source" || name == "type" || name == "id")
        return true;
    return false;
}

Native::Monitor::Session::Destination::Destination()
    :
    remote(std::make_shared<Native::Monitor::Session::Destination::Remote>())
{
    remote->parent = this;

    yang_name = "destination"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Destination::~Destination()
{
}

bool Native::Monitor::Session::Destination::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return (remote !=  nullptr && remote->has_data());
}

bool Native::Monitor::Session::Destination::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::Monitor::Session::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Native::Monitor::Session::Destination::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::Monitor::Session::Destination::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void Native::Monitor::Session::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "remote")
        return true;
    return false;
}

Native::Monitor::Session::Destination::Interface::Interface()
    :
    name{YType::str, "name"},
    encapsulation{YType::enumeration, "encapsulation"},
    ingress{YType::empty, "ingress"},
    ingress_encap{YType::enumeration, "ingress-encap"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "interface"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Destination::Interface::~Interface()
{
}

bool Native::Monitor::Session::Destination::Interface::has_data() const
{
    return name.is_set
	|| encapsulation.is_set
	|| ingress.is_set
	|| ingress_encap.is_set
	|| vlan.is_set;
}

bool Native::Monitor::Session::Destination::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ingress.yfilter)
	|| ydk::is_set(ingress_encap.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Monitor::Session::Destination::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Destination::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (ingress_encap.is_set || is_set(ingress_encap.yfilter)) leaf_name_data.push_back(ingress_encap.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Destination::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Destination::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Monitor::Session::Destination::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-encap")
    {
        ingress_encap = value;
        ingress_encap.value_namespace = name_space;
        ingress_encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Destination::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
    if(value_path == "ingress-encap")
    {
        ingress_encap.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Destination::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "encapsulation" || name == "ingress" || name == "ingress-encap" || name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Destination::Remote::Remote()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "remote"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Destination::Remote::~Remote()
{
}

bool Native::Monitor::Session::Destination::Remote::has_data() const
{
    return vlan.is_set;
}

bool Native::Monitor::Session::Destination::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Monitor::Session::Destination::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Destination::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Destination::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Destination::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Monitor::Session::Destination::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Destination::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Destination::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Filter::Filter()
    :
    packet_type(std::make_shared<Native::Monitor::Session::Filter::PacketType>())
	,ip(std::make_shared<Native::Monitor::Session::Filter::Ip>())
{
    packet_type->parent = this;
    ip->parent = this;

    yang_name = "filter"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Filter::~Filter()
{
}

bool Native::Monitor::Session::Filter::has_data() const
{
    return (packet_type !=  nullptr && packet_type->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Monitor::Session::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (packet_type !=  nullptr && packet_type->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Monitor::Session::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-type")
    {
        if(packet_type == nullptr)
        {
            packet_type = std::make_shared<Native::Monitor::Session::Filter::PacketType>();
        }
        return packet_type;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Monitor::Session::Filter::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(packet_type != nullptr)
    {
        children["packet-type"] = packet_type;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Monitor::Session::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-type" || name == "ip")
        return true;
    return false;
}

Native::Monitor::Session::Filter::PacketType::PacketType()
    :
    status{YType::enumeration, "status"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "packet-type"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Filter::PacketType::~PacketType()
{
}

bool Native::Monitor::Session::Filter::PacketType::has_data() const
{
    return status.is_set
	|| direction.is_set;
}

bool Native::Monitor::Session::Filter::PacketType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Monitor::Session::Filter::PacketType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Filter::PacketType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Filter::PacketType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Filter::PacketType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Monitor::Session::Filter::PacketType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Filter::PacketType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Filter::PacketType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status" || name == "direction")
        return true;
    return false;
}

const Enum::YLeaf Native::Mac::AccessList::Extended::Entry::Action::deny {0, "deny"};
const Enum::YLeaf Native::Mac::AccessList::Extended::Entry::Action::permit {1, "permit"};

const Enum::YLeaf Native::Tacacs::Server::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Tacacs::Server::Key::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::TacacsServer::Host::Key::Y_0 {0, "0"};
const Enum::YLeaf Native::TacacsServer::Host::Key::Y_7 {1, "7"};

const Enum::YLeaf Native::TacacsServer::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::TacacsServer::Key::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::dst_ip {0, "dst-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::dst_mac {1, "dst-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::dst_mixed_ip_port {2, "dst-mixed-ip-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::dst_port {3, "dst-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::mpls {4, "mpls"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_dst_ip {5, "src-dst-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_dst_mac {6, "src-dst-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_dst_mixed_ip_port {7, "src-dst-mixed-ip-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_dst_port {8, "src-dst-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_ip {9, "src-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_mac {10, "src-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_mixed_ip_port {11, "src-mixed-ip-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_port {12, "src-port"};

const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::dst_ip {0, "dst-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::dst_mac {1, "dst-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::dst_port {2, "dst-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::ipv6_label {3, "ipv6-label"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::l3_proto {4, "l3-proto"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::src_ip {5, "src-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::src_mac {6, "src-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::src_port {7, "src-port"};

const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::aes_128_cmac {0, "aes-128-cmac"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::aes_256_cmac {1, "aes-256-cmac"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::hmac_sha_1 {2, "hmac-sha-1"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::hmac_sha_256 {3, "hmac-sha-256"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::hmac_sha_384 {4, "hmac-sha-384"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::hmac_sha_512 {5, "hmac-sha-512"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::md5 {6, "md5"};

const Enum::YLeaf Native::Key::Chain::Key_::KeyString::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Key::Chain::Key_::KeyString::Encryption::Y_6 {1, "6"};
const Enum::YLeaf Native::Key::Chain::Key_::KeyString::Encryption::Y_7 {2, "7"};

const Enum::YLeaf Native::L2::Vfi::Mode::autodiscovery {0, "autodiscovery"};
const Enum::YLeaf Native::L2::Vfi::Mode::manual {1, "manual"};
const Enum::YLeaf Native::L2::Vfi::Mode::point_to_point {2, "point-to-point"};

const Enum::YLeaf Native::L2::Vfi::Neighbor::Encapsulation::l2tpv3 {0, "l2tpv3"};
const Enum::YLeaf Native::L2::Vfi::Neighbor::Encapsulation::mpls {1, "mpls"};

const Enum::YLeaf Native::Identity::Policy::No::Linksec::Policy_::must_not_secure {0, "must-not-secure"};
const Enum::YLeaf Native::Identity::Policy::No::Linksec::Policy_::must_secure {1, "must-secure"};
const Enum::YLeaf Native::Identity::Policy::No::Linksec::Policy_::should_secure {2, "should-secure"};

const Enum::YLeaf Native::Identity::Policy::No::ServicePolicy::Qos::Direction::input {0, "input"};
const Enum::YLeaf Native::Identity::Policy::No::ServicePolicy::Qos::Direction::output {1, "output"};

const Enum::YLeaf Native::Identity::Policy::Linksec::Policy_::must_not_secure {0, "must-not-secure"};
const Enum::YLeaf Native::Identity::Policy::Linksec::Policy_::must_secure {1, "must-secure"};
const Enum::YLeaf Native::Identity::Policy::Linksec::Policy_::should_secure {2, "should-secure"};

const Enum::YLeaf Native::Identity::Policy::ServicePolicy::Qos::Direction::input {0, "input"};
const Enum::YLeaf Native::Identity::Policy::ServicePolicy::Qos::Direction::output {1, "output"};

const Enum::YLeaf Native::Monitor::Session::Destination::Interface::Encapsulation::dot1q {0, "dot1q"};
const Enum::YLeaf Native::Monitor::Session::Destination::Interface::Encapsulation::isl {1, "isl"};
const Enum::YLeaf Native::Monitor::Session::Destination::Interface::Encapsulation::replicate {2, "replicate"};

const Enum::YLeaf Native::Monitor::Session::Destination::Interface::IngressEncap::dot1q {0, "dot1q"};
const Enum::YLeaf Native::Monitor::Session::Destination::Interface::IngressEncap::isl {1, "isl"};
const Enum::YLeaf Native::Monitor::Session::Destination::Interface::IngressEncap::untagged {2, "untagged"};

const Enum::YLeaf Native::Monitor::Session::Filter::PacketType::Status::good {0, "good"};
const Enum::YLeaf Native::Monitor::Session::Filter::PacketType::Status::bad {1, "bad"};

const Enum::YLeaf Native::Monitor::Session::Filter::PacketType::Direction::rx {0, "rx"};
const Enum::YLeaf Native::Monitor::Session::Filter::PacketType::Direction::tx {1, "tx"};


}
}

