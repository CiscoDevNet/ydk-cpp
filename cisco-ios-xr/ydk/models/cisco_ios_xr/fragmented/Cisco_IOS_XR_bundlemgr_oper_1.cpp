
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_1.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_bundlemgr_oper {

BundleInformation::EventsMbr::EventsMbr()
    :
    events_mbr_bundles(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles>())
	,events_mbr_iccp_groups(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups>())
	,events_mbr_members(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers>())
{
    events_mbr_bundles->parent = this;
    events_mbr_iccp_groups->parent = this;
    events_mbr_members->parent = this;

    yang_name = "events-mbr"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsMbr::~EventsMbr()
{
}

bool BundleInformation::EventsMbr::has_data() const
{
    return (events_mbr_bundles !=  nullptr && events_mbr_bundles->has_data())
	|| (events_mbr_iccp_groups !=  nullptr && events_mbr_iccp_groups->has_data())
	|| (events_mbr_members !=  nullptr && events_mbr_members->has_data());
}

bool BundleInformation::EventsMbr::has_operation() const
{
    return is_set(yfilter)
	|| (events_mbr_bundles !=  nullptr && events_mbr_bundles->has_operation())
	|| (events_mbr_iccp_groups !=  nullptr && events_mbr_iccp_groups->has_operation())
	|| (events_mbr_members !=  nullptr && events_mbr_members->has_operation());
}

std::string BundleInformation::EventsMbr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsMbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundles")
    {
        if(events_mbr_bundles == nullptr)
        {
            events_mbr_bundles = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles>();
        }
        return events_mbr_bundles;
    }

    if(child_yang_name == "events-mbr-iccp-groups")
    {
        if(events_mbr_iccp_groups == nullptr)
        {
            events_mbr_iccp_groups = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups>();
        }
        return events_mbr_iccp_groups;
    }

    if(child_yang_name == "events-mbr-members")
    {
        if(events_mbr_members == nullptr)
        {
            events_mbr_members = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers>();
        }
        return events_mbr_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_mbr_bundles != nullptr)
    {
        children["events-mbr-bundles"] = events_mbr_bundles;
    }

    if(events_mbr_iccp_groups != nullptr)
    {
        children["events-mbr-iccp-groups"] = events_mbr_iccp_groups;
    }

    if(events_mbr_members != nullptr)
    {
        children["events-mbr-members"] = events_mbr_members;
    }

    return children;
}

void BundleInformation::EventsMbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsMbr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsMbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-bundles" || name == "events-mbr-iccp-groups" || name == "events-mbr-members")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundles()
{

    yang_name = "events-mbr-bundles"; yang_parent_name = "events-mbr"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsMbr::EventsMbrBundles::~EventsMbrBundles()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::has_data() const
{
    for (std::size_t index=0; index<events_mbr_bundle.size(); index++)
    {
        if(events_mbr_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::has_operation() const
{
    for (std::size_t index=0; index<events_mbr_bundle.size(); index++)
    {
        if(events_mbr_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundle")
    {
        for(auto const & c : events_mbr_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle>();
        c->parent = this;
        events_mbr_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_mbr_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsMbr::EventsMbrBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-bundle")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    events_mbr_bundle_children_members(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers>())
	,events_mbr_bundle_descendant(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant>())
{
    events_mbr_bundle_children_members->parent = this;
    events_mbr_bundle_descendant->parent = this;

    yang_name = "events-mbr-bundle"; yang_parent_name = "events-mbr-bundles"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::~EventsMbrBundle()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::has_data() const
{
    return bundle_interface.is_set
	|| (events_mbr_bundle_children_members !=  nullptr && events_mbr_bundle_children_members->has_data())
	|| (events_mbr_bundle_descendant !=  nullptr && events_mbr_bundle_descendant->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (events_mbr_bundle_children_members !=  nullptr && events_mbr_bundle_children_members->has_operation())
	|| (events_mbr_bundle_descendant !=  nullptr && events_mbr_bundle_descendant->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/events-mbr-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundle-children-members")
    {
        if(events_mbr_bundle_children_members == nullptr)
        {
            events_mbr_bundle_children_members = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers>();
        }
        return events_mbr_bundle_children_members;
    }

    if(child_yang_name == "events-mbr-bundle-descendant")
    {
        if(events_mbr_bundle_descendant == nullptr)
        {
            events_mbr_bundle_descendant = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant>();
        }
        return events_mbr_bundle_descendant;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_mbr_bundle_children_members != nullptr)
    {
        children["events-mbr-bundle-children-members"] = events_mbr_bundle_children_members;
    }

    if(events_mbr_bundle_descendant != nullptr)
    {
        children["events-mbr-bundle-descendant"] = events_mbr_bundle_descendant;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-bundle-children-members" || name == "events-mbr-bundle-descendant" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMembers()
{

    yang_name = "events-mbr-bundle-children-members"; yang_parent_name = "events-mbr-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::~EventsMbrBundleChildrenMembers()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::has_data() const
{
    for (std::size_t index=0; index<events_mbr_bundle_children_member.size(); index++)
    {
        if(events_mbr_bundle_children_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::has_operation() const
{
    for (std::size_t index=0; index<events_mbr_bundle_children_member.size(); index++)
    {
        if(events_mbr_bundle_children_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-children-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundle-children-member")
    {
        for(auto const & c : events_mbr_bundle_children_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember>();
        c->parent = this;
        events_mbr_bundle_children_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_mbr_bundle_children_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-bundle-children-member")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::EventsMbrBundleChildrenMember()
    :
    member_interface{YType::str, "member-interface"},
    item_name{YType::str, "item-name"}
{

    yang_name = "events-mbr-bundle-children-member"; yang_parent_name = "events-mbr-bundle-children-members"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::~EventsMbrBundleChildrenMember()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return member_interface.is_set
	|| item_name.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-children-member" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "member-interface" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-mbr-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::~Items()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsMbrBundleDescendant()
{

    yang_name = "events-mbr-bundle-descendant"; yang_parent_name = "events-mbr-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::~EventsMbrBundleDescendant()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::has_data() const
{
    for (std::size_t index=0; index<events_item.size(); index++)
    {
        if(events_item[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::has_operation() const
{
    for (std::size_t index=0; index<events_item.size(); index++)
    {
        if(events_item[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-descendant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-item")
    {
        for(auto const & c : events_item)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem>();
        c->parent = this;
        events_item.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_item)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-item")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::EventsItem()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "events-item"; yang_parent_name = "events-mbr-bundle-descendant"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::~EventsItem()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::~Items()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroups()
{

    yang_name = "events-mbr-iccp-groups"; yang_parent_name = "events-mbr"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::~EventsMbrIccpGroups()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::has_data() const
{
    for (std::size_t index=0; index<events_mbr_iccp_group.size(); index++)
    {
        if(events_mbr_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<events_mbr_iccp_group.size(); index++)
    {
        if(events_mbr_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-iccp-group")
    {
        for(auto const & c : events_mbr_iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup>();
        c->parent = this;
        events_mbr_iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_mbr_iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-iccp-group")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    events_mbr_bundle_children_member_iccp_groups(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups>())
	,events_mbr_bundle_descendant_iccp_group(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup>())
{
    events_mbr_bundle_children_member_iccp_groups->parent = this;
    events_mbr_bundle_descendant_iccp_group->parent = this;

    yang_name = "events-mbr-iccp-group"; yang_parent_name = "events-mbr-iccp-groups"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::~EventsMbrIccpGroup()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (events_mbr_bundle_children_member_iccp_groups !=  nullptr && events_mbr_bundle_children_member_iccp_groups->has_data())
	|| (events_mbr_bundle_descendant_iccp_group !=  nullptr && events_mbr_bundle_descendant_iccp_group->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (events_mbr_bundle_children_member_iccp_groups !=  nullptr && events_mbr_bundle_children_member_iccp_groups->has_operation())
	|| (events_mbr_bundle_descendant_iccp_group !=  nullptr && events_mbr_bundle_descendant_iccp_group->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/events-mbr-iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-iccp-group" <<"[iccp-group='" <<iccp_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundle-children-member-iccp-groups")
    {
        if(events_mbr_bundle_children_member_iccp_groups == nullptr)
        {
            events_mbr_bundle_children_member_iccp_groups = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups>();
        }
        return events_mbr_bundle_children_member_iccp_groups;
    }

    if(child_yang_name == "events-mbr-bundle-descendant-iccp-group")
    {
        if(events_mbr_bundle_descendant_iccp_group == nullptr)
        {
            events_mbr_bundle_descendant_iccp_group = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup>();
        }
        return events_mbr_bundle_descendant_iccp_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_mbr_bundle_children_member_iccp_groups != nullptr)
    {
        children["events-mbr-bundle-children-member-iccp-groups"] = events_mbr_bundle_children_member_iccp_groups;
    }

    if(events_mbr_bundle_descendant_iccp_group != nullptr)
    {
        children["events-mbr-bundle-descendant-iccp-group"] = events_mbr_bundle_descendant_iccp_group;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-bundle-children-member-iccp-groups" || name == "events-mbr-bundle-descendant-iccp-group" || name == "iccp-group")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroups()
{

    yang_name = "events-mbr-bundle-children-member-iccp-groups"; yang_parent_name = "events-mbr-iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::~EventsMbrBundleChildrenMemberIccpGroups()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::has_data() const
{
    for (std::size_t index=0; index<events_mbr_bundle_children_member_iccp_group.size(); index++)
    {
        if(events_mbr_bundle_children_member_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<events_mbr_bundle_children_member_iccp_group.size(); index++)
    {
        if(events_mbr_bundle_children_member_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-children-member-iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundle-children-member-iccp-group")
    {
        for(auto const & c : events_mbr_bundle_children_member_iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup>();
        c->parent = this;
        events_mbr_bundle_children_member_iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_mbr_bundle_children_member_iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-bundle-children-member-iccp-group")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::EventsMbrBundleChildrenMemberIccpGroup()
    :
    member_interface{YType::str, "member-interface"},
    item_name{YType::str, "item-name"}
{

    yang_name = "events-mbr-bundle-children-member-iccp-group"; yang_parent_name = "events-mbr-bundle-children-member-iccp-groups"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::~EventsMbrBundleChildrenMemberIccpGroup()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return member_interface.is_set
	|| item_name.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-children-member-iccp-group" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "member-interface" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-mbr-bundle-children-member-iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::~Items()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsMbrBundleDescendantIccpGroup()
{

    yang_name = "events-mbr-bundle-descendant-iccp-group"; yang_parent_name = "events-mbr-iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::~EventsMbrBundleDescendantIccpGroup()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::has_data() const
{
    for (std::size_t index=0; index<events_item.size(); index++)
    {
        if(events_item[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::has_operation() const
{
    for (std::size_t index=0; index<events_item.size(); index++)
    {
        if(events_item[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-descendant-iccp-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-item")
    {
        for(auto const & c : events_item)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem>();
        c->parent = this;
        events_item.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_item)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-item")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::EventsItem()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "events-item"; yang_parent_name = "events-mbr-bundle-descendant-iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::~EventsItem()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::~Items()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMembers()
{

    yang_name = "events-mbr-members"; yang_parent_name = "events-mbr"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsMbr::EventsMbrMembers::~EventsMbrMembers()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::has_data() const
{
    for (std::size_t index=0; index<events_mbr_member.size(); index++)
    {
        if(events_mbr_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrMembers::has_operation() const
{
    for (std::size_t index=0; index<events_mbr_member.size(); index++)
    {
        if(events_mbr_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-member")
    {
        for(auto const & c : events_mbr_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember>();
        c->parent = this;
        events_mbr_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_mbr_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsMbr::EventsMbrMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-member")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMember()
    :
    member_interface{YType::str, "member-interface"}
    	,
    events_mbr_member_item(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem>())
{
    events_mbr_member_item->parent = this;

    yang_name = "events-mbr-member"; yang_parent_name = "events-mbr-members"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::~EventsMbrMember()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::has_data() const
{
    return member_interface.is_set
	|| (events_mbr_member_item !=  nullptr && events_mbr_member_item->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (events_mbr_member_item !=  nullptr && events_mbr_member_item->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/events-mbr-members/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-member" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-member-item")
    {
        if(events_mbr_member_item == nullptr)
        {
            events_mbr_member_item = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem>();
        }
        return events_mbr_member_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_mbr_member_item != nullptr)
    {
        children["events-mbr-member-item"] = events_mbr_member_item;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-mbr-member-item" || name == "member-interface")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::EventsMbrMemberItem()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "events-mbr-member-item"; yang_parent_name = "events-mbr-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::~EventsMbrMemberItem()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-member-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-mbr-member-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::~Items()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRg()
    :
    events_rg_bundles(std::make_shared<BundleInformation::EventsRg::EventsRgBundles>())
	,events_rg_iccp_groups(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups>())
	,events_rg_members(std::make_shared<BundleInformation::EventsRg::EventsRgMembers>())
{
    events_rg_bundles->parent = this;
    events_rg_iccp_groups->parent = this;
    events_rg_members->parent = this;

    yang_name = "events-rg"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsRg::~EventsRg()
{
}

bool BundleInformation::EventsRg::has_data() const
{
    return (events_rg_bundles !=  nullptr && events_rg_bundles->has_data())
	|| (events_rg_iccp_groups !=  nullptr && events_rg_iccp_groups->has_data())
	|| (events_rg_members !=  nullptr && events_rg_members->has_data());
}

bool BundleInformation::EventsRg::has_operation() const
{
    return is_set(yfilter)
	|| (events_rg_bundles !=  nullptr && events_rg_bundles->has_operation())
	|| (events_rg_iccp_groups !=  nullptr && events_rg_iccp_groups->has_operation())
	|| (events_rg_members !=  nullptr && events_rg_members->has_operation());
}

std::string BundleInformation::EventsRg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsRg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-bundles")
    {
        if(events_rg_bundles == nullptr)
        {
            events_rg_bundles = std::make_shared<BundleInformation::EventsRg::EventsRgBundles>();
        }
        return events_rg_bundles;
    }

    if(child_yang_name == "events-rg-iccp-groups")
    {
        if(events_rg_iccp_groups == nullptr)
        {
            events_rg_iccp_groups = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups>();
        }
        return events_rg_iccp_groups;
    }

    if(child_yang_name == "events-rg-members")
    {
        if(events_rg_members == nullptr)
        {
            events_rg_members = std::make_shared<BundleInformation::EventsRg::EventsRgMembers>();
        }
        return events_rg_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_rg_bundles != nullptr)
    {
        children["events-rg-bundles"] = events_rg_bundles;
    }

    if(events_rg_iccp_groups != nullptr)
    {
        children["events-rg-iccp-groups"] = events_rg_iccp_groups;
    }

    if(events_rg_members != nullptr)
    {
        children["events-rg-members"] = events_rg_members;
    }

    return children;
}

void BundleInformation::EventsRg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsRg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsRg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-rg-bundles" || name == "events-rg-iccp-groups" || name == "events-rg-members")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundles()
{

    yang_name = "events-rg-bundles"; yang_parent_name = "events-rg"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsRg::EventsRgBundles::~EventsRgBundles()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::has_data() const
{
    for (std::size_t index=0; index<events_rg_bundle.size(); index++)
    {
        if(events_rg_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsRg::EventsRgBundles::has_operation() const
{
    for (std::size_t index=0; index<events_rg_bundle.size(); index++)
    {
        if(events_rg_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsRg::EventsRgBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsRg::EventsRgBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-bundle")
    {
        for(auto const & c : events_rg_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle>();
        c->parent = this;
        events_rg_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_rg_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsRg::EventsRgBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsRg::EventsRgBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-rg-bundle")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    events_rg_bundle_ancestor(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor>())
{
    events_rg_bundle_ancestor->parent = this;

    yang_name = "events-rg-bundle"; yang_parent_name = "events-rg-bundles"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::~EventsRgBundle()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::has_data() const
{
    return bundle_interface.is_set
	|| (events_rg_bundle_ancestor !=  nullptr && events_rg_bundle_ancestor->has_data());
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (events_rg_bundle_ancestor !=  nullptr && events_rg_bundle_ancestor->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/events-rg-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-bundle-ancestor")
    {
        if(events_rg_bundle_ancestor == nullptr)
        {
            events_rg_bundle_ancestor = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor>();
        }
        return events_rg_bundle_ancestor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_rg_bundle_ancestor != nullptr)
    {
        children["events-rg-bundle-ancestor"] = events_rg_bundle_ancestor;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-rg-bundle-ancestor" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::EventsRgBundleAncestor()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "events-rg-bundle-ancestor"; yang_parent_name = "events-rg-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::~EventsRgBundleAncestor()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-bundle-ancestor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-rg-bundle-ancestor"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::~Items()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroups()
{

    yang_name = "events-rg-iccp-groups"; yang_parent_name = "events-rg"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::~EventsRgIccpGroups()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::has_data() const
{
    for (std::size_t index=0; index<events_rg_iccp_group.size(); index++)
    {
        if(events_rg_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<events_rg_iccp_group.size(); index++)
    {
        if(events_rg_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-iccp-group")
    {
        for(auto const & c : events_rg_iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup>();
        c->parent = this;
        events_rg_iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_rg_iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsRg::EventsRgIccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-rg-iccp-group")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    events_rg_bundle_item_iccp_group(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup>())
{
    events_rg_bundle_item_iccp_group->parent = this;

    yang_name = "events-rg-iccp-group"; yang_parent_name = "events-rg-iccp-groups"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::~EventsRgIccpGroup()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (events_rg_bundle_item_iccp_group !=  nullptr && events_rg_bundle_item_iccp_group->has_data());
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (events_rg_bundle_item_iccp_group !=  nullptr && events_rg_bundle_item_iccp_group->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/events-rg-iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-iccp-group" <<"[iccp-group='" <<iccp_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-bundle-item-iccp-group")
    {
        if(events_rg_bundle_item_iccp_group == nullptr)
        {
            events_rg_bundle_item_iccp_group = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup>();
        }
        return events_rg_bundle_item_iccp_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_rg_bundle_item_iccp_group != nullptr)
    {
        children["events-rg-bundle-item-iccp-group"] = events_rg_bundle_item_iccp_group;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-rg-bundle-item-iccp-group" || name == "iccp-group")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::EventsRgBundleItemIccpGroup()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "events-rg-bundle-item-iccp-group"; yang_parent_name = "events-rg-iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::~EventsRgBundleItemIccpGroup()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-bundle-item-iccp-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-rg-bundle-item-iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::~Items()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMembers()
{

    yang_name = "events-rg-members"; yang_parent_name = "events-rg"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsRg::EventsRgMembers::~EventsRgMembers()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::has_data() const
{
    for (std::size_t index=0; index<events_rg_member.size(); index++)
    {
        if(events_rg_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsRg::EventsRgMembers::has_operation() const
{
    for (std::size_t index=0; index<events_rg_member.size(); index++)
    {
        if(events_rg_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsRg::EventsRgMembers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsRg::EventsRgMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-member")
    {
        for(auto const & c : events_rg_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember>();
        c->parent = this;
        events_rg_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_rg_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsRg::EventsRgMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsRg::EventsRgMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-rg-member")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMember()
    :
    member_interface{YType::str, "member-interface"}
    	,
    events_rg_member_ancestor(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor>())
{
    events_rg_member_ancestor->parent = this;

    yang_name = "events-rg-member"; yang_parent_name = "events-rg-members"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::~EventsRgMember()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::has_data() const
{
    return member_interface.is_set
	|| (events_rg_member_ancestor !=  nullptr && events_rg_member_ancestor->has_data());
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (events_rg_member_ancestor !=  nullptr && events_rg_member_ancestor->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-rg/events-rg-members/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-member" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-rg-member-ancestor")
    {
        if(events_rg_member_ancestor == nullptr)
        {
            events_rg_member_ancestor = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor>();
        }
        return events_rg_member_ancestor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_rg_member_ancestor != nullptr)
    {
        children["events-rg-member-ancestor"] = events_rg_member_ancestor;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-rg-member-ancestor" || name == "member-interface")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::EventsRgMemberAncestor()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "events-rg-member-ancestor"; yang_parent_name = "events-rg-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::~EventsRgMemberAncestor()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-rg-member-ancestor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-rg-member-ancestor"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::~Items()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
        bundle_event_type.value_namespace = name_space;
        bundle_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
        member_event_type.value_namespace = name_space;
        member_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-event-type")
    {
        member_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
        rg_event_type.value_namespace = name_space;
        rg_event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-data")
    {
        no_data = value;
        no_data.value_namespace = name_space;
        no_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-data")
    {
        string_data = value;
        string_data.value_namespace = name_space;
        string_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "no-data")
    {
        no_data.yfilter = yfilter;
    }
    if(value_path == "string-data")
    {
        string_data.yfilter = yfilter;
    }
}

bool BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Lacp::Lacp()
    :
    lacp_bundles(std::make_shared<BundleInformation::Lacp::LacpBundles>())
	,lacp_members(std::make_shared<BundleInformation::Lacp::LacpMembers>())
{
    lacp_bundles->parent = this;
    lacp_members->parent = this;

    yang_name = "lacp"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Lacp::~Lacp()
{
}

bool BundleInformation::Lacp::has_data() const
{
    return (lacp_bundles !=  nullptr && lacp_bundles->has_data())
	|| (lacp_members !=  nullptr && lacp_members->has_data());
}

bool BundleInformation::Lacp::has_operation() const
{
    return is_set(yfilter)
	|| (lacp_bundles !=  nullptr && lacp_bundles->has_operation())
	|| (lacp_members !=  nullptr && lacp_members->has_operation());
}

std::string BundleInformation::Lacp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lacp-bundles")
    {
        if(lacp_bundles == nullptr)
        {
            lacp_bundles = std::make_shared<BundleInformation::Lacp::LacpBundles>();
        }
        return lacp_bundles;
    }

    if(child_yang_name == "lacp-members")
    {
        if(lacp_members == nullptr)
        {
            lacp_members = std::make_shared<BundleInformation::Lacp::LacpMembers>();
        }
        return lacp_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lacp_bundles != nullptr)
    {
        children["lacp-bundles"] = lacp_bundles;
    }

    if(lacp_members != nullptr)
    {
        children["lacp-members"] = lacp_members;
    }

    return children;
}

void BundleInformation::Lacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Lacp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Lacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacp-bundles" || name == "lacp-members")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundles()
{

    yang_name = "lacp-bundles"; yang_parent_name = "lacp"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Lacp::LacpBundles::~LacpBundles()
{
}

bool BundleInformation::Lacp::LacpBundles::has_data() const
{
    for (std::size_t index=0; index<lacp_bundle.size(); index++)
    {
        if(lacp_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Lacp::LacpBundles::has_operation() const
{
    for (std::size_t index=0; index<lacp_bundle.size(); index++)
    {
        if(lacp_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/lacp/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Lacp::LacpBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lacp-bundle")
    {
        for(auto const & c : lacp_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle>();
        c->parent = this;
        lacp_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lacp_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Lacp::LacpBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Lacp::LacpBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacp-bundle")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    lacp_bundle_children_members(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers>())
	,lacp_bundle_descendant(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant>())
	,lacp_bundle_item(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem>())
{
    lacp_bundle_children_members->parent = this;
    lacp_bundle_descendant->parent = this;
    lacp_bundle_item->parent = this;

    yang_name = "lacp-bundle"; yang_parent_name = "lacp-bundles"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::~LacpBundle()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::has_data() const
{
    return bundle_interface.is_set
	|| (lacp_bundle_children_members !=  nullptr && lacp_bundle_children_members->has_data())
	|| (lacp_bundle_descendant !=  nullptr && lacp_bundle_descendant->has_data())
	|| (lacp_bundle_item !=  nullptr && lacp_bundle_item->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (lacp_bundle_children_members !=  nullptr && lacp_bundle_children_members->has_operation())
	|| (lacp_bundle_descendant !=  nullptr && lacp_bundle_descendant->has_operation())
	|| (lacp_bundle_item !=  nullptr && lacp_bundle_item->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/lacp/lacp-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lacp-bundle-children-members")
    {
        if(lacp_bundle_children_members == nullptr)
        {
            lacp_bundle_children_members = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers>();
        }
        return lacp_bundle_children_members;
    }

    if(child_yang_name == "lacp-bundle-descendant")
    {
        if(lacp_bundle_descendant == nullptr)
        {
            lacp_bundle_descendant = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant>();
        }
        return lacp_bundle_descendant;
    }

    if(child_yang_name == "lacp-bundle-item")
    {
        if(lacp_bundle_item == nullptr)
        {
            lacp_bundle_item = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem>();
        }
        return lacp_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lacp_bundle_children_members != nullptr)
    {
        children["lacp-bundle-children-members"] = lacp_bundle_children_members;
    }

    if(lacp_bundle_descendant != nullptr)
    {
        children["lacp-bundle-descendant"] = lacp_bundle_descendant;
    }

    if(lacp_bundle_item != nullptr)
    {
        children["lacp-bundle-item"] = lacp_bundle_item;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacp-bundle-children-members" || name == "lacp-bundle-descendant" || name == "lacp-bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMembers()
{

    yang_name = "lacp-bundle-children-members"; yang_parent_name = "lacp-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::~LacpBundleChildrenMembers()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::has_data() const
{
    for (std::size_t index=0; index<lacp_bundle_children_member.size(); index++)
    {
        if(lacp_bundle_children_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::has_operation() const
{
    for (std::size_t index=0; index<lacp_bundle_children_member.size(); index++)
    {
        if(lacp_bundle_children_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundle-children-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lacp-bundle-children-member")
    {
        for(auto const & c : lacp_bundle_children_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember>();
        c->parent = this;
        lacp_bundle_children_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lacp_bundle_children_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacp-bundle-children-member")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::LacpBundleChildrenMember()
    :
    member_interface{YType::str, "member-interface"},
    actor_churn_state{YType::enumeration, "actor-churn-state"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    mux_state{YType::enumeration, "mux-state"},
    partner_churn_state{YType::enumeration, "partner-churn-state"},
    period_state{YType::enumeration, "period-state"},
    receive_machine_state{YType::enumeration, "receive-machine-state"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    selection_state{YType::enumeration, "selection-state"}
    	,
    actor_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo>())
	,additional_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo>())
	,partner_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo>())
{
    actor_info->parent = this;
    additional_info->parent = this;
    partner_info->parent = this;

    yang_name = "lacp-bundle-children-member"; yang_parent_name = "lacp-bundle-children-members"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::~LacpBundleChildrenMember()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::has_data() const
{
    return member_interface.is_set
	|| actor_churn_state.is_set
	|| attached_aggregator_id.is_set
	|| iccp_group_id.is_set
	|| mux_state.is_set
	|| partner_churn_state.is_set
	|| period_state.is_set
	|| receive_machine_state.is_set
	|| selected_aggregator_id.is_set
	|| selection_state.is_set
	|| (actor_info !=  nullptr && actor_info->has_data())
	|| (additional_info !=  nullptr && additional_info->has_data())
	|| (partner_info !=  nullptr && partner_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(actor_churn_state.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(partner_churn_state.yfilter)
	|| ydk::is_set(period_state.yfilter)
	|| ydk::is_set(receive_machine_state.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter)
	|| ydk::is_set(selection_state.yfilter)
	|| (actor_info !=  nullptr && actor_info->has_operation())
	|| (additional_info !=  nullptr && additional_info->has_operation())
	|| (partner_info !=  nullptr && partner_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundle-children-member" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (actor_churn_state.is_set || is_set(actor_churn_state.yfilter)) leaf_name_data.push_back(actor_churn_state.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (partner_churn_state.is_set || is_set(partner_churn_state.yfilter)) leaf_name_data.push_back(partner_churn_state.get_name_leafdata());
    if (period_state.is_set || is_set(period_state.yfilter)) leaf_name_data.push_back(period_state.get_name_leafdata());
    if (receive_machine_state.is_set || is_set(receive_machine_state.yfilter)) leaf_name_data.push_back(receive_machine_state.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (selection_state.is_set || is_set(selection_state.yfilter)) leaf_name_data.push_back(selection_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-info")
    {
        if(actor_info == nullptr)
        {
            actor_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo>();
        }
        return actor_info;
    }

    if(child_yang_name == "additional-info")
    {
        if(additional_info == nullptr)
        {
            additional_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo>();
        }
        return additional_info;
    }

    if(child_yang_name == "partner-info")
    {
        if(partner_info == nullptr)
        {
            partner_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo>();
        }
        return partner_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actor_info != nullptr)
    {
        children["actor-info"] = actor_info;
    }

    if(additional_info != nullptr)
    {
        children["additional-info"] = additional_info;
    }

    if(partner_info != nullptr)
    {
        children["partner-info"] = partner_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-churn-state")
    {
        actor_churn_state = value;
        actor_churn_state.value_namespace = name_space;
        actor_churn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state = value;
        partner_churn_state.value_namespace = name_space;
        partner_churn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-state")
    {
        period_state = value;
        period_state.value_namespace = name_space;
        period_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state = value;
        receive_machine_state.value_namespace = name_space;
        receive_machine_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-state")
    {
        selection_state = value;
        selection_state.value_namespace = name_space;
        selection_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "actor-churn-state")
    {
        actor_churn_state.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state.yfilter = yfilter;
    }
    if(value_path == "period-state")
    {
        period_state.yfilter = yfilter;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "selection-state")
    {
        selection_state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-info" || name == "additional-info" || name == "partner-info" || name == "member-interface" || name == "actor-churn-state" || name == "attached-aggregator-id" || name == "iccp-group-id" || name == "mux-state" || name == "partner-churn-state" || name == "period-state" || name == "receive-machine-state" || name == "selected-aggregator-id" || name == "selection-state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::ActorInfo()
    :
    tx_period{YType::uint32, "tx-period"}
    	,
    port_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "actor-info"; yang_parent_name = "lacp-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::~ActorInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::has_data() const
{
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_info != nullptr)
    {
        children["port-info"] = port_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-info" || name == "tx-period")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
    	,
    port(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port>())
	,system(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System>())
{
    port->parent = this;
    system->parent = this;

    yang_name = "port-info"; yang_parent_name = "actor-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::has_data() const
{
    return key.is_set
	|| state.is_set
	|| (port !=  nullptr && port->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (port !=  nullptr && port->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port>();
        }
        return port;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "system" || name == "key" || name == "state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::Port()
    :
    link_number{YType::uint16, "link-number"},
    link_priority{YType::uint16, "link-priority"}
{

    yang_name = "port"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::has_data() const
{
    return link_number.is_set
	|| link_priority.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_number.yfilter)
	|| ydk::is_set(link_priority.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_number.is_set || is_set(link_number.yfilter)) leaf_name_data.push_back(link_number.get_name_leafdata());
    if (link_priority.is_set || is_set(link_priority.yfilter)) leaf_name_data.push_back(link_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-number")
    {
        link_number = value;
        link_number.value_namespace = name_space;
        link_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-priority")
    {
        link_priority = value;
        link_priority.value_namespace = name_space;
        link_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-number")
    {
        link_number.yfilter = yfilter;
    }
    if(value_path == "link-priority")
    {
        link_priority.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-number" || name == "link-priority")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::AdditionalInfo()
    :
    mbr_type{YType::enumeration, "mbr-type"}
    	,
    foreign(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign>())
	,local(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local>())
{
    foreign->parent = this;
    local->parent = this;

    yang_name = "additional-info"; yang_parent_name = "lacp-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::~AdditionalInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::has_data() const
{
    return mbr_type.is_set
	|| (foreign !=  nullptr && foreign->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mbr_type.yfilter)
	|| (foreign !=  nullptr && foreign->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mbr_type.is_set || is_set(mbr_type.yfilter)) leaf_name_data.push_back(mbr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "foreign")
    {
        if(foreign == nullptr)
        {
            foreign = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign>();
        }
        return foreign;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(foreign != nullptr)
    {
        children["foreign"] = foreign;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mbr-type")
    {
        mbr_type = value;
        mbr_type.value_namespace = name_space;
        mbr_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mbr-type")
    {
        mbr_type.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign" || name == "local" || name == "mbr-type")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::Foreign()
    :
    member_name{YType::str, "member-name"},
    peer_address{YType::str, "peer-address"}
{

    yang_name = "foreign"; yang_parent_name = "additional-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::~Foreign()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::has_data() const
{
    return member_name.is_set
	|| peer_address.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| ydk::is_set(peer_address.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-name" || name == "peer-address")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::Local()
    :
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "local"; yang_parent_name = "additional-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::~Local()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::has_data() const
{
    return interface_handle.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PartnerInfo()
    :
    tx_period{YType::uint32, "tx-period"}
    	,
    port_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "partner-info"; yang_parent_name = "lacp-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::~PartnerInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::has_data() const
{
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partner-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_info != nullptr)
    {
        children["port-info"] = port_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-info" || name == "tx-period")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
    	,
    port(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port>())
	,system(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System>())
{
    port->parent = this;
    system->parent = this;

    yang_name = "port-info"; yang_parent_name = "partner-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::has_data() const
{
    return key.is_set
	|| state.is_set
	|| (port !=  nullptr && port->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (port !=  nullptr && port->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port>();
        }
        return port;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "system" || name == "key" || name == "state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::Port()
    :
    link_number{YType::uint16, "link-number"},
    link_priority{YType::uint16, "link-priority"}
{

    yang_name = "port"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::has_data() const
{
    return link_number.is_set
	|| link_priority.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_number.yfilter)
	|| ydk::is_set(link_priority.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_number.is_set || is_set(link_number.yfilter)) leaf_name_data.push_back(link_number.get_name_leafdata());
    if (link_priority.is_set || is_set(link_priority.yfilter)) leaf_name_data.push_back(link_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-number")
    {
        link_number = value;
        link_number.value_namespace = name_space;
        link_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-priority")
    {
        link_priority = value;
        link_priority.value_namespace = name_space;
        link_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-number")
    {
        link_number.yfilter = yfilter;
    }
    if(value_path == "link-priority")
    {
        link_priority.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-number" || name == "link-priority")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::LacpBundleDescendant()
    :
    bundle_data(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData>())
{
    bundle_data->parent = this;

    yang_name = "lacp-bundle-descendant"; yang_parent_name = "lacp-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::~LacpBundleDescendant()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundle-descendant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        if(bundle_data == nullptr)
        {
            bundle_data = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData>();
        }
        return bundle_data;
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData>();
        c->parent = this;
        member_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_data != nullptr)
    {
        children["bundle-data"] = bundle_data;
    }

    for (auto const & c : member_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "member-data")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"}
    	,
    actor_bundle_data(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData>())
	,bundle_system_id(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId>())
{
    actor_bundle_data->parent = this;
    bundle_system_id->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "lacp-bundle-descendant"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::~BundleData()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::has_data() const
{
    return actor_operational_key.is_set
	|| partner_operational_key.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_data())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_operation())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-bundle-data")
    {
        if(actor_bundle_data == nullptr)
        {
            actor_bundle_data = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData>();
        }
        return actor_bundle_data;
    }

    if(child_yang_name == "bundle-system-id")
    {
        if(bundle_system_id == nullptr)
        {
            bundle_system_id = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId>();
        }
        return bundle_system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actor_bundle_data != nullptr)
    {
        children["actor-bundle-data"] = actor_bundle_data;
    }

    if(bundle_system_id != nullptr)
    {
        children["bundle-system-id"] = bundle_system_id;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
        partner_system_mac_address.value_namespace = name_space;
        partner_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
        partner_system_priority.value_namespace = name_space;
        partner_system_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-bundle-data" || name == "bundle-system-id" || name == "actor-operational-key" || name == "partner-operational-key" || name == "partner-system-mac-address" || name == "partner-system-priority")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::ActorBundleData()
    :
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    active_member_count{YType::uint16, "active-member-count"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    bundle_interface_name{YType::str, "bundle-interface-name"},
    bundle_status{YType::enumeration, "bundle-status"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    inter_chassis{YType::boolean, "inter-chassis"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    is_active{YType::boolean, "is-active"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    lacp_status{YType::enumeration, "lacp-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    primary_member{YType::str, "primary-member"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"},
    standby_member_count{YType::uint16, "standby-member-count"},
    suppression_timer{YType::uint16, "suppression-timer"},
    switchover_type{YType::enumeration, "switchover-type"},
    wait_while_timer{YType::uint16, "wait-while-timer"}
    	,
    mac_address(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "actor-bundle-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::~ActorBundleData()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::has_data() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return active_foreign_member_count.is_set
	|| active_member_count.is_set
	|| available_bandwidth.is_set
	|| bundle_interface_name.is_set
	|| bundle_status.is_set
	|| cisco_extensions.is_set
	|| collector_max_delay.is_set
	|| configured_bandwidth.is_set
	|| configured_foreign_member_count.is_set
	|| configured_member_count.is_set
	|| effective_bandwidth.is_set
	|| iccp_group_id.is_set
	|| inter_chassis.is_set
	|| ipv4bfd_status.is_set
	|| ipv6bfd_status.is_set
	|| is_active.is_set
	|| lacp_nonrevertive.is_set
	|| lacp_status.is_set
	|| link_order_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| maximize_threshold_value_band_width.is_set
	|| maximize_threshold_value_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_active_links.is_set
	|| minimum_bandwidth.is_set
	|| mlacp_mode.is_set
	|| mlacp_status.is_set
	|| primary_member.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| standby_member_count.is_set
	|| suppression_timer.is_set
	|| switchover_type.is_set
	|| wait_while_timer.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(active_foreign_member_count.yfilter)
	|| ydk::is_set(active_member_count.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(bundle_interface_name.yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(cisco_extensions.yfilter)
	|| ydk::is_set(collector_max_delay.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(configured_foreign_member_count.yfilter)
	|| ydk::is_set(configured_member_count.yfilter)
	|| ydk::is_set(effective_bandwidth.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(inter_chassis.yfilter)
	|| ydk::is_set(ipv4bfd_status.yfilter)
	|| ydk::is_set(ipv6bfd_status.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(lacp_nonrevertive.yfilter)
	|| ydk::is_set(lacp_status.yfilter)
	|| ydk::is_set(link_order_status.yfilter)
	|| ydk::is_set(load_balance_hash_type.yfilter)
	|| ydk::is_set(load_balance_locality_threshold.yfilter)
	|| ydk::is_set(mac_source.yfilter)
	|| ydk::is_set(mac_source_member.yfilter)
	|| ydk::is_set(maximize_threshold_value_band_width.yfilter)
	|| ydk::is_set(maximize_threshold_value_links.yfilter)
	|| ydk::is_set(maximum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links_source.yfilter)
	|| ydk::is_set(minimum_active_links.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(mlacp_mode.yfilter)
	|| ydk::is_set(mlacp_status.yfilter)
	|| ydk::is_set(primary_member.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| ydk::is_set(standby_member_count.yfilter)
	|| ydk::is_set(suppression_timer.yfilter)
	|| ydk::is_set(switchover_type.yfilter)
	|| ydk::is_set(wait_while_timer.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.yfilter)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.yfilter)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (bundle_interface_name.is_set || is_set(bundle_interface_name.yfilter)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.yfilter)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.yfilter)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.yfilter)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.yfilter)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.yfilter)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.yfilter)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.yfilter)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.yfilter)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.yfilter)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.yfilter)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.yfilter)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.yfilter)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.yfilter)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.yfilter)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.yfilter)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.yfilter)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.yfilter)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.yfilter)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.yfilter)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.yfilter)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.yfilter)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.yfilter)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.yfilter)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.yfilter)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.yfilter)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.yfilter)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.yfilter)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-config")
    {
        for(auto const & c : bfd_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(c);
        return c;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_config)
    {
        children[c->get_segment_path()] = c;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
        active_foreign_member_count.value_namespace = name_space;
        active_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
        active_member_count.value_namespace = name_space;
        active_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
        bundle_interface_name.value_namespace = name_space;
        bundle_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
        cisco_extensions.value_namespace = name_space;
        cisco_extensions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
        collector_max_delay.value_namespace = name_space;
        collector_max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
        configured_foreign_member_count.value_namespace = name_space;
        configured_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
        configured_member_count.value_namespace = name_space;
        configured_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
        effective_bandwidth.value_namespace = name_space;
        effective_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
        inter_chassis.value_namespace = name_space;
        inter_chassis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
        ipv4bfd_status.value_namespace = name_space;
        ipv4bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
        ipv6bfd_status.value_namespace = name_space;
        ipv6bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
        lacp_nonrevertive.value_namespace = name_space;
        lacp_nonrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
        lacp_status.value_namespace = name_space;
        lacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
        link_order_status.value_namespace = name_space;
        link_order_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
        load_balance_hash_type.value_namespace = name_space;
        load_balance_hash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
        load_balance_locality_threshold.value_namespace = name_space;
        load_balance_locality_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
        mac_source.value_namespace = name_space;
        mac_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
        mac_source_member.value_namespace = name_space;
        mac_source_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
        maximize_threshold_value_band_width.value_namespace = name_space;
        maximize_threshold_value_band_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
        maximize_threshold_value_links.value_namespace = name_space;
        maximize_threshold_value_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
        maximum_active_links.value_namespace = name_space;
        maximum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
        maximum_active_links_source.value_namespace = name_space;
        maximum_active_links_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
        minimum_active_links.value_namespace = name_space;
        minimum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
        mlacp_mode.value_namespace = name_space;
        mlacp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
        mlacp_status.value_namespace = name_space;
        mlacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
        primary_member.value_namespace = name_space;
        primary_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
        standby_member_count.value_namespace = name_space;
        standby_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
        suppression_timer.value_namespace = name_space;
        suppression_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
        switchover_type.value_namespace = name_space;
        switchover_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
        wait_while_timer.value_namespace = name_space;
        wait_while_timer.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "active-member-count")
    {
        active_member_count.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name.yfilter = yfilter;
    }
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions.yfilter = yfilter;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count.yfilter = yfilter;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis.yfilter = yfilter;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status.yfilter = yfilter;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive.yfilter = yfilter;
    }
    if(value_path == "lacp-status")
    {
        lacp_status.yfilter = yfilter;
    }
    if(value_path == "link-order-status")
    {
        link_order_status.yfilter = yfilter;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type.yfilter = yfilter;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-source")
    {
        mac_source.yfilter = yfilter;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source.yfilter = yfilter;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode.yfilter = yfilter;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status.yfilter = yfilter;
    }
    if(value_path == "primary-member")
    {
        primary_member.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count.yfilter = yfilter;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer.yfilter = yfilter;
    }
    if(value_path == "switchover-type")
    {
        switchover_type.yfilter = yfilter;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-config" || name == "mac-address" || name == "active-foreign-member-count" || name == "active-member-count" || name == "available-bandwidth" || name == "bundle-interface-name" || name == "bundle-status" || name == "cisco-extensions" || name == "collector-max-delay" || name == "configured-bandwidth" || name == "configured-foreign-member-count" || name == "configured-member-count" || name == "effective-bandwidth" || name == "iccp-group-id" || name == "inter-chassis" || name == "ipv4bfd-status" || name == "ipv6bfd-status" || name == "is-active" || name == "lacp-nonrevertive" || name == "lacp-status" || name == "link-order-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "mac-source" || name == "mac-source-member" || name == "maximize-threshold-value-band-width" || name == "maximize-threshold-value-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-active-links" || name == "minimum-bandwidth" || name == "mlacp-mode" || name == "mlacp-status" || name == "primary-member" || name == "recovery-delay" || name == "singleton" || name == "standby-member-count" || name == "suppression-timer" || name == "switchover-type" || name == "wait-while-timer")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    start_timer{YType::uint32, "start-timer"}
    	,
    destination_address(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "actor-bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::has_data() const
{
    return bundle_status.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_echo_min_interval.is_set
	|| pref_min_interval.is_set
	|| pref_multiplier.is_set
	|| start_timer.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(mode_info.yfilter)
	|| ydk::is_set(nbr_unconfig_timer.yfilter)
	|| ydk::is_set(pref_echo_min_interval.yfilter)
	|| ydk::is_set(pref_min_interval.yfilter)
	|| ydk::is_set(pref_multiplier.yfilter)
	|| ydk::is_set(start_timer.yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.yfilter)) leaf_name_data.push_back(mode_info.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.yfilter)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.yfilter)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.yfilter)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.yfilter)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.yfilter)) leaf_name_data.push_back(start_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
        mode_info.value_namespace = name_space;
        mode_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
        nbr_unconfig_timer.value_namespace = name_space;
        nbr_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
        pref_echo_min_interval.value_namespace = name_space;
        pref_echo_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
        pref_min_interval.value_namespace = name_space;
        pref_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
        pref_multiplier.value_namespace = name_space;
        pref_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
        start_timer.value_namespace = name_space;
        start_timer.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "mode-info")
    {
        mode_info.yfilter = yfilter;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier.yfilter = yfilter;
    }
    if(value_path == "start-timer")
    {
        start_timer.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "fast-detect" || name == "mode-info" || name == "nbr-unconfig-timer" || name == "pref-echo-min-interval" || name == "pref-min-interval" || name == "pref-multiplier" || name == "start-timer")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "actor-bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::BundleSystemId()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "bundle-system-id"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::~BundleSystemId()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "bundle-system-id"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::MemberData()
    :
    actor_churn_state{YType::enumeration, "actor-churn-state"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    mux_state{YType::enumeration, "mux-state"},
    partner_churn_state{YType::enumeration, "partner-churn-state"},
    period_state{YType::enumeration, "period-state"},
    receive_machine_state{YType::enumeration, "receive-machine-state"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    selection_state{YType::enumeration, "selection-state"}
    	,
    actor_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo>())
	,additional_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo>())
	,partner_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo>())
{
    actor_info->parent = this;
    additional_info->parent = this;
    partner_info->parent = this;

    yang_name = "member-data"; yang_parent_name = "lacp-bundle-descendant"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::~MemberData()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::has_data() const
{
    return actor_churn_state.is_set
	|| attached_aggregator_id.is_set
	|| iccp_group_id.is_set
	|| mux_state.is_set
	|| partner_churn_state.is_set
	|| period_state.is_set
	|| receive_machine_state.is_set
	|| selected_aggregator_id.is_set
	|| selection_state.is_set
	|| (actor_info !=  nullptr && actor_info->has_data())
	|| (additional_info !=  nullptr && additional_info->has_data())
	|| (partner_info !=  nullptr && partner_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_churn_state.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(partner_churn_state.yfilter)
	|| ydk::is_set(period_state.yfilter)
	|| ydk::is_set(receive_machine_state.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter)
	|| ydk::is_set(selection_state.yfilter)
	|| (actor_info !=  nullptr && actor_info->has_operation())
	|| (additional_info !=  nullptr && additional_info->has_operation())
	|| (partner_info !=  nullptr && partner_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_churn_state.is_set || is_set(actor_churn_state.yfilter)) leaf_name_data.push_back(actor_churn_state.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (partner_churn_state.is_set || is_set(partner_churn_state.yfilter)) leaf_name_data.push_back(partner_churn_state.get_name_leafdata());
    if (period_state.is_set || is_set(period_state.yfilter)) leaf_name_data.push_back(period_state.get_name_leafdata());
    if (receive_machine_state.is_set || is_set(receive_machine_state.yfilter)) leaf_name_data.push_back(receive_machine_state.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (selection_state.is_set || is_set(selection_state.yfilter)) leaf_name_data.push_back(selection_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-info")
    {
        if(actor_info == nullptr)
        {
            actor_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo>();
        }
        return actor_info;
    }

    if(child_yang_name == "additional-info")
    {
        if(additional_info == nullptr)
        {
            additional_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo>();
        }
        return additional_info;
    }

    if(child_yang_name == "partner-info")
    {
        if(partner_info == nullptr)
        {
            partner_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo>();
        }
        return partner_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actor_info != nullptr)
    {
        children["actor-info"] = actor_info;
    }

    if(additional_info != nullptr)
    {
        children["additional-info"] = additional_info;
    }

    if(partner_info != nullptr)
    {
        children["partner-info"] = partner_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-churn-state")
    {
        actor_churn_state = value;
        actor_churn_state.value_namespace = name_space;
        actor_churn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state = value;
        partner_churn_state.value_namespace = name_space;
        partner_churn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-state")
    {
        period_state = value;
        period_state.value_namespace = name_space;
        period_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state = value;
        receive_machine_state.value_namespace = name_space;
        receive_machine_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-state")
    {
        selection_state = value;
        selection_state.value_namespace = name_space;
        selection_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-churn-state")
    {
        actor_churn_state.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state.yfilter = yfilter;
    }
    if(value_path == "period-state")
    {
        period_state.yfilter = yfilter;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "selection-state")
    {
        selection_state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-info" || name == "additional-info" || name == "partner-info" || name == "actor-churn-state" || name == "attached-aggregator-id" || name == "iccp-group-id" || name == "mux-state" || name == "partner-churn-state" || name == "period-state" || name == "receive-machine-state" || name == "selected-aggregator-id" || name == "selection-state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::ActorInfo()
    :
    tx_period{YType::uint32, "tx-period"}
    	,
    port_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "actor-info"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::~ActorInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::has_data() const
{
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_info != nullptr)
    {
        children["port-info"] = port_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-info" || name == "tx-period")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
    	,
    port(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port>())
	,system(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System>())
{
    port->parent = this;
    system->parent = this;

    yang_name = "port-info"; yang_parent_name = "actor-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::has_data() const
{
    return key.is_set
	|| state.is_set
	|| (port !=  nullptr && port->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (port !=  nullptr && port->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port>();
        }
        return port;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "system" || name == "key" || name == "state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::Port()
    :
    link_number{YType::uint16, "link-number"},
    link_priority{YType::uint16, "link-priority"}
{

    yang_name = "port"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::has_data() const
{
    return link_number.is_set
	|| link_priority.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_number.yfilter)
	|| ydk::is_set(link_priority.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_number.is_set || is_set(link_number.yfilter)) leaf_name_data.push_back(link_number.get_name_leafdata());
    if (link_priority.is_set || is_set(link_priority.yfilter)) leaf_name_data.push_back(link_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-number")
    {
        link_number = value;
        link_number.value_namespace = name_space;
        link_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-priority")
    {
        link_priority = value;
        link_priority.value_namespace = name_space;
        link_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-number")
    {
        link_number.yfilter = yfilter;
    }
    if(value_path == "link-priority")
    {
        link_priority.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-number" || name == "link-priority")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::AdditionalInfo()
    :
    mbr_type{YType::enumeration, "mbr-type"}
    	,
    foreign(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign>())
	,local(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local>())
{
    foreign->parent = this;
    local->parent = this;

    yang_name = "additional-info"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::~AdditionalInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::has_data() const
{
    return mbr_type.is_set
	|| (foreign !=  nullptr && foreign->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mbr_type.yfilter)
	|| (foreign !=  nullptr && foreign->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mbr_type.is_set || is_set(mbr_type.yfilter)) leaf_name_data.push_back(mbr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "foreign")
    {
        if(foreign == nullptr)
        {
            foreign = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign>();
        }
        return foreign;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(foreign != nullptr)
    {
        children["foreign"] = foreign;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mbr-type")
    {
        mbr_type = value;
        mbr_type.value_namespace = name_space;
        mbr_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mbr-type")
    {
        mbr_type.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign" || name == "local" || name == "mbr-type")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::Foreign()
    :
    member_name{YType::str, "member-name"},
    peer_address{YType::str, "peer-address"}
{

    yang_name = "foreign"; yang_parent_name = "additional-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::~Foreign()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::has_data() const
{
    return member_name.is_set
	|| peer_address.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| ydk::is_set(peer_address.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-name" || name == "peer-address")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::Local()
    :
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "local"; yang_parent_name = "additional-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::~Local()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::has_data() const
{
    return interface_handle.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PartnerInfo()
    :
    tx_period{YType::uint32, "tx-period"}
    	,
    port_info(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "partner-info"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::~PartnerInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::has_data() const
{
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partner-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_info != nullptr)
    {
        children["port-info"] = port_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-info" || name == "tx-period")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
    	,
    port(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port>())
	,system(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System>())
{
    port->parent = this;
    system->parent = this;

    yang_name = "port-info"; yang_parent_name = "partner-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::has_data() const
{
    return key.is_set
	|| state.is_set
	|| (port !=  nullptr && port->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (port !=  nullptr && port->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port>();
        }
        return port;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "system" || name == "key" || name == "state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::Port()
    :
    link_number{YType::uint16, "link-number"},
    link_priority{YType::uint16, "link-priority"}
{

    yang_name = "port"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::has_data() const
{
    return link_number.is_set
	|| link_priority.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_number.yfilter)
	|| ydk::is_set(link_priority.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_number.is_set || is_set(link_number.yfilter)) leaf_name_data.push_back(link_number.get_name_leafdata());
    if (link_priority.is_set || is_set(link_priority.yfilter)) leaf_name_data.push_back(link_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-number")
    {
        link_number = value;
        link_number.value_namespace = name_space;
        link_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-priority")
    {
        link_priority = value;
        link_priority.value_namespace = name_space;
        link_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-number")
    {
        link_number.yfilter = yfilter;
    }
    if(value_path == "link-priority")
    {
        link_priority.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-number" || name == "link-priority")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::LacpBundleItem()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"}
    	,
    actor_bundle_data(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData>())
	,bundle_system_id(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId>())
{
    actor_bundle_data->parent = this;
    bundle_system_id->parent = this;

    yang_name = "lacp-bundle-item"; yang_parent_name = "lacp-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::~LacpBundleItem()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::has_data() const
{
    return actor_operational_key.is_set
	|| partner_operational_key.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_data())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_operation())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-bundle-data")
    {
        if(actor_bundle_data == nullptr)
        {
            actor_bundle_data = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData>();
        }
        return actor_bundle_data;
    }

    if(child_yang_name == "bundle-system-id")
    {
        if(bundle_system_id == nullptr)
        {
            bundle_system_id = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId>();
        }
        return bundle_system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actor_bundle_data != nullptr)
    {
        children["actor-bundle-data"] = actor_bundle_data;
    }

    if(bundle_system_id != nullptr)
    {
        children["bundle-system-id"] = bundle_system_id;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
        partner_system_mac_address.value_namespace = name_space;
        partner_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
        partner_system_priority.value_namespace = name_space;
        partner_system_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-bundle-data" || name == "bundle-system-id" || name == "actor-operational-key" || name == "partner-operational-key" || name == "partner-system-mac-address" || name == "partner-system-priority")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::ActorBundleData()
    :
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    active_member_count{YType::uint16, "active-member-count"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    bundle_interface_name{YType::str, "bundle-interface-name"},
    bundle_status{YType::enumeration, "bundle-status"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    inter_chassis{YType::boolean, "inter-chassis"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    is_active{YType::boolean, "is-active"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    lacp_status{YType::enumeration, "lacp-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    primary_member{YType::str, "primary-member"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"},
    standby_member_count{YType::uint16, "standby-member-count"},
    suppression_timer{YType::uint16, "suppression-timer"},
    switchover_type{YType::enumeration, "switchover-type"},
    wait_while_timer{YType::uint16, "wait-while-timer"}
    	,
    mac_address(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "actor-bundle-data"; yang_parent_name = "lacp-bundle-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::~ActorBundleData()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::has_data() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return active_foreign_member_count.is_set
	|| active_member_count.is_set
	|| available_bandwidth.is_set
	|| bundle_interface_name.is_set
	|| bundle_status.is_set
	|| cisco_extensions.is_set
	|| collector_max_delay.is_set
	|| configured_bandwidth.is_set
	|| configured_foreign_member_count.is_set
	|| configured_member_count.is_set
	|| effective_bandwidth.is_set
	|| iccp_group_id.is_set
	|| inter_chassis.is_set
	|| ipv4bfd_status.is_set
	|| ipv6bfd_status.is_set
	|| is_active.is_set
	|| lacp_nonrevertive.is_set
	|| lacp_status.is_set
	|| link_order_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| maximize_threshold_value_band_width.is_set
	|| maximize_threshold_value_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_active_links.is_set
	|| minimum_bandwidth.is_set
	|| mlacp_mode.is_set
	|| mlacp_status.is_set
	|| primary_member.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| standby_member_count.is_set
	|| suppression_timer.is_set
	|| switchover_type.is_set
	|| wait_while_timer.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(active_foreign_member_count.yfilter)
	|| ydk::is_set(active_member_count.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(bundle_interface_name.yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(cisco_extensions.yfilter)
	|| ydk::is_set(collector_max_delay.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(configured_foreign_member_count.yfilter)
	|| ydk::is_set(configured_member_count.yfilter)
	|| ydk::is_set(effective_bandwidth.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(inter_chassis.yfilter)
	|| ydk::is_set(ipv4bfd_status.yfilter)
	|| ydk::is_set(ipv6bfd_status.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(lacp_nonrevertive.yfilter)
	|| ydk::is_set(lacp_status.yfilter)
	|| ydk::is_set(link_order_status.yfilter)
	|| ydk::is_set(load_balance_hash_type.yfilter)
	|| ydk::is_set(load_balance_locality_threshold.yfilter)
	|| ydk::is_set(mac_source.yfilter)
	|| ydk::is_set(mac_source_member.yfilter)
	|| ydk::is_set(maximize_threshold_value_band_width.yfilter)
	|| ydk::is_set(maximize_threshold_value_links.yfilter)
	|| ydk::is_set(maximum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links_source.yfilter)
	|| ydk::is_set(minimum_active_links.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(mlacp_mode.yfilter)
	|| ydk::is_set(mlacp_status.yfilter)
	|| ydk::is_set(primary_member.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| ydk::is_set(standby_member_count.yfilter)
	|| ydk::is_set(suppression_timer.yfilter)
	|| ydk::is_set(switchover_type.yfilter)
	|| ydk::is_set(wait_while_timer.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.yfilter)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.yfilter)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (bundle_interface_name.is_set || is_set(bundle_interface_name.yfilter)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.yfilter)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.yfilter)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.yfilter)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.yfilter)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.yfilter)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.yfilter)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.yfilter)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.yfilter)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.yfilter)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.yfilter)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.yfilter)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.yfilter)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.yfilter)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.yfilter)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.yfilter)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.yfilter)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.yfilter)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.yfilter)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.yfilter)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.yfilter)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.yfilter)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.yfilter)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.yfilter)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.yfilter)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.yfilter)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.yfilter)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.yfilter)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-config")
    {
        for(auto const & c : bfd_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(c);
        return c;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_config)
    {
        children[c->get_segment_path()] = c;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
        active_foreign_member_count.value_namespace = name_space;
        active_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
        active_member_count.value_namespace = name_space;
        active_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
        bundle_interface_name.value_namespace = name_space;
        bundle_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
        cisco_extensions.value_namespace = name_space;
        cisco_extensions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
        collector_max_delay.value_namespace = name_space;
        collector_max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
        configured_foreign_member_count.value_namespace = name_space;
        configured_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
        configured_member_count.value_namespace = name_space;
        configured_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
        effective_bandwidth.value_namespace = name_space;
        effective_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
        inter_chassis.value_namespace = name_space;
        inter_chassis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
        ipv4bfd_status.value_namespace = name_space;
        ipv4bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
        ipv6bfd_status.value_namespace = name_space;
        ipv6bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
        lacp_nonrevertive.value_namespace = name_space;
        lacp_nonrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
        lacp_status.value_namespace = name_space;
        lacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
        link_order_status.value_namespace = name_space;
        link_order_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
        load_balance_hash_type.value_namespace = name_space;
        load_balance_hash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
        load_balance_locality_threshold.value_namespace = name_space;
        load_balance_locality_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
        mac_source.value_namespace = name_space;
        mac_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
        mac_source_member.value_namespace = name_space;
        mac_source_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
        maximize_threshold_value_band_width.value_namespace = name_space;
        maximize_threshold_value_band_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
        maximize_threshold_value_links.value_namespace = name_space;
        maximize_threshold_value_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
        maximum_active_links.value_namespace = name_space;
        maximum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
        maximum_active_links_source.value_namespace = name_space;
        maximum_active_links_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
        minimum_active_links.value_namespace = name_space;
        minimum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
        mlacp_mode.value_namespace = name_space;
        mlacp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
        mlacp_status.value_namespace = name_space;
        mlacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
        primary_member.value_namespace = name_space;
        primary_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
        standby_member_count.value_namespace = name_space;
        standby_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
        suppression_timer.value_namespace = name_space;
        suppression_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
        switchover_type.value_namespace = name_space;
        switchover_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
        wait_while_timer.value_namespace = name_space;
        wait_while_timer.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "active-member-count")
    {
        active_member_count.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name.yfilter = yfilter;
    }
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions.yfilter = yfilter;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count.yfilter = yfilter;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis.yfilter = yfilter;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status.yfilter = yfilter;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive.yfilter = yfilter;
    }
    if(value_path == "lacp-status")
    {
        lacp_status.yfilter = yfilter;
    }
    if(value_path == "link-order-status")
    {
        link_order_status.yfilter = yfilter;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type.yfilter = yfilter;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-source")
    {
        mac_source.yfilter = yfilter;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source.yfilter = yfilter;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode.yfilter = yfilter;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status.yfilter = yfilter;
    }
    if(value_path == "primary-member")
    {
        primary_member.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count.yfilter = yfilter;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer.yfilter = yfilter;
    }
    if(value_path == "switchover-type")
    {
        switchover_type.yfilter = yfilter;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-config" || name == "mac-address" || name == "active-foreign-member-count" || name == "active-member-count" || name == "available-bandwidth" || name == "bundle-interface-name" || name == "bundle-status" || name == "cisco-extensions" || name == "collector-max-delay" || name == "configured-bandwidth" || name == "configured-foreign-member-count" || name == "configured-member-count" || name == "effective-bandwidth" || name == "iccp-group-id" || name == "inter-chassis" || name == "ipv4bfd-status" || name == "ipv6bfd-status" || name == "is-active" || name == "lacp-nonrevertive" || name == "lacp-status" || name == "link-order-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "mac-source" || name == "mac-source-member" || name == "maximize-threshold-value-band-width" || name == "maximize-threshold-value-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-active-links" || name == "minimum-bandwidth" || name == "mlacp-mode" || name == "mlacp-status" || name == "primary-member" || name == "recovery-delay" || name == "singleton" || name == "standby-member-count" || name == "suppression-timer" || name == "switchover-type" || name == "wait-while-timer")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    start_timer{YType::uint32, "start-timer"}
    	,
    destination_address(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "actor-bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::has_data() const
{
    return bundle_status.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_echo_min_interval.is_set
	|| pref_min_interval.is_set
	|| pref_multiplier.is_set
	|| start_timer.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(mode_info.yfilter)
	|| ydk::is_set(nbr_unconfig_timer.yfilter)
	|| ydk::is_set(pref_echo_min_interval.yfilter)
	|| ydk::is_set(pref_min_interval.yfilter)
	|| ydk::is_set(pref_multiplier.yfilter)
	|| ydk::is_set(start_timer.yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.yfilter)) leaf_name_data.push_back(mode_info.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.yfilter)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.yfilter)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.yfilter)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.yfilter)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.yfilter)) leaf_name_data.push_back(start_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
        mode_info.value_namespace = name_space;
        mode_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
        nbr_unconfig_timer.value_namespace = name_space;
        nbr_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
        pref_echo_min_interval.value_namespace = name_space;
        pref_echo_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
        pref_min_interval.value_namespace = name_space;
        pref_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
        pref_multiplier.value_namespace = name_space;
        pref_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
        start_timer.value_namespace = name_space;
        start_timer.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "mode-info")
    {
        mode_info.yfilter = yfilter;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier.yfilter = yfilter;
    }
    if(value_path == "start-timer")
    {
        start_timer.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "fast-detect" || name == "mode-info" || name == "nbr-unconfig-timer" || name == "pref-echo-min-interval" || name == "pref-min-interval" || name == "pref-multiplier" || name == "start-timer")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "actor-bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::BundleSystemId()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "bundle-system-id"; yang_parent_name = "lacp-bundle-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::~BundleSystemId()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "bundle-system-id"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMembers()
{

    yang_name = "lacp-members"; yang_parent_name = "lacp"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Lacp::LacpMembers::~LacpMembers()
{
}

bool BundleInformation::Lacp::LacpMembers::has_data() const
{
    for (std::size_t index=0; index<lacp_member.size(); index++)
    {
        if(lacp_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Lacp::LacpMembers::has_operation() const
{
    for (std::size_t index=0; index<lacp_member.size(); index++)
    {
        if(lacp_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/lacp/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Lacp::LacpMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lacp-member")
    {
        for(auto const & c : lacp_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember>();
        c->parent = this;
        lacp_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lacp_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Lacp::LacpMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Lacp::LacpMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacp-member")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMember()
    :
    member_interface{YType::str, "member-interface"}
    	,
    lacp_member_ancestor(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor>())
	,lacp_member_item(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem>())
{
    lacp_member_ancestor->parent = this;
    lacp_member_item->parent = this;

    yang_name = "lacp-member"; yang_parent_name = "lacp-members"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::~LacpMember()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::has_data() const
{
    return member_interface.is_set
	|| (lacp_member_ancestor !=  nullptr && lacp_member_ancestor->has_data())
	|| (lacp_member_item !=  nullptr && lacp_member_item->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (lacp_member_ancestor !=  nullptr && lacp_member_ancestor->has_operation())
	|| (lacp_member_item !=  nullptr && lacp_member_item->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/lacp/lacp-members/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-member" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lacp-member-ancestor")
    {
        if(lacp_member_ancestor == nullptr)
        {
            lacp_member_ancestor = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor>();
        }
        return lacp_member_ancestor;
    }

    if(child_yang_name == "lacp-member-item")
    {
        if(lacp_member_item == nullptr)
        {
            lacp_member_item = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem>();
        }
        return lacp_member_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lacp_member_ancestor != nullptr)
    {
        children["lacp-member-ancestor"] = lacp_member_ancestor;
    }

    if(lacp_member_item != nullptr)
    {
        children["lacp-member-item"] = lacp_member_item;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lacp-member-ancestor" || name == "lacp-member-item" || name == "member-interface")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::LacpMemberAncestor()
    :
    bundle_data(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData>())
{
    bundle_data->parent = this;

    yang_name = "lacp-member-ancestor"; yang_parent_name = "lacp-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::~LacpMemberAncestor()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-member-ancestor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        if(bundle_data == nullptr)
        {
            bundle_data = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData>();
        }
        return bundle_data;
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData>();
        c->parent = this;
        member_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_data != nullptr)
    {
        children["bundle-data"] = bundle_data;
    }

    for (auto const & c : member_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "member-data")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"}
    	,
    actor_bundle_data(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData>())
	,bundle_system_id(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId>())
{
    actor_bundle_data->parent = this;
    bundle_system_id->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "lacp-member-ancestor"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::~BundleData()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::has_data() const
{
    return actor_operational_key.is_set
	|| partner_operational_key.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_data())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| (actor_bundle_data !=  nullptr && actor_bundle_data->has_operation())
	|| (bundle_system_id !=  nullptr && bundle_system_id->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-bundle-data")
    {
        if(actor_bundle_data == nullptr)
        {
            actor_bundle_data = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData>();
        }
        return actor_bundle_data;
    }

    if(child_yang_name == "bundle-system-id")
    {
        if(bundle_system_id == nullptr)
        {
            bundle_system_id = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId>();
        }
        return bundle_system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actor_bundle_data != nullptr)
    {
        children["actor-bundle-data"] = actor_bundle_data;
    }

    if(bundle_system_id != nullptr)
    {
        children["bundle-system-id"] = bundle_system_id;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
        partner_system_mac_address.value_namespace = name_space;
        partner_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
        partner_system_priority.value_namespace = name_space;
        partner_system_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-bundle-data" || name == "bundle-system-id" || name == "actor-operational-key" || name == "partner-operational-key" || name == "partner-system-mac-address" || name == "partner-system-priority")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::ActorBundleData()
    :
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    active_member_count{YType::uint16, "active-member-count"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    bundle_interface_name{YType::str, "bundle-interface-name"},
    bundle_status{YType::enumeration, "bundle-status"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    inter_chassis{YType::boolean, "inter-chassis"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    is_active{YType::boolean, "is-active"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    lacp_status{YType::enumeration, "lacp-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    primary_member{YType::str, "primary-member"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"},
    standby_member_count{YType::uint16, "standby-member-count"},
    suppression_timer{YType::uint16, "suppression-timer"},
    switchover_type{YType::enumeration, "switchover-type"},
    wait_while_timer{YType::uint16, "wait-while-timer"}
    	,
    mac_address(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "actor-bundle-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::~ActorBundleData()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::has_data() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return active_foreign_member_count.is_set
	|| active_member_count.is_set
	|| available_bandwidth.is_set
	|| bundle_interface_name.is_set
	|| bundle_status.is_set
	|| cisco_extensions.is_set
	|| collector_max_delay.is_set
	|| configured_bandwidth.is_set
	|| configured_foreign_member_count.is_set
	|| configured_member_count.is_set
	|| effective_bandwidth.is_set
	|| iccp_group_id.is_set
	|| inter_chassis.is_set
	|| ipv4bfd_status.is_set
	|| ipv6bfd_status.is_set
	|| is_active.is_set
	|| lacp_nonrevertive.is_set
	|| lacp_status.is_set
	|| link_order_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| maximize_threshold_value_band_width.is_set
	|| maximize_threshold_value_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_active_links.is_set
	|| minimum_bandwidth.is_set
	|| mlacp_mode.is_set
	|| mlacp_status.is_set
	|| primary_member.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| standby_member_count.is_set
	|| suppression_timer.is_set
	|| switchover_type.is_set
	|| wait_while_timer.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(active_foreign_member_count.yfilter)
	|| ydk::is_set(active_member_count.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(bundle_interface_name.yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(cisco_extensions.yfilter)
	|| ydk::is_set(collector_max_delay.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(configured_foreign_member_count.yfilter)
	|| ydk::is_set(configured_member_count.yfilter)
	|| ydk::is_set(effective_bandwidth.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(inter_chassis.yfilter)
	|| ydk::is_set(ipv4bfd_status.yfilter)
	|| ydk::is_set(ipv6bfd_status.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(lacp_nonrevertive.yfilter)
	|| ydk::is_set(lacp_status.yfilter)
	|| ydk::is_set(link_order_status.yfilter)
	|| ydk::is_set(load_balance_hash_type.yfilter)
	|| ydk::is_set(load_balance_locality_threshold.yfilter)
	|| ydk::is_set(mac_source.yfilter)
	|| ydk::is_set(mac_source_member.yfilter)
	|| ydk::is_set(maximize_threshold_value_band_width.yfilter)
	|| ydk::is_set(maximize_threshold_value_links.yfilter)
	|| ydk::is_set(maximum_active_links.yfilter)
	|| ydk::is_set(maximum_active_links_source.yfilter)
	|| ydk::is_set(minimum_active_links.yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter)
	|| ydk::is_set(mlacp_mode.yfilter)
	|| ydk::is_set(mlacp_status.yfilter)
	|| ydk::is_set(primary_member.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(singleton.yfilter)
	|| ydk::is_set(standby_member_count.yfilter)
	|| ydk::is_set(suppression_timer.yfilter)
	|| ydk::is_set(switchover_type.yfilter)
	|| ydk::is_set(wait_while_timer.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.yfilter)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.yfilter)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (bundle_interface_name.is_set || is_set(bundle_interface_name.yfilter)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.yfilter)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.yfilter)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.yfilter)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.yfilter)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.yfilter)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.yfilter)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.yfilter)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.yfilter)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.yfilter)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.yfilter)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.yfilter)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.yfilter)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.yfilter)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.yfilter)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.yfilter)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.yfilter)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.yfilter)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.yfilter)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.yfilter)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.yfilter)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.yfilter)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.yfilter)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.yfilter)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.yfilter)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.yfilter)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.yfilter)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.yfilter)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-config")
    {
        for(auto const & c : bfd_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(c);
        return c;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_config)
    {
        children[c->get_segment_path()] = c;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
        active_foreign_member_count.value_namespace = name_space;
        active_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
        active_member_count.value_namespace = name_space;
        active_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
        bundle_interface_name.value_namespace = name_space;
        bundle_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
        cisco_extensions.value_namespace = name_space;
        cisco_extensions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
        collector_max_delay.value_namespace = name_space;
        collector_max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
        configured_foreign_member_count.value_namespace = name_space;
        configured_foreign_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
        configured_member_count.value_namespace = name_space;
        configured_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
        effective_bandwidth.value_namespace = name_space;
        effective_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
        inter_chassis.value_namespace = name_space;
        inter_chassis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
        ipv4bfd_status.value_namespace = name_space;
        ipv4bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
        ipv6bfd_status.value_namespace = name_space;
        ipv6bfd_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
        lacp_nonrevertive.value_namespace = name_space;
        lacp_nonrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
        lacp_status.value_namespace = name_space;
        lacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
        link_order_status.value_namespace = name_space;
        link_order_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
        load_balance_hash_type.value_namespace = name_space;
        load_balance_hash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
        load_balance_locality_threshold.value_namespace = name_space;
        load_balance_locality_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
        mac_source.value_namespace = name_space;
        mac_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
        mac_source_member.value_namespace = name_space;
        mac_source_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
        maximize_threshold_value_band_width.value_namespace = name_space;
        maximize_threshold_value_band_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
        maximize_threshold_value_links.value_namespace = name_space;
        maximize_threshold_value_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
        maximum_active_links.value_namespace = name_space;
        maximum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
        maximum_active_links_source.value_namespace = name_space;
        maximum_active_links_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
        minimum_active_links.value_namespace = name_space;
        minimum_active_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
        mlacp_mode.value_namespace = name_space;
        mlacp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
        mlacp_status.value_namespace = name_space;
        mlacp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
        primary_member.value_namespace = name_space;
        primary_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
        standby_member_count.value_namespace = name_space;
        standby_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
        suppression_timer.value_namespace = name_space;
        suppression_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
        switchover_type.value_namespace = name_space;
        switchover_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
        wait_while_timer.value_namespace = name_space;
        wait_while_timer.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "active-member-count")
    {
        active_member_count.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name.yfilter = yfilter;
    }
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions.yfilter = yfilter;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count.yfilter = yfilter;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count.yfilter = yfilter;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis.yfilter = yfilter;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status.yfilter = yfilter;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive.yfilter = yfilter;
    }
    if(value_path == "lacp-status")
    {
        lacp_status.yfilter = yfilter;
    }
    if(value_path == "link-order-status")
    {
        link_order_status.yfilter = yfilter;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type.yfilter = yfilter;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold.yfilter = yfilter;
    }
    if(value_path == "mac-source")
    {
        mac_source.yfilter = yfilter;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width.yfilter = yfilter;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links.yfilter = yfilter;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source.yfilter = yfilter;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links.yfilter = yfilter;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode.yfilter = yfilter;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status.yfilter = yfilter;
    }
    if(value_path == "primary-member")
    {
        primary_member.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count.yfilter = yfilter;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer.yfilter = yfilter;
    }
    if(value_path == "switchover-type")
    {
        switchover_type.yfilter = yfilter;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-config" || name == "mac-address" || name == "active-foreign-member-count" || name == "active-member-count" || name == "available-bandwidth" || name == "bundle-interface-name" || name == "bundle-status" || name == "cisco-extensions" || name == "collector-max-delay" || name == "configured-bandwidth" || name == "configured-foreign-member-count" || name == "configured-member-count" || name == "effective-bandwidth" || name == "iccp-group-id" || name == "inter-chassis" || name == "ipv4bfd-status" || name == "ipv6bfd-status" || name == "is-active" || name == "lacp-nonrevertive" || name == "lacp-status" || name == "link-order-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "mac-source" || name == "mac-source-member" || name == "maximize-threshold-value-band-width" || name == "maximize-threshold-value-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-active-links" || name == "minimum-bandwidth" || name == "mlacp-mode" || name == "mlacp-status" || name == "primary-member" || name == "recovery-delay" || name == "singleton" || name == "standby-member-count" || name == "suppression-timer" || name == "switchover-type" || name == "wait-while-timer")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    start_timer{YType::uint32, "start-timer"}
    	,
    destination_address(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "actor-bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::has_data() const
{
    return bundle_status.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_echo_min_interval.is_set
	|| pref_min_interval.is_set
	|| pref_multiplier.is_set
	|| start_timer.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(mode_info.yfilter)
	|| ydk::is_set(nbr_unconfig_timer.yfilter)
	|| ydk::is_set(pref_echo_min_interval.yfilter)
	|| ydk::is_set(pref_min_interval.yfilter)
	|| ydk::is_set(pref_multiplier.yfilter)
	|| ydk::is_set(start_timer.yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.yfilter)) leaf_name_data.push_back(mode_info.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.yfilter)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.yfilter)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.yfilter)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.yfilter)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.yfilter)) leaf_name_data.push_back(start_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
        mode_info.value_namespace = name_space;
        mode_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
        nbr_unconfig_timer.value_namespace = name_space;
        nbr_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
        pref_echo_min_interval.value_namespace = name_space;
        pref_echo_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
        pref_min_interval.value_namespace = name_space;
        pref_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
        pref_multiplier.value_namespace = name_space;
        pref_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
        start_timer.value_namespace = name_space;
        start_timer.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "mode-info")
    {
        mode_info.yfilter = yfilter;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval.yfilter = yfilter;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier.yfilter = yfilter;
    }
    if(value_path == "start-timer")
    {
        start_timer.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "fast-detect" || name == "mode-info" || name == "nbr-unconfig-timer" || name == "pref-echo-min-interval" || name == "pref-min-interval" || name == "pref-multiplier" || name == "start-timer")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "actor-bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::BundleSystemId()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "bundle-system-id"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::~BundleSystemId()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "bundle-system-id"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::MemberData()
    :
    actor_churn_state{YType::enumeration, "actor-churn-state"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    mux_state{YType::enumeration, "mux-state"},
    partner_churn_state{YType::enumeration, "partner-churn-state"},
    period_state{YType::enumeration, "period-state"},
    receive_machine_state{YType::enumeration, "receive-machine-state"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    selection_state{YType::enumeration, "selection-state"}
    	,
    actor_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo>())
	,additional_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo>())
	,partner_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo>())
{
    actor_info->parent = this;
    additional_info->parent = this;
    partner_info->parent = this;

    yang_name = "member-data"; yang_parent_name = "lacp-member-ancestor"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::~MemberData()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::has_data() const
{
    return actor_churn_state.is_set
	|| attached_aggregator_id.is_set
	|| iccp_group_id.is_set
	|| mux_state.is_set
	|| partner_churn_state.is_set
	|| period_state.is_set
	|| receive_machine_state.is_set
	|| selected_aggregator_id.is_set
	|| selection_state.is_set
	|| (actor_info !=  nullptr && actor_info->has_data())
	|| (additional_info !=  nullptr && additional_info->has_data())
	|| (partner_info !=  nullptr && partner_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_churn_state.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(partner_churn_state.yfilter)
	|| ydk::is_set(period_state.yfilter)
	|| ydk::is_set(receive_machine_state.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter)
	|| ydk::is_set(selection_state.yfilter)
	|| (actor_info !=  nullptr && actor_info->has_operation())
	|| (additional_info !=  nullptr && additional_info->has_operation())
	|| (partner_info !=  nullptr && partner_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_churn_state.is_set || is_set(actor_churn_state.yfilter)) leaf_name_data.push_back(actor_churn_state.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (partner_churn_state.is_set || is_set(partner_churn_state.yfilter)) leaf_name_data.push_back(partner_churn_state.get_name_leafdata());
    if (period_state.is_set || is_set(period_state.yfilter)) leaf_name_data.push_back(period_state.get_name_leafdata());
    if (receive_machine_state.is_set || is_set(receive_machine_state.yfilter)) leaf_name_data.push_back(receive_machine_state.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (selection_state.is_set || is_set(selection_state.yfilter)) leaf_name_data.push_back(selection_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-info")
    {
        if(actor_info == nullptr)
        {
            actor_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo>();
        }
        return actor_info;
    }

    if(child_yang_name == "additional-info")
    {
        if(additional_info == nullptr)
        {
            additional_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo>();
        }
        return additional_info;
    }

    if(child_yang_name == "partner-info")
    {
        if(partner_info == nullptr)
        {
            partner_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo>();
        }
        return partner_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actor_info != nullptr)
    {
        children["actor-info"] = actor_info;
    }

    if(additional_info != nullptr)
    {
        children["additional-info"] = additional_info;
    }

    if(partner_info != nullptr)
    {
        children["partner-info"] = partner_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-churn-state")
    {
        actor_churn_state = value;
        actor_churn_state.value_namespace = name_space;
        actor_churn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state = value;
        partner_churn_state.value_namespace = name_space;
        partner_churn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-state")
    {
        period_state = value;
        period_state.value_namespace = name_space;
        period_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state = value;
        receive_machine_state.value_namespace = name_space;
        receive_machine_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-state")
    {
        selection_state = value;
        selection_state.value_namespace = name_space;
        selection_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-churn-state")
    {
        actor_churn_state.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state.yfilter = yfilter;
    }
    if(value_path == "period-state")
    {
        period_state.yfilter = yfilter;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "selection-state")
    {
        selection_state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-info" || name == "additional-info" || name == "partner-info" || name == "actor-churn-state" || name == "attached-aggregator-id" || name == "iccp-group-id" || name == "mux-state" || name == "partner-churn-state" || name == "period-state" || name == "receive-machine-state" || name == "selected-aggregator-id" || name == "selection-state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::ActorInfo()
    :
    tx_period{YType::uint32, "tx-period"}
    	,
    port_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "actor-info"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::~ActorInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::has_data() const
{
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_info != nullptr)
    {
        children["port-info"] = port_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-info" || name == "tx-period")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
    	,
    port(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port>())
	,system(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System>())
{
    port->parent = this;
    system->parent = this;

    yang_name = "port-info"; yang_parent_name = "actor-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::has_data() const
{
    return key.is_set
	|| state.is_set
	|| (port !=  nullptr && port->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (port !=  nullptr && port->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port>();
        }
        return port;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "system" || name == "key" || name == "state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::Port()
    :
    link_number{YType::uint16, "link-number"},
    link_priority{YType::uint16, "link-priority"}
{

    yang_name = "port"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::has_data() const
{
    return link_number.is_set
	|| link_priority.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_number.yfilter)
	|| ydk::is_set(link_priority.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_number.is_set || is_set(link_number.yfilter)) leaf_name_data.push_back(link_number.get_name_leafdata());
    if (link_priority.is_set || is_set(link_priority.yfilter)) leaf_name_data.push_back(link_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-number")
    {
        link_number = value;
        link_number.value_namespace = name_space;
        link_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-priority")
    {
        link_priority = value;
        link_priority.value_namespace = name_space;
        link_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-number")
    {
        link_number.yfilter = yfilter;
    }
    if(value_path == "link-priority")
    {
        link_priority.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-number" || name == "link-priority")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::AdditionalInfo()
    :
    mbr_type{YType::enumeration, "mbr-type"}
    	,
    foreign(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign>())
	,local(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local>())
{
    foreign->parent = this;
    local->parent = this;

    yang_name = "additional-info"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::~AdditionalInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::has_data() const
{
    return mbr_type.is_set
	|| (foreign !=  nullptr && foreign->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mbr_type.yfilter)
	|| (foreign !=  nullptr && foreign->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mbr_type.is_set || is_set(mbr_type.yfilter)) leaf_name_data.push_back(mbr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "foreign")
    {
        if(foreign == nullptr)
        {
            foreign = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign>();
        }
        return foreign;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(foreign != nullptr)
    {
        children["foreign"] = foreign;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mbr-type")
    {
        mbr_type = value;
        mbr_type.value_namespace = name_space;
        mbr_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mbr-type")
    {
        mbr_type.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign" || name == "local" || name == "mbr-type")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::Foreign()
    :
    member_name{YType::str, "member-name"},
    peer_address{YType::str, "peer-address"}
{

    yang_name = "foreign"; yang_parent_name = "additional-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::~Foreign()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::has_data() const
{
    return member_name.is_set
	|| peer_address.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| ydk::is_set(peer_address.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-name" || name == "peer-address")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::Local()
    :
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "local"; yang_parent_name = "additional-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::~Local()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::has_data() const
{
    return interface_handle.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PartnerInfo()
    :
    tx_period{YType::uint32, "tx-period"}
    	,
    port_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "partner-info"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::~PartnerInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::has_data() const
{
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partner-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_info != nullptr)
    {
        children["port-info"] = port_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-info" || name == "tx-period")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
    	,
    port(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port>())
	,system(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System>())
{
    port->parent = this;
    system->parent = this;

    yang_name = "port-info"; yang_parent_name = "partner-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::has_data() const
{
    return key.is_set
	|| state.is_set
	|| (port !=  nullptr && port->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (port !=  nullptr && port->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port>();
        }
        return port;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "system" || name == "key" || name == "state")
        return true;
    return false;
}


}
}

