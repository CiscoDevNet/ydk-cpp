
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_9.hpp"
#include "Cisco_IOS_XE_native_10.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ip::CommunityList::NumberStandard::NumberStandard()
    :
    no{YType::uint16, "no"}
    	,
    deny(std::make_shared<Native::Ip::CommunityList::NumberStandard::Deny>())
	,permit(std::make_shared<Native::Ip::CommunityList::NumberStandard::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "number-standard"; yang_parent_name = "community-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::CommunityList::NumberStandard::~NumberStandard()
{
}

bool Native::Ip::CommunityList::NumberStandard::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::NumberStandard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::NumberStandard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::NumberStandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-standard" <<"[no='" <<no <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberStandard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberStandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::NumberStandard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::NumberStandard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberStandard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::CommunityList::NumberStandard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::NumberStandard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberStandard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "no")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberStandard::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "number-standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::NumberStandard::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::NumberStandard::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberStandard::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::CommunityList::NumberStandard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberStandard::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberStandard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberStandard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::CommunityList::NumberStandard::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::CommunityList::NumberStandard::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberStandard::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberStandard::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "number-standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::NumberStandard::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::NumberStandard::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberStandard::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::CommunityList::NumberStandard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberStandard::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberStandard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberStandard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::CommunityList::NumberStandard::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::CommunityList::NumberStandard::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberStandard::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberExpanded::NumberExpanded()
    :
    no{YType::uint16, "no"}
    	,
    deny(std::make_shared<Native::Ip::CommunityList::NumberExpanded::Deny>())
	,permit(std::make_shared<Native::Ip::CommunityList::NumberExpanded::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "number-expanded"; yang_parent_name = "community-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::CommunityList::NumberExpanded::~NumberExpanded()
{
}

bool Native::Ip::CommunityList::NumberExpanded::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::NumberExpanded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::NumberExpanded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::NumberExpanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-expanded" <<"[no='" <<no <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberExpanded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberExpanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::NumberExpanded::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::NumberExpanded::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberExpanded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::CommunityList::NumberExpanded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::NumberExpanded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberExpanded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "no")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberExpanded::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "number-expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::NumberExpanded::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::NumberExpanded::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberExpanded::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::CommunityList::NumberExpanded::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberExpanded::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberExpanded::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberExpanded::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::CommunityList::NumberExpanded::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::CommunityList::NumberExpanded::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberExpanded::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberExpanded::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "number-expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::NumberExpanded::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::NumberExpanded::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberExpanded::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::CommunityList::NumberExpanded::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberExpanded::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberExpanded::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberExpanded::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::CommunityList::NumberExpanded::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::CommunityList::NumberExpanded::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberExpanded::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::CommunityList::Expanded::Expanded()
    :
    name{YType::str, "name"}
    	,
    deny(std::make_shared<Native::Ip::CommunityList::Expanded::Deny>())
	,permit(std::make_shared<Native::Ip::CommunityList::Expanded::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "expanded"; yang_parent_name = "community-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::CommunityList::Expanded::~Expanded()
{
}

bool Native::Ip::CommunityList::Expanded::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::Expanded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::Expanded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::Expanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expanded" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Expanded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Expanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::Expanded::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::Expanded::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Expanded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::CommunityList::Expanded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::Expanded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Expanded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "name")
        return true;
    return false;
}

Native::Ip::CommunityList::Expanded::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::Expanded::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::Expanded::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Expanded::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::CommunityList::Expanded::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Expanded::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Expanded::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Expanded::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::CommunityList::Expanded::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::CommunityList::Expanded::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Expanded::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::CommunityList::Expanded::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::Expanded::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::Expanded::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Expanded::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::CommunityList::Expanded::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Expanded::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Expanded::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Expanded::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::CommunityList::Expanded::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::CommunityList::Expanded::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Expanded::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::CommunityList::Standard::Standard()
    :
    name{YType::str, "name"}
    	,
    deny(std::make_shared<Native::Ip::CommunityList::Standard::Deny>())
	,permit(std::make_shared<Native::Ip::CommunityList::Standard::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "standard"; yang_parent_name = "community-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::CommunityList::Standard::~Standard()
{
}

bool Native::Ip::CommunityList::Standard::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::Standard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::Standard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Standard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::Standard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::Standard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::CommunityList::Standard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::Standard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Standard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "name")
        return true;
    return false;
}

Native::Ip::CommunityList::Standard::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::Standard::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::Standard::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Standard::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::CommunityList::Standard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Standard::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Standard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Standard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::CommunityList::Standard::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::CommunityList::Standard::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Standard::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::CommunityList::Standard::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::Standard::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::Standard::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Standard::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::CommunityList::Standard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Standard::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Standard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Standard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::CommunityList::Standard::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::CommunityList::Standard::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Standard::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::ExtcommunityList()
{

    yang_name = "extcommunity-list"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::ExtcommunityList::~ExtcommunityList()
{
}

bool Native::Ip::ExtcommunityList::has_data() const
{
    for (std::size_t index=0; index<number_standard.size(); index++)
    {
        if(number_standard[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<number_expanded.size(); index++)
    {
        if(number_expanded[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<expanded.size(); index++)
    {
        if(expanded[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::has_operation() const
{
    for (std::size_t index=0; index<number_standard.size(); index++)
    {
        if(number_standard[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<number_expanded.size(); index++)
    {
        if(number_expanded[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<expanded.size(); index++)
    {
        if(expanded[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExtcommunityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:extcommunity-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "number-standard")
    {
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard>();
        c->parent = this;
        number_standard.push_back(c);
        return c;
    }

    if(child_yang_name == "number-expanded")
    {
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded>();
        c->parent = this;
        number_expanded.push_back(c);
        return c;
    }

    if(child_yang_name == "expanded")
    {
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Expanded>();
        c->parent = this;
        expanded.push_back(c);
        return c;
    }

    if(child_yang_name == "standard")
    {
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard>();
        c->parent = this;
        standard.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : number_standard)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : number_expanded)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : expanded)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : standard)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::ExtcommunityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-standard" || name == "number-expanded" || name == "expanded" || name == "standard")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::NumberStandard()
    :
    no{YType::uint16, "no"}
    	,
    deny(std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny>())
	,permit(std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "number-standard"; yang_parent_name = "extcommunity-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::ExtcommunityList::NumberStandard::~NumberStandard()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::ExtcommunityList::NumberStandard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::ExtcommunityList::NumberStandard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:extcommunity-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExtcommunityList::NumberStandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-standard" <<"[no='" <<no <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "no")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Deny()
{

    yang_name = "deny"; yang_parent_name = "number-standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::~Deny()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::has_data() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::has_operation() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt>();
        c->parent = this;
        rt.push_back(c);
        return c;
    }

    if(child_yang_name == "soo")
    {
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo>();
        c->parent = this;
        soo.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher>();
        c->parent = this;
        vpn_distinguisher.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rt)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : soo)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : vpn_distinguisher)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt" || name == "soo" || name == "vpn-distinguisher")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::Rt()
    :
    name{YType::str, "name"}
{

    yang_name = "rt"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::~Rt()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::Soo()
    :
    name{YType::str, "name"}
{

    yang_name = "soo"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::~Soo()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::VpnDistinguisher()
    :
    name{YType::str, "name"}
{

    yang_name = "vpn-distinguisher"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Permit()
{

    yang_name = "permit"; yang_parent_name = "number-standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::~Permit()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::has_data() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::has_operation() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt>();
        c->parent = this;
        rt.push_back(c);
        return c;
    }

    if(child_yang_name == "soo")
    {
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo>();
        c->parent = this;
        soo.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher>();
        c->parent = this;
        vpn_distinguisher.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rt)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : soo)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : vpn_distinguisher)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt" || name == "soo" || name == "vpn-distinguisher")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::Rt()
    :
    name{YType::str, "name"}
{

    yang_name = "rt"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::~Rt()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::Soo()
    :
    name{YType::str, "name"}
{

    yang_name = "soo"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::~Soo()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::VpnDistinguisher()
    :
    name{YType::str, "name"}
{

    yang_name = "vpn-distinguisher"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberExpanded::NumberExpanded()
    :
    no{YType::uint16, "no"}
    	,
    deny(std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded::Deny>())
	,permit(std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "number-expanded"; yang_parent_name = "extcommunity-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::ExtcommunityList::NumberExpanded::~NumberExpanded()
{
}

bool Native::Ip::ExtcommunityList::NumberExpanded::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::ExtcommunityList::NumberExpanded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::ExtcommunityList::NumberExpanded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:extcommunity-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExtcommunityList::NumberExpanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-expanded" <<"[no='" <<no <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberExpanded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberExpanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberExpanded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::ExtcommunityList::NumberExpanded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::NumberExpanded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberExpanded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "no")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberExpanded::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "number-expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberExpanded::Deny::~Deny()
{
}

bool Native::Ip::ExtcommunityList::NumberExpanded::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::NumberExpanded::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberExpanded::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberExpanded::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberExpanded::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberExpanded::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ExtcommunityList::NumberExpanded::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::ExtcommunityList::NumberExpanded::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberExpanded::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::NumberExpanded::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "number-expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::NumberExpanded::Permit::~Permit()
{
}

bool Native::Ip::ExtcommunityList::NumberExpanded::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::NumberExpanded::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::ExtcommunityList::NumberExpanded::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::NumberExpanded::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberExpanded::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberExpanded::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ExtcommunityList::NumberExpanded::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::ExtcommunityList::NumberExpanded::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::NumberExpanded::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Expanded::Expanded()
    :
    name{YType::str, "name"}
    	,
    deny(std::make_shared<Native::Ip::ExtcommunityList::Expanded::Deny>())
	,permit(std::make_shared<Native::Ip::ExtcommunityList::Expanded::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "expanded"; yang_parent_name = "extcommunity-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::ExtcommunityList::Expanded::~Expanded()
{
}

bool Native::Ip::ExtcommunityList::Expanded::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::ExtcommunityList::Expanded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::ExtcommunityList::Expanded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:extcommunity-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExtcommunityList::Expanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expanded" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Expanded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Expanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::ExtcommunityList::Expanded::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::ExtcommunityList::Expanded::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Expanded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::ExtcommunityList::Expanded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Expanded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Expanded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Expanded::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Expanded::Deny::~Deny()
{
}

bool Native::Ip::ExtcommunityList::Expanded::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::Expanded::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::ExtcommunityList::Expanded::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Expanded::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Expanded::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Expanded::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ExtcommunityList::Expanded::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::ExtcommunityList::Expanded::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Expanded::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Expanded::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Expanded::Permit::~Permit()
{
}

bool Native::Ip::ExtcommunityList::Expanded::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::Expanded::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::ExtcommunityList::Expanded::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Expanded::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Expanded::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Expanded::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ExtcommunityList::Expanded::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::ExtcommunityList::Expanded::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Expanded::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Standard()
    :
    name{YType::str, "name"}
    	,
    deny(std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny>())
	,permit(std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "standard"; yang_parent_name = "extcommunity-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::ExtcommunityList::Standard::~Standard()
{
}

bool Native::Ip::ExtcommunityList::Standard::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::ExtcommunityList::Standard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::ExtcommunityList::Standard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:extcommunity-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::ExtcommunityList::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::ExtcommunityList::Standard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Deny::Deny()
{

    yang_name = "deny"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Standard::Deny::~Deny()
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::has_data() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::Standard::Deny::has_operation() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny::Rt>();
        c->parent = this;
        rt.push_back(c);
        return c;
    }

    if(child_yang_name == "soo")
    {
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny::Soo>();
        c->parent = this;
        soo.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher>();
        c->parent = this;
        vpn_distinguisher.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rt)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : soo)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : vpn_distinguisher)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::ExtcommunityList::Standard::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::Standard::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt" || name == "soo" || name == "vpn-distinguisher")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Deny::Rt::Rt()
    :
    name{YType::str, "name"}
{

    yang_name = "rt"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Standard::Deny::Rt::~Rt()
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Rt::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Rt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Deny::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Deny::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Deny::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Deny::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Deny::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Deny::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Deny::Soo::Soo()
    :
    name{YType::str, "name"}
{

    yang_name = "soo"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Standard::Deny::Soo::~Soo()
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Soo::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Soo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Deny::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Deny::Soo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Deny::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Deny::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Deny::Soo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Deny::Soo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Soo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::VpnDistinguisher()
    :
    name{YType::str, "name"}
{

    yang_name = "vpn-distinguisher"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Permit::Permit()
{

    yang_name = "permit"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Standard::Permit::~Permit()
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::has_data() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::Standard::Permit::has_operation() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit::Rt>();
        c->parent = this;
        rt.push_back(c);
        return c;
    }

    if(child_yang_name == "soo")
    {
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit::Soo>();
        c->parent = this;
        soo.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher>();
        c->parent = this;
        vpn_distinguisher.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rt)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : soo)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : vpn_distinguisher)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::ExtcommunityList::Standard::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::ExtcommunityList::Standard::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt" || name == "soo" || name == "vpn-distinguisher")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Permit::Rt::Rt()
    :
    name{YType::str, "name"}
{

    yang_name = "rt"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Standard::Permit::Rt::~Rt()
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Rt::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Rt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Permit::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Permit::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Permit::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Permit::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Permit::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Permit::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Permit::Soo::Soo()
    :
    name{YType::str, "name"}
{

    yang_name = "soo"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Standard::Permit::Soo::~Soo()
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Soo::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Soo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Permit::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Permit::Soo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Permit::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Permit::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Permit::Soo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Permit::Soo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Soo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::VpnDistinguisher()
    :
    name{YType::str, "name"}
{

    yang_name = "vpn-distinguisher"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Http::Http()
    :
    access_class{YType::uint8, "access-class"},
    server{YType::boolean, "server"},
    secure_server{YType::boolean, "secure-server"},
    secure_trustpoint{YType::str, "secure-trustpoint"},
    port{YType::uint16, "port"},
    max_connections{YType::uint16, "max-connections"},
    active_session_modules{YType::str, "active-session-modules"},
    secure_active_session_modules{YType::str, "secure-active-session-modules"},
    secure_client_auth{YType::empty, "secure-client-auth"}
    	,
    authentication(std::make_shared<Native::Ip::Http::Authentication>())
	,timeout_policy(std::make_shared<Native::Ip::Http::TimeoutPolicy>())
	,client(std::make_shared<Native::Ip::Http::Client>())
{
    authentication->parent = this;
    timeout_policy->parent = this;
    client->parent = this;

    yang_name = "http"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Http::~Http()
{
}

bool Native::Ip::Http::has_data() const
{
    return access_class.is_set
	|| server.is_set
	|| secure_server.is_set
	|| secure_trustpoint.is_set
	|| port.is_set
	|| max_connections.is_set
	|| active_session_modules.is_set
	|| secure_active_session_modules.is_set
	|| secure_client_auth.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (timeout_policy !=  nullptr && timeout_policy->has_data())
	|| (client !=  nullptr && client->has_data());
}

bool Native::Ip::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_class.yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(secure_server.yfilter)
	|| ydk::is_set(secure_trustpoint.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(max_connections.yfilter)
	|| ydk::is_set(active_session_modules.yfilter)
	|| ydk::is_set(secure_active_session_modules.yfilter)
	|| ydk::is_set(secure_client_auth.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (timeout_policy !=  nullptr && timeout_policy->has_operation())
	|| (client !=  nullptr && client->has_operation());
}

std::string Native::Ip::Http::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-http:http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_class.is_set || is_set(access_class.yfilter)) leaf_name_data.push_back(access_class.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (secure_server.is_set || is_set(secure_server.yfilter)) leaf_name_data.push_back(secure_server.get_name_leafdata());
    if (secure_trustpoint.is_set || is_set(secure_trustpoint.yfilter)) leaf_name_data.push_back(secure_trustpoint.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (max_connections.is_set || is_set(max_connections.yfilter)) leaf_name_data.push_back(max_connections.get_name_leafdata());
    if (active_session_modules.is_set || is_set(active_session_modules.yfilter)) leaf_name_data.push_back(active_session_modules.get_name_leafdata());
    if (secure_active_session_modules.is_set || is_set(secure_active_session_modules.yfilter)) leaf_name_data.push_back(secure_active_session_modules.get_name_leafdata());
    if (secure_client_auth.is_set || is_set(secure_client_auth.yfilter)) leaf_name_data.push_back(secure_client_auth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Ip::Http::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "timeout-policy")
    {
        if(timeout_policy == nullptr)
        {
            timeout_policy = std::make_shared<Native::Ip::Http::TimeoutPolicy>();
        }
        return timeout_policy;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Ip::Http::Client>();
        }
        return client;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(timeout_policy != nullptr)
    {
        children["timeout-policy"] = timeout_policy;
    }

    if(client != nullptr)
    {
        children["client"] = client;
    }

    return children;
}

void Native::Ip::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-class")
    {
        access_class = value;
        access_class.value_namespace = name_space;
        access_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-server")
    {
        secure_server = value;
        secure_server.value_namespace = name_space;
        secure_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-trustpoint")
    {
        secure_trustpoint = value;
        secure_trustpoint.value_namespace = name_space;
        secure_trustpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-connections")
    {
        max_connections = value;
        max_connections.value_namespace = name_space;
        max_connections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-session-modules")
    {
        active_session_modules = value;
        active_session_modules.value_namespace = name_space;
        active_session_modules.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-active-session-modules")
    {
        secure_active_session_modules = value;
        secure_active_session_modules.value_namespace = name_space;
        secure_active_session_modules.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-client-auth")
    {
        secure_client_auth = value;
        secure_client_auth.value_namespace = name_space;
        secure_client_auth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-class")
    {
        access_class.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "secure-server")
    {
        secure_server.yfilter = yfilter;
    }
    if(value_path == "secure-trustpoint")
    {
        secure_trustpoint.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "max-connections")
    {
        max_connections.yfilter = yfilter;
    }
    if(value_path == "active-session-modules")
    {
        active_session_modules.yfilter = yfilter;
    }
    if(value_path == "secure-active-session-modules")
    {
        secure_active_session_modules.yfilter = yfilter;
    }
    if(value_path == "secure-client-auth")
    {
        secure_client_auth.yfilter = yfilter;
    }
}

bool Native::Ip::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "timeout-policy" || name == "client" || name == "access-class" || name == "server" || name == "secure-server" || name == "secure-trustpoint" || name == "port" || name == "max-connections" || name == "active-session-modules" || name == "secure-active-session-modules" || name == "secure-client-auth")
        return true;
    return false;
}

Native::Ip::Http::Authentication::Authentication()
    :
    aaa{YType::empty, "aaa"},
    local{YType::empty, "local"}
{

    yang_name = "authentication"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Http::Authentication::~Authentication()
{
}

bool Native::Ip::Http::Authentication::has_data() const
{
    return aaa.is_set
	|| local.is_set;
}

bool Native::Ip::Http::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Ip::Http::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-http:http/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Http::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Http::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa.is_set || is_set(aaa.yfilter)) leaf_name_data.push_back(aaa.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Http::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Http::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Http::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa")
    {
        aaa = value;
        aaa.value_namespace = name_space;
        aaa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Http::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa")
    {
        aaa.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Ip::Http::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa" || name == "local")
        return true;
    return false;
}

Native::Ip::Http::TimeoutPolicy::TimeoutPolicy()
    :
    idle{YType::uint16, "idle"},
    life{YType::uint32, "life"},
    requests{YType::uint32, "requests"}
{

    yang_name = "timeout-policy"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Http::TimeoutPolicy::~TimeoutPolicy()
{
}

bool Native::Ip::Http::TimeoutPolicy::has_data() const
{
    return idle.is_set
	|| life.is_set
	|| requests.is_set;
}

bool Native::Ip::Http::TimeoutPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle.yfilter)
	|| ydk::is_set(life.yfilter)
	|| ydk::is_set(requests.yfilter);
}

std::string Native::Ip::Http::TimeoutPolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-http:http/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Http::TimeoutPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Http::TimeoutPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle.is_set || is_set(idle.yfilter)) leaf_name_data.push_back(idle.get_name_leafdata());
    if (life.is_set || is_set(life.yfilter)) leaf_name_data.push_back(life.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Http::TimeoutPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Http::TimeoutPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Http::TimeoutPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle")
    {
        idle = value;
        idle.value_namespace = name_space;
        idle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life")
    {
        life = value;
        life.value_namespace = name_space;
        life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Http::TimeoutPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle")
    {
        idle.yfilter = yfilter;
    }
    if(value_path == "life")
    {
        life.yfilter = yfilter;
    }
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
}

bool Native::Ip::Http::TimeoutPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle" || name == "life" || name == "requests")
        return true;
    return false;
}

Native::Ip::Http::Client::Client()
    :
    secure_trustpoint{YType::str, "secure-trustpoint"},
    source_interface{YType::str, "source-interface"}
    	,
    proxy_server(std::make_shared<Native::Ip::Http::Client::ProxyServer>())
{
    proxy_server->parent = this;

    yang_name = "client"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Http::Client::~Client()
{
}

bool Native::Ip::Http::Client::has_data() const
{
    return secure_trustpoint.is_set
	|| source_interface.is_set
	|| (proxy_server !=  nullptr && proxy_server->has_data());
}

bool Native::Ip::Http::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secure_trustpoint.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (proxy_server !=  nullptr && proxy_server->has_operation());
}

std::string Native::Ip::Http::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-http:http/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Http::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Http::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secure_trustpoint.is_set || is_set(secure_trustpoint.yfilter)) leaf_name_data.push_back(secure_trustpoint.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Http::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proxy-server")
    {
        if(proxy_server == nullptr)
        {
            proxy_server = std::make_shared<Native::Ip::Http::Client::ProxyServer>();
        }
        return proxy_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Http::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(proxy_server != nullptr)
    {
        children["proxy-server"] = proxy_server;
    }

    return children;
}

void Native::Ip::Http::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secure-trustpoint")
    {
        secure_trustpoint = value;
        secure_trustpoint.value_namespace = name_space;
        secure_trustpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Http::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secure-trustpoint")
    {
        secure_trustpoint.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Ip::Http::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy-server" || name == "secure-trustpoint" || name == "source-interface")
        return true;
    return false;
}

Native::Ip::Http::Client::ProxyServer::ProxyServer()
    :
    proxy_server_name{YType::str, "proxy-server-name"},
    proxy_port{YType::uint16, "proxy-port"}
{

    yang_name = "proxy-server"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Http::Client::ProxyServer::~ProxyServer()
{
}

bool Native::Ip::Http::Client::ProxyServer::has_data() const
{
    return proxy_server_name.is_set
	|| proxy_port.is_set;
}

bool Native::Ip::Http::Client::ProxyServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proxy_server_name.yfilter)
	|| ydk::is_set(proxy_port.yfilter);
}

std::string Native::Ip::Http::Client::ProxyServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-http:http/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Http::Client::ProxyServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Http::Client::ProxyServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy_server_name.is_set || is_set(proxy_server_name.yfilter)) leaf_name_data.push_back(proxy_server_name.get_name_leafdata());
    if (proxy_port.is_set || is_set(proxy_port.yfilter)) leaf_name_data.push_back(proxy_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Http::Client::ProxyServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Http::Client::ProxyServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Http::Client::ProxyServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proxy-server-name")
    {
        proxy_server_name = value;
        proxy_server_name.value_namespace = name_space;
        proxy_server_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-port")
    {
        proxy_port = value;
        proxy_port.value_namespace = name_space;
        proxy_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Http::Client::ProxyServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proxy-server-name")
    {
        proxy_server_name.yfilter = yfilter;
    }
    if(value_path == "proxy-port")
    {
        proxy_port.yfilter = yfilter;
    }
}

bool Native::Ip::Http::Client::ProxyServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy-server-name" || name == "proxy-port")
        return true;
    return false;
}

Native::Ip::Icmp::Icmp()
    :
    rate_limit(std::make_shared<Native::Ip::Icmp::RateLimit>())
{
    rate_limit->parent = this;

    yang_name = "icmp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Icmp::~Icmp()
{
}

bool Native::Ip::Icmp::has_data() const
{
    return (rate_limit !=  nullptr && rate_limit->has_data());
}

bool Native::Ip::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| (rate_limit !=  nullptr && rate_limit->has_operation());
}

std::string Native::Ip::Icmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-icmp:icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Native::Ip::Icmp::RateLimit>();
        }
        return rate_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rate_limit != nullptr)
    {
        children["rate-limit"] = rate_limit;
    }

    return children;
}

void Native::Ip::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate-limit")
        return true;
    return false;
}

Native::Ip::Icmp::RateLimit::RateLimit()
    :
    redirect{YType::enumeration, "redirect"}
    	,
    unreachable(std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable>())
{
    unreachable->parent = this;

    yang_name = "rate-limit"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Icmp::RateLimit::~RateLimit()
{
}

bool Native::Ip::Icmp::RateLimit::has_data() const
{
    return redirect.is_set
	|| (unreachable !=  nullptr && unreachable->has_data());
}

bool Native::Ip::Icmp::RateLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redirect.yfilter)
	|| (unreachable !=  nullptr && unreachable->has_operation());
}

std::string Native::Ip::Icmp::RateLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-icmp:icmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Icmp::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Icmp::RateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redirect.is_set || is_set(redirect.yfilter)) leaf_name_data.push_back(redirect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Icmp::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unreachable")
    {
        if(unreachable == nullptr)
        {
            unreachable = std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable>();
        }
        return unreachable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Icmp::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unreachable != nullptr)
    {
        children["unreachable"] = unreachable;
    }

    return children;
}

void Native::Ip::Icmp::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redirect")
    {
        redirect = value;
        redirect.value_namespace = name_space;
        redirect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Icmp::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redirect")
    {
        redirect.yfilter = yfilter;
    }
}

bool Native::Ip::Icmp::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unreachable" || name == "redirect")
        return true;
    return false;
}

Native::Ip::Icmp::RateLimit::Unreachable::Unreachable()
    :
    time{YType::uint32, "time"}
    	,
    df(std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable::DF>())
	,log(nullptr) // presence node
{
    df->parent = this;

    yang_name = "unreachable"; yang_parent_name = "rate-limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Icmp::RateLimit::Unreachable::~Unreachable()
{
}

bool Native::Ip::Icmp::RateLimit::Unreachable::has_data() const
{
    return time.is_set
	|| (df !=  nullptr && df->has_data())
	|| (log !=  nullptr && log->has_data());
}

bool Native::Ip::Icmp::RateLimit::Unreachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| (df !=  nullptr && df->has_operation())
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-icmp:icmp/rate-limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Icmp::RateLimit::Unreachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Icmp::RateLimit::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DF")
    {
        if(df == nullptr)
        {
            df = std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable::DF>();
        }
        return df;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Icmp::RateLimit::Unreachable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(df != nullptr)
    {
        children["DF"] = df;
    }

    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Ip::Icmp::RateLimit::Unreachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Icmp::RateLimit::Unreachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Ip::Icmp::RateLimit::Unreachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DF" || name == "log" || name == "time")
        return true;
    return false;
}

Native::Ip::Icmp::RateLimit::Unreachable::DF::DF()
    :
    time{YType::uint32, "time"}
{

    yang_name = "DF"; yang_parent_name = "unreachable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Icmp::RateLimit::Unreachable::DF::~DF()
{
}

bool Native::Ip::Icmp::RateLimit::Unreachable::DF::has_data() const
{
    return time.is_set;
}

bool Native::Ip::Icmp::RateLimit::Unreachable::DF::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::DF::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-icmp:icmp/rate-limit/unreachable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::DF::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DF";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Icmp::RateLimit::Unreachable::DF::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Icmp::RateLimit::Unreachable::DF::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Icmp::RateLimit::Unreachable::DF::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Icmp::RateLimit::Unreachable::DF::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Icmp::RateLimit::Unreachable::DF::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Ip::Icmp::RateLimit::Unreachable::DF::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Ip::Icmp::RateLimit::Unreachable::Log::Log()
    :
    number_unreachables{YType::uint32, "number-unreachables"},
    log_message{YType::uint32, "log-message"}
{

    yang_name = "log"; yang_parent_name = "unreachable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Icmp::RateLimit::Unreachable::Log::~Log()
{
}

bool Native::Ip::Icmp::RateLimit::Unreachable::Log::has_data() const
{
    return number_unreachables.is_set
	|| log_message.is_set;
}

bool Native::Ip::Icmp::RateLimit::Unreachable::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_unreachables.yfilter)
	|| ydk::is_set(log_message.yfilter);
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-icmp:icmp/rate-limit/unreachable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Icmp::RateLimit::Unreachable::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_unreachables.is_set || is_set(number_unreachables.yfilter)) leaf_name_data.push_back(number_unreachables.get_name_leafdata());
    if (log_message.is_set || is_set(log_message.yfilter)) leaf_name_data.push_back(log_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Icmp::RateLimit::Unreachable::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Icmp::RateLimit::Unreachable::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Icmp::RateLimit::Unreachable::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-unreachables")
    {
        number_unreachables = value;
        number_unreachables.value_namespace = name_space;
        number_unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-message")
    {
        log_message = value;
        log_message.value_namespace = name_space;
        log_message.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Icmp::RateLimit::Unreachable::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-unreachables")
    {
        number_unreachables.yfilter = yfilter;
    }
    if(value_path == "log-message")
    {
        log_message.yfilter = yfilter;
    }
}

bool Native::Ip::Icmp::RateLimit::Unreachable::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-unreachables" || name == "log-message")
        return true;
    return false;
}

Native::Ip::Igmp::Igmp()
    :
    snooping_conf(std::make_shared<Native::Ip::Igmp::SnoopingConf>())
	,snooping(std::make_shared<Native::Ip::Igmp::Snooping>())
	,ssm_map(std::make_shared<Native::Ip::Igmp::SsmMap>())
{
    snooping_conf->parent = this;
    snooping->parent = this;
    ssm_map->parent = this;

    yang_name = "igmp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::~Igmp()
{
}

bool Native::Ip::Igmp::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return (snooping_conf !=  nullptr && snooping_conf->has_data())
	|| (snooping !=  nullptr && snooping->has_data())
	|| (ssm_map !=  nullptr && ssm_map->has_data());
}

bool Native::Ip::Igmp::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (snooping_conf !=  nullptr && snooping_conf->has_operation())
	|| (snooping !=  nullptr && snooping->has_operation())
	|| (ssm_map !=  nullptr && ssm_map->has_operation());
}

std::string Native::Ip::Igmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-igmp:igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping-conf")
    {
        if(snooping_conf == nullptr)
        {
            snooping_conf = std::make_shared<Native::Ip::Igmp::SnoopingConf>();
        }
        return snooping_conf;
    }

    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Ip::Igmp::Snooping>();
        }
        return snooping;
    }

    if(child_yang_name == "ssm-map")
    {
        if(ssm_map == nullptr)
        {
            ssm_map = std::make_shared<Native::Ip::Igmp::SsmMap>();
        }
        return ssm_map;
    }

    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Ip::Igmp::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(snooping_conf != nullptr)
    {
        children["snooping-conf"] = snooping_conf;
    }

    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    if(ssm_map != nullptr)
    {
        children["ssm-map"] = ssm_map;
    }

    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping-conf" || name == "snooping" || name == "ssm-map" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Igmp::SnoopingConf::SnoopingConf()
    :
    snooping{YType::boolean, "snooping"}
{

    yang_name = "snooping-conf"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::SnoopingConf::~SnoopingConf()
{
}

bool Native::Ip::Igmp::SnoopingConf::has_data() const
{
    return snooping.is_set;
}

bool Native::Ip::Igmp::SnoopingConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snooping.yfilter);
}

std::string Native::Ip::Igmp::SnoopingConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::SnoopingConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::SnoopingConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snooping.is_set || is_set(snooping.yfilter)) leaf_name_data.push_back(snooping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::SnoopingConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::SnoopingConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Igmp::SnoopingConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snooping")
    {
        snooping = value;
        snooping.value_namespace = name_space;
        snooping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::SnoopingConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snooping")
    {
        snooping.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::SnoopingConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Snooping()
    :
    l2_entry_limit{YType::uint32, "l2-entry-limit"},
    last_member_query_count{YType::uint8, "last-member-query-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    report_suppression{YType::empty, "report-suppression"},
    robustness_variable{YType::uint8, "robustness-variable"}
    	,
    check(std::make_shared<Native::Ip::Igmp::Snooping::Check>())
	,explicit_tracking(std::make_shared<Native::Ip::Igmp::Snooping::ExplicitTracking>())
	,querier(nullptr) // presence node
	,tcn(std::make_shared<Native::Ip::Igmp::Snooping::Tcn>())
	,vlan(std::make_shared<Native::Ip::Igmp::Snooping::Vlan>())
{
    check->parent = this;
    explicit_tracking->parent = this;
    tcn->parent = this;
    vlan->parent = this;

    yang_name = "snooping"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::Snooping::~Snooping()
{
}

bool Native::Ip::Igmp::Snooping::has_data() const
{
    return l2_entry_limit.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| report_suppression.is_set
	|| robustness_variable.is_set
	|| (check !=  nullptr && check->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (querier !=  nullptr && querier->has_data())
	|| (tcn !=  nullptr && tcn->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Ip::Igmp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2_entry_limit.yfilter)
	|| ydk::is_set(last_member_query_count.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(report_suppression.yfilter)
	|| ydk::is_set(robustness_variable.yfilter)
	|| (check !=  nullptr && check->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation())
	|| (querier !=  nullptr && querier->has_operation())
	|| (tcn !=  nullptr && tcn->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Ip::Igmp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2_entry_limit.is_set || is_set(l2_entry_limit.yfilter)) leaf_name_data.push_back(l2_entry_limit.get_name_leafdata());
    if (last_member_query_count.is_set || is_set(last_member_query_count.yfilter)) leaf_name_data.push_back(last_member_query_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (report_suppression.is_set || is_set(report_suppression.yfilter)) leaf_name_data.push_back(report_suppression.get_name_leafdata());
    if (robustness_variable.is_set || is_set(robustness_variable.yfilter)) leaf_name_data.push_back(robustness_variable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check")
    {
        if(check == nullptr)
        {
            check = std::make_shared<Native::Ip::Igmp::Snooping::Check>();
        }
        return check;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Native::Ip::Igmp::Snooping::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    if(child_yang_name == "querier")
    {
        if(querier == nullptr)
        {
            querier = std::make_shared<Native::Ip::Igmp::Snooping::Querier>();
        }
        return querier;
    }

    if(child_yang_name == "tcn")
    {
        if(tcn == nullptr)
        {
            tcn = std::make_shared<Native::Ip::Igmp::Snooping::Tcn>();
        }
        return tcn;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Ip::Igmp::Snooping::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(check != nullptr)
    {
        children["check"] = check;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    if(querier != nullptr)
    {
        children["querier"] = querier;
    }

    if(tcn != nullptr)
    {
        children["tcn"] = tcn;
    }

    if(vlan != nullptr)
    {
        children["Cisco-IOS-XE-switch:vlan"] = vlan;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2-entry-limit")
    {
        l2_entry_limit = value;
        l2_entry_limit.value_namespace = name_space;
        l2_entry_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count = value;
        last_member_query_count.value_namespace = name_space;
        last_member_query_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-suppression")
    {
        report_suppression = value;
        report_suppression.value_namespace = name_space;
        report_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable = value;
        robustness_variable.value_namespace = name_space;
        robustness_variable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2-entry-limit")
    {
        l2_entry_limit.yfilter = yfilter;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "report-suppression")
    {
        report_suppression.yfilter = yfilter;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check" || name == "explicit-tracking" || name == "querier" || name == "tcn" || name == "vlan" || name == "l2-entry-limit" || name == "last-member-query-count" || name == "last-member-query-interval" || name == "report-suppression" || name == "robustness-variable")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Check::Check()
    :
    rtr_alert_option{YType::empty, "rtr-alert-option"},
    ttl{YType::empty, "ttl"}
{

    yang_name = "check"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::Snooping::Check::~Check()
{
}

bool Native::Ip::Igmp::Snooping::Check::has_data() const
{
    return rtr_alert_option.is_set
	|| ttl.is_set;
}

bool Native::Ip::Igmp::Snooping::Check::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_alert_option.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Check::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Check::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Check::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_alert_option.is_set || is_set(rtr_alert_option.yfilter)) leaf_name_data.push_back(rtr_alert_option.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Check::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Check::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Igmp::Snooping::Check::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option = value;
        rtr_alert_option.value_namespace = name_space;
        rtr_alert_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Check::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Check::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-alert-option" || name == "ttl")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::ExplicitTracking::ExplicitTracking()
    :
    limit{YType::uint32, "limit"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::Snooping::ExplicitTracking::~ExplicitTracking()
{
}

bool Native::Ip::Igmp::Snooping::ExplicitTracking::has_data() const
{
    return limit.is_set;
}

bool Native::Ip::Igmp::Snooping::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Ip::Igmp::Snooping::ExplicitTracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Igmp::Snooping::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Querier::Querier()
    :
    address{YType::str, "address"},
    max_response_time{YType::uint8, "max-response-time"},
    query_interval{YType::uint16, "query-interval"},
    version{YType::uint8, "version"}
    	,
    tcn(std::make_shared<Native::Ip::Igmp::Snooping::Querier::Tcn>())
	,timer(std::make_shared<Native::Ip::Igmp::Snooping::Querier::Timer>())
{
    tcn->parent = this;
    timer->parent = this;

    yang_name = "querier"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::Snooping::Querier::~Querier()
{
}

bool Native::Ip::Igmp::Snooping::Querier::has_data() const
{
    return address.is_set
	|| max_response_time.is_set
	|| query_interval.is_set
	|| version.is_set
	|| (tcn !=  nullptr && tcn->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Ip::Igmp::Snooping::Querier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (tcn !=  nullptr && tcn->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Querier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Querier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Querier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcn")
    {
        if(tcn == nullptr)
        {
            tcn = std::make_shared<Native::Ip::Igmp::Snooping::Querier::Tcn>();
        }
        return tcn;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Ip::Igmp::Snooping::Querier::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tcn != nullptr)
    {
        children["tcn"] = tcn;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Querier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Querier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Querier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcn" || name == "timer" || name == "address" || name == "max-response-time" || name == "query-interval" || name == "version")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Querier::Tcn::Tcn()
    :
    query(std::make_shared<Native::Ip::Igmp::Snooping::Querier::Tcn::Query>())
{
    query->parent = this;

    yang_name = "tcn"; yang_parent_name = "querier"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::Snooping::Querier::Tcn::~Tcn()
{
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::has_data() const
{
    return (query !=  nullptr && query->has_data());
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::has_operation() const
{
    return is_set(yfilter)
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Querier::Tcn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/querier/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Querier::Tcn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Querier::Tcn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Querier::Tcn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::Snooping::Querier::Tcn::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Querier::Tcn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(query != nullptr)
    {
        children["query"] = query;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Querier::Tcn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Querier::Tcn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Querier::Tcn::Query::Query()
    :
    count{YType::uint8, "count"},
    interval{YType::uint8, "interval"}
{

    yang_name = "query"; yang_parent_name = "tcn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::Snooping::Querier::Tcn::Query::~Query()
{
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::Query::has_data() const
{
    return count.is_set
	|| interval.is_set;
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/querier/tcn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Igmp::Snooping::Querier::Tcn::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Querier::Tcn::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "interval")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Querier::Timer::Timer()
    :
    expiry{YType::uint16, "expiry"}
{

    yang_name = "timer"; yang_parent_name = "querier"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::Snooping::Querier::Timer::~Timer()
{
}

bool Native::Ip::Igmp::Snooping::Querier::Timer::has_data() const
{
    return expiry.is_set;
}

bool Native::Ip::Igmp::Snooping::Querier::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiry.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Querier::Timer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/querier/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Querier::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Querier::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Querier::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Querier::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Igmp::Snooping::Querier::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Querier::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Querier::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expiry")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Tcn::Tcn()
    :
    flood(std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Flood>())
	,query(std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Query>())
{
    flood->parent = this;
    query->parent = this;

    yang_name = "tcn"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::Snooping::Tcn::~Tcn()
{
}

bool Native::Ip::Igmp::Snooping::Tcn::has_data() const
{
    return (flood !=  nullptr && flood->has_data())
	|| (query !=  nullptr && query->has_data());
}

bool Native::Ip::Igmp::Snooping::Tcn::has_operation() const
{
    return is_set(yfilter)
	|| (flood !=  nullptr && flood->has_operation())
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Tcn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Tcn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Tcn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Tcn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flood")
    {
        if(flood == nullptr)
        {
            flood = std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Flood>();
        }
        return flood;
    }

    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Tcn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flood != nullptr)
    {
        children["flood"] = flood;
    }

    if(query != nullptr)
    {
        children["query"] = query;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Tcn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Tcn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Tcn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood" || name == "query")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Tcn::Flood::Flood()
    :
    query(std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Flood::Query>())
{
    query->parent = this;

    yang_name = "flood"; yang_parent_name = "tcn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::Snooping::Tcn::Flood::~Flood()
{
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::has_data() const
{
    return (query !=  nullptr && query->has_data());
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::has_operation() const
{
    return is_set(yfilter)
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Tcn::Flood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/tcn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Tcn::Flood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Tcn::Flood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Tcn::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Flood::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Tcn::Flood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(query != nullptr)
    {
        children["query"] = query;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Tcn::Flood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Tcn::Flood::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Tcn::Flood::Query::Query()
    :
    count{YType::uint8, "count"}
{

    yang_name = "query"; yang_parent_name = "flood"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::Snooping::Tcn::Flood::Query::~Query()
{
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::Query::has_data() const
{
    return count.is_set;
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/tcn/flood/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Tcn::Flood::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Igmp::Snooping::Tcn::Flood::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Tcn::Flood::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Tcn::Flood::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Tcn::Query::Query()
    :
    solicit{YType::empty, "solicit"}
{

    yang_name = "query"; yang_parent_name = "tcn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::Snooping::Tcn::Query::~Query()
{
}

bool Native::Ip::Igmp::Snooping::Tcn::Query::has_data() const
{
    return solicit.is_set;
}

bool Native::Ip::Igmp::Snooping::Tcn::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(solicit.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Tcn::Query::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/tcn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Tcn::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Tcn::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (solicit.is_set || is_set(solicit.yfilter)) leaf_name_data.push_back(solicit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Tcn::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Tcn::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Igmp::Snooping::Tcn::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "solicit")
    {
        solicit = value;
        solicit.value_namespace = name_space;
        solicit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Tcn::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "solicit")
    {
        solicit.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Tcn::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "solicit")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Vlan()
{

    yang_name = "vlan"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::Snooping::Vlan::~Vlan()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Igmp::Snooping::Vlan::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto c = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Range()
    :
    range{YType::uint16, "range"},
    immediate_leave{YType::empty, "immediate-leave"},
    last_member_query_count{YType::uint8, "last-member-query-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    robustness_variable{YType::uint8, "robustness-variable"}
    	,
    mrouter(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter>())
	,querier(nullptr) // presence node
	,static_(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Static>())
{
    mrouter->parent = this;
    static_->parent = this;

    yang_name = "range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::~Range()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::has_data() const
{
    return range.is_set
	|| immediate_leave.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| robustness_variable.is_set
	|| (mrouter !=  nullptr && mrouter->has_data())
	|| (querier !=  nullptr && querier->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(immediate_leave.yfilter)
	|| ydk::is_set(last_member_query_count.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(robustness_variable.yfilter)
	|| (mrouter !=  nullptr && mrouter->has_operation())
	|| (querier !=  nullptr && querier->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/Cisco-IOS-XE-switch:vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (immediate_leave.is_set || is_set(immediate_leave.yfilter)) leaf_name_data.push_back(immediate_leave.get_name_leafdata());
    if (last_member_query_count.is_set || is_set(last_member_query_count.yfilter)) leaf_name_data.push_back(last_member_query_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (robustness_variable.is_set || is_set(robustness_variable.yfilter)) leaf_name_data.push_back(robustness_variable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mrouter")
    {
        if(mrouter == nullptr)
        {
            mrouter = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter>();
        }
        return mrouter;
    }

    if(child_yang_name == "querier")
    {
        if(querier == nullptr)
        {
            querier = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier>();
        }
        return querier;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mrouter != nullptr)
    {
        children["mrouter"] = mrouter;
    }

    if(querier != nullptr)
    {
        children["querier"] = querier;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "immediate-leave")
    {
        immediate_leave = value;
        immediate_leave.value_namespace = name_space;
        immediate_leave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count = value;
        last_member_query_count.value_namespace = name_space;
        last_member_query_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable = value;
        robustness_variable.value_namespace = name_space;
        robustness_variable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "immediate-leave")
    {
        immediate_leave.yfilter = yfilter;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mrouter" || name == "querier" || name == "static" || name == "range" || name == "immediate-leave" || name == "last-member-query-count" || name == "last-member-query-interval" || name == "robustness-variable")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Mrouter()
    :
    interface{YType::str, "interface"}
    	,
    learn(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn>())
{
    learn->parent = this;

    yang_name = "mrouter"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::~Mrouter()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::has_data() const
{
    return interface.is_set
	|| (learn !=  nullptr && learn->has_data());
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (learn !=  nullptr && learn->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrouter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "learn")
    {
        if(learn == nullptr)
        {
            learn = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn>();
        }
        return learn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(learn != nullptr)
    {
        children["learn"] = learn;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "learn" || name == "interface")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::Learn()
    :
    cgmp{YType::empty, "cgmp"},
    pim_dvmrp{YType::empty, "pim-dvmrp"}
{

    yang_name = "learn"; yang_parent_name = "mrouter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::~Learn()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::has_data() const
{
    return cgmp.is_set
	|| pim_dvmrp.is_set;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cgmp.yfilter)
	|| ydk::is_set(pim_dvmrp.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cgmp.is_set || is_set(cgmp.yfilter)) leaf_name_data.push_back(cgmp.get_name_leafdata());
    if (pim_dvmrp.is_set || is_set(pim_dvmrp.yfilter)) leaf_name_data.push_back(pim_dvmrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cgmp")
    {
        cgmp = value;
        cgmp.value_namespace = name_space;
        cgmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim-dvmrp")
    {
        pim_dvmrp = value;
        pim_dvmrp.value_namespace = name_space;
        pim_dvmrp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cgmp")
    {
        cgmp.yfilter = yfilter;
    }
    if(value_path == "pim-dvmrp")
    {
        pim_dvmrp.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Mrouter::Learn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cgmp" || name == "pim-dvmrp")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Querier()
    :
    address{YType::str, "address"},
    max_response_time{YType::uint8, "max-response-time"},
    query_interval{YType::uint16, "query-interval"},
    version{YType::uint8, "version"}
    	,
    tcn(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn>())
	,timer(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer>())
{
    tcn->parent = this;
    timer->parent = this;

    yang_name = "querier"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::~Querier()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::has_data() const
{
    return address.is_set
	|| max_response_time.is_set
	|| query_interval.is_set
	|| version.is_set
	|| (tcn !=  nullptr && tcn->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (tcn !=  nullptr && tcn->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Querier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Querier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcn")
    {
        if(tcn == nullptr)
        {
            tcn = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn>();
        }
        return tcn;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tcn != nullptr)
    {
        children["tcn"] = tcn;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcn" || name == "timer" || name == "address" || name == "max-response-time" || name == "query-interval" || name == "version")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Tcn()
    :
    query(std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query>())
{
    query->parent = this;

    yang_name = "tcn"; yang_parent_name = "querier"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::~Tcn()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::has_data() const
{
    return (query !=  nullptr && query->has_data());
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::has_operation() const
{
    return is_set(yfilter)
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(query != nullptr)
    {
        children["query"] = query;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::Query()
    :
    count{YType::uint8, "count"},
    interval{YType::uint8, "interval"}
{

    yang_name = "query"; yang_parent_name = "tcn"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::~Query()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::has_data() const
{
    return count.is_set
	|| interval.is_set;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Tcn::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "interval")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::Timer()
    :
    expiry{YType::uint16, "expiry"}
{

    yang_name = "timer"; yang_parent_name = "querier"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::~Timer()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::has_data() const
{
    return expiry.is_set;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiry.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Querier::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expiry")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Static::Static()
{

    yang_name = "static"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Static::~Static()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto c = std::make_shared<Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Static::get_children() const
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

    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    interface{YType::str, "interface"}
{

    yang_name = "ipv4"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::~Ipv4()
{
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::has_data() const
{
    return ipv4.is_set
	|| interface.is_set;
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Snooping::Vlan::Range::Static::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "interface")
        return true;
    return false;
}

Native::Ip::Igmp::SsmMap::SsmMap()
    :
    enable{YType::empty, "enable"}
    	,
    query(std::make_shared<Native::Ip::Igmp::SsmMap::Query>())
	,static_(std::make_shared<Native::Ip::Igmp::SsmMap::Static>())
{
    query->parent = this;
    static_->parent = this;

    yang_name = "ssm-map"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::SsmMap::~SsmMap()
{
}

bool Native::Ip::Igmp::SsmMap::has_data() const
{
    return enable.is_set
	|| (query !=  nullptr && query->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Igmp::SsmMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (query !=  nullptr && query->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Igmp::SsmMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::SsmMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::SsmMap::Query>();
        }
        return query;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Igmp::SsmMap::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(query != nullptr)
    {
        children["query"] = query;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Ip::Igmp::SsmMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::SsmMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::SsmMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query" || name == "static" || name == "enable")
        return true;
    return false;
}

Native::Ip::Igmp::SsmMap::Query::Query()
    :
    dns{YType::empty, "dns"}
{

    yang_name = "query"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::SsmMap::Query::~Query()
{
}

bool Native::Ip::Igmp::SsmMap::Query::has_data() const
{
    return dns.is_set;
}

bool Native::Ip::Igmp::SsmMap::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns.yfilter);
}

std::string Native::Ip::Igmp::SsmMap::Query::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/ssm-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::SsmMap::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::SsmMap::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns.is_set || is_set(dns.yfilter)) leaf_name_data.push_back(dns.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::SsmMap::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::SsmMap::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Igmp::SsmMap::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns")
    {
        dns = value;
        dns.value_namespace = name_space;
        dns.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::SsmMap::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns")
    {
        dns.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::SsmMap::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns")
        return true;
    return false;
}

Native::Ip::Igmp::SsmMap::Static::Static()
    :
    acl{YType::str, "acl"},
    source_ip{YType::str, "source-ip"}
{

    yang_name = "static"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::SsmMap::Static::~Static()
{
}

bool Native::Ip::Igmp::SsmMap::Static::has_data() const
{
    return acl.is_set
	|| source_ip.is_set;
}

bool Native::Ip::Igmp::SsmMap::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string Native::Ip::Igmp::SsmMap::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/ssm-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::SsmMap::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::SsmMap::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::SsmMap::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::SsmMap::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Igmp::SsmMap::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::SsmMap::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::SsmMap::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "source-ip")
        return true;
    return false;
}

Native::Ip::Igmp::Vrf::Vrf()
    :
    name{YType::str, "name"}
    	,
    ssm_map(std::make_shared<Native::Ip::Igmp::Vrf::SsmMap>())
{
    ssm_map->parent = this;

    yang_name = "vrf"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Igmp::Vrf::~Vrf()
{
}

bool Native::Ip::Igmp::Vrf::has_data() const
{
    return name.is_set
	|| (ssm_map !=  nullptr && ssm_map->has_data());
}

bool Native::Ip::Igmp::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ssm_map !=  nullptr && ssm_map->has_operation());
}

std::string Native::Ip::Igmp::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Igmp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-map")
    {
        if(ssm_map == nullptr)
        {
            ssm_map = std::make_shared<Native::Ip::Igmp::Vrf::SsmMap>();
        }
        return ssm_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ssm_map != nullptr)
    {
        children["ssm-map"] = ssm_map;
    }

    return children;
}

void Native::Ip::Igmp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-map" || name == "name")
        return true;
    return false;
}

Native::Ip::Igmp::Vrf::SsmMap::SsmMap()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "ssm-map"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Igmp::Vrf::SsmMap::~SsmMap()
{
}

bool Native::Ip::Igmp::Vrf::SsmMap::has_data() const
{
    for (std::size_t index=0; index<static_.size(); index++)
    {
        if(static_[index]->has_data())
            return true;
    }
    return enable.is_set;
}

bool Native::Ip::Igmp::Vrf::SsmMap::has_operation() const
{
    for (std::size_t index=0; index<static_.size(); index++)
    {
        if(static_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Ip::Igmp::Vrf::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Vrf::SsmMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Vrf::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        auto c = std::make_shared<Native::Ip::Igmp::Vrf::SsmMap::Static>();
        c->parent = this;
        static_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Vrf::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : static_)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Igmp::Vrf::SsmMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Vrf::SsmMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Vrf::SsmMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static" || name == "enable")
        return true;
    return false;
}

Native::Ip::Igmp::Vrf::SsmMap::Static::Static()
    :
    srcaddress{YType::str, "srcaddress"},
    aclname{YType::str, "aclname"}
{

    yang_name = "static"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Igmp::Vrf::SsmMap::Static::~Static()
{
}

bool Native::Ip::Igmp::Vrf::SsmMap::Static::has_data() const
{
    return srcaddress.is_set
	|| aclname.is_set;
}

bool Native::Ip::Igmp::Vrf::SsmMap::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddress.yfilter)
	|| ydk::is_set(aclname.yfilter);
}

std::string Native::Ip::Igmp::Vrf::SsmMap::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static" <<"[srcaddress='" <<srcaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Igmp::Vrf::SsmMap::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddress.is_set || is_set(srcaddress.yfilter)) leaf_name_data.push_back(srcaddress.get_name_leafdata());
    if (aclname.is_set || is_set(aclname.yfilter)) leaf_name_data.push_back(aclname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Vrf::SsmMap::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Vrf::SsmMap::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Igmp::Vrf::SsmMap::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcaddress")
    {
        srcaddress = value;
        srcaddress.value_namespace = name_space;
        srcaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aclname")
    {
        aclname = value;
        aclname.value_namespace = name_space;
        aclname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Vrf::SsmMap::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcaddress")
    {
        srcaddress.yfilter = yfilter;
    }
    if(value_path == "aclname")
    {
        aclname.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Vrf::SsmMap::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcaddress" || name == "aclname")
        return true;
    return false;
}

Native::Ip::Msdp::Msdp()
    :
    cache_rejected_sa{YType::uint32, "cache-rejected-sa"},
    cache_sa_state{YType::empty, "cache-sa-state"},
    originator_id{YType::str, "originator-id"},
    rpf{YType::enumeration, "rpf"},
    timer{YType::uint8, "timer"}
    	,
    peer(std::make_shared<Native::Ip::Msdp::Peer>())
	,default_peer(std::make_shared<Native::Ip::Msdp::DefaultPeer>())
	,description(std::make_shared<Native::Ip::Msdp::Description>())
	,filter_sa_request(std::make_shared<Native::Ip::Msdp::FilterSaRequest>())
	,keepalive(std::make_shared<Native::Ip::Msdp::Keepalive>())
	,mesh_group(std::make_shared<Native::Ip::Msdp::MeshGroup>())
	,password(std::make_shared<Native::Ip::Msdp::Password>())
	,redistribute(std::make_shared<Native::Ip::Msdp::Redistribute>())
	,sa_filter(std::make_shared<Native::Ip::Msdp::SaFilter>())
	,sa_limit(std::make_shared<Native::Ip::Msdp::SaLimit>())
	,shutdown(std::make_shared<Native::Ip::Msdp::Shutdown>())
	,ttl_threshold(std::make_shared<Native::Ip::Msdp::TtlThreshold>())
{
    peer->parent = this;
    default_peer->parent = this;
    description->parent = this;
    filter_sa_request->parent = this;
    keepalive->parent = this;
    mesh_group->parent = this;
    password->parent = this;
    redistribute->parent = this;
    sa_filter->parent = this;
    sa_limit->parent = this;
    shutdown->parent = this;
    ttl_threshold->parent = this;

    yang_name = "msdp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::~Msdp()
{
}

bool Native::Ip::Msdp::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return cache_rejected_sa.is_set
	|| cache_sa_state.is_set
	|| originator_id.is_set
	|| rpf.is_set
	|| timer.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (default_peer !=  nullptr && default_peer->has_data())
	|| (description !=  nullptr && description->has_data())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (mesh_group !=  nullptr && mesh_group->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (sa_filter !=  nullptr && sa_filter->has_data())
	|| (sa_limit !=  nullptr && sa_limit->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_data());
}

bool Native::Ip::Msdp::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cache_rejected_sa.yfilter)
	|| ydk::is_set(cache_sa_state.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(rpf.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (default_peer !=  nullptr && default_peer->has_operation())
	|| (description !=  nullptr && description->has_operation())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (mesh_group !=  nullptr && mesh_group->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (sa_filter !=  nullptr && sa_filter->has_operation())
	|| (sa_limit !=  nullptr && sa_limit->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_operation());
}

std::string Native::Ip::Msdp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:msdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_rejected_sa.is_set || is_set(cache_rejected_sa.yfilter)) leaf_name_data.push_back(cache_rejected_sa.get_name_leafdata());
    if (cache_sa_state.is_set || is_set(cache_sa_state.yfilter)) leaf_name_data.push_back(cache_sa_state.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "default-peer")
    {
        if(default_peer == nullptr)
        {
            default_peer = std::make_shared<Native::Ip::Msdp::DefaultPeer>();
        }
        return default_peer;
    }

    if(child_yang_name == "description")
    {
        if(description == nullptr)
        {
            description = std::make_shared<Native::Ip::Msdp::Description>();
        }
        return description;
    }

    if(child_yang_name == "filter-sa-request")
    {
        if(filter_sa_request == nullptr)
        {
            filter_sa_request = std::make_shared<Native::Ip::Msdp::FilterSaRequest>();
        }
        return filter_sa_request;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Ip::Msdp::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "mesh-group")
    {
        if(mesh_group == nullptr)
        {
            mesh_group = std::make_shared<Native::Ip::Msdp::MeshGroup>();
        }
        return mesh_group;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Msdp::Password>();
        }
        return password;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Ip::Msdp::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "sa-filter")
    {
        if(sa_filter == nullptr)
        {
            sa_filter = std::make_shared<Native::Ip::Msdp::SaFilter>();
        }
        return sa_filter;
    }

    if(child_yang_name == "sa-limit")
    {
        if(sa_limit == nullptr)
        {
            sa_limit = std::make_shared<Native::Ip::Msdp::SaLimit>();
        }
        return sa_limit;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Ip::Msdp::Shutdown>();
        }
        return shutdown;
    }

    if(child_yang_name == "ttl-threshold")
    {
        if(ttl_threshold == nullptr)
        {
            ttl_threshold = std::make_shared<Native::Ip::Msdp::TtlThreshold>();
        }
        return ttl_threshold;
    }

    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Ip::Msdp::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(default_peer != nullptr)
    {
        children["default-peer"] = default_peer;
    }

    if(description != nullptr)
    {
        children["description"] = description;
    }

    if(filter_sa_request != nullptr)
    {
        children["filter-sa-request"] = filter_sa_request;
    }

    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    if(mesh_group != nullptr)
    {
        children["mesh-group"] = mesh_group;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(sa_filter != nullptr)
    {
        children["sa-filter"] = sa_filter;
    }

    if(sa_limit != nullptr)
    {
        children["sa-limit"] = sa_limit;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    if(ttl_threshold != nullptr)
    {
        children["ttl-threshold"] = ttl_threshold;
    }

    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Msdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa = value;
        cache_rejected_sa.value_namespace = name_space;
        cache_rejected_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state = value;
        cache_sa_state.value_namespace = name_space;
        cache_sa_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa.yfilter = yfilter;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "default-peer" || name == "description" || name == "filter-sa-request" || name == "keepalive" || name == "mesh-group" || name == "password" || name == "redistribute" || name == "sa-filter" || name == "sa-limit" || name == "shutdown" || name == "ttl-threshold" || name == "vrf" || name == "cache-rejected-sa" || name == "cache-sa-state" || name == "originator-id" || name == "rpf" || name == "timer")
        return true;
    return false;
}

Native::Ip::Msdp::Peer::Peer()
    :
    addr{YType::str, "addr"},
    connect_source{YType::str, "connect-source"},
    remote_as{YType::uint16, "remote-as"}
{

    yang_name = "peer"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Peer::has_data() const
{
    return addr.is_set
	|| connect_source.is_set
	|| remote_as.is_set;
}

bool Native::Ip::Msdp::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(connect_source.yfilter)
	|| ydk::is_set(remote_as.yfilter);
}

std::string Native::Ip::Msdp::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.yfilter)) leaf_name_data.push_back(connect_source.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
        connect_source.value_namespace = name_space;
        connect_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "connect-source")
    {
        connect_source.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "connect-source" || name == "remote-as")
        return true;
    return false;
}

Native::Ip::Msdp::DefaultPeer::DefaultPeer()
    :
    name_addr{YType::str, "name-addr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "default-peer"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::DefaultPeer::~DefaultPeer()
{
}

bool Native::Ip::Msdp::DefaultPeer::has_data() const
{
    return name_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Ip::Msdp::DefaultPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Ip::Msdp::DefaultPeer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::DefaultPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::DefaultPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::DefaultPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::DefaultPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::DefaultPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::DefaultPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::DefaultPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "prefix-list")
        return true;
    return false;
}

Native::Ip::Msdp::Description::Description()
    :
    name_addr{YType::str, "name-addr"},
    description{YType::str, "description"}
{

    yang_name = "description"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::Description::~Description()
{
}

bool Native::Ip::Msdp::Description::has_data() const
{
    return name_addr.is_set
	|| description.is_set;
}

bool Native::Ip::Msdp::Description::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::Ip::Msdp::Description::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Description::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "description";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Description::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Description::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Description::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Description::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Description::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Description::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "description")
        return true;
    return false;
}

Native::Ip::Msdp::FilterSaRequest::FilterSaRequest()
    :
    name_addr{YType::str, "name-addr"},
    list{YType::str, "list"}
{

    yang_name = "filter-sa-request"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::FilterSaRequest::~FilterSaRequest()
{
}

bool Native::Ip::Msdp::FilterSaRequest::has_data() const
{
    return name_addr.is_set
	|| list.is_set;
}

bool Native::Ip::Msdp::FilterSaRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Msdp::FilterSaRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::FilterSaRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-sa-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::FilterSaRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::FilterSaRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::FilterSaRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::FilterSaRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::FilterSaRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::FilterSaRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "list")
        return true;
    return false;
}

Native::Ip::Msdp::Keepalive::Keepalive()
    :
    name_addr{YType::str, "name-addr"},
    keepalive{YType::uint8, "keepalive"},
    max_wait{YType::uint8, "max-wait"}
{

    yang_name = "keepalive"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::Keepalive::~Keepalive()
{
}

bool Native::Ip::Msdp::Keepalive::has_data() const
{
    return name_addr.is_set
	|| keepalive.is_set
	|| max_wait.is_set;
}

bool Native::Ip::Msdp::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(max_wait.yfilter);
}

std::string Native::Ip::Msdp::Keepalive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (max_wait.is_set || is_set(max_wait.yfilter)) leaf_name_data.push_back(max_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-wait")
    {
        max_wait = value;
        max_wait.value_namespace = name_space;
        max_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "max-wait")
    {
        max_wait.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "keepalive" || name == "max-wait")
        return true;
    return false;
}

Native::Ip::Msdp::MeshGroup::MeshGroup()
    :
    name{YType::str, "name"},
    addr{YType::str, "addr"}
{

    yang_name = "mesh-group"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::MeshGroup::~MeshGroup()
{
}

bool Native::Ip::Msdp::MeshGroup::has_data() const
{
    return name.is_set
	|| addr.is_set;
}

bool Native::Ip::Msdp::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string Native::Ip::Msdp::MeshGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::MeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "addr")
        return true;
    return false;
}

Native::Ip::Msdp::Password::Password()
    :
    peer(std::make_shared<Native::Ip::Msdp::Password::Peer>())
{
    peer->parent = this;

    yang_name = "password"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::Password::~Password()
{
}

bool Native::Ip::Msdp::Password::has_data() const
{
    return (peer !=  nullptr && peer->has_data());
}

bool Native::Ip::Msdp::Password::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Ip::Msdp::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Password::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Ip::Msdp::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Msdp::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Msdp::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Ip::Msdp::Password::Peer::Peer()
    :
    addr{YType::str, "addr"},
    encryption{YType::uint8, "encryption"},
    password{YType::str, "password"}
{

    yang_name = "peer"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::Password::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Password::Peer::has_data() const
{
    return addr.is_set
	|| encryption.is_set
	|| password.is_set;
}

bool Native::Ip::Msdp::Password::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Ip::Msdp::Password::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Password::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Password::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Password::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Password::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Password::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Password::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Password::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "encryption" || name == "password")
        return true;
    return false;
}

Native::Ip::Msdp::Redistribute::Redistribute()
    :
    list{YType::str, "list"},
    asn{YType::uint16, "asn"},
    route_map{YType::str, "route-map"}
{

    yang_name = "redistribute"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::Redistribute::~Redistribute()
{
}

bool Native::Ip::Msdp::Redistribute::has_data() const
{
    return list.is_set
	|| asn.is_set
	|| route_map.is_set;
}

bool Native::Ip::Msdp::Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ip::Msdp::Redistribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "asn" || name == "route-map")
        return true;
    return false;
}

Native::Ip::Msdp::SaFilter::SaFilter()
    :
    in(std::make_shared<Native::Ip::Msdp::SaFilter::In>())
	,out(std::make_shared<Native::Ip::Msdp::SaFilter::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "sa-filter"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::SaFilter::~SaFilter()
{
}

bool Native::Ip::Msdp::SaFilter::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Ip::Msdp::SaFilter::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Ip::Msdp::SaFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::SaFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Ip::Msdp::SaFilter::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Ip::Msdp::SaFilter::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::SaFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Ip::Msdp::SaFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Msdp::SaFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Msdp::SaFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Ip::Msdp::SaFilter::In::In()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{

    yang_name = "in"; yang_parent_name = "sa-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::SaFilter::In::~In()
{
}

bool Native::Ip::Msdp::SaFilter::In::has_data() const
{
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::SaFilter::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rp_list.yfilter)
	|| ydk::is_set(rp_route_map.yfilter);
}

std::string Native::Ip::Msdp::SaFilter::In::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/sa-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::SaFilter::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::SaFilter::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::SaFilter::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::SaFilter::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::SaFilter::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
        rp_route_map.value_namespace = name_space;
        rp_route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::SaFilter::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::SaFilter::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "list" || name == "route-map" || name == "rp-list" || name == "rp-route-map")
        return true;
    return false;
}

Native::Ip::Msdp::SaFilter::Out::Out()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{

    yang_name = "out"; yang_parent_name = "sa-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::SaFilter::Out::~Out()
{
}

bool Native::Ip::Msdp::SaFilter::Out::has_data() const
{
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::SaFilter::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rp_list.yfilter)
	|| ydk::is_set(rp_route_map.yfilter);
}

std::string Native::Ip::Msdp::SaFilter::Out::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/sa-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::SaFilter::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::SaFilter::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::SaFilter::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::SaFilter::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::SaFilter::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
        rp_route_map.value_namespace = name_space;
        rp_route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::SaFilter::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::SaFilter::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "list" || name == "route-map" || name == "rp-list" || name == "rp-route-map")
        return true;
    return false;
}

Native::Ip::Msdp::SaLimit::SaLimit()
    :
    name_addr{YType::str, "name-addr"},
    limit{YType::uint32, "limit"}
{

    yang_name = "sa-limit"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::SaLimit::~SaLimit()
{
}

bool Native::Ip::Msdp::SaLimit::has_data() const
{
    return name_addr.is_set
	|| limit.is_set;
}

bool Native::Ip::Msdp::SaLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Ip::Msdp::SaLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::SaLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::SaLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::SaLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::SaLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::SaLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::SaLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::SaLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "limit")
        return true;
    return false;
}

Native::Ip::Msdp::Shutdown::Shutdown()
    :
    name_addr{YType::str, "name-addr"}
{

    yang_name = "shutdown"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::Shutdown::~Shutdown()
{
}

bool Native::Ip::Msdp::Shutdown::has_data() const
{
    return name_addr.is_set;
}

bool Native::Ip::Msdp::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter);
}

std::string Native::Ip::Msdp::Shutdown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr")
        return true;
    return false;
}

Native::Ip::Msdp::TtlThreshold::TtlThreshold()
    :
    name_addr{YType::str, "name-addr"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "ttl-threshold"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::TtlThreshold::~TtlThreshold()
{
}

bool Native::Ip::Msdp::TtlThreshold::has_data() const
{
    return name_addr.is_set
	|| threshold.is_set;
}

bool Native::Ip::Msdp::TtlThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Ip::Msdp::TtlThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::TtlThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::TtlThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::TtlThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::TtlThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::TtlThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::TtlThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::TtlThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "threshold")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Vrf()
    :
    name{YType::str, "name"},
    cache_rejected_sa{YType::uint32, "cache-rejected-sa"},
    cache_sa_state{YType::empty, "cache-sa-state"},
    originator_id{YType::str, "originator-id"},
    rpf{YType::enumeration, "rpf"},
    timer{YType::uint8, "timer"}
    	,
    peer(std::make_shared<Native::Ip::Msdp::Vrf::Peer>())
	,default_peer(std::make_shared<Native::Ip::Msdp::Vrf::DefaultPeer>())
	,description(std::make_shared<Native::Ip::Msdp::Vrf::Description>())
	,filter_sa_request(std::make_shared<Native::Ip::Msdp::Vrf::FilterSaRequest>())
	,keepalive(std::make_shared<Native::Ip::Msdp::Vrf::Keepalive>())
	,mesh_group(std::make_shared<Native::Ip::Msdp::Vrf::MeshGroup>())
	,password(std::make_shared<Native::Ip::Msdp::Vrf::Password>())
	,redistribute(std::make_shared<Native::Ip::Msdp::Vrf::Redistribute>())
	,sa_filter(std::make_shared<Native::Ip::Msdp::Vrf::SaFilter>())
	,sa_limit(std::make_shared<Native::Ip::Msdp::Vrf::SaLimit>())
	,shutdown(std::make_shared<Native::Ip::Msdp::Vrf::Shutdown>())
	,ttl_threshold(std::make_shared<Native::Ip::Msdp::Vrf::TtlThreshold>())
{
    peer->parent = this;
    default_peer->parent = this;
    description->parent = this;
    filter_sa_request->parent = this;
    keepalive->parent = this;
    mesh_group->parent = this;
    password->parent = this;
    redistribute->parent = this;
    sa_filter->parent = this;
    sa_limit->parent = this;
    shutdown->parent = this;
    ttl_threshold->parent = this;

    yang_name = "vrf"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::Vrf::~Vrf()
{
}

bool Native::Ip::Msdp::Vrf::has_data() const
{
    return name.is_set
	|| cache_rejected_sa.is_set
	|| cache_sa_state.is_set
	|| originator_id.is_set
	|| rpf.is_set
	|| timer.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (default_peer !=  nullptr && default_peer->has_data())
	|| (description !=  nullptr && description->has_data())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (mesh_group !=  nullptr && mesh_group->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (sa_filter !=  nullptr && sa_filter->has_data())
	|| (sa_limit !=  nullptr && sa_limit->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_data());
}

bool Native::Ip::Msdp::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cache_rejected_sa.yfilter)
	|| ydk::is_set(cache_sa_state.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(rpf.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (default_peer !=  nullptr && default_peer->has_operation())
	|| (description !=  nullptr && description->has_operation())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (mesh_group !=  nullptr && mesh_group->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (sa_filter !=  nullptr && sa_filter->has_operation())
	|| (sa_limit !=  nullptr && sa_limit->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_operation());
}

std::string Native::Ip::Msdp::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cache_rejected_sa.is_set || is_set(cache_rejected_sa.yfilter)) leaf_name_data.push_back(cache_rejected_sa.get_name_leafdata());
    if (cache_sa_state.is_set || is_set(cache_sa_state.yfilter)) leaf_name_data.push_back(cache_sa_state.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Vrf::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "default-peer")
    {
        if(default_peer == nullptr)
        {
            default_peer = std::make_shared<Native::Ip::Msdp::Vrf::DefaultPeer>();
        }
        return default_peer;
    }

    if(child_yang_name == "description")
    {
        if(description == nullptr)
        {
            description = std::make_shared<Native::Ip::Msdp::Vrf::Description>();
        }
        return description;
    }

    if(child_yang_name == "filter-sa-request")
    {
        if(filter_sa_request == nullptr)
        {
            filter_sa_request = std::make_shared<Native::Ip::Msdp::Vrf::FilterSaRequest>();
        }
        return filter_sa_request;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Ip::Msdp::Vrf::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "mesh-group")
    {
        if(mesh_group == nullptr)
        {
            mesh_group = std::make_shared<Native::Ip::Msdp::Vrf::MeshGroup>();
        }
        return mesh_group;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Msdp::Vrf::Password>();
        }
        return password;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Ip::Msdp::Vrf::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "sa-filter")
    {
        if(sa_filter == nullptr)
        {
            sa_filter = std::make_shared<Native::Ip::Msdp::Vrf::SaFilter>();
        }
        return sa_filter;
    }

    if(child_yang_name == "sa-limit")
    {
        if(sa_limit == nullptr)
        {
            sa_limit = std::make_shared<Native::Ip::Msdp::Vrf::SaLimit>();
        }
        return sa_limit;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Ip::Msdp::Vrf::Shutdown>();
        }
        return shutdown;
    }

    if(child_yang_name == "ttl-threshold")
    {
        if(ttl_threshold == nullptr)
        {
            ttl_threshold = std::make_shared<Native::Ip::Msdp::Vrf::TtlThreshold>();
        }
        return ttl_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(default_peer != nullptr)
    {
        children["default-peer"] = default_peer;
    }

    if(description != nullptr)
    {
        children["description"] = description;
    }

    if(filter_sa_request != nullptr)
    {
        children["filter-sa-request"] = filter_sa_request;
    }

    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    if(mesh_group != nullptr)
    {
        children["mesh-group"] = mesh_group;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(sa_filter != nullptr)
    {
        children["sa-filter"] = sa_filter;
    }

    if(sa_limit != nullptr)
    {
        children["sa-limit"] = sa_limit;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    if(ttl_threshold != nullptr)
    {
        children["ttl-threshold"] = ttl_threshold;
    }

    return children;
}

void Native::Ip::Msdp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa = value;
        cache_rejected_sa.value_namespace = name_space;
        cache_rejected_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state = value;
        cache_sa_state.value_namespace = name_space;
        cache_sa_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa.yfilter = yfilter;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "default-peer" || name == "description" || name == "filter-sa-request" || name == "keepalive" || name == "mesh-group" || name == "password" || name == "redistribute" || name == "sa-filter" || name == "sa-limit" || name == "shutdown" || name == "ttl-threshold" || name == "name" || name == "cache-rejected-sa" || name == "cache-sa-state" || name == "originator-id" || name == "rpf" || name == "timer")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Peer::Peer()
    :
    addr{YType::str, "addr"},
    connect_source{YType::str, "connect-source"},
    remote_as{YType::uint16, "remote-as"}
{

    yang_name = "peer"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Vrf::Peer::has_data() const
{
    return addr.is_set
	|| connect_source.is_set
	|| remote_as.is_set;
}

bool Native::Ip::Msdp::Vrf::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(connect_source.yfilter)
	|| ydk::is_set(remote_as.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.yfilter)) leaf_name_data.push_back(connect_source.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
        connect_source.value_namespace = name_space;
        connect_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "connect-source")
    {
        connect_source.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "connect-source" || name == "remote-as")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::DefaultPeer::DefaultPeer()
    :
    name_addr{YType::str, "name-addr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "default-peer"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::DefaultPeer::~DefaultPeer()
{
}

bool Native::Ip::Msdp::Vrf::DefaultPeer::has_data() const
{
    return name_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Ip::Msdp::Vrf::DefaultPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Ip::Msdp::Vrf::DefaultPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::DefaultPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::DefaultPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::DefaultPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::DefaultPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::DefaultPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::DefaultPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "prefix-list")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Description::Description()
    :
    name_addr{YType::str, "name-addr"},
    description{YType::str, "description"}
{

    yang_name = "description"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::Description::~Description()
{
}

bool Native::Ip::Msdp::Vrf::Description::has_data() const
{
    return name_addr.is_set
	|| description.is_set;
}

bool Native::Ip::Msdp::Vrf::Description::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Description::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "description";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Description::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Description::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Description::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::Description::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Description::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Description::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "description")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::FilterSaRequest::FilterSaRequest()
    :
    name_addr{YType::str, "name-addr"},
    list{YType::str, "list"}
{

    yang_name = "filter-sa-request"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::FilterSaRequest::~FilterSaRequest()
{
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_data() const
{
    return name_addr.is_set
	|| list.is_set;
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Msdp::Vrf::FilterSaRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-sa-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::FilterSaRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::FilterSaRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::FilterSaRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::FilterSaRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::FilterSaRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "list")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Keepalive::Keepalive()
    :
    name_addr{YType::str, "name-addr"},
    keepalive{YType::uint8, "keepalive"},
    max_wait{YType::uint8, "max-wait"}
{

    yang_name = "keepalive"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::Keepalive::~Keepalive()
{
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_data() const
{
    return name_addr.is_set
	|| keepalive.is_set
	|| max_wait.is_set;
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(max_wait.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (max_wait.is_set || is_set(max_wait.yfilter)) leaf_name_data.push_back(max_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-wait")
    {
        max_wait = value;
        max_wait.value_namespace = name_space;
        max_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "max-wait")
    {
        max_wait.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "keepalive" || name == "max-wait")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::MeshGroup::MeshGroup()
    :
    name{YType::str, "name"},
    addr{YType::str, "addr"}
{

    yang_name = "mesh-group"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::MeshGroup::~MeshGroup()
{
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_data() const
{
    return name.is_set
	|| addr.is_set;
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string Native::Ip::Msdp::Vrf::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::MeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "addr")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Password::Password()
    :
    peer(std::make_shared<Native::Ip::Msdp::Vrf::Password::Peer>())
{
    peer->parent = this;

    yang_name = "password"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::Password::~Password()
{
}

bool Native::Ip::Msdp::Vrf::Password::has_data() const
{
    return (peer !=  nullptr && peer->has_data());
}

bool Native::Ip::Msdp::Vrf::Password::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Ip::Msdp::Vrf::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Vrf::Password::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Ip::Msdp::Vrf::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Msdp::Vrf::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Msdp::Vrf::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Password::Peer::Peer()
    :
    addr{YType::str, "addr"},
    encryption{YType::uint8, "encryption"},
    password{YType::str, "password"}
{

    yang_name = "peer"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::Password::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Vrf::Password::Peer::has_data() const
{
    return addr.is_set
	|| encryption.is_set
	|| password.is_set;
}

bool Native::Ip::Msdp::Vrf::Password::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Password::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Password::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Password::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Password::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::Password::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Password::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Password::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "encryption" || name == "password")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Redistribute::Redistribute()
    :
    list{YType::str, "list"},
    asn{YType::uint16, "asn"},
    route_map{YType::str, "route-map"}
{

    yang_name = "redistribute"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::Redistribute::~Redistribute()
{
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_data() const
{
    return list.is_set
	|| asn.is_set
	|| route_map.is_set;
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "asn" || name == "route-map")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::SaFilter::SaFilter()
    :
    in(std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::In>())
	,out(std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "sa-filter"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::SaFilter::~SaFilter()
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Ip::Msdp::Vrf::SaFilter::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Ip::Msdp::Vrf::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::SaFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::SaFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Ip::Msdp::Vrf::SaFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Msdp::Vrf::SaFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::SaFilter::In::In()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{

    yang_name = "in"; yang_parent_name = "sa-filter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::SaFilter::In::~In()
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::In::has_data() const
{
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::Vrf::SaFilter::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rp_list.yfilter)
	|| ydk::is_set(rp_route_map.yfilter);
}

std::string Native::Ip::Msdp::Vrf::SaFilter::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::SaFilter::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::SaFilter::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::SaFilter::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::SaFilter::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
        rp_route_map.value_namespace = name_space;
        rp_route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::SaFilter::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::SaFilter::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "list" || name == "route-map" || name == "rp-list" || name == "rp-route-map")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::SaFilter::Out::Out()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{

    yang_name = "out"; yang_parent_name = "sa-filter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::SaFilter::Out::~Out()
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::Out::has_data() const
{
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::Vrf::SaFilter::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rp_list.yfilter)
	|| ydk::is_set(rp_route_map.yfilter);
}

std::string Native::Ip::Msdp::Vrf::SaFilter::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::SaFilter::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::SaFilter::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::SaFilter::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::SaFilter::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
        rp_route_map.value_namespace = name_space;
        rp_route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::SaFilter::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::SaFilter::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "list" || name == "route-map" || name == "rp-list" || name == "rp-route-map")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::SaLimit::SaLimit()
    :
    name_addr{YType::str, "name-addr"},
    limit{YType::uint32, "limit"}
{

    yang_name = "sa-limit"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::SaLimit::~SaLimit()
{
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_data() const
{
    return name_addr.is_set
	|| limit.is_set;
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Ip::Msdp::Vrf::SaLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::SaLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::SaLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::SaLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::SaLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::SaLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "limit")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Shutdown::Shutdown()
    :
    name_addr{YType::str, "name-addr"}
{

    yang_name = "shutdown"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::Shutdown::~Shutdown()
{
}

bool Native::Ip::Msdp::Vrf::Shutdown::has_data() const
{
    return name_addr.is_set;
}

bool Native::Ip::Msdp::Vrf::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::TtlThreshold::TtlThreshold()
    :
    name_addr{YType::str, "name-addr"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "ttl-threshold"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::TtlThreshold::~TtlThreshold()
{
}

bool Native::Ip::Msdp::Vrf::TtlThreshold::has_data() const
{
    return name_addr.is_set
	|| threshold.is_set;
}

bool Native::Ip::Msdp::Vrf::TtlThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Ip::Msdp::Vrf::TtlThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::TtlThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::TtlThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::TtlThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::TtlThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::TtlThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::TtlThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "threshold")
        return true;
    return false;
}

Native::Ip::McrConf::McrConf()
    :
    multicast_routing{YType::empty, "multicast-routing"}
{

    yang_name = "mcr-conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::McrConf::~McrConf()
{
}

bool Native::Ip::McrConf::has_data() const
{
    return multicast_routing.is_set;
}

bool Native::Ip::McrConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_routing.yfilter);
}

std::string Native::Ip::McrConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::McrConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:mcr-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::McrConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_routing.is_set || is_set(multicast_routing.yfilter)) leaf_name_data.push_back(multicast_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::McrConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::McrConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::McrConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-routing")
    {
        multicast_routing = value;
        multicast_routing.value_namespace = name_space;
        multicast_routing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::McrConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-routing")
    {
        multicast_routing.yfilter = yfilter;
    }
}

bool Native::Ip::McrConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-routing")
        return true;
    return false;
}

Native::Ip::MulticastRouting::MulticastRouting()
    :
    distributed{YType::empty, "distributed"}
{

    yang_name = "multicast-routing"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::MulticastRouting::~MulticastRouting()
{
}

bool Native::Ip::MulticastRouting::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return distributed.is_set;
}

bool Native::Ip::MulticastRouting::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(distributed.yfilter);
}

std::string Native::Ip::MulticastRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::MulticastRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:multicast-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::MulticastRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributed.is_set || is_set(distributed.yfilter)) leaf_name_data.push_back(distributed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::MulticastRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Ip::MulticastRouting::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::MulticastRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::MulticastRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distributed")
    {
        distributed = value;
        distributed.value_namespace = name_space;
        distributed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::MulticastRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distributed")
    {
        distributed.yfilter = yfilter;
    }
}

bool Native::Ip::MulticastRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "distributed")
        return true;
    return false;
}

Native::Ip::MulticastRouting::Vrf::Vrf()
    :
    name{YType::str, "name"},
    distributed{YType::empty, "distributed"}
{

    yang_name = "vrf"; yang_parent_name = "multicast-routing"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::MulticastRouting::Vrf::~Vrf()
{
}

bool Native::Ip::MulticastRouting::Vrf::has_data() const
{
    return name.is_set
	|| distributed.is_set;
}

bool Native::Ip::MulticastRouting::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(distributed.yfilter);
}

std::string Native::Ip::MulticastRouting::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:multicast-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::MulticastRouting::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::MulticastRouting::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (distributed.is_set || is_set(distributed.yfilter)) leaf_name_data.push_back(distributed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::MulticastRouting::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::MulticastRouting::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::MulticastRouting::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distributed")
    {
        distributed = value;
        distributed.value_namespace = name_space;
        distributed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::MulticastRouting::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "distributed")
    {
        distributed.yfilter = yfilter;
    }
}

bool Native::Ip::MulticastRouting::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "distributed")
        return true;
    return false;
}

Native::Ip::Mroute::Mroute()
    :
    source_address{YType::str, "source-address"},
    subnet_mask{YType::str, "subnet-mask"},
    tunnel{YType::int32, "Tunnel"}
{

    yang_name = "mroute"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Mroute::~Mroute()
{
}

bool Native::Ip::Mroute::has_data() const
{
    return source_address.is_set
	|| subnet_mask.is_set
	|| tunnel.is_set;
}

bool Native::Ip::Mroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(subnet_mask.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Ip::Mroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Mroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:mroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Mroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (subnet_mask.is_set || is_set(subnet_mask.yfilter)) leaf_name_data.push_back(subnet_mask.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Mroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Mroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Mroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnet-mask")
    {
        subnet_mask = value;
        subnet_mask.value_namespace = name_space;
        subnet_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Mroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "subnet-mask")
    {
        subnet_mask.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Ip::Mroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "subnet-mask" || name == "Tunnel")
        return true;
    return false;
}

Native::Ip::Nat::Nat()
    :
    inside(std::make_shared<Native::Ip::Nat::Inside>())
	,outside(std::make_shared<Native::Ip::Nat::Outside>())
	,translation(std::make_shared<Native::Ip::Nat::Translation>())
{
    inside->parent = this;
    outside->parent = this;
    translation->parent = this;

    yang_name = "nat"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::~Nat()
{
}

bool Native::Ip::Nat::has_data() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return (inside !=  nullptr && inside->has_data())
	|| (outside !=  nullptr && outside->has_data())
	|| (translation !=  nullptr && translation->has_data());
}

bool Native::Ip::Nat::has_operation() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (inside !=  nullptr && inside->has_operation())
	|| (outside !=  nullptr && outside->has_operation())
	|| (translation !=  nullptr && translation->has_operation());
}

std::string Native::Ip::Nat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nat:nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        auto c = std::make_shared<Native::Ip::Nat::Pool>();
        c->parent = this;
        pool.push_back(c);
        return c;
    }

    if(child_yang_name == "inside")
    {
        if(inside == nullptr)
        {
            inside = std::make_shared<Native::Ip::Nat::Inside>();
        }
        return inside;
    }

    if(child_yang_name == "outside")
    {
        if(outside == nullptr)
        {
            outside = std::make_shared<Native::Ip::Nat::Outside>();
        }
        return outside;
    }

    if(child_yang_name == "translation")
    {
        if(translation == nullptr)
        {
            translation = std::make_shared<Native::Ip::Nat::Translation>();
        }
        return translation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pool)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(inside != nullptr)
    {
        children["inside"] = inside;
    }

    if(outside != nullptr)
    {
        children["outside"] = outside;
    }

    if(translation != nullptr)
    {
        children["translation"] = translation;
    }

    return children;
}

void Native::Ip::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool" || name == "inside" || name == "outside" || name == "translation")
        return true;
    return false;
}

Native::Ip::Nat::Pool::Pool()
    :
    id{YType::str, "id"},
    start_address{YType::str, "start-address"},
    end_address{YType::str, "end-address"},
    netmask{YType::str, "netmask"},
    prefix_length{YType::uint8, "prefix-length"},
    accounting{YType::str, "accounting"},
    arp_ping{YType::empty, "arp-ping"},
    type{YType::enumeration, "type"},
    add_route{YType::empty, "add-route"}
{

    yang_name = "pool"; yang_parent_name = "nat"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Pool::~Pool()
{
}

bool Native::Ip::Nat::Pool::has_data() const
{
    return id.is_set
	|| start_address.is_set
	|| end_address.is_set
	|| netmask.is_set
	|| prefix_length.is_set
	|| accounting.is_set
	|| arp_ping.is_set
	|| type.is_set
	|| add_route.is_set;
}

bool Native::Ip::Nat::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(end_address.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(arp_ping.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(add_route.yfilter);
}

std::string Native::Ip::Nat::Pool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.yfilter)) leaf_name_data.push_back(end_address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (arp_ping.is_set || is_set(arp_ping.yfilter)) leaf_name_data.push_back(arp_ping.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.yfilter)) leaf_name_data.push_back(add_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-address")
    {
        end_address = value;
        end_address.value_namespace = name_space;
        end_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-ping")
    {
        arp_ping = value;
        arp_ping.value_namespace = name_space;
        arp_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-route")
    {
        add_route = value;
        add_route.value_namespace = name_space;
        add_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "end-address")
    {
        end_address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "arp-ping")
    {
        arp_ping.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "add-route")
    {
        add_route.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "start-address" || name == "end-address" || name == "netmask" || name == "prefix-length" || name == "accounting" || name == "arp-ping" || name == "type" || name == "add-route")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Inside()
    :
    source(std::make_shared<Native::Ip::Nat::Inside::Source>())
	,destination(std::make_shared<Native::Ip::Nat::Inside::Destination>())
{
    source->parent = this;
    destination->parent = this;

    yang_name = "inside"; yang_parent_name = "nat"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::~Inside()
{
}

bool Native::Ip::Nat::Inside::has_data() const
{
    return (source !=  nullptr && source->has_data())
	|| (destination !=  nullptr && destination->has_data());
}

bool Native::Ip::Nat::Inside::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Ip::Nat::Inside::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inside";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Nat::Inside::Source>();
        }
        return source;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ip::Nat::Inside::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
}

void Native::Ip::Nat::Inside::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Source()
    :
    static_(std::make_shared<Native::Ip::Nat::Inside::Source::Static>())
{
    static_->parent = this;

    yang_name = "source"; yang_parent_name = "inside"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::~Source()
{
}

bool Native::Ip::Nat::Inside::Source::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Nat::Inside::Source::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Nat::Inside::Source::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : route_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "route-map" || name == "static")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::List()
    :
    id{YType::str, "id"},
    pool{YType::str, "pool"},
    redundancy{YType::uint8, "redundancy"},
    mapping_id{YType::uint32, "mapping-id"},
    no_payload{YType::empty, "no-payload"},
    reversible{YType::empty, "reversible"},
    vrf{YType::str, "vrf"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    overload{YType::empty, "overload"},
    oer{YType::empty, "oer"}
    	,
    interface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface>())
{
    interface->parent = this;

    yang_name = "list"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::List::~List()
{
}

bool Native::Ip::Nat::Inside::Source::List::has_data() const
{
    return id.is_set
	|| pool.is_set
	|| redundancy.is_set
	|| mapping_id.is_set
	|| no_payload.is_set
	|| reversible.is_set
	|| vrf.is_set
	|| match_in_vrf.is_set
	|| overload.is_set
	|| oer.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Ip::Nat::Inside::Source::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(no_payload.yfilter)
	|| ydk::is_set(reversible.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(oer.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.yfilter)) leaf_name_data.push_back(no_payload.get_name_leafdata());
    if (reversible.is_set || is_set(reversible.yfilter)) leaf_name_data.push_back(reversible.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-payload")
    {
        no_payload = value;
        no_payload.value_namespace = name_space;
        no_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversible")
    {
        reversible = value;
        reversible.value_namespace = name_space;
        reversible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "no-payload")
    {
        no_payload.yfilter = yfilter;
    }
    if(value_path == "reversible")
    {
        reversible.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "id" || name == "pool" || name == "redundancy" || name == "mapping-id" || name == "no-payload" || name == "reversible" || name == "vrf" || name == "match-in-vrf" || name == "overload" || name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::List::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Nat::Inside::Source::List::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::RouteMap()
    :
    route_map_name{YType::str, "route-map-name"}
    	,
    pool(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Pool>())
	,interface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface>())
	,oer(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Oer>())
	,overload(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Overload>())
{
    pool->parent = this;
    interface->parent = this;
    oer->parent = this;
    overload->parent = this;

    yang_name = "route-map"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::RouteMap::~RouteMap()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return route_map_name.is_set
	|| (pool !=  nullptr && pool->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (oer !=  nullptr && oer->has_data())
	|| (overload !=  nullptr && overload->has_data());
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_map_name.yfilter)
	|| (pool !=  nullptr && pool->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (oer !=  nullptr && oer->has_operation())
	|| (overload !=  nullptr && overload->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[route-map-name='" <<route_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Pool>();
        }
        return pool;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "oer")
    {
        if(oer == nullptr)
        {
            oer = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Oer>();
        }
        return oer;
    }

    if(child_yang_name == "overload")
    {
        if(overload == nullptr)
        {
            overload = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Overload>();
        }
        return overload;
    }

    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pool != nullptr)
    {
        children["pool"] = pool;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(oer != nullptr)
    {
        children["oer"] = oer;
    }

    if(overload != nullptr)
    {
        children["overload"] = overload;
    }

    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool" || name == "interface" || name == "oer" || name == "overload" || name == "vrf" || name == "route-map-name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Pool::Pool()
    :
    pool_name{YType::str, "pool-name"},
    vrf{YType::str, "vrf"},
    match_in_vrf{YType::empty, "match-in-vrf"}
{

    yang_name = "pool"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Pool::~Pool()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_data() const
{
    return pool_name.is_set
	|| vrf.is_set
	|| match_in_vrf.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool-name" || name == "vrf" || name == "match-in-vrf")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Oer::Oer()
    :
    overload{YType::empty, "overload"},
    extended{YType::empty, "extended"}
{

    yang_name = "oer"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Oer::~Oer()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Oer::has_data() const
{
    return overload.is_set
	|| extended.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Oer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(extended.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Oer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Oer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Oer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overload" || name == "extended")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Overload::Overload()
    :
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"}
{

    yang_name = "overload"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Overload::~Overload()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Overload::has_data() const
{
    return extended.is_set
	|| oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Overload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(oer.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Overload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Overload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Overload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended" || name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    oer(nullptr) // presence node
	,overload(nullptr) // presence node
{

    yang_name = "vrf"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::~Vrf()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (oer !=  nullptr && oer->has_data())
	|| (overload !=  nullptr && overload->has_data());
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (oer !=  nullptr && oer->has_operation())
	|| (overload !=  nullptr && overload->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oer")
    {
        if(oer == nullptr)
        {
            oer = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer>();
        }
        return oer;
    }

    if(child_yang_name == "overload")
    {
        if(overload == nullptr)
        {
            overload = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload>();
        }
        return overload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oer != nullptr)
    {
        children["oer"] = oer;
    }

    if(overload != nullptr)
    {
        children["overload"] = overload;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oer" || name == "overload" || name == "vrf-name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::Oer()
    :
    overload{YType::empty, "overload"}
{

    yang_name = "oer"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::~Oer()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::has_data() const
{
    return overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(overload.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overload")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::Overload()
    :
    oer{YType::empty, "oer"}
{

    yang_name = "overload"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::~Overload()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::has_data() const
{
    return oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oer.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::Static()
{

    yang_name = "static"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::Static::~Static()
{
}

bool Native::Ip::Nat::Inside::Source::Static::has_data() const
{
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nat_static_transport_interface_list.size(); index++)
    {
        if(nat_static_transport_interface_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Source::Static::has_operation() const
{
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nat_static_transport_interface_list.size(); index++)
    {
        if(nat_static_transport_interface_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nat-static-transport-list")
    {
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList>();
        c->parent = this;
        nat_static_transport_list.push_back(c);
        return c;
    }

    if(child_yang_name == "nat-static-transport-interface-list")
    {
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList>();
        c->parent = this;
        nat_static_transport_interface_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nat_static_transport_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : nat_static_transport_interface_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Source::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Source::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nat-static-transport-list" || name == "nat-static-transport-interface-list")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::NatStaticTransportList()
    :
    local_ip{YType::str, "local-ip"},
    global_ip{YType::str, "global-ip"},
    proto{YType::enumeration, "proto"},
    network{YType::empty, "network"},
    local_port{YType::uint16, "local-port"},
    mask{YType::str, "mask"},
    global_port{YType::uint16, "global-port"},
    vrf{YType::str, "vrf"},
    extendable{YType::empty, "extendable"},
    no_alias{YType::empty, "no-alias"},
    no_payload{YType::empty, "no-payload"},
    route_map{YType::str, "route-map"},
    reversible{YType::empty, "reversible"},
    redundancy{YType::str, "redundancy"},
    mapping_id{YType::uint32, "mapping-id"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    forced{YType::empty, "forced"},
    overload{YType::empty, "overload"}
{

    yang_name = "nat-static-transport-list"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::~NatStaticTransportList()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::has_data() const
{
    return local_ip.is_set
	|| global_ip.is_set
	|| proto.is_set
	|| network.is_set
	|| local_port.is_set
	|| mask.is_set
	|| global_port.is_set
	|| vrf.is_set
	|| extendable.is_set
	|| no_alias.is_set
	|| no_payload.is_set
	|| route_map.is_set
	|| reversible.is_set
	|| redundancy.is_set
	|| mapping_id.is_set
	|| match_in_vrf.is_set
	|| forced.is_set
	|| overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(global_ip.yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(global_port.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(extendable.yfilter)
	|| ydk::is_set(no_alias.yfilter)
	|| ydk::is_set(no_payload.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(reversible.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(forced.yfilter)
	|| ydk::is_set(overload.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-list" <<"[local-ip='" <<local_ip <<"']" <<"[global-ip='" <<global_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (global_ip.is_set || is_set(global_ip.yfilter)) leaf_name_data.push_back(global_ip.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (global_port.is_set || is_set(global_port.yfilter)) leaf_name_data.push_back(global_port.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (extendable.is_set || is_set(extendable.yfilter)) leaf_name_data.push_back(extendable.get_name_leafdata());
    if (no_alias.is_set || is_set(no_alias.yfilter)) leaf_name_data.push_back(no_alias.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.yfilter)) leaf_name_data.push_back(no_payload.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (reversible.is_set || is_set(reversible.yfilter)) leaf_name_data.push_back(reversible.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ip")
    {
        local_ip = value;
        local_ip.value_namespace = name_space;
        local_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-ip")
    {
        global_ip = value;
        global_ip.value_namespace = name_space;
        global_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-port")
    {
        global_port = value;
        global_port.value_namespace = name_space;
        global_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extendable")
    {
        extendable = value;
        extendable.value_namespace = name_space;
        extendable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-alias")
    {
        no_alias = value;
        no_alias.value_namespace = name_space;
        no_alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-payload")
    {
        no_payload = value;
        no_payload.value_namespace = name_space;
        no_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversible")
    {
        reversible = value;
        reversible.value_namespace = name_space;
        reversible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
    if(value_path == "global-ip")
    {
        global_ip.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "global-port")
    {
        global_port.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "extendable")
    {
        extendable.yfilter = yfilter;
    }
    if(value_path == "no-alias")
    {
        no_alias.yfilter = yfilter;
    }
    if(value_path == "no-payload")
    {
        no_payload.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "reversible")
    {
        reversible.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-ip" || name == "global-ip" || name == "proto" || name == "network" || name == "local-port" || name == "mask" || name == "global-port" || name == "vrf" || name == "extendable" || name == "no-alias" || name == "no-payload" || name == "route-map" || name == "reversible" || name == "redundancy" || name == "mapping-id" || name == "match-in-vrf" || name == "forced" || name == "overload")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::NatStaticTransportInterfaceList()
    :
    proto{YType::enumeration, "proto"},
    local_ip{YType::str, "local-ip"},
    local_port{YType::uint16, "local-port"},
    global_port{YType::uint16, "global-port"}
    	,
    interface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface>())
{
    interface->parent = this;

    yang_name = "nat-static-transport-interface-list"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::~NatStaticTransportInterfaceList()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::has_data() const
{
    return proto.is_set
	|| local_ip.is_set
	|| local_port.is_set
	|| global_port.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(global_port.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-interface-list" <<"[proto='" <<proto <<"']" <<"[local-ip='" <<local_ip <<"']" <<"[local-port='" <<local_port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (global_port.is_set || is_set(global_port.yfilter)) leaf_name_data.push_back(global_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip")
    {
        local_ip = value;
        local_ip.value_namespace = name_space;
        local_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-port")
    {
        global_port = value;
        global_port.value_namespace = name_space;
        global_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "global-port")
    {
        global_port.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "proto" || name == "local-ip" || name == "local-port" || name == "global-port")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "nat-static-transport-interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Destination::Destination()
{

    yang_name = "destination"; yang_parent_name = "inside"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Destination::~Destination()
{
}

bool Native::Ip::Nat::Inside::Destination::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Destination::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Inside::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto c = std::make_shared<Native::Ip::Nat::Inside::Destination::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nat::Inside::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Destination::List::List()
    :
    id{YType::str, "id"},
    pool{YType::str, "pool"},
    redundancy{YType::uint8, "redundancy"},
    mapping_id{YType::uint32, "mapping-id"}
{

    yang_name = "list"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Destination::List::~List()
{
}

bool Native::Ip::Nat::Inside::Destination::List::has_data() const
{
    return id.is_set
	|| pool.is_set
	|| redundancy.is_set
	|| mapping_id.is_set;
}

bool Native::Ip::Nat::Inside::Destination::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(mapping_id.yfilter);
}

std::string Native::Ip::Nat::Inside::Destination::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/destination/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Destination::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Destination::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Destination::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Destination::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Destination::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Destination::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Destination::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "pool" || name == "redundancy" || name == "mapping-id")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Outside()
    :
    source(std::make_shared<Native::Ip::Nat::Outside::Source>())
{
    source->parent = this;

    yang_name = "outside"; yang_parent_name = "nat"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::~Outside()
{
}

bool Native::Ip::Nat::Outside::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return (source !=  nullptr && source->has_data());
}

bool Native::Ip::Nat::Outside::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Ip::Nat::Outside::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outside";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Nat::Outside::Source>();
        }
        return source;
    }

    if(child_yang_name == "list")
    {
        auto c = std::make_shared<Native::Ip::Nat::Outside::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        auto c = std::make_shared<Native::Ip::Nat::Outside::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    count = 0;
    for (auto const & c : list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : route_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nat::Outside::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Outside::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Outside::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "list" || name == "route-map")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Source::Source()
    :
    static_(std::make_shared<Native::Ip::Nat::Outside::Source::Static>())
{
    static_->parent = this;

    yang_name = "source"; yang_parent_name = "outside"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::Source::~Source()
{
}

bool Native::Ip::Nat::Outside::Source::has_data() const
{
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Nat::Outside::Source::has_operation() const
{
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Nat::Outside::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Nat::Outside::Source::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Ip::Nat::Outside::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Outside::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Outside::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Source::Static::Static()
{

    yang_name = "static"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::Source::Static::~Static()
{
}

bool Native::Ip::Nat::Outside::Source::Static::has_data() const
{
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Outside::Source::Static::has_operation() const
{
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Outside::Source::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::Source::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::Source::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::Source::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nat-static-transport-list")
    {
        auto c = std::make_shared<Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList>();
        c->parent = this;
        nat_static_transport_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::Source::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nat_static_transport_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nat::Outside::Source::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Outside::Source::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Outside::Source::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nat-static-transport-list")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::NatStaticTransportList()
    :
    global_ip{YType::str, "global-ip"},
    local_ip{YType::str, "local-ip"},
    vrf{YType::str, "vrf"},
    extendable{YType::empty, "extendable"},
    no_payload{YType::empty, "no-payload"}
{

    yang_name = "nat-static-transport-list"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::~NatStaticTransportList()
{
}

bool Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::has_data() const
{
    return global_ip.is_set
	|| local_ip.is_set
	|| vrf.is_set
	|| extendable.is_set
	|| no_payload.is_set;
}

bool Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_ip.yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(extendable.yfilter)
	|| ydk::is_set(no_payload.yfilter);
}

std::string Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/source/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-list" <<"[global-ip='" <<global_ip <<"']" <<"[local-ip='" <<local_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_ip.is_set || is_set(global_ip.yfilter)) leaf_name_data.push_back(global_ip.get_name_leafdata());
    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (extendable.is_set || is_set(extendable.yfilter)) leaf_name_data.push_back(extendable.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.yfilter)) leaf_name_data.push_back(no_payload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-ip")
    {
        global_ip = value;
        global_ip.value_namespace = name_space;
        global_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip")
    {
        local_ip = value;
        local_ip.value_namespace = name_space;
        local_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extendable")
    {
        extendable = value;
        extendable.value_namespace = name_space;
        extendable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-payload")
    {
        no_payload = value;
        no_payload.value_namespace = name_space;
        no_payload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-ip")
    {
        global_ip.yfilter = yfilter;
    }
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "extendable")
    {
        extendable.yfilter = yfilter;
    }
    if(value_path == "no-payload")
    {
        no_payload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-ip" || name == "local-ip" || name == "vrf" || name == "extendable" || name == "no-payload")
        return true;
    return false;
}

Native::Ip::Nat::Outside::List::List()
    :
    id{YType::str, "id"},
    pool{YType::str, "pool"},
    mapping_id{YType::uint32, "mapping-id"},
    vrf{YType::str, "vrf"},
    add_route{YType::empty, "add-route"}
{

    yang_name = "list"; yang_parent_name = "outside"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::List::~List()
{
}

bool Native::Ip::Nat::Outside::List::has_data() const
{
    return id.is_set
	|| pool.is_set
	|| mapping_id.is_set
	|| vrf.is_set
	|| add_route.is_set;
}

bool Native::Ip::Nat::Outside::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(add_route.yfilter);
}

std::string Native::Ip::Nat::Outside::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.yfilter)) leaf_name_data.push_back(add_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Outside::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-route")
    {
        add_route = value;
        add_route.value_namespace = name_space;
        add_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Outside::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "add-route")
    {
        add_route.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Outside::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "pool" || name == "mapping-id" || name == "vrf" || name == "add-route")
        return true;
    return false;
}

Native::Ip::Nat::Outside::RouteMap::RouteMap()
    :
    id{YType::str, "id"},
    pool{YType::str, "pool"},
    mapping_id{YType::uint32, "mapping-id"},
    vrf{YType::str, "vrf"},
    add_route{YType::empty, "add-route"}
{

    yang_name = "route-map"; yang_parent_name = "outside"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::RouteMap::~RouteMap()
{
}

bool Native::Ip::Nat::Outside::RouteMap::has_data() const
{
    return id.is_set
	|| pool.is_set
	|| mapping_id.is_set
	|| vrf.is_set
	|| add_route.is_set;
}

bool Native::Ip::Nat::Outside::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(add_route.yfilter);
}

std::string Native::Ip::Nat::Outside::RouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.yfilter)) leaf_name_data.push_back(add_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Outside::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-route")
    {
        add_route = value;
        add_route.value_namespace = name_space;
        add_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Outside::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "add-route")
    {
        add_route.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Outside::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "pool" || name == "mapping-id" || name == "vrf" || name == "add-route")
        return true;
    return false;
}

const Enum::YLeaf Native::Ip::Http::ActiveSessionModules::none {0, "none"};
const Enum::YLeaf Native::Ip::Http::ActiveSessionModules::all {1, "all"};

const Enum::YLeaf Native::Ip::Http::SecureActiveSessionModules::none {0, "none"};
const Enum::YLeaf Native::Ip::Http::SecureActiveSessionModules::all {1, "all"};

const Enum::YLeaf Native::Ip::Icmp::RateLimit::Redirect::host {0, "host"};
const Enum::YLeaf Native::Ip::Icmp::RateLimit::Redirect::subnet {1, "subnet"};

const Enum::YLeaf Native::Ip::Msdp::Rpf::rfc3618 {0, "rfc3618"};

const Enum::YLeaf Native::Ip::Msdp::Vrf::Rpf::rfc3618 {0, "rfc3618"};

const Enum::YLeaf Native::Ip::Nat::Pool::Type::match_host {0, "match-host"};
const Enum::YLeaf Native::Ip::Nat::Pool::Type::rotary {1, "rotary"};

const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::Proto::tcp {0, "tcp"};
const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::Proto::udp {1, "udp"};

const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Proto::tcp {0, "tcp"};
const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Proto::udp {1, "udp"};


}
}

