
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_0.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_3.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_1.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_bundlemgr_oper {

BundleInformation::BundleInformation()
    :
    bfd_counters(std::make_shared<BundleInformation::BfdCounters>())
	,bundle(std::make_shared<BundleInformation::Bundle>())
	,bundle_briefs(std::make_shared<BundleInformation::BundleBriefs>())
	,events(std::make_shared<BundleInformation::Events>())
	,events_bdl(std::make_shared<BundleInformation::EventsBdl>())
	,events_mbr(std::make_shared<BundleInformation::EventsMbr>())
	,events_rg(std::make_shared<BundleInformation::EventsRg>())
	,lacp(std::make_shared<BundleInformation::Lacp>())
	,mac_allocation(std::make_shared<BundleInformation::MacAllocation>())
	,mlacp(std::make_shared<BundleInformation::Mlacp>())
	,mlacp_brief(std::make_shared<BundleInformation::MlacpBrief>())
	,mlacp_bundle_counters(std::make_shared<BundleInformation::MlacpBundleCounters>())
	,mlacp_iccp_group_counters(std::make_shared<BundleInformation::MlacpIccpGroupCounters>())
	,mlacp_member_counters(std::make_shared<BundleInformation::MlacpMemberCounters>())
	,protect(std::make_shared<BundleInformation::Protect>())
	,scheduled_actions(std::make_shared<BundleInformation::ScheduledActions>())
	,system_id(std::make_shared<BundleInformation::SystemId>())
{
    bfd_counters->parent = this;
    bundle->parent = this;
    bundle_briefs->parent = this;
    events->parent = this;
    events_bdl->parent = this;
    events_mbr->parent = this;
    events_rg->parent = this;
    lacp->parent = this;
    mac_allocation->parent = this;
    mlacp->parent = this;
    mlacp_brief->parent = this;
    mlacp_bundle_counters->parent = this;
    mlacp_iccp_group_counters->parent = this;
    mlacp_member_counters->parent = this;
    protect->parent = this;
    scheduled_actions->parent = this;
    system_id->parent = this;

    yang_name = "bundle-information"; yang_parent_name = "Cisco-IOS-XR-bundlemgr-oper"; is_top_level_class = true; has_list_ancestor = false;
}

BundleInformation::~BundleInformation()
{
}

bool BundleInformation::has_data() const
{
    return (bfd_counters !=  nullptr && bfd_counters->has_data())
	|| (bundle !=  nullptr && bundle->has_data())
	|| (bundle_briefs !=  nullptr && bundle_briefs->has_data())
	|| (events !=  nullptr && events->has_data())
	|| (events_bdl !=  nullptr && events_bdl->has_data())
	|| (events_mbr !=  nullptr && events_mbr->has_data())
	|| (events_rg !=  nullptr && events_rg->has_data())
	|| (lacp !=  nullptr && lacp->has_data())
	|| (mac_allocation !=  nullptr && mac_allocation->has_data())
	|| (mlacp !=  nullptr && mlacp->has_data())
	|| (mlacp_brief !=  nullptr && mlacp_brief->has_data())
	|| (mlacp_bundle_counters !=  nullptr && mlacp_bundle_counters->has_data())
	|| (mlacp_iccp_group_counters !=  nullptr && mlacp_iccp_group_counters->has_data())
	|| (mlacp_member_counters !=  nullptr && mlacp_member_counters->has_data())
	|| (protect !=  nullptr && protect->has_data())
	|| (scheduled_actions !=  nullptr && scheduled_actions->has_data())
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::has_operation() const
{
    return is_set(yfilter)
	|| (bfd_counters !=  nullptr && bfd_counters->has_operation())
	|| (bundle !=  nullptr && bundle->has_operation())
	|| (bundle_briefs !=  nullptr && bundle_briefs->has_operation())
	|| (events !=  nullptr && events->has_operation())
	|| (events_bdl !=  nullptr && events_bdl->has_operation())
	|| (events_mbr !=  nullptr && events_mbr->has_operation())
	|| (events_rg !=  nullptr && events_rg->has_operation())
	|| (lacp !=  nullptr && lacp->has_operation())
	|| (mac_allocation !=  nullptr && mac_allocation->has_operation())
	|| (mlacp !=  nullptr && mlacp->has_operation())
	|| (mlacp_brief !=  nullptr && mlacp_brief->has_operation())
	|| (mlacp_bundle_counters !=  nullptr && mlacp_bundle_counters->has_operation())
	|| (mlacp_iccp_group_counters !=  nullptr && mlacp_iccp_group_counters->has_operation())
	|| (mlacp_member_counters !=  nullptr && mlacp_member_counters->has_operation())
	|| (protect !=  nullptr && protect->has_operation())
	|| (scheduled_actions !=  nullptr && scheduled_actions->has_operation())
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters")
    {
        if(bfd_counters == nullptr)
        {
            bfd_counters = std::make_shared<BundleInformation::BfdCounters>();
        }
        return bfd_counters;
    }

    if(child_yang_name == "bundle")
    {
        if(bundle == nullptr)
        {
            bundle = std::make_shared<BundleInformation::Bundle>();
        }
        return bundle;
    }

    if(child_yang_name == "bundle-briefs")
    {
        if(bundle_briefs == nullptr)
        {
            bundle_briefs = std::make_shared<BundleInformation::BundleBriefs>();
        }
        return bundle_briefs;
    }

    if(child_yang_name == "events")
    {
        if(events == nullptr)
        {
            events = std::make_shared<BundleInformation::Events>();
        }
        return events;
    }

    if(child_yang_name == "events-bdl")
    {
        if(events_bdl == nullptr)
        {
            events_bdl = std::make_shared<BundleInformation::EventsBdl>();
        }
        return events_bdl;
    }

    if(child_yang_name == "events-mbr")
    {
        if(events_mbr == nullptr)
        {
            events_mbr = std::make_shared<BundleInformation::EventsMbr>();
        }
        return events_mbr;
    }

    if(child_yang_name == "events-rg")
    {
        if(events_rg == nullptr)
        {
            events_rg = std::make_shared<BundleInformation::EventsRg>();
        }
        return events_rg;
    }

    if(child_yang_name == "lacp")
    {
        if(lacp == nullptr)
        {
            lacp = std::make_shared<BundleInformation::Lacp>();
        }
        return lacp;
    }

    if(child_yang_name == "mac-allocation")
    {
        if(mac_allocation == nullptr)
        {
            mac_allocation = std::make_shared<BundleInformation::MacAllocation>();
        }
        return mac_allocation;
    }

    if(child_yang_name == "mlacp")
    {
        if(mlacp == nullptr)
        {
            mlacp = std::make_shared<BundleInformation::Mlacp>();
        }
        return mlacp;
    }

    if(child_yang_name == "mlacp-brief")
    {
        if(mlacp_brief == nullptr)
        {
            mlacp_brief = std::make_shared<BundleInformation::MlacpBrief>();
        }
        return mlacp_brief;
    }

    if(child_yang_name == "mlacp-bundle-counters")
    {
        if(mlacp_bundle_counters == nullptr)
        {
            mlacp_bundle_counters = std::make_shared<BundleInformation::MlacpBundleCounters>();
        }
        return mlacp_bundle_counters;
    }

    if(child_yang_name == "mlacp-iccp-group-counters")
    {
        if(mlacp_iccp_group_counters == nullptr)
        {
            mlacp_iccp_group_counters = std::make_shared<BundleInformation::MlacpIccpGroupCounters>();
        }
        return mlacp_iccp_group_counters;
    }

    if(child_yang_name == "mlacp-member-counters")
    {
        if(mlacp_member_counters == nullptr)
        {
            mlacp_member_counters = std::make_shared<BundleInformation::MlacpMemberCounters>();
        }
        return mlacp_member_counters;
    }

    if(child_yang_name == "protect")
    {
        if(protect == nullptr)
        {
            protect = std::make_shared<BundleInformation::Protect>();
        }
        return protect;
    }

    if(child_yang_name == "scheduled-actions")
    {
        if(scheduled_actions == nullptr)
        {
            scheduled_actions = std::make_shared<BundleInformation::ScheduledActions>();
        }
        return scheduled_actions;
    }

    if(child_yang_name == "system-id")
    {
        if(system_id == nullptr)
        {
            system_id = std::make_shared<BundleInformation::SystemId>();
        }
        return system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_counters != nullptr)
    {
        children["bfd-counters"] = bfd_counters;
    }

    if(bundle != nullptr)
    {
        children["bundle"] = bundle;
    }

    if(bundle_briefs != nullptr)
    {
        children["bundle-briefs"] = bundle_briefs;
    }

    if(events != nullptr)
    {
        children["events"] = events;
    }

    if(events_bdl != nullptr)
    {
        children["events-bdl"] = events_bdl;
    }

    if(events_mbr != nullptr)
    {
        children["events-mbr"] = events_mbr;
    }

    if(events_rg != nullptr)
    {
        children["events-rg"] = events_rg;
    }

    if(lacp != nullptr)
    {
        children["lacp"] = lacp;
    }

    if(mac_allocation != nullptr)
    {
        children["mac-allocation"] = mac_allocation;
    }

    if(mlacp != nullptr)
    {
        children["mlacp"] = mlacp;
    }

    if(mlacp_brief != nullptr)
    {
        children["mlacp-brief"] = mlacp_brief;
    }

    if(mlacp_bundle_counters != nullptr)
    {
        children["mlacp-bundle-counters"] = mlacp_bundle_counters;
    }

    if(mlacp_iccp_group_counters != nullptr)
    {
        children["mlacp-iccp-group-counters"] = mlacp_iccp_group_counters;
    }

    if(mlacp_member_counters != nullptr)
    {
        children["mlacp-member-counters"] = mlacp_member_counters;
    }

    if(protect != nullptr)
    {
        children["protect"] = protect;
    }

    if(scheduled_actions != nullptr)
    {
        children["scheduled-actions"] = scheduled_actions;
    }

    if(system_id != nullptr)
    {
        children["system-id"] = system_id;
    }

    return children;
}

void BundleInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> BundleInformation::clone_ptr() const
{
    return std::make_shared<BundleInformation>();
}

std::string BundleInformation::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string BundleInformation::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function BundleInformation::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BundleInformation::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool BundleInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-counters" || name == "bundle" || name == "bundle-briefs" || name == "events" || name == "events-bdl" || name == "events-mbr" || name == "events-rg" || name == "lacp" || name == "mac-allocation" || name == "mlacp" || name == "mlacp-brief" || name == "mlacp-bundle-counters" || name == "mlacp-iccp-group-counters" || name == "mlacp-member-counters" || name == "protect" || name == "scheduled-actions" || name == "system-id")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCounters()
    :
    bfd_counters_bundles(std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles>())
	,bfd_counters_members(std::make_shared<BundleInformation::BfdCounters::BfdCountersMembers>())
{
    bfd_counters_bundles->parent = this;
    bfd_counters_members->parent = this;

    yang_name = "bfd-counters"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::BfdCounters::~BfdCounters()
{
}

bool BundleInformation::BfdCounters::has_data() const
{
    return (bfd_counters_bundles !=  nullptr && bfd_counters_bundles->has_data())
	|| (bfd_counters_members !=  nullptr && bfd_counters_members->has_data());
}

bool BundleInformation::BfdCounters::has_operation() const
{
    return is_set(yfilter)
	|| (bfd_counters_bundles !=  nullptr && bfd_counters_bundles->has_operation())
	|| (bfd_counters_members !=  nullptr && bfd_counters_members->has_operation());
}

std::string BundleInformation::BfdCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::BfdCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-bundles")
    {
        if(bfd_counters_bundles == nullptr)
        {
            bfd_counters_bundles = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles>();
        }
        return bfd_counters_bundles;
    }

    if(child_yang_name == "bfd-counters-members")
    {
        if(bfd_counters_members == nullptr)
        {
            bfd_counters_members = std::make_shared<BundleInformation::BfdCounters::BfdCountersMembers>();
        }
        return bfd_counters_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_counters_bundles != nullptr)
    {
        children["bfd-counters-bundles"] = bfd_counters_bundles;
    }

    if(bfd_counters_members != nullptr)
    {
        children["bfd-counters-members"] = bfd_counters_members;
    }

    return children;
}

void BundleInformation::BfdCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::BfdCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::BfdCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-counters-bundles" || name == "bfd-counters-members")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundles()
{

    yang_name = "bfd-counters-bundles"; yang_parent_name = "bfd-counters"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::BfdCounters::BfdCountersBundles::~BfdCountersBundles()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::has_data() const
{
    for (std::size_t index=0; index<bfd_counters_bundle.size(); index++)
    {
        if(bfd_counters_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::has_operation() const
{
    for (std::size_t index=0; index<bfd_counters_bundle.size(); index++)
    {
        if(bfd_counters_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bfd-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-bundle")
    {
        for(auto const & c : bfd_counters_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle>();
        c->parent = this;
        bfd_counters_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_counters_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::BfdCounters::BfdCountersBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-counters-bundle")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    bfd_counters_bundle_children_members(std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers>())
	,bfd_counters_bundle_descendant(std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant>())
	,bfd_counters_bundle_item(std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem>())
{
    bfd_counters_bundle_children_members->parent = this;
    bfd_counters_bundle_descendant->parent = this;
    bfd_counters_bundle_item->parent = this;

    yang_name = "bfd-counters-bundle"; yang_parent_name = "bfd-counters-bundles"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::~BfdCountersBundle()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::has_data() const
{
    return bundle_interface.is_set
	|| (bfd_counters_bundle_children_members !=  nullptr && bfd_counters_bundle_children_members->has_data())
	|| (bfd_counters_bundle_descendant !=  nullptr && bfd_counters_bundle_descendant->has_data())
	|| (bfd_counters_bundle_item !=  nullptr && bfd_counters_bundle_item->has_data());
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (bfd_counters_bundle_children_members !=  nullptr && bfd_counters_bundle_children_members->has_operation())
	|| (bfd_counters_bundle_descendant !=  nullptr && bfd_counters_bundle_descendant->has_operation())
	|| (bfd_counters_bundle_item !=  nullptr && bfd_counters_bundle_item->has_operation());
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bfd-counters/bfd-counters-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-bundle-children-members")
    {
        if(bfd_counters_bundle_children_members == nullptr)
        {
            bfd_counters_bundle_children_members = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers>();
        }
        return bfd_counters_bundle_children_members;
    }

    if(child_yang_name == "bfd-counters-bundle-descendant")
    {
        if(bfd_counters_bundle_descendant == nullptr)
        {
            bfd_counters_bundle_descendant = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant>();
        }
        return bfd_counters_bundle_descendant;
    }

    if(child_yang_name == "bfd-counters-bundle-item")
    {
        if(bfd_counters_bundle_item == nullptr)
        {
            bfd_counters_bundle_item = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem>();
        }
        return bfd_counters_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_counters_bundle_children_members != nullptr)
    {
        children["bfd-counters-bundle-children-members"] = bfd_counters_bundle_children_members;
    }

    if(bfd_counters_bundle_descendant != nullptr)
    {
        children["bfd-counters-bundle-descendant"] = bfd_counters_bundle_descendant;
    }

    if(bfd_counters_bundle_item != nullptr)
    {
        children["bfd-counters-bundle-item"] = bfd_counters_bundle_item;
    }

    return children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-counters-bundle-children-members" || name == "bfd-counters-bundle-descendant" || name == "bfd-counters-bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMembers()
{

    yang_name = "bfd-counters-bundle-children-members"; yang_parent_name = "bfd-counters-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::~BfdCountersBundleChildrenMembers()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::has_data() const
{
    for (std::size_t index=0; index<bfd_counters_bundle_children_member.size(); index++)
    {
        if(bfd_counters_bundle_children_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::has_operation() const
{
    for (std::size_t index=0; index<bfd_counters_bundle_children_member.size(); index++)
    {
        if(bfd_counters_bundle_children_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundle-children-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-bundle-children-member")
    {
        for(auto const & c : bfd_counters_bundle_children_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember>();
        c->parent = this;
        bfd_counters_bundle_children_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_counters_bundle_children_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-counters-bundle-children-member")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::BfdCountersBundleChildrenMember()
    :
    member_interface{YType::str, "member-interface"},
    down{YType::uint32, "down"},
    last_time_cleared{YType::uint64, "last-time-cleared"},
    member_name{YType::str, "member-name"},
    neighbor_unconfigured{YType::uint32, "neighbor-unconfigured"},
    neighbor_unconfigured_timeouts{YType::uint32, "neighbor-unconfigured-timeouts"},
    start_timeouts{YType::uint32, "start-timeouts"},
    starting{YType::uint32, "starting"},
    time_since_cleared{YType::uint64, "time-since-cleared"},
    up{YType::uint32, "up"}
{

    yang_name = "bfd-counters-bundle-children-member"; yang_parent_name = "bfd-counters-bundle-children-members"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::~BfdCountersBundleChildrenMember()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::has_data() const
{
    return member_interface.is_set
	|| down.is_set
	|| last_time_cleared.is_set
	|| member_name.is_set
	|| neighbor_unconfigured.is_set
	|| neighbor_unconfigured_timeouts.is_set
	|| start_timeouts.is_set
	|| starting.is_set
	|| time_since_cleared.is_set
	|| up.is_set;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| ydk::is_set(neighbor_unconfigured.yfilter)
	|| ydk::is_set(neighbor_unconfigured_timeouts.yfilter)
	|| ydk::is_set(start_timeouts.yfilter)
	|| ydk::is_set(starting.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundle-children-member" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (neighbor_unconfigured.is_set || is_set(neighbor_unconfigured.yfilter)) leaf_name_data.push_back(neighbor_unconfigured.get_name_leafdata());
    if (neighbor_unconfigured_timeouts.is_set || is_set(neighbor_unconfigured_timeouts.yfilter)) leaf_name_data.push_back(neighbor_unconfigured_timeouts.get_name_leafdata());
    if (start_timeouts.is_set || is_set(start_timeouts.yfilter)) leaf_name_data.push_back(start_timeouts.get_name_leafdata());
    if (starting.is_set || is_set(starting.yfilter)) leaf_name_data.push_back(starting.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-unconfigured")
    {
        neighbor_unconfigured = value;
        neighbor_unconfigured.value_namespace = name_space;
        neighbor_unconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-unconfigured-timeouts")
    {
        neighbor_unconfigured_timeouts = value;
        neighbor_unconfigured_timeouts.value_namespace = name_space;
        neighbor_unconfigured_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timeouts")
    {
        start_timeouts = value;
        start_timeouts.value_namespace = name_space;
        start_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "starting")
    {
        starting = value;
        starting.value_namespace = name_space;
        starting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-unconfigured")
    {
        neighbor_unconfigured.yfilter = yfilter;
    }
    if(value_path == "neighbor-unconfigured-timeouts")
    {
        neighbor_unconfigured_timeouts.yfilter = yfilter;
    }
    if(value_path == "start-timeouts")
    {
        start_timeouts.yfilter = yfilter;
    }
    if(value_path == "starting")
    {
        starting.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-interface" || name == "down" || name == "last-time-cleared" || name == "member-name" || name == "neighbor-unconfigured" || name == "neighbor-unconfigured-timeouts" || name == "start-timeouts" || name == "starting" || name == "time-since-cleared" || name == "up")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCountersBundleDescendant()
    :
    bundle_name(std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName>())
{
    bundle_name->parent = this;

    yang_name = "bfd-counters-bundle-descendant"; yang_parent_name = "bfd-counters-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::~BfdCountersBundleDescendant()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::has_data() const
{
    for (std::size_t index=0; index<bfd_counter.size(); index++)
    {
        if(bfd_counter[index]->has_data())
            return true;
    }
    return (bundle_name !=  nullptr && bundle_name->has_data());
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::has_operation() const
{
    for (std::size_t index=0; index<bfd_counter.size(); index++)
    {
        if(bfd_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bundle_name !=  nullptr && bundle_name->has_operation());
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundle-descendant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counter")
    {
        for(auto const & c : bfd_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter>();
        c->parent = this;
        bfd_counter.push_back(c);
        return c;
    }

    if(child_yang_name == "bundle-name")
    {
        if(bundle_name == nullptr)
        {
            bundle_name = std::make_shared<BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName>();
        }
        return bundle_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_counter)
    {
        children[c->get_segment_path()] = c;
    }

    if(bundle_name != nullptr)
    {
        children["bundle-name"] = bundle_name;
    }

    return children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-counter" || name == "bundle-name")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::BfdCounter()
    :
    down{YType::uint32, "down"},
    last_time_cleared{YType::uint64, "last-time-cleared"},
    member_name{YType::str, "member-name"},
    neighbor_unconfigured{YType::uint32, "neighbor-unconfigured"},
    neighbor_unconfigured_timeouts{YType::uint32, "neighbor-unconfigured-timeouts"},
    start_timeouts{YType::uint32, "start-timeouts"},
    starting{YType::uint32, "starting"},
    time_since_cleared{YType::uint64, "time-since-cleared"},
    up{YType::uint32, "up"}
{

    yang_name = "bfd-counter"; yang_parent_name = "bfd-counters-bundle-descendant"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::~BfdCounter()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::has_data() const
{
    return down.is_set
	|| last_time_cleared.is_set
	|| member_name.is_set
	|| neighbor_unconfigured.is_set
	|| neighbor_unconfigured_timeouts.is_set
	|| start_timeouts.is_set
	|| starting.is_set
	|| time_since_cleared.is_set
	|| up.is_set;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| ydk::is_set(neighbor_unconfigured.yfilter)
	|| ydk::is_set(neighbor_unconfigured_timeouts.yfilter)
	|| ydk::is_set(start_timeouts.yfilter)
	|| ydk::is_set(starting.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (neighbor_unconfigured.is_set || is_set(neighbor_unconfigured.yfilter)) leaf_name_data.push_back(neighbor_unconfigured.get_name_leafdata());
    if (neighbor_unconfigured_timeouts.is_set || is_set(neighbor_unconfigured_timeouts.yfilter)) leaf_name_data.push_back(neighbor_unconfigured_timeouts.get_name_leafdata());
    if (start_timeouts.is_set || is_set(start_timeouts.yfilter)) leaf_name_data.push_back(start_timeouts.get_name_leafdata());
    if (starting.is_set || is_set(starting.yfilter)) leaf_name_data.push_back(starting.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-unconfigured")
    {
        neighbor_unconfigured = value;
        neighbor_unconfigured.value_namespace = name_space;
        neighbor_unconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-unconfigured-timeouts")
    {
        neighbor_unconfigured_timeouts = value;
        neighbor_unconfigured_timeouts.value_namespace = name_space;
        neighbor_unconfigured_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timeouts")
    {
        start_timeouts = value;
        start_timeouts.value_namespace = name_space;
        start_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "starting")
    {
        starting = value;
        starting.value_namespace = name_space;
        starting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-unconfigured")
    {
        neighbor_unconfigured.yfilter = yfilter;
    }
    if(value_path == "neighbor-unconfigured-timeouts")
    {
        neighbor_unconfigured_timeouts.yfilter = yfilter;
    }
    if(value_path == "start-timeouts")
    {
        start_timeouts.yfilter = yfilter;
    }
    if(value_path == "starting")
    {
        starting.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "last-time-cleared" || name == "member-name" || name == "neighbor-unconfigured" || name == "neighbor-unconfigured-timeouts" || name == "start-timeouts" || name == "starting" || name == "time-since-cleared" || name == "up")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::BundleName()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "bundle-name"; yang_parent_name = "bfd-counters-bundle-descendant"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::~BundleName()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::has_data() const
{
    return item_name.is_set;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "item-name")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::BfdCountersBundleItem()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "bfd-counters-bundle-item"; yang_parent_name = "bfd-counters-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::~BfdCountersBundleItem()
{
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::has_data() const
{
    return item_name.is_set;
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "item-name")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMembers()
{

    yang_name = "bfd-counters-members"; yang_parent_name = "bfd-counters"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::BfdCounters::BfdCountersMembers::~BfdCountersMembers()
{
}

bool BundleInformation::BfdCounters::BfdCountersMembers::has_data() const
{
    for (std::size_t index=0; index<bfd_counters_member.size(); index++)
    {
        if(bfd_counters_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::BfdCounters::BfdCountersMembers::has_operation() const
{
    for (std::size_t index=0; index<bfd_counters_member.size(); index++)
    {
        if(bfd_counters_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::BfdCounters::BfdCountersMembers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bfd-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::BfdCounters::BfdCountersMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-member")
    {
        for(auto const & c : bfd_counters_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember>();
        c->parent = this;
        bfd_counters_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_counters_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::BfdCounters::BfdCountersMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::BfdCounters::BfdCountersMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::BfdCounters::BfdCountersMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-counters-member")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMember()
    :
    member_interface{YType::str, "member-interface"}
    	,
    bfd_counters_member_item(std::make_shared<BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem>())
{
    bfd_counters_member_item->parent = this;

    yang_name = "bfd-counters-member"; yang_parent_name = "bfd-counters-members"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::~BfdCountersMember()
{
}

bool BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::has_data() const
{
    return member_interface.is_set
	|| (bfd_counters_member_item !=  nullptr && bfd_counters_member_item->has_data());
}

bool BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (bfd_counters_member_item !=  nullptr && bfd_counters_member_item->has_operation());
}

std::string BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bfd-counters/bfd-counters-members/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-member" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-counters-member-item")
    {
        if(bfd_counters_member_item == nullptr)
        {
            bfd_counters_member_item = std::make_shared<BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem>();
        }
        return bfd_counters_member_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_counters_member_item != nullptr)
    {
        children["bfd-counters-member-item"] = bfd_counters_member_item;
    }

    return children;
}

void BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-counters-member-item" || name == "member-interface")
        return true;
    return false;
}

BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::BfdCountersMemberItem()
    :
    down{YType::uint32, "down"},
    last_time_cleared{YType::uint64, "last-time-cleared"},
    member_name{YType::str, "member-name"},
    neighbor_unconfigured{YType::uint32, "neighbor-unconfigured"},
    neighbor_unconfigured_timeouts{YType::uint32, "neighbor-unconfigured-timeouts"},
    start_timeouts{YType::uint32, "start-timeouts"},
    starting{YType::uint32, "starting"},
    time_since_cleared{YType::uint64, "time-since-cleared"},
    up{YType::uint32, "up"}
{

    yang_name = "bfd-counters-member-item"; yang_parent_name = "bfd-counters-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::~BfdCountersMemberItem()
{
}

bool BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::has_data() const
{
    return down.is_set
	|| last_time_cleared.is_set
	|| member_name.is_set
	|| neighbor_unconfigured.is_set
	|| neighbor_unconfigured_timeouts.is_set
	|| start_timeouts.is_set
	|| starting.is_set
	|| time_since_cleared.is_set
	|| up.is_set;
}

bool BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| ydk::is_set(neighbor_unconfigured.yfilter)
	|| ydk::is_set(neighbor_unconfigured_timeouts.yfilter)
	|| ydk::is_set(start_timeouts.yfilter)
	|| ydk::is_set(starting.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-counters-member-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (neighbor_unconfigured.is_set || is_set(neighbor_unconfigured.yfilter)) leaf_name_data.push_back(neighbor_unconfigured.get_name_leafdata());
    if (neighbor_unconfigured_timeouts.is_set || is_set(neighbor_unconfigured_timeouts.yfilter)) leaf_name_data.push_back(neighbor_unconfigured_timeouts.get_name_leafdata());
    if (start_timeouts.is_set || is_set(start_timeouts.yfilter)) leaf_name_data.push_back(start_timeouts.get_name_leafdata());
    if (starting.is_set || is_set(starting.yfilter)) leaf_name_data.push_back(starting.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-unconfigured")
    {
        neighbor_unconfigured = value;
        neighbor_unconfigured.value_namespace = name_space;
        neighbor_unconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-unconfigured-timeouts")
    {
        neighbor_unconfigured_timeouts = value;
        neighbor_unconfigured_timeouts.value_namespace = name_space;
        neighbor_unconfigured_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timeouts")
    {
        start_timeouts = value;
        start_timeouts.value_namespace = name_space;
        start_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "starting")
    {
        starting = value;
        starting.value_namespace = name_space;
        starting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-unconfigured")
    {
        neighbor_unconfigured.yfilter = yfilter;
    }
    if(value_path == "neighbor-unconfigured-timeouts")
    {
        neighbor_unconfigured_timeouts.yfilter = yfilter;
    }
    if(value_path == "start-timeouts")
    {
        start_timeouts.yfilter = yfilter;
    }
    if(value_path == "starting")
    {
        starting.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "last-time-cleared" || name == "member-name" || name == "neighbor-unconfigured" || name == "neighbor-unconfigured-timeouts" || name == "start-timeouts" || name == "starting" || name == "time-since-cleared" || name == "up")
        return true;
    return false;
}

BundleInformation::Bundle::Bundle()
    :
    bundle_bundles(std::make_shared<BundleInformation::Bundle::BundleBundles>())
	,bundle_members(std::make_shared<BundleInformation::Bundle::BundleMembers>())
{
    bundle_bundles->parent = this;
    bundle_members->parent = this;

    yang_name = "bundle"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Bundle::~Bundle()
{
}

bool BundleInformation::Bundle::has_data() const
{
    return (bundle_bundles !=  nullptr && bundle_bundles->has_data())
	|| (bundle_members !=  nullptr && bundle_members->has_data());
}

bool BundleInformation::Bundle::has_operation() const
{
    return is_set(yfilter)
	|| (bundle_bundles !=  nullptr && bundle_bundles->has_operation())
	|| (bundle_members !=  nullptr && bundle_members->has_operation());
}

std::string BundleInformation::Bundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-bundles")
    {
        if(bundle_bundles == nullptr)
        {
            bundle_bundles = std::make_shared<BundleInformation::Bundle::BundleBundles>();
        }
        return bundle_bundles;
    }

    if(child_yang_name == "bundle-members")
    {
        if(bundle_members == nullptr)
        {
            bundle_members = std::make_shared<BundleInformation::Bundle::BundleMembers>();
        }
        return bundle_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_bundles != nullptr)
    {
        children["bundle-bundles"] = bundle_bundles;
    }

    if(bundle_members != nullptr)
    {
        children["bundle-members"] = bundle_members;
    }

    return children;
}

void BundleInformation::Bundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Bundle::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Bundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-bundles" || name == "bundle-members")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundles()
{

    yang_name = "bundle-bundles"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Bundle::BundleBundles::~BundleBundles()
{
}

bool BundleInformation::Bundle::BundleBundles::has_data() const
{
    for (std::size_t index=0; index<bundle_bundle.size(); index++)
    {
        if(bundle_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Bundle::BundleBundles::has_operation() const
{
    for (std::size_t index=0; index<bundle_bundle.size(); index++)
    {
        if(bundle_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bundle/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Bundle::BundleBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-bundle")
    {
        for(auto const & c : bundle_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle>();
        c->parent = this;
        bundle_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Bundle::BundleBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Bundle::BundleBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-bundle")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    bundle_bundle_children_members(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers>())
	,bundle_bundle_descendant(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant>())
	,bundle_bundle_item(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem>())
{
    bundle_bundle_children_members->parent = this;
    bundle_bundle_descendant->parent = this;
    bundle_bundle_item->parent = this;

    yang_name = "bundle-bundle"; yang_parent_name = "bundle-bundles"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::~BundleBundle()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::has_data() const
{
    return bundle_interface.is_set
	|| (bundle_bundle_children_members !=  nullptr && bundle_bundle_children_members->has_data())
	|| (bundle_bundle_descendant !=  nullptr && bundle_bundle_descendant->has_data())
	|| (bundle_bundle_item !=  nullptr && bundle_bundle_item->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (bundle_bundle_children_members !=  nullptr && bundle_bundle_children_members->has_operation())
	|| (bundle_bundle_descendant !=  nullptr && bundle_bundle_descendant->has_operation())
	|| (bundle_bundle_item !=  nullptr && bundle_bundle_item->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bundle/bundle-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-bundle-children-members")
    {
        if(bundle_bundle_children_members == nullptr)
        {
            bundle_bundle_children_members = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers>();
        }
        return bundle_bundle_children_members;
    }

    if(child_yang_name == "bundle-bundle-descendant")
    {
        if(bundle_bundle_descendant == nullptr)
        {
            bundle_bundle_descendant = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant>();
        }
        return bundle_bundle_descendant;
    }

    if(child_yang_name == "bundle-bundle-item")
    {
        if(bundle_bundle_item == nullptr)
        {
            bundle_bundle_item = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem>();
        }
        return bundle_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_bundle_children_members != nullptr)
    {
        children["bundle-bundle-children-members"] = bundle_bundle_children_members;
    }

    if(bundle_bundle_descendant != nullptr)
    {
        children["bundle-bundle-descendant"] = bundle_bundle_descendant;
    }

    if(bundle_bundle_item != nullptr)
    {
        children["bundle-bundle-item"] = bundle_bundle_item;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-bundle-children-members" || name == "bundle-bundle-descendant" || name == "bundle-bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMembers()
{

    yang_name = "bundle-bundle-children-members"; yang_parent_name = "bundle-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::~BundleBundleChildrenMembers()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::has_data() const
{
    for (std::size_t index=0; index<bundle_bundle_children_member.size(); index++)
    {
        if(bundle_bundle_children_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::has_operation() const
{
    for (std::size_t index=0; index<bundle_bundle_children_member.size(); index++)
    {
        if(bundle_bundle_children_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundle-children-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-bundle-children-member")
    {
        for(auto const & c : bundle_bundle_children_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember>();
        c->parent = this;
        bundle_bundle_children_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_bundle_children_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-bundle-children-member")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::BundleBundleChildrenMember()
    :
    member_interface{YType::str, "member-interface"},
    bandwidth{YType::uint32, "bandwidth"},
    iccp_node{YType::uint32, "iccp-node"},
    interface_name{YType::str, "interface-name"},
    lacp_enabled{YType::str, "lacp-enabled"},
    link_order_number{YType::uint16, "link-order-number"},
    member_name{YType::str, "member-name"},
    member_type{YType::enumeration, "member-type"},
    port_number{YType::uint16, "port-number"},
    port_priority{YType::uint16, "port-priority"},
    underlying_link_id{YType::uint16, "underlying-link-id"}
    	,
    counters(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters>())
	,link_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData>())
	,mac_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress>())
	,member_mux_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData>())
{
    counters->parent = this;
    link_data->parent = this;
    mac_address->parent = this;
    member_mux_data->parent = this;

    yang_name = "bundle-bundle-children-member"; yang_parent_name = "bundle-bundle-children-members"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::~BundleBundleChildrenMember()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::has_data() const
{
    return member_interface.is_set
	|| bandwidth.is_set
	|| iccp_node.is_set
	|| interface_name.is_set
	|| lacp_enabled.is_set
	|| link_order_number.is_set
	|| member_name.is_set
	|| member_type.is_set
	|| port_number.is_set
	|| port_priority.is_set
	|| underlying_link_id.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(iccp_node.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(lacp_enabled.yfilter)
	|| ydk::is_set(link_order_number.yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| ydk::is_set(member_type.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(underlying_link_id.yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundle-children-member" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.yfilter)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (lacp_enabled.is_set || is_set(lacp_enabled.yfilter)) leaf_name_data.push_back(lacp_enabled.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.yfilter)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.yfilter)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.yfilter)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData>();
        }
        return member_mux_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(link_data != nullptr)
    {
        children["link-data"] = link_data;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(member_mux_data != nullptr)
    {
        children["member-mux-data"] = member_mux_data;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
        iccp_node.value_namespace = name_space;
        iccp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled = value;
        lacp_enabled.value_namespace = name_space;
        lacp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
        link_order_number.value_namespace = name_space;
        link_order_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-type")
    {
        member_type = value;
        member_type.value_namespace = name_space;
        member_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
        underlying_link_id.value_namespace = name_space;
        underlying_link_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "iccp-node")
    {
        iccp_node.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled.yfilter = yfilter;
    }
    if(value_path == "link-order-number")
    {
        link_order_number.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
    if(value_path == "member-type")
    {
        member_type.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "link-data" || name == "mac-address" || name == "member-mux-data" || name == "member-interface" || name == "bandwidth" || name == "iccp-node" || name == "interface-name" || name == "lacp-enabled" || name == "link-order-number" || name == "member-name" || name == "member-type" || name == "port-number" || name == "port-priority" || name == "underlying-link-id")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::Counters()
    :
    defaulted{YType::uint32, "defaulted"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    expired{YType::uint32, "expired"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"}
{

    yang_name = "counters"; yang_parent_name = "bundle-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::~Counters()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::has_data() const
{
    return defaulted.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| expired.is_set
	|| illegal_packets_received.is_set
	|| lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| last_cleared_nsec.is_set
	|| last_cleared_sec.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(defaulted.yfilter)
	|| ydk::is_set(excess_lacpd_us_received.yfilter)
	|| ydk::is_set(excess_marker_packets_received.yfilter)
	|| ydk::is_set(expired.yfilter)
	|| ydk::is_set(illegal_packets_received.yfilter)
	|| ydk::is_set(lacpd_us_received.yfilter)
	|| ydk::is_set(lacpd_us_transmitted.yfilter)
	|| ydk::is_set(last_cleared_nsec.yfilter)
	|| ydk::is_set(last_cleared_sec.yfilter)
	|| ydk::is_set(marker_packets_received.yfilter)
	|| ydk::is_set(marker_responses_transmitted.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defaulted.is_set || is_set(defaulted.yfilter)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.yfilter)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.yfilter)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (expired.is_set || is_set(expired.yfilter)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.yfilter)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (lacpd_us_received.is_set || is_set(lacpd_us_received.yfilter)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.yfilter)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.yfilter)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.yfilter)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.yfilter)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.yfilter)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "defaulted")
    {
        defaulted = value;
        defaulted.value_namespace = name_space;
        defaulted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
        excess_lacpd_us_received.value_namespace = name_space;
        excess_lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
        excess_marker_packets_received.value_namespace = name_space;
        excess_marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired")
    {
        expired = value;
        expired.value_namespace = name_space;
        expired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
        illegal_packets_received.value_namespace = name_space;
        illegal_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
        lacpd_us_received.value_namespace = name_space;
        lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
        lacpd_us_transmitted.value_namespace = name_space;
        lacpd_us_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
        last_cleared_nsec.value_namespace = name_space;
        last_cleared_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
        last_cleared_sec.value_namespace = name_space;
        last_cleared_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
        marker_packets_received.value_namespace = name_space;
        marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
        marker_responses_transmitted.value_namespace = name_space;
        marker_responses_transmitted.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "defaulted")
    {
        defaulted.yfilter = yfilter;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "expired")
    {
        expired.yfilter = yfilter;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted.yfilter = yfilter;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec.yfilter = yfilter;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec.yfilter = yfilter;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "defaulted" || name == "excess-lacpd-us-received" || name == "excess-marker-packets-received" || name == "expired" || name == "illegal-packets-received" || name == "lacpd-us-received" || name == "lacpd-us-transmitted" || name == "last-cleared-nsec" || name == "last-cleared-sec" || name == "marker-packets-received" || name == "marker-responses-transmitted")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::LinkData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    interface_handle{YType::str, "interface-handle"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    partner_port_state{YType::uint8, "partner-port-state"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"}
{

    yang_name = "link-data"; yang_parent_name = "bundle-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::~LinkData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::has_data() const
{
    return actor_operational_key.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| actor_port_state.is_set
	|| actor_system_mac_address.is_set
	|| actor_system_priority.is_set
	|| attached_aggregator_id.is_set
	|| interface_handle.is_set
	|| partner_operational_key.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| partner_port_state.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| selected_aggregator_id.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(actor_port_id.yfilter)
	|| ydk::is_set(actor_port_priority.yfilter)
	|| ydk::is_set(actor_port_state.yfilter)
	|| ydk::is_set(actor_system_mac_address.yfilter)
	|| ydk::is_set(actor_system_priority.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| ydk::is_set(partner_port_id.yfilter)
	|| ydk::is_set(partner_port_priority.yfilter)
	|| ydk::is_set(partner_port_state.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.yfilter)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.yfilter)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.yfilter)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.yfilter)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.yfilter)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.yfilter)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.yfilter)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.yfilter)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
        actor_port_id.value_namespace = name_space;
        actor_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
        actor_port_priority.value_namespace = name_space;
        actor_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
        actor_port_state.value_namespace = name_space;
        actor_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
        actor_system_mac_address.value_namespace = name_space;
        actor_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
        actor_system_priority.value_namespace = name_space;
        actor_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
        partner_port_id.value_namespace = name_space;
        partner_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
        partner_port_priority.value_namespace = name_space;
        partner_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
        partner_port_state.value_namespace = name_space;
        partner_port_state.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority.yfilter = yfilter;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state.yfilter = yfilter;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id.yfilter = yfilter;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority.yfilter = yfilter;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-operational-key" || name == "actor-port-id" || name == "actor-port-priority" || name == "actor-port-state" || name == "actor-system-mac-address" || name == "actor-system-priority" || name == "attached-aggregator-id" || name == "interface-handle" || name == "partner-operational-key" || name == "partner-port-id" || name == "partner-port-priority" || name == "partner-port-state" || name == "partner-system-mac-address" || name == "partner-system-priority" || name == "selected-aggregator-id")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "bundle-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxData()
    :
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state{YType::enumeration, "mux-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
    	,
    member_mux_state_reason_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "bundle-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::~MemberMuxData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::has_data() const
{
    return error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(member_mux_state_reason.yfilter)
	|| ydk::is_set(member_state.yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(mux_state_reason.yfilter)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.yfilter)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.yfilter)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member_mux_state_reason_data != nullptr)
    {
        children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
        member_mux_state_reason.value_namespace = name_space;
        member_mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
        mux_state_reason.value_namespace = name_space;
        mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-mux-state-reason-data" || name == "error" || name == "member-mux-state-reason" || name == "member-state" || name == "mux-state" || name == "mux-state-reason")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    return reason_type.is_set
	|| severity.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_type.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.yfilter)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
        reason_type.value_namespace = name_space;
        reason_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-type")
    {
        reason_type.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-type" || name == "severity")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleBundleDescendant()
    :
    bundle_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData>())
{
    bundle_data->parent = this;

    yang_name = "bundle-bundle-descendant"; yang_parent_name = "bundle-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::~BundleBundleDescendant()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundle-descendant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        if(bundle_data == nullptr)
        {
            bundle_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData>();
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
        auto c = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData>();
        c->parent = this;
        member_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::get_children() const
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

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "member-data")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BundleData()
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
    mac_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "bundle-bundle-descendant"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::~BundleData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::has_data() const
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

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::has_operation() const
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

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::get_name_leaf_data() const
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

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(c);
        return c;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::get_children() const
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

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-config" || name == "mac-address" || name == "active-foreign-member-count" || name == "active-member-count" || name == "available-bandwidth" || name == "bundle-interface-name" || name == "bundle-status" || name == "cisco-extensions" || name == "collector-max-delay" || name == "configured-bandwidth" || name == "configured-foreign-member-count" || name == "configured-member-count" || name == "effective-bandwidth" || name == "iccp-group-id" || name == "inter-chassis" || name == "ipv4bfd-status" || name == "ipv6bfd-status" || name == "is-active" || name == "lacp-nonrevertive" || name == "lacp-status" || name == "link-order-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "mac-source" || name == "mac-source-member" || name == "maximize-threshold-value-band-width" || name == "maximize-threshold-value-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-active-links" || name == "minimum-bandwidth" || name == "mlacp-mode" || name == "mlacp-status" || name == "primary-member" || name == "recovery-delay" || name == "singleton" || name == "standby-member-count" || name == "suppression-timer" || name == "switchover-type" || name == "wait-while-timer")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::BfdConfig()
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
    destination_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::has_data() const
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

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::has_operation() const
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

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::get_name_leaf_data() const
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

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "fast-detect" || name == "mode-info" || name == "nbr-unconfig-timer" || name == "pref-echo-min-interval" || name == "pref-min-interval" || name == "pref-multiplier" || name == "start-timer")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberData()
    :
    bandwidth{YType::uint32, "bandwidth"},
    iccp_node{YType::uint32, "iccp-node"},
    interface_name{YType::str, "interface-name"},
    lacp_enabled{YType::str, "lacp-enabled"},
    link_order_number{YType::uint16, "link-order-number"},
    member_name{YType::str, "member-name"},
    member_type{YType::enumeration, "member-type"},
    port_number{YType::uint16, "port-number"},
    port_priority{YType::uint16, "port-priority"},
    underlying_link_id{YType::uint16, "underlying-link-id"}
    	,
    counters(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters>())
	,link_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData>())
	,mac_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress>())
	,member_mux_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData>())
{
    counters->parent = this;
    link_data->parent = this;
    mac_address->parent = this;
    member_mux_data->parent = this;

    yang_name = "member-data"; yang_parent_name = "bundle-bundle-descendant"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::~MemberData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::has_data() const
{
    return bandwidth.is_set
	|| iccp_node.is_set
	|| interface_name.is_set
	|| lacp_enabled.is_set
	|| link_order_number.is_set
	|| member_name.is_set
	|| member_type.is_set
	|| port_number.is_set
	|| port_priority.is_set
	|| underlying_link_id.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(iccp_node.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(lacp_enabled.yfilter)
	|| ydk::is_set(link_order_number.yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| ydk::is_set(member_type.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(underlying_link_id.yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.yfilter)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (lacp_enabled.is_set || is_set(lacp_enabled.yfilter)) leaf_name_data.push_back(lacp_enabled.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.yfilter)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.yfilter)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.yfilter)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData>();
        }
        return member_mux_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(link_data != nullptr)
    {
        children["link-data"] = link_data;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(member_mux_data != nullptr)
    {
        children["member-mux-data"] = member_mux_data;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
        iccp_node.value_namespace = name_space;
        iccp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled = value;
        lacp_enabled.value_namespace = name_space;
        lacp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
        link_order_number.value_namespace = name_space;
        link_order_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-type")
    {
        member_type = value;
        member_type.value_namespace = name_space;
        member_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
        underlying_link_id.value_namespace = name_space;
        underlying_link_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "iccp-node")
    {
        iccp_node.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled.yfilter = yfilter;
    }
    if(value_path == "link-order-number")
    {
        link_order_number.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
    if(value_path == "member-type")
    {
        member_type.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "link-data" || name == "mac-address" || name == "member-mux-data" || name == "bandwidth" || name == "iccp-node" || name == "interface-name" || name == "lacp-enabled" || name == "link-order-number" || name == "member-name" || name == "member-type" || name == "port-number" || name == "port-priority" || name == "underlying-link-id")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::Counters()
    :
    defaulted{YType::uint32, "defaulted"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    expired{YType::uint32, "expired"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"}
{

    yang_name = "counters"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::~Counters()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::has_data() const
{
    return defaulted.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| expired.is_set
	|| illegal_packets_received.is_set
	|| lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| last_cleared_nsec.is_set
	|| last_cleared_sec.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(defaulted.yfilter)
	|| ydk::is_set(excess_lacpd_us_received.yfilter)
	|| ydk::is_set(excess_marker_packets_received.yfilter)
	|| ydk::is_set(expired.yfilter)
	|| ydk::is_set(illegal_packets_received.yfilter)
	|| ydk::is_set(lacpd_us_received.yfilter)
	|| ydk::is_set(lacpd_us_transmitted.yfilter)
	|| ydk::is_set(last_cleared_nsec.yfilter)
	|| ydk::is_set(last_cleared_sec.yfilter)
	|| ydk::is_set(marker_packets_received.yfilter)
	|| ydk::is_set(marker_responses_transmitted.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defaulted.is_set || is_set(defaulted.yfilter)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.yfilter)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.yfilter)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (expired.is_set || is_set(expired.yfilter)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.yfilter)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (lacpd_us_received.is_set || is_set(lacpd_us_received.yfilter)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.yfilter)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.yfilter)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.yfilter)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.yfilter)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.yfilter)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "defaulted")
    {
        defaulted = value;
        defaulted.value_namespace = name_space;
        defaulted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
        excess_lacpd_us_received.value_namespace = name_space;
        excess_lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
        excess_marker_packets_received.value_namespace = name_space;
        excess_marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired")
    {
        expired = value;
        expired.value_namespace = name_space;
        expired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
        illegal_packets_received.value_namespace = name_space;
        illegal_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
        lacpd_us_received.value_namespace = name_space;
        lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
        lacpd_us_transmitted.value_namespace = name_space;
        lacpd_us_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
        last_cleared_nsec.value_namespace = name_space;
        last_cleared_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
        last_cleared_sec.value_namespace = name_space;
        last_cleared_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
        marker_packets_received.value_namespace = name_space;
        marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
        marker_responses_transmitted.value_namespace = name_space;
        marker_responses_transmitted.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "defaulted")
    {
        defaulted.yfilter = yfilter;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "expired")
    {
        expired.yfilter = yfilter;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted.yfilter = yfilter;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec.yfilter = yfilter;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec.yfilter = yfilter;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "defaulted" || name == "excess-lacpd-us-received" || name == "excess-marker-packets-received" || name == "expired" || name == "illegal-packets-received" || name == "lacpd-us-received" || name == "lacpd-us-transmitted" || name == "last-cleared-nsec" || name == "last-cleared-sec" || name == "marker-packets-received" || name == "marker-responses-transmitted")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::LinkData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    interface_handle{YType::str, "interface-handle"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    partner_port_state{YType::uint8, "partner-port-state"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"}
{

    yang_name = "link-data"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::~LinkData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::has_data() const
{
    return actor_operational_key.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| actor_port_state.is_set
	|| actor_system_mac_address.is_set
	|| actor_system_priority.is_set
	|| attached_aggregator_id.is_set
	|| interface_handle.is_set
	|| partner_operational_key.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| partner_port_state.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| selected_aggregator_id.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(actor_port_id.yfilter)
	|| ydk::is_set(actor_port_priority.yfilter)
	|| ydk::is_set(actor_port_state.yfilter)
	|| ydk::is_set(actor_system_mac_address.yfilter)
	|| ydk::is_set(actor_system_priority.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| ydk::is_set(partner_port_id.yfilter)
	|| ydk::is_set(partner_port_priority.yfilter)
	|| ydk::is_set(partner_port_state.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.yfilter)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.yfilter)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.yfilter)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.yfilter)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.yfilter)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.yfilter)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.yfilter)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.yfilter)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
        actor_port_id.value_namespace = name_space;
        actor_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
        actor_port_priority.value_namespace = name_space;
        actor_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
        actor_port_state.value_namespace = name_space;
        actor_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
        actor_system_mac_address.value_namespace = name_space;
        actor_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
        actor_system_priority.value_namespace = name_space;
        actor_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
        partner_port_id.value_namespace = name_space;
        partner_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
        partner_port_priority.value_namespace = name_space;
        partner_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
        partner_port_state.value_namespace = name_space;
        partner_port_state.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority.yfilter = yfilter;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state.yfilter = yfilter;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id.yfilter = yfilter;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority.yfilter = yfilter;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-operational-key" || name == "actor-port-id" || name == "actor-port-priority" || name == "actor-port-state" || name == "actor-system-mac-address" || name == "actor-system-priority" || name == "attached-aggregator-id" || name == "interface-handle" || name == "partner-operational-key" || name == "partner-port-id" || name == "partner-port-priority" || name == "partner-port-state" || name == "partner-system-mac-address" || name == "partner-system-priority" || name == "selected-aggregator-id")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxData()
    :
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state{YType::enumeration, "mux-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
    	,
    member_mux_state_reason_data(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::~MemberMuxData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::has_data() const
{
    return error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(member_mux_state_reason.yfilter)
	|| ydk::is_set(member_state.yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(mux_state_reason.yfilter)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.yfilter)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.yfilter)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member_mux_state_reason_data != nullptr)
    {
        children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
        member_mux_state_reason.value_namespace = name_space;
        member_mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
        mux_state_reason.value_namespace = name_space;
        mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-mux-state-reason-data" || name == "error" || name == "member-mux-state-reason" || name == "member-state" || name == "mux-state" || name == "mux-state-reason")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    return reason_type.is_set
	|| severity.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_type.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.yfilter)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
        reason_type.value_namespace = name_space;
        reason_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-type")
    {
        reason_type.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-type" || name == "severity")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BundleBundleItem()
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
    mac_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "bundle-bundle-item"; yang_parent_name = "bundle-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::~BundleBundleItem()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::has_data() const
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

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::has_operation() const
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

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::get_name_leaf_data() const
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

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(c);
        return c;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::get_children() const
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

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-config" || name == "mac-address" || name == "active-foreign-member-count" || name == "active-member-count" || name == "available-bandwidth" || name == "bundle-interface-name" || name == "bundle-status" || name == "cisco-extensions" || name == "collector-max-delay" || name == "configured-bandwidth" || name == "configured-foreign-member-count" || name == "configured-member-count" || name == "effective-bandwidth" || name == "iccp-group-id" || name == "inter-chassis" || name == "ipv4bfd-status" || name == "ipv6bfd-status" || name == "is-active" || name == "lacp-nonrevertive" || name == "lacp-status" || name == "link-order-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "mac-source" || name == "mac-source-member" || name == "maximize-threshold-value-band-width" || name == "maximize-threshold-value-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-active-links" || name == "minimum-bandwidth" || name == "mlacp-mode" || name == "mlacp-status" || name == "primary-member" || name == "recovery-delay" || name == "singleton" || name == "standby-member-count" || name == "suppression-timer" || name == "switchover-type" || name == "wait-while-timer")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::BfdConfig()
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
    destination_address(std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "bundle-bundle-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::has_data() const
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

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::has_operation() const
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

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::get_name_leaf_data() const
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

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "fast-detect" || name == "mode-info" || name == "nbr-unconfig-timer" || name == "pref-echo-min-interval" || name == "pref-min-interval" || name == "pref-multiplier" || name == "start-timer")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "bundle-bundle-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMembers()
{

    yang_name = "bundle-members"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Bundle::BundleMembers::~BundleMembers()
{
}

bool BundleInformation::Bundle::BundleMembers::has_data() const
{
    for (std::size_t index=0; index<bundle_member.size(); index++)
    {
        if(bundle_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Bundle::BundleMembers::has_operation() const
{
    for (std::size_t index=0; index<bundle_member.size(); index++)
    {
        if(bundle_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bundle/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Bundle::BundleMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-member")
    {
        for(auto const & c : bundle_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember>();
        c->parent = this;
        bundle_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Bundle::BundleMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Bundle::BundleMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Bundle::BundleMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-member")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMember()
    :
    member_interface{YType::str, "member-interface"}
    	,
    bundle_member_ancestor(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor>())
	,bundle_member_item(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem>())
{
    bundle_member_ancestor->parent = this;
    bundle_member_item->parent = this;

    yang_name = "bundle-member"; yang_parent_name = "bundle-members"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::~BundleMember()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::has_data() const
{
    return member_interface.is_set
	|| (bundle_member_ancestor !=  nullptr && bundle_member_ancestor->has_data())
	|| (bundle_member_item !=  nullptr && bundle_member_item->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (bundle_member_ancestor !=  nullptr && bundle_member_ancestor->has_operation())
	|| (bundle_member_item !=  nullptr && bundle_member_item->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bundle/bundle-members/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-member" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-member-ancestor")
    {
        if(bundle_member_ancestor == nullptr)
        {
            bundle_member_ancestor = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor>();
        }
        return bundle_member_ancestor;
    }

    if(child_yang_name == "bundle-member-item")
    {
        if(bundle_member_item == nullptr)
        {
            bundle_member_item = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem>();
        }
        return bundle_member_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_member_ancestor != nullptr)
    {
        children["bundle-member-ancestor"] = bundle_member_ancestor;
    }

    if(bundle_member_item != nullptr)
    {
        children["bundle-member-item"] = bundle_member_item;
    }

    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-member-ancestor" || name == "bundle-member-item" || name == "member-interface")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleMemberAncestor()
    :
    bundle_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData>())
{
    bundle_data->parent = this;

    yang_name = "bundle-member-ancestor"; yang_parent_name = "bundle-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::~BundleMemberAncestor()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-member-ancestor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        if(bundle_data == nullptr)
        {
            bundle_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData>();
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
        auto c = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData>();
        c->parent = this;
        member_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::get_children() const
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

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "member-data")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BundleData()
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
    mac_address(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "bundle-member-ancestor"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::~BundleData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::has_data() const
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

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::has_operation() const
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

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::get_name_leaf_data() const
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

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(c);
        return c;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::get_children() const
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

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-config" || name == "mac-address" || name == "active-foreign-member-count" || name == "active-member-count" || name == "available-bandwidth" || name == "bundle-interface-name" || name == "bundle-status" || name == "cisco-extensions" || name == "collector-max-delay" || name == "configured-bandwidth" || name == "configured-foreign-member-count" || name == "configured-member-count" || name == "effective-bandwidth" || name == "iccp-group-id" || name == "inter-chassis" || name == "ipv4bfd-status" || name == "ipv6bfd-status" || name == "is-active" || name == "lacp-nonrevertive" || name == "lacp-status" || name == "link-order-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "mac-source" || name == "mac-source-member" || name == "maximize-threshold-value-band-width" || name == "maximize-threshold-value-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-active-links" || name == "minimum-bandwidth" || name == "mlacp-mode" || name == "mlacp-status" || name == "primary-member" || name == "recovery-delay" || name == "singleton" || name == "standby-member-count" || name == "suppression-timer" || name == "switchover-type" || name == "wait-while-timer")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::BfdConfig()
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
    destination_address(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::has_data() const
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

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::has_operation() const
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

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::get_name_leaf_data() const
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

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "fast-detect" || name == "mode-info" || name == "nbr-unconfig-timer" || name == "pref-echo-min-interval" || name == "pref-min-interval" || name == "pref-multiplier" || name == "start-timer")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberData()
    :
    bandwidth{YType::uint32, "bandwidth"},
    iccp_node{YType::uint32, "iccp-node"},
    interface_name{YType::str, "interface-name"},
    lacp_enabled{YType::str, "lacp-enabled"},
    link_order_number{YType::uint16, "link-order-number"},
    member_name{YType::str, "member-name"},
    member_type{YType::enumeration, "member-type"},
    port_number{YType::uint16, "port-number"},
    port_priority{YType::uint16, "port-priority"},
    underlying_link_id{YType::uint16, "underlying-link-id"}
    	,
    counters(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters>())
	,link_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData>())
	,mac_address(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress>())
	,member_mux_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData>())
{
    counters->parent = this;
    link_data->parent = this;
    mac_address->parent = this;
    member_mux_data->parent = this;

    yang_name = "member-data"; yang_parent_name = "bundle-member-ancestor"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::~MemberData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::has_data() const
{
    return bandwidth.is_set
	|| iccp_node.is_set
	|| interface_name.is_set
	|| lacp_enabled.is_set
	|| link_order_number.is_set
	|| member_name.is_set
	|| member_type.is_set
	|| port_number.is_set
	|| port_priority.is_set
	|| underlying_link_id.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(iccp_node.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(lacp_enabled.yfilter)
	|| ydk::is_set(link_order_number.yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| ydk::is_set(member_type.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(underlying_link_id.yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.yfilter)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (lacp_enabled.is_set || is_set(lacp_enabled.yfilter)) leaf_name_data.push_back(lacp_enabled.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.yfilter)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.yfilter)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.yfilter)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData>();
        }
        return member_mux_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(link_data != nullptr)
    {
        children["link-data"] = link_data;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(member_mux_data != nullptr)
    {
        children["member-mux-data"] = member_mux_data;
    }

    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
        iccp_node.value_namespace = name_space;
        iccp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled = value;
        lacp_enabled.value_namespace = name_space;
        lacp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
        link_order_number.value_namespace = name_space;
        link_order_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-type")
    {
        member_type = value;
        member_type.value_namespace = name_space;
        member_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
        underlying_link_id.value_namespace = name_space;
        underlying_link_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "iccp-node")
    {
        iccp_node.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled.yfilter = yfilter;
    }
    if(value_path == "link-order-number")
    {
        link_order_number.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
    if(value_path == "member-type")
    {
        member_type.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "link-data" || name == "mac-address" || name == "member-mux-data" || name == "bandwidth" || name == "iccp-node" || name == "interface-name" || name == "lacp-enabled" || name == "link-order-number" || name == "member-name" || name == "member-type" || name == "port-number" || name == "port-priority" || name == "underlying-link-id")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::Counters()
    :
    defaulted{YType::uint32, "defaulted"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    expired{YType::uint32, "expired"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"}
{

    yang_name = "counters"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::~Counters()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::has_data() const
{
    return defaulted.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| expired.is_set
	|| illegal_packets_received.is_set
	|| lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| last_cleared_nsec.is_set
	|| last_cleared_sec.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(defaulted.yfilter)
	|| ydk::is_set(excess_lacpd_us_received.yfilter)
	|| ydk::is_set(excess_marker_packets_received.yfilter)
	|| ydk::is_set(expired.yfilter)
	|| ydk::is_set(illegal_packets_received.yfilter)
	|| ydk::is_set(lacpd_us_received.yfilter)
	|| ydk::is_set(lacpd_us_transmitted.yfilter)
	|| ydk::is_set(last_cleared_nsec.yfilter)
	|| ydk::is_set(last_cleared_sec.yfilter)
	|| ydk::is_set(marker_packets_received.yfilter)
	|| ydk::is_set(marker_responses_transmitted.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defaulted.is_set || is_set(defaulted.yfilter)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.yfilter)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.yfilter)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (expired.is_set || is_set(expired.yfilter)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.yfilter)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (lacpd_us_received.is_set || is_set(lacpd_us_received.yfilter)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.yfilter)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.yfilter)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.yfilter)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.yfilter)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.yfilter)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "defaulted")
    {
        defaulted = value;
        defaulted.value_namespace = name_space;
        defaulted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
        excess_lacpd_us_received.value_namespace = name_space;
        excess_lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
        excess_marker_packets_received.value_namespace = name_space;
        excess_marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired")
    {
        expired = value;
        expired.value_namespace = name_space;
        expired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
        illegal_packets_received.value_namespace = name_space;
        illegal_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
        lacpd_us_received.value_namespace = name_space;
        lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
        lacpd_us_transmitted.value_namespace = name_space;
        lacpd_us_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
        last_cleared_nsec.value_namespace = name_space;
        last_cleared_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
        last_cleared_sec.value_namespace = name_space;
        last_cleared_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
        marker_packets_received.value_namespace = name_space;
        marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
        marker_responses_transmitted.value_namespace = name_space;
        marker_responses_transmitted.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "defaulted")
    {
        defaulted.yfilter = yfilter;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "expired")
    {
        expired.yfilter = yfilter;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted.yfilter = yfilter;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec.yfilter = yfilter;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec.yfilter = yfilter;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "defaulted" || name == "excess-lacpd-us-received" || name == "excess-marker-packets-received" || name == "expired" || name == "illegal-packets-received" || name == "lacpd-us-received" || name == "lacpd-us-transmitted" || name == "last-cleared-nsec" || name == "last-cleared-sec" || name == "marker-packets-received" || name == "marker-responses-transmitted")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::LinkData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    interface_handle{YType::str, "interface-handle"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    partner_port_state{YType::uint8, "partner-port-state"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"}
{

    yang_name = "link-data"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::~LinkData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::has_data() const
{
    return actor_operational_key.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| actor_port_state.is_set
	|| actor_system_mac_address.is_set
	|| actor_system_priority.is_set
	|| attached_aggregator_id.is_set
	|| interface_handle.is_set
	|| partner_operational_key.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| partner_port_state.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| selected_aggregator_id.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(actor_port_id.yfilter)
	|| ydk::is_set(actor_port_priority.yfilter)
	|| ydk::is_set(actor_port_state.yfilter)
	|| ydk::is_set(actor_system_mac_address.yfilter)
	|| ydk::is_set(actor_system_priority.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| ydk::is_set(partner_port_id.yfilter)
	|| ydk::is_set(partner_port_priority.yfilter)
	|| ydk::is_set(partner_port_state.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.yfilter)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.yfilter)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.yfilter)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.yfilter)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.yfilter)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.yfilter)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.yfilter)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.yfilter)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
        actor_port_id.value_namespace = name_space;
        actor_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
        actor_port_priority.value_namespace = name_space;
        actor_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
        actor_port_state.value_namespace = name_space;
        actor_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
        actor_system_mac_address.value_namespace = name_space;
        actor_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
        actor_system_priority.value_namespace = name_space;
        actor_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
        partner_port_id.value_namespace = name_space;
        partner_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
        partner_port_priority.value_namespace = name_space;
        partner_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
        partner_port_state.value_namespace = name_space;
        partner_port_state.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority.yfilter = yfilter;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state.yfilter = yfilter;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id.yfilter = yfilter;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority.yfilter = yfilter;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-operational-key" || name == "actor-port-id" || name == "actor-port-priority" || name == "actor-port-state" || name == "actor-system-mac-address" || name == "actor-system-priority" || name == "attached-aggregator-id" || name == "interface-handle" || name == "partner-operational-key" || name == "partner-port-id" || name == "partner-port-priority" || name == "partner-port-state" || name == "partner-system-mac-address" || name == "partner-system-priority" || name == "selected-aggregator-id")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxData()
    :
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state{YType::enumeration, "mux-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
    	,
    member_mux_state_reason_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "member-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::~MemberMuxData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::has_data() const
{
    return error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(member_mux_state_reason.yfilter)
	|| ydk::is_set(member_state.yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(mux_state_reason.yfilter)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.yfilter)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.yfilter)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member_mux_state_reason_data != nullptr)
    {
        children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
        member_mux_state_reason.value_namespace = name_space;
        member_mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
        mux_state_reason.value_namespace = name_space;
        mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-mux-state-reason-data" || name == "error" || name == "member-mux-state-reason" || name == "member-state" || name == "mux-state" || name == "mux-state-reason")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    return reason_type.is_set
	|| severity.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_type.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.yfilter)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
        reason_type.value_namespace = name_space;
        reason_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-type")
    {
        reason_type.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-type" || name == "severity")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::BundleMemberItem()
    :
    bandwidth{YType::uint32, "bandwidth"},
    iccp_node{YType::uint32, "iccp-node"},
    interface_name{YType::str, "interface-name"},
    lacp_enabled{YType::str, "lacp-enabled"},
    link_order_number{YType::uint16, "link-order-number"},
    member_name{YType::str, "member-name"},
    member_type{YType::enumeration, "member-type"},
    port_number{YType::uint16, "port-number"},
    port_priority{YType::uint16, "port-priority"},
    underlying_link_id{YType::uint16, "underlying-link-id"}
    	,
    counters(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters>())
	,link_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData>())
	,mac_address(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress>())
	,member_mux_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData>())
{
    counters->parent = this;
    link_data->parent = this;
    mac_address->parent = this;
    member_mux_data->parent = this;

    yang_name = "bundle-member-item"; yang_parent_name = "bundle-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::~BundleMemberItem()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::has_data() const
{
    return bandwidth.is_set
	|| iccp_node.is_set
	|| interface_name.is_set
	|| lacp_enabled.is_set
	|| link_order_number.is_set
	|| member_name.is_set
	|| member_type.is_set
	|| port_number.is_set
	|| port_priority.is_set
	|| underlying_link_id.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(iccp_node.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(lacp_enabled.yfilter)
	|| ydk::is_set(link_order_number.yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| ydk::is_set(member_type.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(underlying_link_id.yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-member-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.yfilter)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (lacp_enabled.is_set || is_set(lacp_enabled.yfilter)) leaf_name_data.push_back(lacp_enabled.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.yfilter)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.yfilter)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.yfilter)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData>();
        }
        return member_mux_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(link_data != nullptr)
    {
        children["link-data"] = link_data;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(member_mux_data != nullptr)
    {
        children["member-mux-data"] = member_mux_data;
    }

    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
        iccp_node.value_namespace = name_space;
        iccp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled = value;
        lacp_enabled.value_namespace = name_space;
        lacp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
        link_order_number.value_namespace = name_space;
        link_order_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-type")
    {
        member_type = value;
        member_type.value_namespace = name_space;
        member_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
        underlying_link_id.value_namespace = name_space;
        underlying_link_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "iccp-node")
    {
        iccp_node.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "lacp-enabled")
    {
        lacp_enabled.yfilter = yfilter;
    }
    if(value_path == "link-order-number")
    {
        link_order_number.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
    if(value_path == "member-type")
    {
        member_type.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "link-data" || name == "mac-address" || name == "member-mux-data" || name == "bandwidth" || name == "iccp-node" || name == "interface-name" || name == "lacp-enabled" || name == "link-order-number" || name == "member-name" || name == "member-type" || name == "port-number" || name == "port-priority" || name == "underlying-link-id")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::Counters()
    :
    defaulted{YType::uint32, "defaulted"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    expired{YType::uint32, "expired"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"}
{

    yang_name = "counters"; yang_parent_name = "bundle-member-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::~Counters()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::has_data() const
{
    return defaulted.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| expired.is_set
	|| illegal_packets_received.is_set
	|| lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| last_cleared_nsec.is_set
	|| last_cleared_sec.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(defaulted.yfilter)
	|| ydk::is_set(excess_lacpd_us_received.yfilter)
	|| ydk::is_set(excess_marker_packets_received.yfilter)
	|| ydk::is_set(expired.yfilter)
	|| ydk::is_set(illegal_packets_received.yfilter)
	|| ydk::is_set(lacpd_us_received.yfilter)
	|| ydk::is_set(lacpd_us_transmitted.yfilter)
	|| ydk::is_set(last_cleared_nsec.yfilter)
	|| ydk::is_set(last_cleared_sec.yfilter)
	|| ydk::is_set(marker_packets_received.yfilter)
	|| ydk::is_set(marker_responses_transmitted.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defaulted.is_set || is_set(defaulted.yfilter)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.yfilter)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.yfilter)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (expired.is_set || is_set(expired.yfilter)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.yfilter)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (lacpd_us_received.is_set || is_set(lacpd_us_received.yfilter)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.yfilter)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.yfilter)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.yfilter)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.yfilter)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.yfilter)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "defaulted")
    {
        defaulted = value;
        defaulted.value_namespace = name_space;
        defaulted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
        excess_lacpd_us_received.value_namespace = name_space;
        excess_lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
        excess_marker_packets_received.value_namespace = name_space;
        excess_marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired")
    {
        expired = value;
        expired.value_namespace = name_space;
        expired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
        illegal_packets_received.value_namespace = name_space;
        illegal_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
        lacpd_us_received.value_namespace = name_space;
        lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
        lacpd_us_transmitted.value_namespace = name_space;
        lacpd_us_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
        last_cleared_nsec.value_namespace = name_space;
        last_cleared_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
        last_cleared_sec.value_namespace = name_space;
        last_cleared_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
        marker_packets_received.value_namespace = name_space;
        marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
        marker_responses_transmitted.value_namespace = name_space;
        marker_responses_transmitted.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "defaulted")
    {
        defaulted.yfilter = yfilter;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "expired")
    {
        expired.yfilter = yfilter;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted.yfilter = yfilter;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec.yfilter = yfilter;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec.yfilter = yfilter;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "defaulted" || name == "excess-lacpd-us-received" || name == "excess-marker-packets-received" || name == "expired" || name == "illegal-packets-received" || name == "lacpd-us-received" || name == "lacpd-us-transmitted" || name == "last-cleared-nsec" || name == "last-cleared-sec" || name == "marker-packets-received" || name == "marker-responses-transmitted")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::LinkData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    interface_handle{YType::str, "interface-handle"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    partner_port_state{YType::uint8, "partner-port-state"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"}
{

    yang_name = "link-data"; yang_parent_name = "bundle-member-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::~LinkData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::has_data() const
{
    return actor_operational_key.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| actor_port_state.is_set
	|| actor_system_mac_address.is_set
	|| actor_system_priority.is_set
	|| attached_aggregator_id.is_set
	|| interface_handle.is_set
	|| partner_operational_key.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| partner_port_state.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| selected_aggregator_id.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(actor_port_id.yfilter)
	|| ydk::is_set(actor_port_priority.yfilter)
	|| ydk::is_set(actor_port_state.yfilter)
	|| ydk::is_set(actor_system_mac_address.yfilter)
	|| ydk::is_set(actor_system_priority.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| ydk::is_set(partner_port_id.yfilter)
	|| ydk::is_set(partner_port_priority.yfilter)
	|| ydk::is_set(partner_port_state.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.yfilter)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.yfilter)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.yfilter)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.yfilter)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.yfilter)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.yfilter)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.yfilter)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.yfilter)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
        actor_port_id.value_namespace = name_space;
        actor_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
        actor_port_priority.value_namespace = name_space;
        actor_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
        actor_port_state.value_namespace = name_space;
        actor_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
        actor_system_mac_address.value_namespace = name_space;
        actor_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
        actor_system_priority.value_namespace = name_space;
        actor_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
        partner_port_id.value_namespace = name_space;
        partner_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
        partner_port_priority.value_namespace = name_space;
        partner_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
        partner_port_state.value_namespace = name_space;
        partner_port_state.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority.yfilter = yfilter;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state.yfilter = yfilter;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id.yfilter = yfilter;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority.yfilter = yfilter;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-operational-key" || name == "actor-port-id" || name == "actor-port-priority" || name == "actor-port-state" || name == "actor-system-mac-address" || name == "actor-system-priority" || name == "attached-aggregator-id" || name == "interface-handle" || name == "partner-operational-key" || name == "partner-port-id" || name == "partner-port-priority" || name == "partner-port-state" || name == "partner-system-mac-address" || name == "partner-system-priority" || name == "selected-aggregator-id")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "bundle-member-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::~MacAddress()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxData()
    :
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state{YType::enumeration, "mux-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
    	,
    member_mux_state_reason_data(std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "bundle-member-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::~MemberMuxData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::has_data() const
{
    return error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(member_mux_state_reason.yfilter)
	|| ydk::is_set(member_state.yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(mux_state_reason.yfilter)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.yfilter)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.yfilter)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member_mux_state_reason_data != nullptr)
    {
        children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
        member_mux_state_reason.value_namespace = name_space;
        member_mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
        mux_state_reason.value_namespace = name_space;
        mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-mux-state-reason-data" || name == "error" || name == "member-mux-state-reason" || name == "member-state" || name == "mux-state" || name == "mux-state-reason")
        return true;
    return false;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    return reason_type.is_set
	|| severity.is_set;
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_type.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.yfilter)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
        reason_type.value_namespace = name_space;
        reason_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-type")
    {
        reason_type.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-type" || name == "severity")
        return true;
    return false;
}

BundleInformation::BundleBriefs::BundleBriefs()
{

    yang_name = "bundle-briefs"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::BundleBriefs::~BundleBriefs()
{
}

bool BundleInformation::BundleBriefs::has_data() const
{
    for (std::size_t index=0; index<bundle_brief.size(); index++)
    {
        if(bundle_brief[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::BundleBriefs::has_operation() const
{
    for (std::size_t index=0; index<bundle_brief.size(); index++)
    {
        if(bundle_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::BundleBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::BundleBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BundleBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::BundleBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-brief")
    {
        for(auto const & c : bundle_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::BundleBriefs::BundleBrief>();
        c->parent = this;
        bundle_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BundleBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::BundleBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::BundleBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::BundleBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-brief")
        return true;
    return false;
}

BundleInformation::BundleBriefs::BundleBrief::BundleBrief()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    bundle_brief_item(std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem>())
{
    bundle_brief_item->parent = this;

    yang_name = "bundle-brief"; yang_parent_name = "bundle-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::BundleBriefs::BundleBrief::~BundleBrief()
{
}

bool BundleInformation::BundleBriefs::BundleBrief::has_data() const
{
    return bundle_interface.is_set
	|| (bundle_brief_item !=  nullptr && bundle_brief_item->has_data());
}

bool BundleInformation::BundleBriefs::BundleBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (bundle_brief_item !=  nullptr && bundle_brief_item->has_operation());
}

std::string BundleInformation::BundleBriefs::BundleBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bundle-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::BundleBriefs::BundleBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-brief" <<"[bundle-interface='" <<bundle_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BundleBriefs::BundleBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::BundleBriefs::BundleBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-brief-item")
    {
        if(bundle_brief_item == nullptr)
        {
            bundle_brief_item = std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem>();
        }
        return bundle_brief_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BundleBriefs::BundleBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_brief_item != nullptr)
    {
        children["bundle-brief-item"] = bundle_brief_item;
    }

    return children;
}

void BundleInformation::BundleBriefs::BundleBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BundleBriefs::BundleBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::BundleBriefs::BundleBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-brief-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BundleBriefItem()
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
    mac_address(std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "bundle-brief-item"; yang_parent_name = "bundle-brief"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::~BundleBriefItem()
{
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::has_data() const
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

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::has_operation() const
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

std::string BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-brief-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::get_name_leaf_data() const
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

std::shared_ptr<Entity> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(c);
        return c;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::get_children() const
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

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-config" || name == "mac-address" || name == "active-foreign-member-count" || name == "active-member-count" || name == "available-bandwidth" || name == "bundle-interface-name" || name == "bundle-status" || name == "cisco-extensions" || name == "collector-max-delay" || name == "configured-bandwidth" || name == "configured-foreign-member-count" || name == "configured-member-count" || name == "effective-bandwidth" || name == "iccp-group-id" || name == "inter-chassis" || name == "ipv4bfd-status" || name == "ipv6bfd-status" || name == "is-active" || name == "lacp-nonrevertive" || name == "lacp-status" || name == "link-order-status" || name == "load-balance-hash-type" || name == "load-balance-locality-threshold" || name == "mac-source" || name == "mac-source-member" || name == "maximize-threshold-value-band-width" || name == "maximize-threshold-value-links" || name == "maximum-active-links" || name == "maximum-active-links-source" || name == "minimum-active-links" || name == "minimum-bandwidth" || name == "mlacp-mode" || name == "mlacp-status" || name == "primary-member" || name == "recovery-delay" || name == "singleton" || name == "standby-member-count" || name == "suppression-timer" || name == "switchover-type" || name == "wait-while-timer")
        return true;
    return false;
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::BfdConfig()
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
    destination_address(std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "bundle-brief-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::has_data() const
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

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::has_operation() const
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

std::string BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::get_name_leaf_data() const
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

std::shared_ptr<Entity> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "bundle-status" || name == "fast-detect" || name == "mode-info" || name == "nbr-unconfig-timer" || name == "pref-echo-min-interval" || name == "pref-min-interval" || name == "pref-multiplier" || name == "start-timer")
        return true;
    return false;
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "bfd-config"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "bundle-brief-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::~MacAddress()
{
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Events::Events()
    :
    events_bundles(std::make_shared<BundleInformation::Events::EventsBundles>())
	,events_members(std::make_shared<BundleInformation::Events::EventsMembers>())
{
    events_bundles->parent = this;
    events_members->parent = this;

    yang_name = "events"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Events::~Events()
{
}

bool BundleInformation::Events::has_data() const
{
    return (events_bundles !=  nullptr && events_bundles->has_data())
	|| (events_members !=  nullptr && events_members->has_data());
}

bool BundleInformation::Events::has_operation() const
{
    return is_set(yfilter)
	|| (events_bundles !=  nullptr && events_bundles->has_operation())
	|| (events_members !=  nullptr && events_members->has_operation());
}

std::string BundleInformation::Events::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bundles")
    {
        if(events_bundles == nullptr)
        {
            events_bundles = std::make_shared<BundleInformation::Events::EventsBundles>();
        }
        return events_bundles;
    }

    if(child_yang_name == "events-members")
    {
        if(events_members == nullptr)
        {
            events_members = std::make_shared<BundleInformation::Events::EventsMembers>();
        }
        return events_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_bundles != nullptr)
    {
        children["events-bundles"] = events_bundles;
    }

    if(events_members != nullptr)
    {
        children["events-members"] = events_members;
    }

    return children;
}

void BundleInformation::Events::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Events::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Events::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bundles" || name == "events-members")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundles()
{

    yang_name = "events-bundles"; yang_parent_name = "events"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Events::EventsBundles::~EventsBundles()
{
}

bool BundleInformation::Events::EventsBundles::has_data() const
{
    for (std::size_t index=0; index<events_bundle.size(); index++)
    {
        if(events_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Events::EventsBundles::has_operation() const
{
    for (std::size_t index=0; index<events_bundle.size(); index++)
    {
        if(events_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Events::EventsBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Events::EventsBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bundle")
    {
        for(auto const & c : events_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle>();
        c->parent = this;
        events_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Events::EventsBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Events::EventsBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bundle")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    events_bundle_ancestor(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor>())
	,events_bundle_children_members(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers>())
	,events_bundle_descendant(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant>())
	,events_bundle_item(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem>())
{
    events_bundle_ancestor->parent = this;
    events_bundle_children_members->parent = this;
    events_bundle_descendant->parent = this;
    events_bundle_item->parent = this;

    yang_name = "events-bundle"; yang_parent_name = "events-bundles"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Events::EventsBundles::EventsBundle::~EventsBundle()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::has_data() const
{
    return bundle_interface.is_set
	|| (events_bundle_ancestor !=  nullptr && events_bundle_ancestor->has_data())
	|| (events_bundle_children_members !=  nullptr && events_bundle_children_members->has_data())
	|| (events_bundle_descendant !=  nullptr && events_bundle_descendant->has_data())
	|| (events_bundle_item !=  nullptr && events_bundle_item->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (events_bundle_ancestor !=  nullptr && events_bundle_ancestor->has_operation())
	|| (events_bundle_children_members !=  nullptr && events_bundle_children_members->has_operation())
	|| (events_bundle_descendant !=  nullptr && events_bundle_descendant->has_operation())
	|| (events_bundle_item !=  nullptr && events_bundle_item->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events/events-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bundle-ancestor")
    {
        if(events_bundle_ancestor == nullptr)
        {
            events_bundle_ancestor = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor>();
        }
        return events_bundle_ancestor;
    }

    if(child_yang_name == "events-bundle-children-members")
    {
        if(events_bundle_children_members == nullptr)
        {
            events_bundle_children_members = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers>();
        }
        return events_bundle_children_members;
    }

    if(child_yang_name == "events-bundle-descendant")
    {
        if(events_bundle_descendant == nullptr)
        {
            events_bundle_descendant = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant>();
        }
        return events_bundle_descendant;
    }

    if(child_yang_name == "events-bundle-item")
    {
        if(events_bundle_item == nullptr)
        {
            events_bundle_item = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem>();
        }
        return events_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_bundle_ancestor != nullptr)
    {
        children["events-bundle-ancestor"] = events_bundle_ancestor;
    }

    if(events_bundle_children_members != nullptr)
    {
        children["events-bundle-children-members"] = events_bundle_children_members;
    }

    if(events_bundle_descendant != nullptr)
    {
        children["events-bundle-descendant"] = events_bundle_descendant;
    }

    if(events_bundle_item != nullptr)
    {
        children["events-bundle-item"] = events_bundle_item;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bundle-ancestor" || name == "events-bundle-children-members" || name == "events-bundle-descendant" || name == "events-bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::EventsBundleAncestor()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "events-bundle-ancestor"; yang_parent_name = "events-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::~EventsBundleAncestor()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle-ancestor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-bundle-ancestor"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::~Items()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::get_children() const
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMembers()
{

    yang_name = "events-bundle-children-members"; yang_parent_name = "events-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::~EventsBundleChildrenMembers()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::has_data() const
{
    for (std::size_t index=0; index<events_bundle_children_member.size(); index++)
    {
        if(events_bundle_children_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::has_operation() const
{
    for (std::size_t index=0; index<events_bundle_children_member.size(); index++)
    {
        if(events_bundle_children_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle-children-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bundle-children-member")
    {
        for(auto const & c : events_bundle_children_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember>();
        c->parent = this;
        events_bundle_children_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_bundle_children_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bundle-children-member")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::EventsBundleChildrenMember()
    :
    member_interface{YType::str, "member-interface"},
    item_name{YType::str, "item-name"}
{

    yang_name = "events-bundle-children-member"; yang_parent_name = "events-bundle-children-members"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::~EventsBundleChildrenMember()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return member_interface.is_set
	|| item_name.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::has_operation() const
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

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle-children-member" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "member-interface" || name == "item-name")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-bundle-children-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::~Items()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::get_children() const
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsBundleDescendant()
{

    yang_name = "events-bundle-descendant"; yang_parent_name = "events-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::~EventsBundleDescendant()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::has_data() const
{
    for (std::size_t index=0; index<events_item.size(); index++)
    {
        if(events_item[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::has_operation() const
{
    for (std::size_t index=0; index<events_item.size(); index++)
    {
        if(events_item[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle-descendant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem>();
        c->parent = this;
        events_item.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_item)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-item")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::EventsItem()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "events-item"; yang_parent_name = "events-bundle-descendant"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::~EventsItem()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::~Items()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::get_children() const
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::EventsBundleItem()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "events-bundle-item"; yang_parent_name = "events-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::~EventsBundleItem()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-bundle-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::~Items()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::get_children() const
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMembers()
{

    yang_name = "events-members"; yang_parent_name = "events"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Events::EventsMembers::~EventsMembers()
{
}

bool BundleInformation::Events::EventsMembers::has_data() const
{
    for (std::size_t index=0; index<events_member.size(); index++)
    {
        if(events_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Events::EventsMembers::has_operation() const
{
    for (std::size_t index=0; index<events_member.size(); index++)
    {
        if(events_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Events::EventsMembers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Events::EventsMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-member")
    {
        for(auto const & c : events_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember>();
        c->parent = this;
        events_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Events::EventsMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Events::EventsMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-member")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMember()
    :
    member_interface{YType::str, "member-interface"}
    	,
    events_member_ancestor(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor>())
	,events_member_item(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem>())
{
    events_member_ancestor->parent = this;
    events_member_item->parent = this;

    yang_name = "events-member"; yang_parent_name = "events-members"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Events::EventsMembers::EventsMember::~EventsMember()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::has_data() const
{
    return member_interface.is_set
	|| (events_member_ancestor !=  nullptr && events_member_ancestor->has_data())
	|| (events_member_item !=  nullptr && events_member_item->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (events_member_ancestor !=  nullptr && events_member_ancestor->has_operation())
	|| (events_member_item !=  nullptr && events_member_item->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events/events-members/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Events::EventsMembers::EventsMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-member" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-member-ancestor")
    {
        if(events_member_ancestor == nullptr)
        {
            events_member_ancestor = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor>();
        }
        return events_member_ancestor;
    }

    if(child_yang_name == "events-member-item")
    {
        if(events_member_item == nullptr)
        {
            events_member_item = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem>();
        }
        return events_member_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_member_ancestor != nullptr)
    {
        children["events-member-ancestor"] = events_member_ancestor;
    }

    if(events_member_item != nullptr)
    {
        children["events-member-item"] = events_member_item;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-member-ancestor" || name == "events-member-item" || name == "member-interface")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::EventsMemberAncestor()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "events-member-ancestor"; yang_parent_name = "events-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::~EventsMemberAncestor()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-member-ancestor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-member-ancestor"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::~Items()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::get_children() const
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

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::EventsMemberItem()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "events-member-item"; yang_parent_name = "events-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::~EventsMemberItem()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-member-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-member-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::~Items()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::get_children() const
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

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdl()
    :
    events_bdl_bundles(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles>())
	,events_bdl_iccp_groups(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups>())
	,events_bdl_members(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers>())
{
    events_bdl_bundles->parent = this;
    events_bdl_iccp_groups->parent = this;
    events_bdl_members->parent = this;

    yang_name = "events-bdl"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsBdl::~EventsBdl()
{
}

bool BundleInformation::EventsBdl::has_data() const
{
    return (events_bdl_bundles !=  nullptr && events_bdl_bundles->has_data())
	|| (events_bdl_iccp_groups !=  nullptr && events_bdl_iccp_groups->has_data())
	|| (events_bdl_members !=  nullptr && events_bdl_members->has_data());
}

bool BundleInformation::EventsBdl::has_operation() const
{
    return is_set(yfilter)
	|| (events_bdl_bundles !=  nullptr && events_bdl_bundles->has_operation())
	|| (events_bdl_iccp_groups !=  nullptr && events_bdl_iccp_groups->has_operation())
	|| (events_bdl_members !=  nullptr && events_bdl_members->has_operation());
}

std::string BundleInformation::EventsBdl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsBdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-bundles")
    {
        if(events_bdl_bundles == nullptr)
        {
            events_bdl_bundles = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles>();
        }
        return events_bdl_bundles;
    }

    if(child_yang_name == "events-bdl-iccp-groups")
    {
        if(events_bdl_iccp_groups == nullptr)
        {
            events_bdl_iccp_groups = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups>();
        }
        return events_bdl_iccp_groups;
    }

    if(child_yang_name == "events-bdl-members")
    {
        if(events_bdl_members == nullptr)
        {
            events_bdl_members = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers>();
        }
        return events_bdl_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_bdl_bundles != nullptr)
    {
        children["events-bdl-bundles"] = events_bdl_bundles;
    }

    if(events_bdl_iccp_groups != nullptr)
    {
        children["events-bdl-iccp-groups"] = events_bdl_iccp_groups;
    }

    if(events_bdl_members != nullptr)
    {
        children["events-bdl-members"] = events_bdl_members;
    }

    return children;
}

void BundleInformation::EventsBdl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsBdl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsBdl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bdl-bundles" || name == "events-bdl-iccp-groups" || name == "events-bdl-members")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundles()
{

    yang_name = "events-bdl-bundles"; yang_parent_name = "events-bdl"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsBdl::EventsBdlBundles::~EventsBdlBundles()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::has_data() const
{
    for (std::size_t index=0; index<events_bdl_bundle.size(); index++)
    {
        if(events_bdl_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsBdl::EventsBdlBundles::has_operation() const
{
    for (std::size_t index=0; index<events_bdl_bundle.size(); index++)
    {
        if(events_bdl_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-bundle")
    {
        for(auto const & c : events_bdl_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle>();
        c->parent = this;
        events_bdl_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_bdl_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsBdl::EventsBdlBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bdl-bundle")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    events_bdl_bundle_item(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem>())
{
    events_bdl_bundle_item->parent = this;

    yang_name = "events-bdl-bundle"; yang_parent_name = "events-bdl-bundles"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::~EventsBdlBundle()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::has_data() const
{
    return bundle_interface.is_set
	|| (events_bdl_bundle_item !=  nullptr && events_bdl_bundle_item->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (events_bdl_bundle_item !=  nullptr && events_bdl_bundle_item->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/events-bdl-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-bundle-item")
    {
        if(events_bdl_bundle_item == nullptr)
        {
            events_bdl_bundle_item = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem>();
        }
        return events_bdl_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_bdl_bundle_item != nullptr)
    {
        children["events-bdl-bundle-item"] = events_bdl_bundle_item;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bdl-bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::EventsBdlBundleItem()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "events-bdl-bundle-item"; yang_parent_name = "events-bdl-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::~EventsBdlBundleItem()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-bdl-bundle-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::~Items()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::get_children() const
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

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroups()
{

    yang_name = "events-bdl-iccp-groups"; yang_parent_name = "events-bdl"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::~EventsBdlIccpGroups()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::has_data() const
{
    for (std::size_t index=0; index<events_bdl_iccp_group.size(); index++)
    {
        if(events_bdl_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<events_bdl_iccp_group.size(); index++)
    {
        if(events_bdl_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-iccp-group")
    {
        for(auto const & c : events_bdl_iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup>();
        c->parent = this;
        events_bdl_iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_bdl_iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bdl-iccp-group")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    events_bdl_bundle_descendant_iccp_group(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup>())
{
    events_bdl_bundle_descendant_iccp_group->parent = this;

    yang_name = "events-bdl-iccp-group"; yang_parent_name = "events-bdl-iccp-groups"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::~EventsBdlIccpGroup()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (events_bdl_bundle_descendant_iccp_group !=  nullptr && events_bdl_bundle_descendant_iccp_group->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (events_bdl_bundle_descendant_iccp_group !=  nullptr && events_bdl_bundle_descendant_iccp_group->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/events-bdl-iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-iccp-group" <<"[iccp-group='" <<iccp_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-bundle-descendant-iccp-group")
    {
        if(events_bdl_bundle_descendant_iccp_group == nullptr)
        {
            events_bdl_bundle_descendant_iccp_group = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup>();
        }
        return events_bdl_bundle_descendant_iccp_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_bdl_bundle_descendant_iccp_group != nullptr)
    {
        children["events-bdl-bundle-descendant-iccp-group"] = events_bdl_bundle_descendant_iccp_group;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bdl-bundle-descendant-iccp-group" || name == "iccp-group")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsBdlBundleDescendantIccpGroup()
{

    yang_name = "events-bdl-bundle-descendant-iccp-group"; yang_parent_name = "events-bdl-iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::~EventsBdlBundleDescendantIccpGroup()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::has_data() const
{
    for (std::size_t index=0; index<events_item.size(); index++)
    {
        if(events_item[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::has_operation() const
{
    for (std::size_t index=0; index<events_item.size(); index++)
    {
        if(events_item[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-bundle-descendant-iccp-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem>();
        c->parent = this;
        events_item.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_item)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-item")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::EventsItem()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "events-item"; yang_parent_name = "events-bdl-bundle-descendant-iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::~EventsItem()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::~Items()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::get_children() const
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

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMembers()
{

    yang_name = "events-bdl-members"; yang_parent_name = "events-bdl"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsBdl::EventsBdlMembers::~EventsBdlMembers()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::has_data() const
{
    for (std::size_t index=0; index<events_bdl_member.size(); index++)
    {
        if(events_bdl_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsBdl::EventsBdlMembers::has_operation() const
{
    for (std::size_t index=0; index<events_bdl_member.size(); index++)
    {
        if(events_bdl_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-member")
    {
        for(auto const & c : events_bdl_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember>();
        c->parent = this;
        events_bdl_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_bdl_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::EventsBdl::EventsBdlMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bdl-member")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMember()
    :
    member_interface{YType::str, "member-interface"}
    	,
    events_bdl_member_ancestor(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor>())
{
    events_bdl_member_ancestor->parent = this;

    yang_name = "events-bdl-member"; yang_parent_name = "events-bdl-members"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::~EventsBdlMember()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::has_data() const
{
    return member_interface.is_set
	|| (events_bdl_member_ancestor !=  nullptr && events_bdl_member_ancestor->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (events_bdl_member_ancestor !=  nullptr && events_bdl_member_ancestor->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/events-bdl-members/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-member" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-member-ancestor")
    {
        if(events_bdl_member_ancestor == nullptr)
        {
            events_bdl_member_ancestor = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor>();
        }
        return events_bdl_member_ancestor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_bdl_member_ancestor != nullptr)
    {
        children["events-bdl-member-ancestor"] = events_bdl_member_ancestor;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events-bdl-member-ancestor" || name == "member-interface")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::EventsBdlMemberAncestor()
    :
    item_name{YType::str, "item-name"}
{

    yang_name = "events-bdl-member-ancestor"; yang_parent_name = "events-bdl-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::~EventsBdlMemberAncestor()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(item_name.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-member-ancestor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.yfilter)) leaf_name_data.push_back(item_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "item-name")
    {
        item_name = value;
        item_name.value_namespace = name_space;
        item_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "item-name")
    {
        item_name.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "items" || name == "item-name")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    member_evt_info->parent = this;
    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-bdl-member-ancestor"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::~Items()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::get_children() const
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

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-evt-info" || name == "member-evt-info" || name == "rg-evt-info" || name == "event-type")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.yfilter)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "bundle-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "bundle-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.yfilter)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "member-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "member-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rg_event_type.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.yfilter)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "rg-event-type" || name == "time-stamp")
        return true;
    return false;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{

    yang_name = "data"; yang_parent_name = "rg-evt-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(no_data.yfilter)
	|| ydk::is_set(string_data.yfilter);
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.yfilter)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.yfilter)) leaf_name_data.push_back(string_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "error" || name == "no-data" || name == "string-data")
        return true;
    return false;
}

const Enum::YLeaf LacpSelState::unselected {0, "unselected"};
const Enum::YLeaf LacpSelState::standby {1, "standby"};
const Enum::YLeaf LacpSelState::selected {2, "selected"};

const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_incomplete {0, "node-state-incomplete"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_conn_rejected {1, "node-state-conn-rejected"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_connect_sent {2, "node-state-connect-sent"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_unconfigured {3, "node-state-unconfigured"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_unreachable {4, "node-state-unreachable"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_iccp_down {5, "node-state-iccp-down"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_nak {6, "node-state-nak"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_unknown {7, "node-state-unknown"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_mlacp_down {8, "node-state-mlacp-down"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_admin_down {9, "node-state-admin-down"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_pe_isolated {10, "node-state-pe-isolated"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_error {11, "node-state-error"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_test {12, "node-state-test"};
const Enum::YLeaf BmdMlacpNodeStateEnum::node_state_up {13, "node-state-up"};

const Enum::YLeaf BmdBagEventData::bmd_bag_evt_data_none {0, "bmd-bag-evt-data-none"};
const Enum::YLeaf BmdBagEventData::bmd_bag_evt_data_error {1, "bmd-bag-evt-data-error"};
const Enum::YLeaf BmdBagEventData::bmd_bag_evt_data_string {2, "bmd-bag-evt-data-string"};

const Enum::YLeaf BmWhichSystem::bm_which_system_actr {0, "bm-which-system-actr"};
const Enum::YLeaf BmWhichSystem::bm_which_system_ptnr {1, "bm-which-system-ptnr"};

const Enum::YLeaf BmdMlacpNodeSyncEnum::node_sync_req {0, "node-sync-req"};
const Enum::YLeaf BmdMlacpNodeSyncEnum::node_sync_done {1, "node-sync-done"};
const Enum::YLeaf BmdMlacpNodeSyncEnum::node_sync_start {2, "node-sync-start"};
const Enum::YLeaf BmdMlacpNodeSyncEnum::node_sync_init {3, "node-sync-init"};
const Enum::YLeaf BmdMlacpNodeSyncEnum::node_sync_singleton {4, "node-sync-singleton"};

const Enum::YLeaf BmSeverity::ok {0, "ok"};
const Enum::YLeaf BmSeverity::information {1, "information"};
const Enum::YLeaf BmSeverity::misconfiguration {2, "misconfiguration"};
const Enum::YLeaf BmSeverity::warning {3, "warning"};
const Enum::YLeaf BmSeverity::error {5, "error"};

const Enum::YLeaf BundleMlacpMode::bundle_mlacp_mode_standby {0, "bundle-mlacp-mode-standby"};
const Enum::YLeaf BundleMlacpMode::bundle_mlacp_mode_active {1, "bundle-mlacp-mode-active"};
const Enum::YLeaf BundleMlacpMode::bundle_mlacp_mode_count {2, "bundle-mlacp-mode-count"};

const Enum::YLeaf BmdBagTarget::bm_bag_target_mbr {0, "bm-bag-target-mbr"};
const Enum::YLeaf BmdBagTarget::bm_bag_target_bdl {1, "bm-bag-target-bdl"};
const Enum::YLeaf BmdBagTarget::bm_bag_target_node {2, "bm-bag-target-node"};
const Enum::YLeaf BmdBagTarget::bm_bag_target_rg {3, "bm-bag-target-rg"};

const Enum::YLeaf LoadBalance::default_ {0, "default"};
const Enum::YLeaf LoadBalance::auto_ {1, "auto"};
const Enum::YLeaf LoadBalance::value_ {2, "value"};
const Enum::YLeaf LoadBalance::source_ip {3, "source-ip"};
const Enum::YLeaf LoadBalance::destination_ip {4, "destination-ip"};
const Enum::YLeaf LoadBalance::unknown {5, "unknown"};

const Enum::YLeaf Rxstates::current_rx {1, "current-rx"};
const Enum::YLeaf Rxstates::expired {2, "expired"};
const Enum::YLeaf Rxstates::defaulted {3, "defaulted"};
const Enum::YLeaf Rxstates::initialize {4, "initialize"};
const Enum::YLeaf Rxstates::lacp_disabled {5, "lacp-disabled"};
const Enum::YLeaf Rxstates::port_disabled {6, "port-disabled"};

const Enum::YLeaf BmdMemberState::bmd_mbr_state_configured {1, "bmd-mbr-state-configured"};
const Enum::YLeaf BmdMemberState::bmd_mbr_state_standby {2, "bmd-mbr-state-standby"};
const Enum::YLeaf BmdMemberState::bmd_mbr_state_hot_standby {3, "bmd-mbr-state-hot-standby"};
const Enum::YLeaf BmdMemberState::bmd_mbr_state_negotiating {4, "bmd-mbr-state-negotiating"};
const Enum::YLeaf BmdMemberState::bmd_mbr_state_bfd_running {5, "bmd-mbr-state-bfd-running"};
const Enum::YLeaf BmdMemberState::bmd_mbr_state_active {6, "bmd-mbr-state-active"};

const Enum::YLeaf BmBdlState::bm_bdl_state_admin_down {0, "bm-bdl-state-admin-down"};
const Enum::YLeaf BmBdlState::bm_bdl_state_down {1, "bm-bdl-state-down"};
const Enum::YLeaf BmBdlState::bm_bdl_state_client_down {2, "bm-bdl-state-client-down"};
const Enum::YLeaf BmBdlState::bm_bdl_state_ptnr_down {3, "bm-bdl-state-ptnr-down"};
const Enum::YLeaf BmBdlState::bm_bdl_state_bundle_shutdown {4, "bm-bdl-state-bundle-shutdown"};
const Enum::YLeaf BmBdlState::bm_bdl_state_pe_isolated {5, "bm-bdl-state-pe-isolated"};
const Enum::YLeaf BmBdlState::bm_bdl_state_nak {6, "bm-bdl-state-nak"};
const Enum::YLeaf BmBdlState::bm_bdl_state_up_active {7, "bm-bdl-state-up-active"};
const Enum::YLeaf BmBdlState::bm_bdl_state_mlacp_hot_standby {8, "bm-bdl-state-mlacp-hot-standby"};
const Enum::YLeaf BmBdlState::bm_bdl_state_mlacp_cold_standby {9, "bm-bdl-state-mlacp-cold-standby"};
const Enum::YLeaf BmBdlState::bm_bdl_state_unknown {10, "bm-bdl-state-unknown"};
const Enum::YLeaf BmBdlState::bm_bdl_state_cold_standby {11, "bm-bdl-state-cold-standby"};
const Enum::YLeaf BmBdlState::bm_bdl_state_error_disabled {12, "bm-bdl-state-error-disabled"};
const Enum::YLeaf BmBdlState::bm_bdl_state_efd_disabled {13, "bm-bdl-state-efd-disabled"};

const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_nak {0, "bdl-state-nak"};
const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_unknown {1, "bdl-state-unknown"};
const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_no_sync {2, "bdl-state-no-sync"};
const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_rec_delay {3, "bdl-state-rec-delay"};
const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_up {4, "bdl-state-up"};
const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_down {5, "bdl-state-down"};
const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_admin_down {6, "bdl-state-admin-down"};
const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_test {7, "bdl-state-test"};
const Enum::YLeaf BmdMlacpBdlStateEnum::bdl_state_error {8, "bdl-state-error"};

const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_unknown {0, "bm-mbr-state-reason-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_unselectable_unknown {1, "bm-mbr-state-reason-unselectable-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_link_down {2, "bm-mbr-state-reason-link-down"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_link_deleting {3, "bm-mbr-state-reason-link-deleting"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_creating {4, "bm-mbr-state-reason-creating"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_creating {5, "bm-mbr-state-reason-bundle-creating"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_deleting {6, "bm-mbr-state-reason-bundle-deleting"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_admin_down {7, "bm-mbr-state-reason-bundle-admin-down"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_replicating {8, "bm-mbr-state-reason-replicating"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bandwidth {9, "bm-mbr-state-reason-bandwidth"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_loop_back {10, "bm-mbr-state-reason-loop-back"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_activity_type {11, "bm-mbr-state-reason-activity-type"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_shutdown {12, "bm-mbr-state-reason-bundle-shutdown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_min_selected {13, "bm-mbr-state-reason-min-selected"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_max_selected {14, "bm-mbr-state-reason-max-selected"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_link_limit {15, "bm-mbr-state-reason-link-limit"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_active_limit {16, "bm-mbr-state-reason-active-limit"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_standby_unknown {17, "bm-mbr-state-reason-standby-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_expired {18, "bm-mbr-state-reason-expired"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_defaulted {19, "bm-mbr-state-reason-defaulted"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_act_or_not_agg {20, "bm-mbr-state-reason-act-or-not-agg"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_partner_not_agg {21, "bm-mbr-state-reason-partner-not-agg"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_lagid {22, "bm-mbr-state-reason-lagid"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_not_cfgd {23, "bm-mbr-state-reason-bundle-not-cfgd"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_not_ready {24, "bm-mbr-state-reason-bundle-not-ready"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_partner_ood {25, "bm-mbr-state-reason-partner-ood"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_partner_not_in_sync {26, "bm-mbr-state-reason-partner-not-in-sync"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_foreign_partner_oos {27, "bm-mbr-state-reason-foreign-partner-oos"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_attach_unknown {28, "bm-mbr-state-reason-attach-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_partner_not_collecting {29, "bm-mbr-state-reason-partner-not-collecting"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_collect_unknown {30, "bm-mbr-state-reason-collect-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_standby_foreign {31, "bm-mbr-state-reason-standby-foreign"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_starting {32, "bm-mbr-state-reason-bfd-starting"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_down {33, "bm-mbr-state-reason-bfd-down"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_nbr_unconfig {34, "bm-mbr-state-reason-bfd-nbr-unconfig"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp {35, "bm-mbr-state-reason-mlacp"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_pe_isolated {36, "bm-mbr-state-reason-pe-isolated"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_forced_switchover {37, "bm-mbr-state-reason-forced-switchover"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_errdis_unknown {38, "bm-mbr-state-reason-errdis-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_no_mbr_state_info {39, "bm-mbr-state-reason-mlacp-no-mbr-state-info"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_active {40, "bm-mbr-state-reason-active"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_no_bdl_state_info {41, "bm-mbr-state-reason-mlacp-no-bdl-state-info"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_no_bdl_config_info {42, "bm-mbr-state-reason-mlacp-no-bdl-config-info"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_no_bdl_sync {43, "bm-mbr-state-reason-mlacp-no-bdl-sync"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_bdl_has_no_peer {44, "bm-mbr-state-reason-mlacp-bdl-has-no-peer"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_nak {45, "bm-mbr-state-reason-mlacp-nak"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_transport_unavailable {46, "bm-mbr-state-reason-mlacp-transport-unavailable"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_not_configured {47, "bm-mbr-state-reason-mlacp-not-configured"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_recovery_timer {48, "bm-mbr-state-reason-recovery-timer"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_standby {49, "bm-mbr-state-reason-mlacp-standby"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_maximized_out {50, "bm-mbr-state-reason-maximized-out"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_peer_selected {51, "bm-mbr-state-reason-mlacp-peer-selected"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_connect_timer_running {52, "bm-mbr-state-reason-mlacp-connect-timer-running"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_not_mlacp {53, "bm-mbr-state-reason-bundle-not-mlacp"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_no_lon {54, "bm-mbr-state-reason-no-lon"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_cumul_rel_bw_limit {55, "bm-mbr-state-reason-cumul-rel-bw-limit"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_no_mac {56, "bm-mbr-state-reason-no-mac"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_no_system_id {57, "bm-mbr-state-reason-no-system-id"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_link_shutdown {58, "bm-mbr-state-reason-link-shutdown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_activity_mlacp {59, "bm-mbr-state-reason-activity-mlacp"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_activity_iccp {60, "bm-mbr-state-reason-activity-iccp"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_icpe_mlacp {61, "bm-mbr-state-reason-bundle-icpe-mlacp"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_no_link_num {62, "bm-mbr-state-reason-no-link-num"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_standby_peer_higher_prio {63, "bm-mbr-state-reason-standby-peer-higher-prio"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_red_state_standby {64, "bm-mbr-state-reason-red-state-standby"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_other_red_state_standby {65, "bm-mbr-state-reason-other-red-state-standby"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_hold_ing {66, "bm-mbr-state-reason-hold-ing"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_error_disabled {67, "bm-mbr-state-reason-bundle-error-disabled"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_efd_disabled {68, "bm-mbr-state-reason-bundle-efd-disabled"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_singleton_pe_isolated {69, "bm-mbr-state-reason-singleton-pe-isolated"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_ipv6_starting {70, "bm-mbr-state-reason-bfd-ipv6-starting"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_ipv6_down {71, "bm-mbr-state-reason-bfd-ipv6-down"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_ipv6_nbr_unconfig {72, "bm-mbr-state-reason-bfd-ipv6-nbr-unconfig"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_timer_running {73, "bm-mbr-state-reason-timer-running"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_client_bundle_ctrl {74, "bm-mbr-state-reason-client-bundle-ctrl"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_count {75, "bm-mbr-state-reason-count"};

const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_idb_create {0, "bmd-event-mbr-idb-create"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_bdl_add {1, "bmd-event-mbr-bdl-add"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_im_state {2, "bmd-event-mbr-im-state"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_sel_logic {3, "bmd-event-mbr-sel-logic"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_mux {4, "bmd-event-mbr-mux"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_bfd {5, "bmd-event-mbr-bfd"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_expired {6, "bmd-event-mbr-expired"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_defaulted {7, "bmd-event-mbr-defaulted"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_first_retry {8, "bmd-event-mbr-first-retry"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_msg {9, "bmd-event-mbr-msg"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_error {10, "bmd-event-mbr-error"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_mlacp_tlv {11, "bmd-event-mbr-mlacp-tlv"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_redundancy_role {12, "bmd-event-mbr-redundancy-role"};
const Enum::YLeaf BmdBagEventMbrItem::bmd_event_mbr_count {13, "bmd-event-mbr-count"};

const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_idb_create {0, "bmd-event-rg-idb-create"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_configured {1, "bmd-event-rg-configured"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_user_config {2, "bmd-event-rg-user-config"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_connect_ion {3, "bmd-event-rg-connect-ion"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_data {4, "bmd-event-rg-data"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_sync {5, "bmd-event-rg-sync"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_first_retry {6, "bmd-event-rg-first-retry"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_error {7, "bmd-event-rg-error"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_mlacp_tlv {8, "bmd-event-rg-mlacp-tlv"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_iccp_event {9, "bmd-event-rg-iccp-event"};
const Enum::YLeaf BmdBagEventRgItem::bmd_event_rg_count {10, "bmd-event-rg-count"};

const Enum::YLeaf BmBdlMacSource::bm_bdl_mac_source_unknown {0, "bm-bdl-mac-source-unknown"};
const Enum::YLeaf BmBdlMacSource::bm_bdl_mac_source_chassis {1, "bm-bdl-mac-source-chassis"};
const Enum::YLeaf BmBdlMacSource::bm_bdl_mac_source_configured {2, "bm-bdl-mac-source-configured"};
const Enum::YLeaf BmBdlMacSource::bm_bdl_mac_source_member {3, "bm-bdl-mac-source-member"};
const Enum::YLeaf BmBdlMacSource::bm_bdl_mac_source_peer {4, "bm-bdl-mac-source-peer"};

const Enum::YLeaf BmdMlacpSwitchover::bmd_mlacp_switchover_nonrevertive {0, "bmd-mlacp-switchover-nonrevertive"};
const Enum::YLeaf BmdMlacpSwitchover::bmd_mlacp_switchover_brute_force {1, "bmd-mlacp-switchover-brute-force"};
const Enum::YLeaf BmdMlacpSwitchover::bmd_mlacp_switchover_revertive {2, "bmd-mlacp-switchover-revertive"};
const Enum::YLeaf BmdMlacpSwitchover::bmd_mlacp_switchover_count {3, "bmd-mlacp-switchover-count"};

const Enum::YLeaf BmStateReasonTarget::member_reason {0, "member-reason"};
const Enum::YLeaf BmStateReasonTarget::bundle_reason {1, "bundle-reason"};

const Enum::YLeaf BmdSwitchReason::bm_switch_reason_none {0, "bm-switch-reason-none"};
const Enum::YLeaf BmdSwitchReason::bm_switch_reason_noop {1, "bm-switch-reason-noop"};
const Enum::YLeaf BmdSwitchReason::bm_switch_reason_not_mlacp {2, "bm-switch-reason-not-mlacp"};
const Enum::YLeaf BmdSwitchReason::bm_switch_reason_revertive {3, "bm-switch-reason-revertive"};
const Enum::YLeaf BmdSwitchReason::bm_switch_reason_bdl_down {4, "bm-switch-reason-bdl-down"};
const Enum::YLeaf BmdSwitchReason::bm_switch_reason_recovery {5, "bm-switch-reason-recovery"};
const Enum::YLeaf BmdSwitchReason::bm_switch_reason_preceding_error {6, "bm-switch-reason-preceding-error"};
const Enum::YLeaf BmdSwitchReason::bm_switch_reason_wrong_order {7, "bm-switch-reason-wrong-order"};
const Enum::YLeaf BmdSwitchReason::bm_switch_reason_singleton {8, "bm-switch-reason-singleton"};

const Enum::YLeaf BmdMemberTypeEnum::bmd_mbr_local {0, "bmd-mbr-local"};
const Enum::YLeaf BmdMemberTypeEnum::bmd_mbr_foreign {1, "bmd-mbr-foreign"};
const Enum::YLeaf BmdMemberTypeEnum::bmd_mbr_unknown {2, "bmd-mbr-unknown"};

const Enum::YLeaf BundleMedia1::ethernet {0, "ethernet"};
const Enum::YLeaf BundleMedia1::pos {1, "pos"};

const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_idb_create {0, "bmd-event-bdl-idb-create"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_configured {1, "bmd-event-bdl-configured"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_im_state {2, "bmd-event-bdl-im-state"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_mbr_added {3, "bmd-event-bdl-mbr-added"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_mbr_deleted {4, "bmd-event-bdl-mbr-deleted"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_mac_addr {5, "bmd-event-bdl-mac-addr"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_first_retry {6, "bmd-event-bdl-first-retry"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_user_config {7, "bmd-event-bdl-user-config"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_error {8, "bmd-event-bdl-error"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_mlacp_tlv {9, "bmd-event-bdl-mlacp-tlv"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_redundancy_role {10, "bmd-event-bdl-redundancy-role"};
const Enum::YLeaf BmdBagEventBdlItem::bdl_bfd_state_change {11, "bdl-bfd-state-change"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_icl {12, "bmd-event-bdl-icl"};
const Enum::YLeaf BmdBagEventBdlItem::bmd_event_bdl_count {13, "bmd-event-bdl-count"};

const Enum::YLeaf BmdBfdBdlState::bmd_bfd_bdl_down {0, "bmd-bfd-bdl-down"};
const Enum::YLeaf BmdBfdBdlState::bmd_bfd_bdl_unknown {1, "bmd-bfd-bdl-unknown"};
const Enum::YLeaf BmdBfdBdlState::bmd_bfd_bdl_up {2, "bmd-bfd-bdl-up"};
const Enum::YLeaf BmdBfdBdlState::bmd_bfd_bdl_count {3, "bmd-bfd-bdl-count"};

const Enum::YLeaf BundleMedia::bundle_media_ethernet {0, "bundle-media-ethernet"};
const Enum::YLeaf BundleMedia::bundle_media_pos {1, "bundle-media-pos"};
const Enum::YLeaf BundleMedia::bundle_media_count {2, "bundle-media-count"};

const Enum::YLeaf BmFeatureStatus::bm_feature_not_configured {0, "bm-feature-not-configured"};
const Enum::YLeaf BmFeatureStatus::bm_feature_not_operational {1, "bm-feature-not-operational"};
const Enum::YLeaf BmFeatureStatus::bm_feature_operational {2, "bm-feature-operational"};

const Enum::YLeaf LacpPeriodState::period_s_low {0, "period-s-low"};
const Enum::YLeaf LacpPeriodState::period_fast {1, "period-fast"};
const Enum::YLeaf LacpPeriodState::period_none {2, "period-none"};

const Enum::YLeaf BmMuxreason::bm_mux_reason_no_reason {0, "bm-mux-reason-no-reason"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_link_down {1, "bm-mux-reason-link-down"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_link_deleted {2, "bm-mux-reason-link-deleted"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_duplex {3, "bm-mux-reason-duplex"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_bandwidth {4, "bm-mux-reason-bandwidth"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_loop_back {5, "bm-mux-reason-loop-back"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_activity_type {6, "bm-mux-reason-activity-type"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_link_limit {7, "bm-mux-reason-link-limit"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_shared {8, "bm-mux-reason-shared"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_lagid {9, "bm-mux-reason-lagid"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_no_bundle {10, "bm-mux-reason-no-bundle"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_no_primary {11, "bm-mux-reason-no-primary"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_bundle_down {12, "bm-mux-reason-bundle-down"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_individual {13, "bm-mux-reason-individual"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_defaulted {14, "bm-mux-reason-defaulted"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_in_sync {15, "bm-mux-reason-in-sync"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_collecting {16, "bm-mux-reason-collecting"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_active_link_limit {17, "bm-mux-reason-active-link-limit"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_distributing {18, "bm-mux-reason-distributing"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_count {19, "bm-mux-reason-count"};

const Enum::YLeaf BmdBagMlacpSchActionItem::switchover {0, "switchover"};
const Enum::YLeaf BmdBagMlacpSchActionItem::switchback {1, "switchback"};

const Enum::YLeaf BmMuxstate::detached {1, "detached"};
const Enum::YLeaf BmMuxstate::waiting {2, "waiting"};
const Enum::YLeaf BmMuxstate::attached {3, "attached"};
const Enum::YLeaf BmMuxstate::collecting {4, "collecting"};
const Enum::YLeaf BmMuxstate::distributing {5, "distributing"};
const Enum::YLeaf BmMuxstate::collecting_distributing {6, "collecting-distributing"};

const Enum::YLeaf LacpChurnstates::no_churn {1, "no-churn"};
const Enum::YLeaf LacpChurnstates::churn {2, "churn"};
const Enum::YLeaf LacpChurnstates::churn_monitor {3, "churn-monitor"};

const Enum::YLeaf BmdMlacpMbrStateEnum::mbr_state_nak {0, "mbr-state-nak"};
const Enum::YLeaf BmdMlacpMbrStateEnum::mbr_state_unknown {1, "mbr-state-unknown"};
const Enum::YLeaf BmdMlacpMbrStateEnum::mbr_state_up {2, "mbr-state-up"};
const Enum::YLeaf BmdMlacpMbrStateEnum::mbr_state_down {3, "mbr-state-down"};
const Enum::YLeaf BmdMlacpMbrStateEnum::mbr_state_admin_down {4, "mbr-state-admin-down"};
const Enum::YLeaf BmdMlacpMbrStateEnum::mbr_state_test {5, "mbr-state-test"};
const Enum::YLeaf BmdMlacpMbrStateEnum::mbr_state_error {6, "mbr-state-error"};

const Enum::YLeaf BmAfId::bm_af_id_ipv4 {1136568623, "bm-af-id-ipv4"};
const Enum::YLeaf BmAfId::bm_af_id_ipv6 {1136568624, "bm-af-id-ipv6"};


}
}

