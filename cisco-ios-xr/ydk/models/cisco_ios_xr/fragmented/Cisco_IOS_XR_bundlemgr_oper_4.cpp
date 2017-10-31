
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_bundlemgr_oper {

BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::LoadBalanceData()
    :
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"},
    local_link_threshold{YType::uint32, "local-link-threshold"}
{

    yang_name = "load-balance-data"; yang_parent_name = "sub-interface"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::~LoadBalanceData()
{
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::has_data() const
{
    return type.is_set
	|| value_.is_set
	|| local_link_threshold.is_set;
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(local_link_threshold.yfilter);
}

std::string BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (local_link_threshold.is_set || is_set(local_link_threshold.yfilter)) leaf_name_data.push_back(local_link_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-link-threshold")
    {
        local_link_threshold = value;
        local_link_threshold.value_namespace = name_space;
        local_link_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "local-link-threshold")
    {
        local_link_threshold.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value" || name == "local-link-threshold")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundles()
{

    yang_name = "bundles"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::~Bundles()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::has_data() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundlesAdjacency::Nodes::Node::Bundles::has_operation() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle")
    {
        for(auto const & c : bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle>();
        c->parent = this;
        bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundlesAdjacency::Nodes::Node::Bundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::Bundle()
    :
    bundle_name{YType::str, "bundle-name"}
    	,
    bundle_info(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo>())
{
    bundle_info->parent = this;

    yang_name = "bundle"; yang_parent_name = "bundles"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::~Bundle()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::has_data() const
{
    return bundle_name.is_set
	|| (bundle_info !=  nullptr && bundle_info->has_data());
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| (bundle_info !=  nullptr && bundle_info->has_operation());
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle" <<"[bundle-name='" <<bundle_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-info")
    {
        if(bundle_info == nullptr)
        {
            bundle_info = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo>();
        }
        return bundle_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_info != nullptr)
    {
        children["bundle-info"] = bundle_info;
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-info" || name == "bundle-name")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::BundleInfo()
    :
    media{YType::enumeration, "media"},
    max_member_count{YType::uint32, "max-member-count"},
    avoid_rebalance{YType::boolean, "avoid-rebalance"}
    	,
    brief(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief>())
	,load_balance_data(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData>())
{
    brief->parent = this;
    load_balance_data->parent = this;

    yang_name = "bundle-info"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::~BundleInfo()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_data())
            return true;
    }
    return media.is_set
	|| max_member_count.is_set
	|| avoid_rebalance.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (load_balance_data !=  nullptr && load_balance_data->has_data());
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(media.yfilter)
	|| ydk::is_set(max_member_count.yfilter)
	|| ydk::is_set(avoid_rebalance.yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (load_balance_data !=  nullptr && load_balance_data->has_operation());
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (media.is_set || is_set(media.yfilter)) leaf_name_data.push_back(media.get_name_leafdata());
    if (max_member_count.is_set || is_set(max_member_count.yfilter)) leaf_name_data.push_back(max_member_count.get_name_leafdata());
    if (avoid_rebalance.is_set || is_set(avoid_rebalance.yfilter)) leaf_name_data.push_back(avoid_rebalance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "load-balance-data")
    {
        if(load_balance_data == nullptr)
        {
            load_balance_data = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData>();
        }
        return load_balance_data;
    }

    if(child_yang_name == "member")
    {
        for(auto const & c : member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member>();
        c->parent = this;
        member.push_back(c);
        return c;
    }

    if(child_yang_name == "sub-interface")
    {
        for(auto const & c : sub_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface>();
        c->parent = this;
        sub_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(load_balance_data != nullptr)
    {
        children["load-balance-data"] = load_balance_data;
    }

    for (auto const & c : member)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sub_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "media")
    {
        media = value;
        media.value_namespace = name_space;
        media.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-member-count")
    {
        max_member_count = value;
        max_member_count.value_namespace = name_space;
        max_member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avoid-rebalance")
    {
        avoid_rebalance = value;
        avoid_rebalance.value_namespace = name_space;
        avoid_rebalance.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "media")
    {
        media.yfilter = yfilter;
    }
    if(value_path == "max-member-count")
    {
        max_member_count.yfilter = yfilter;
    }
    if(value_path == "avoid-rebalance")
    {
        avoid_rebalance.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "load-balance-data" || name == "member" || name == "sub-interface" || name == "media" || name == "max-member-count" || name == "avoid-rebalance")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::Brief()
    :
    interface_name{YType::str, "interface-name"},
    sub_interface_count{YType::uint32, "sub-interface-count"},
    member_count{YType::uint32, "member-count"},
    total_weight{YType::uint32, "total-weight"}
{

    yang_name = "brief"; yang_parent_name = "bundle-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::~Brief()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::has_data() const
{
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| sub_interface_count.is_set
	|| member_count.is_set
	|| total_weight.is_set;
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::has_operation() const
{
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(sub_interface_count.yfilter)
	|| ydk::is_set(member_count.yfilter)
	|| ydk::is_set(total_weight.yfilter);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sub_interface_count.is_set || is_set(sub_interface_count.yfilter)) leaf_name_data.push_back(sub_interface_count.get_name_leafdata());
    if (member_count.is_set || is_set(member_count.yfilter)) leaf_name_data.push_back(member_count.get_name_leafdata());
    if (total_weight.is_set || is_set(total_weight.yfilter)) leaf_name_data.push_back(total_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub-interface")
    {
        for(auto const & c : sub_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface>();
        c->parent = this;
        sub_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sub_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-count")
    {
        sub_interface_count = value;
        sub_interface_count.value_namespace = name_space;
        sub_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-count")
    {
        member_count = value;
        member_count.value_namespace = name_space;
        member_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-weight")
    {
        total_weight = value;
        total_weight.value_namespace = name_space;
        total_weight.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "sub-interface-count")
    {
        sub_interface_count.yfilter = yfilter;
    }
    if(value_path == "member-count")
    {
        member_count.yfilter = yfilter;
    }
    if(value_path == "total-weight")
    {
        total_weight.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-interface" || name == "interface-name" || name == "sub-interface-count" || name == "member-count" || name == "total-weight")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::SubInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    load_balance_data(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData>())
{
    load_balance_data->parent = this;

    yang_name = "sub-interface"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::~SubInterface()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::has_data() const
{
    return interface_name.is_set
	|| (load_balance_data !=  nullptr && load_balance_data->has_data());
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (load_balance_data !=  nullptr && load_balance_data->has_operation());
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-balance-data")
    {
        if(load_balance_data == nullptr)
        {
            load_balance_data = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData>();
        }
        return load_balance_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_balance_data != nullptr)
    {
        children["load-balance-data"] = load_balance_data;
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance-data" || name == "interface-name")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::LoadBalanceData()
    :
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"},
    local_link_threshold{YType::uint32, "local-link-threshold"}
{

    yang_name = "load-balance-data"; yang_parent_name = "sub-interface"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::~LoadBalanceData()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::has_data() const
{
    return type.is_set
	|| value_.is_set
	|| local_link_threshold.is_set;
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(local_link_threshold.yfilter);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (local_link_threshold.is_set || is_set(local_link_threshold.yfilter)) leaf_name_data.push_back(local_link_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-link-threshold")
    {
        local_link_threshold = value;
        local_link_threshold.value_namespace = name_space;
        local_link_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "local-link-threshold")
    {
        local_link_threshold.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value" || name == "local-link-threshold")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::LoadBalanceData()
    :
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"},
    local_link_threshold{YType::uint32, "local-link-threshold"}
{

    yang_name = "load-balance-data"; yang_parent_name = "bundle-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::~LoadBalanceData()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::has_data() const
{
    return type.is_set
	|| value_.is_set
	|| local_link_threshold.is_set;
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(local_link_threshold.yfilter);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (local_link_threshold.is_set || is_set(local_link_threshold.yfilter)) leaf_name_data.push_back(local_link_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-link-threshold")
    {
        local_link_threshold = value;
        local_link_threshold.value_namespace = name_space;
        local_link_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "local-link-threshold")
    {
        local_link_threshold.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value" || name == "local-link-threshold")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::Member()
    :
    interface_name{YType::str, "interface-name"},
    link_id{YType::uint8, "link-id"},
    link_order_number{YType::uint8, "link-order-number"},
    bandwidth{YType::uint8, "bandwidth"}
{

    yang_name = "member"; yang_parent_name = "bundle-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::~Member()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::has_data() const
{
    return interface_name.is_set
	|| link_id.is_set
	|| link_order_number.is_set
	|| bandwidth.is_set;
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_order_number.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.yfilter)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
        link_order_number.value_namespace = name_space;
        link_order_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-order-number")
    {
        link_order_number.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "link-id" || name == "link-order-number" || name == "bandwidth")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::SubInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    load_balance_data(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData>())
{
    load_balance_data->parent = this;

    yang_name = "sub-interface"; yang_parent_name = "bundle-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::~SubInterface()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::has_data() const
{
    return interface_name.is_set
	|| (load_balance_data !=  nullptr && load_balance_data->has_data());
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (load_balance_data !=  nullptr && load_balance_data->has_operation());
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-balance-data")
    {
        if(load_balance_data == nullptr)
        {
            load_balance_data = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData>();
        }
        return load_balance_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_balance_data != nullptr)
    {
        children["load-balance-data"] = load_balance_data;
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance-data" || name == "interface-name")
        return true;
    return false;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::LoadBalanceData()
    :
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"},
    local_link_threshold{YType::uint32, "local-link-threshold"}
{

    yang_name = "load-balance-data"; yang_parent_name = "sub-interface"; is_top_level_class = false; has_list_ancestor = true;
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::~LoadBalanceData()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::has_data() const
{
    return type.is_set
	|| value_.is_set
	|| local_link_threshold.is_set;
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(local_link_threshold.yfilter);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (local_link_threshold.is_set || is_set(local_link_threshold.yfilter)) leaf_name_data.push_back(local_link_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-link-threshold")
    {
        local_link_threshold = value;
        local_link_threshold.value_namespace = name_space;
        local_link_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "local-link-threshold")
    {
        local_link_threshold.yfilter = yfilter;
    }
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value" || name == "local-link-threshold")
        return true;
    return false;
}


}
}

