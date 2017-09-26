
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_1.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_cfg {

MplsTe::GlobalAttributes::BandwidthAccounting::BandwidthAccounting()
    :
    adjustment_factor{YType::uint32, "adjustment-factor"},
    collection_type_rsvp_te{YType::boolean, "collection-type-rsvp-te"},
    enable{YType::empty, "enable"},
    sampling_interval{YType::uint32, "sampling-interval"}
    	,
    account_flooding_threshold(std::make_shared<MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold>())
	,application(std::make_shared<MplsTe::GlobalAttributes::BandwidthAccounting::Application>())
{
    account_flooding_threshold->parent = this;
    application->parent = this;

    yang_name = "bandwidth-accounting"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::BandwidthAccounting::~BandwidthAccounting()
{
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::has_data() const
{
    return adjustment_factor.is_set
	|| collection_type_rsvp_te.is_set
	|| enable.is_set
	|| sampling_interval.is_set
	|| (account_flooding_threshold !=  nullptr && account_flooding_threshold->has_data())
	|| (application !=  nullptr && application->has_data());
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjustment_factor.yfilter)
	|| ydk::is_set(collection_type_rsvp_te.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(sampling_interval.yfilter)
	|| (account_flooding_threshold !=  nullptr && account_flooding_threshold->has_operation())
	|| (application !=  nullptr && application->has_operation());
}

std::string MplsTe::GlobalAttributes::BandwidthAccounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::BandwidthAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::BandwidthAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_factor.is_set || is_set(adjustment_factor.yfilter)) leaf_name_data.push_back(adjustment_factor.get_name_leafdata());
    if (collection_type_rsvp_te.is_set || is_set(collection_type_rsvp_te.yfilter)) leaf_name_data.push_back(collection_type_rsvp_te.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (sampling_interval.is_set || is_set(sampling_interval.yfilter)) leaf_name_data.push_back(sampling_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::BandwidthAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account-flooding-threshold")
    {
        if(account_flooding_threshold == nullptr)
        {
            account_flooding_threshold = std::make_shared<MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold>();
        }
        return account_flooding_threshold;
    }

    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<MplsTe::GlobalAttributes::BandwidthAccounting::Application>();
        }
        return application;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::BandwidthAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(account_flooding_threshold != nullptr)
    {
        children["account-flooding-threshold"] = account_flooding_threshold;
    }

    if(application != nullptr)
    {
        children["application"] = application;
    }

    return children;
}

void MplsTe::GlobalAttributes::BandwidthAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjustment-factor")
    {
        adjustment_factor = value;
        adjustment_factor.value_namespace = name_space;
        adjustment_factor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-type-rsvp-te")
    {
        collection_type_rsvp_te = value;
        collection_type_rsvp_te.value_namespace = name_space;
        collection_type_rsvp_te.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampling-interval")
    {
        sampling_interval = value;
        sampling_interval.value_namespace = name_space;
        sampling_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::BandwidthAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjustment-factor")
    {
        adjustment_factor.yfilter = yfilter;
    }
    if(value_path == "collection-type-rsvp-te")
    {
        collection_type_rsvp_te.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "sampling-interval")
    {
        sampling_interval.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-flooding-threshold" || name == "application" || name == "adjustment-factor" || name == "collection-type-rsvp-te" || name == "enable" || name == "sampling-interval")
        return true;
    return false;
}

MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::AccountFloodingThreshold()
    :
    down_threshold{YType::uint32, "down-threshold"},
    up_threshold{YType::uint32, "up-threshold"}
{

    yang_name = "account-flooding-threshold"; yang_parent_name = "bandwidth-accounting"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::~AccountFloodingThreshold()
{
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::has_data() const
{
    return down_threshold.is_set
	|| up_threshold.is_set;
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down_threshold.yfilter)
	|| ydk::is_set(up_threshold.yfilter);
}

std::string MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/bandwidth-accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-flooding-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_threshold.is_set || is_set(down_threshold.yfilter)) leaf_name_data.push_back(down_threshold.get_name_leafdata());
    if (up_threshold.is_set || is_set(up_threshold.yfilter)) leaf_name_data.push_back(up_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-threshold")
    {
        down_threshold = value;
        down_threshold.value_namespace = name_space;
        down_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-threshold")
    {
        up_threshold = value;
        up_threshold.value_namespace = name_space;
        up_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-threshold")
    {
        down_threshold.yfilter = yfilter;
    }
    if(value_path == "up-threshold")
    {
        up_threshold.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::AccountFloodingThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-threshold" || name == "up-threshold")
        return true;
    return false;
}

MplsTe::GlobalAttributes::BandwidthAccounting::Application::Application()
    :
    application_enforced{YType::boolean, "application-enforced"},
    application_interval{YType::uint32, "application-interval"}
{

    yang_name = "application"; yang_parent_name = "bandwidth-accounting"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::BandwidthAccounting::Application::~Application()
{
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::Application::has_data() const
{
    return application_enforced.is_set
	|| application_interval.is_set;
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_enforced.yfilter)
	|| ydk::is_set(application_interval.yfilter);
}

std::string MplsTe::GlobalAttributes::BandwidthAccounting::Application::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/bandwidth-accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::BandwidthAccounting::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::BandwidthAccounting::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_enforced.is_set || is_set(application_enforced.yfilter)) leaf_name_data.push_back(application_enforced.get_name_leafdata());
    if (application_interval.is_set || is_set(application_interval.yfilter)) leaf_name_data.push_back(application_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::BandwidthAccounting::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::BandwidthAccounting::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::BandwidthAccounting::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-enforced")
    {
        application_enforced = value;
        application_enforced.value_namespace = name_space;
        application_enforced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-interval")
    {
        application_interval = value;
        application_interval.value_namespace = name_space;
        application_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::BandwidthAccounting::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-enforced")
    {
        application_enforced.yfilter = yfilter;
    }
    if(value_path == "application-interval")
    {
        application_interval.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::BandwidthAccounting::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-enforced" || name == "application-interval")
        return true;
    return false;
}

MplsTe::GlobalAttributes::BfdOverLsp::BfdOverLsp()
    :
    head(std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp::Head>())
	,tail(std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp::Tail>())
{
    head->parent = this;
    tail->parent = this;

    yang_name = "bfd-over-lsp"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::BfdOverLsp::~BfdOverLsp()
{
}

bool MplsTe::GlobalAttributes::BfdOverLsp::has_data() const
{
    return (head !=  nullptr && head->has_data())
	|| (tail !=  nullptr && tail->has_data());
}

bool MplsTe::GlobalAttributes::BfdOverLsp::has_operation() const
{
    return is_set(yfilter)
	|| (head !=  nullptr && head->has_operation())
	|| (tail !=  nullptr && tail->has_operation());
}

std::string MplsTe::GlobalAttributes::BfdOverLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::BfdOverLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::BfdOverLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::BfdOverLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head")
    {
        if(head == nullptr)
        {
            head = std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp::Head>();
        }
        return head;
    }

    if(child_yang_name == "tail")
    {
        if(tail == nullptr)
        {
            tail = std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp::Tail>();
        }
        return tail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::BfdOverLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(head != nullptr)
    {
        children["head"] = head;
    }

    if(tail != nullptr)
    {
        children["tail"] = tail;
    }

    return children;
}

void MplsTe::GlobalAttributes::BfdOverLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::BfdOverLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::BfdOverLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "tail")
        return true;
    return false;
}

MplsTe::GlobalAttributes::BfdOverLsp::Head::Head()
    :
    down_action{YType::enumeration, "down-action"},
    reopt_timeout{YType::uint32, "reopt-timeout"}
{

    yang_name = "head"; yang_parent_name = "bfd-over-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::BfdOverLsp::Head::~Head()
{
}

bool MplsTe::GlobalAttributes::BfdOverLsp::Head::has_data() const
{
    return down_action.is_set
	|| reopt_timeout.is_set;
}

bool MplsTe::GlobalAttributes::BfdOverLsp::Head::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down_action.yfilter)
	|| ydk::is_set(reopt_timeout.yfilter);
}

std::string MplsTe::GlobalAttributes::BfdOverLsp::Head::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/bfd-over-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::BfdOverLsp::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::BfdOverLsp::Head::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_action.is_set || is_set(down_action.yfilter)) leaf_name_data.push_back(down_action.get_name_leafdata());
    if (reopt_timeout.is_set || is_set(reopt_timeout.yfilter)) leaf_name_data.push_back(reopt_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::BfdOverLsp::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::BfdOverLsp::Head::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::BfdOverLsp::Head::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-action")
    {
        down_action = value;
        down_action.value_namespace = name_space;
        down_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reopt-timeout")
    {
        reopt_timeout = value;
        reopt_timeout.value_namespace = name_space;
        reopt_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::BfdOverLsp::Head::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-action")
    {
        down_action.yfilter = yfilter;
    }
    if(value_path == "reopt-timeout")
    {
        reopt_timeout.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::BfdOverLsp::Head::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-action" || name == "reopt-timeout")
        return true;
    return false;
}

MplsTe::GlobalAttributes::BfdOverLsp::Tail::Tail()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    multiplier{YType::uint32, "multiplier"}
{

    yang_name = "tail"; yang_parent_name = "bfd-over-lsp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::BfdOverLsp::Tail::~Tail()
{
}

bool MplsTe::GlobalAttributes::BfdOverLsp::Tail::has_data() const
{
    return minimum_interval.is_set
	|| multiplier.is_set;
}

bool MplsTe::GlobalAttributes::BfdOverLsp::Tail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string MplsTe::GlobalAttributes::BfdOverLsp::Tail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/bfd-over-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::BfdOverLsp::Tail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::BfdOverLsp::Tail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::BfdOverLsp::Tail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::BfdOverLsp::Tail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::BfdOverLsp::Tail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::BfdOverLsp::Tail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::BfdOverLsp::Tail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-interval" || name == "multiplier")
        return true;
    return false;
}

MplsTe::GlobalAttributes::FastReroute::FastReroute()
    :
    timers(std::make_shared<MplsTe::GlobalAttributes::FastReroute::Timers>())
{
    timers->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::FastReroute::~FastReroute()
{
}

bool MplsTe::GlobalAttributes::FastReroute::has_data() const
{
    return (timers !=  nullptr && timers->has_data());
}

bool MplsTe::GlobalAttributes::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (timers !=  nullptr && timers->has_operation());
}

std::string MplsTe::GlobalAttributes::FastReroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<MplsTe::GlobalAttributes::FastReroute::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void MplsTe::GlobalAttributes::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timers")
        return true;
    return false;
}

MplsTe::GlobalAttributes::FastReroute::Timers::Timers()
    :
    hold_backup{YType::uint32, "hold-backup"},
    promotion{YType::uint32, "promotion"}
{

    yang_name = "timers"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::FastReroute::Timers::~Timers()
{
}

bool MplsTe::GlobalAttributes::FastReroute::Timers::has_data() const
{
    return hold_backup.is_set
	|| promotion.is_set;
}

bool MplsTe::GlobalAttributes::FastReroute::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_backup.yfilter)
	|| ydk::is_set(promotion.yfilter);
}

std::string MplsTe::GlobalAttributes::FastReroute::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::FastReroute::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::FastReroute::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_backup.is_set || is_set(hold_backup.yfilter)) leaf_name_data.push_back(hold_backup.get_name_leafdata());
    if (promotion.is_set || is_set(promotion.yfilter)) leaf_name_data.push_back(promotion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::FastReroute::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::FastReroute::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::FastReroute::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-backup")
    {
        hold_backup = value;
        hold_backup.value_namespace = name_space;
        hold_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "promotion")
    {
        promotion = value;
        promotion.value_namespace = name_space;
        promotion.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::FastReroute::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-backup")
    {
        hold_backup.yfilter = yfilter;
    }
    if(value_path == "promotion")
    {
        promotion.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::FastReroute::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-backup" || name == "promotion")
        return true;
    return false;
}

MplsTe::GlobalAttributes::HardwareOutOfResource::HardwareOutOfResource()
    :
    oor_green_state(std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState>())
	,oor_red_state(std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState>())
	,oor_yellow_state(std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState>())
{
    oor_green_state->parent = this;
    oor_red_state->parent = this;
    oor_yellow_state->parent = this;

    yang_name = "hardware-out-of-resource"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::HardwareOutOfResource::~HardwareOutOfResource()
{
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::has_data() const
{
    return (oor_green_state !=  nullptr && oor_green_state->has_data())
	|| (oor_red_state !=  nullptr && oor_red_state->has_data())
	|| (oor_yellow_state !=  nullptr && oor_yellow_state->has_data());
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::has_operation() const
{
    return is_set(yfilter)
	|| (oor_green_state !=  nullptr && oor_green_state->has_operation())
	|| (oor_red_state !=  nullptr && oor_red_state->has_operation())
	|| (oor_yellow_state !=  nullptr && oor_yellow_state->has_operation());
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-out-of-resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::HardwareOutOfResource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::HardwareOutOfResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oor-green-state")
    {
        if(oor_green_state == nullptr)
        {
            oor_green_state = std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState>();
        }
        return oor_green_state;
    }

    if(child_yang_name == "oor-red-state")
    {
        if(oor_red_state == nullptr)
        {
            oor_red_state = std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState>();
        }
        return oor_red_state;
    }

    if(child_yang_name == "oor-yellow-state")
    {
        if(oor_yellow_state == nullptr)
        {
            oor_yellow_state = std::make_shared<MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState>();
        }
        return oor_yellow_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::HardwareOutOfResource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oor_green_state != nullptr)
    {
        children["oor-green-state"] = oor_green_state;
    }

    if(oor_red_state != nullptr)
    {
        children["oor-red-state"] = oor_red_state;
    }

    if(oor_yellow_state != nullptr)
    {
        children["oor-yellow-state"] = oor_yellow_state;
    }

    return children;
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oor-green-state" || name == "oor-red-state" || name == "oor-yellow-state")
        return true;
    return false;
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::OorGreenState()
    :
    oor_accept_lsp_min_bandwidth{YType::int32, "oor-accept-lsp-min-bandwidth"},
    oor_accept_reopt_lsp{YType::empty, "oor-accept-reopt-lsp"},
    oor_available_bandwidth_percentage{YType::uint32, "oor-available-bandwidth-percentage"},
    oor_metric_te_penalty{YType::int32, "oor-metric-te-penalty"},
    oor_node_protection_disable{YType::empty, "oor-node-protection-disable"},
    oor_recovery_duration{YType::uint32, "oor-recovery-duration"}
{

    yang_name = "oor-green-state"; yang_parent_name = "hardware-out-of-resource"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::~OorGreenState()
{
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::has_data() const
{
    return oor_accept_lsp_min_bandwidth.is_set
	|| oor_accept_reopt_lsp.is_set
	|| oor_available_bandwidth_percentage.is_set
	|| oor_metric_te_penalty.is_set
	|| oor_node_protection_disable.is_set
	|| oor_recovery_duration.is_set;
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oor_accept_lsp_min_bandwidth.yfilter)
	|| ydk::is_set(oor_accept_reopt_lsp.yfilter)
	|| ydk::is_set(oor_available_bandwidth_percentage.yfilter)
	|| ydk::is_set(oor_metric_te_penalty.yfilter)
	|| ydk::is_set(oor_node_protection_disable.yfilter)
	|| ydk::is_set(oor_recovery_duration.yfilter);
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/hardware-out-of-resource/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-green-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oor_accept_lsp_min_bandwidth.is_set || is_set(oor_accept_lsp_min_bandwidth.yfilter)) leaf_name_data.push_back(oor_accept_lsp_min_bandwidth.get_name_leafdata());
    if (oor_accept_reopt_lsp.is_set || is_set(oor_accept_reopt_lsp.yfilter)) leaf_name_data.push_back(oor_accept_reopt_lsp.get_name_leafdata());
    if (oor_available_bandwidth_percentage.is_set || is_set(oor_available_bandwidth_percentage.yfilter)) leaf_name_data.push_back(oor_available_bandwidth_percentage.get_name_leafdata());
    if (oor_metric_te_penalty.is_set || is_set(oor_metric_te_penalty.yfilter)) leaf_name_data.push_back(oor_metric_te_penalty.get_name_leafdata());
    if (oor_node_protection_disable.is_set || is_set(oor_node_protection_disable.yfilter)) leaf_name_data.push_back(oor_node_protection_disable.get_name_leafdata());
    if (oor_recovery_duration.is_set || is_set(oor_recovery_duration.yfilter)) leaf_name_data.push_back(oor_recovery_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oor-accept-lsp-min-bandwidth")
    {
        oor_accept_lsp_min_bandwidth = value;
        oor_accept_lsp_min_bandwidth.value_namespace = name_space;
        oor_accept_lsp_min_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-accept-reopt-lsp")
    {
        oor_accept_reopt_lsp = value;
        oor_accept_reopt_lsp.value_namespace = name_space;
        oor_accept_reopt_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-available-bandwidth-percentage")
    {
        oor_available_bandwidth_percentage = value;
        oor_available_bandwidth_percentage.value_namespace = name_space;
        oor_available_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-metric-te-penalty")
    {
        oor_metric_te_penalty = value;
        oor_metric_te_penalty.value_namespace = name_space;
        oor_metric_te_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-node-protection-disable")
    {
        oor_node_protection_disable = value;
        oor_node_protection_disable.value_namespace = name_space;
        oor_node_protection_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-recovery-duration")
    {
        oor_recovery_duration = value;
        oor_recovery_duration.value_namespace = name_space;
        oor_recovery_duration.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oor-accept-lsp-min-bandwidth")
    {
        oor_accept_lsp_min_bandwidth.yfilter = yfilter;
    }
    if(value_path == "oor-accept-reopt-lsp")
    {
        oor_accept_reopt_lsp.yfilter = yfilter;
    }
    if(value_path == "oor-available-bandwidth-percentage")
    {
        oor_available_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "oor-metric-te-penalty")
    {
        oor_metric_te_penalty.yfilter = yfilter;
    }
    if(value_path == "oor-node-protection-disable")
    {
        oor_node_protection_disable.yfilter = yfilter;
    }
    if(value_path == "oor-recovery-duration")
    {
        oor_recovery_duration.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oor-accept-lsp-min-bandwidth" || name == "oor-accept-reopt-lsp" || name == "oor-available-bandwidth-percentage" || name == "oor-metric-te-penalty" || name == "oor-node-protection-disable" || name == "oor-recovery-duration")
        return true;
    return false;
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::OorRedState()
    :
    oor_accept_lsp_min_bandwidth{YType::int32, "oor-accept-lsp-min-bandwidth"},
    oor_accept_reopt_lsp{YType::empty, "oor-accept-reopt-lsp"},
    oor_available_bandwidth_percentage{YType::uint32, "oor-available-bandwidth-percentage"},
    oor_metric_te_penalty{YType::int32, "oor-metric-te-penalty"},
    oor_node_protection_disable{YType::empty, "oor-node-protection-disable"}
{

    yang_name = "oor-red-state"; yang_parent_name = "hardware-out-of-resource"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::~OorRedState()
{
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::has_data() const
{
    return oor_accept_lsp_min_bandwidth.is_set
	|| oor_accept_reopt_lsp.is_set
	|| oor_available_bandwidth_percentage.is_set
	|| oor_metric_te_penalty.is_set
	|| oor_node_protection_disable.is_set;
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oor_accept_lsp_min_bandwidth.yfilter)
	|| ydk::is_set(oor_accept_reopt_lsp.yfilter)
	|| ydk::is_set(oor_available_bandwidth_percentage.yfilter)
	|| ydk::is_set(oor_metric_te_penalty.yfilter)
	|| ydk::is_set(oor_node_protection_disable.yfilter);
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/hardware-out-of-resource/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-red-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oor_accept_lsp_min_bandwidth.is_set || is_set(oor_accept_lsp_min_bandwidth.yfilter)) leaf_name_data.push_back(oor_accept_lsp_min_bandwidth.get_name_leafdata());
    if (oor_accept_reopt_lsp.is_set || is_set(oor_accept_reopt_lsp.yfilter)) leaf_name_data.push_back(oor_accept_reopt_lsp.get_name_leafdata());
    if (oor_available_bandwidth_percentage.is_set || is_set(oor_available_bandwidth_percentage.yfilter)) leaf_name_data.push_back(oor_available_bandwidth_percentage.get_name_leafdata());
    if (oor_metric_te_penalty.is_set || is_set(oor_metric_te_penalty.yfilter)) leaf_name_data.push_back(oor_metric_te_penalty.get_name_leafdata());
    if (oor_node_protection_disable.is_set || is_set(oor_node_protection_disable.yfilter)) leaf_name_data.push_back(oor_node_protection_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oor-accept-lsp-min-bandwidth")
    {
        oor_accept_lsp_min_bandwidth = value;
        oor_accept_lsp_min_bandwidth.value_namespace = name_space;
        oor_accept_lsp_min_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-accept-reopt-lsp")
    {
        oor_accept_reopt_lsp = value;
        oor_accept_reopt_lsp.value_namespace = name_space;
        oor_accept_reopt_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-available-bandwidth-percentage")
    {
        oor_available_bandwidth_percentage = value;
        oor_available_bandwidth_percentage.value_namespace = name_space;
        oor_available_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-metric-te-penalty")
    {
        oor_metric_te_penalty = value;
        oor_metric_te_penalty.value_namespace = name_space;
        oor_metric_te_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-node-protection-disable")
    {
        oor_node_protection_disable = value;
        oor_node_protection_disable.value_namespace = name_space;
        oor_node_protection_disable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oor-accept-lsp-min-bandwidth")
    {
        oor_accept_lsp_min_bandwidth.yfilter = yfilter;
    }
    if(value_path == "oor-accept-reopt-lsp")
    {
        oor_accept_reopt_lsp.yfilter = yfilter;
    }
    if(value_path == "oor-available-bandwidth-percentage")
    {
        oor_available_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "oor-metric-te-penalty")
    {
        oor_metric_te_penalty.yfilter = yfilter;
    }
    if(value_path == "oor-node-protection-disable")
    {
        oor_node_protection_disable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oor-accept-lsp-min-bandwidth" || name == "oor-accept-reopt-lsp" || name == "oor-available-bandwidth-percentage" || name == "oor-metric-te-penalty" || name == "oor-node-protection-disable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::OorYellowState()
    :
    oor_accept_lsp_min_bandwidth{YType::int32, "oor-accept-lsp-min-bandwidth"},
    oor_accept_reopt_lsp{YType::empty, "oor-accept-reopt-lsp"},
    oor_available_bandwidth_percentage{YType::uint32, "oor-available-bandwidth-percentage"},
    oor_metric_te_penalty{YType::int32, "oor-metric-te-penalty"},
    oor_node_protection_disable{YType::empty, "oor-node-protection-disable"}
{

    yang_name = "oor-yellow-state"; yang_parent_name = "hardware-out-of-resource"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::~OorYellowState()
{
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::has_data() const
{
    return oor_accept_lsp_min_bandwidth.is_set
	|| oor_accept_reopt_lsp.is_set
	|| oor_available_bandwidth_percentage.is_set
	|| oor_metric_te_penalty.is_set
	|| oor_node_protection_disable.is_set;
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oor_accept_lsp_min_bandwidth.yfilter)
	|| ydk::is_set(oor_accept_reopt_lsp.yfilter)
	|| ydk::is_set(oor_available_bandwidth_percentage.yfilter)
	|| ydk::is_set(oor_metric_te_penalty.yfilter)
	|| ydk::is_set(oor_node_protection_disable.yfilter);
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/hardware-out-of-resource/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-yellow-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oor_accept_lsp_min_bandwidth.is_set || is_set(oor_accept_lsp_min_bandwidth.yfilter)) leaf_name_data.push_back(oor_accept_lsp_min_bandwidth.get_name_leafdata());
    if (oor_accept_reopt_lsp.is_set || is_set(oor_accept_reopt_lsp.yfilter)) leaf_name_data.push_back(oor_accept_reopt_lsp.get_name_leafdata());
    if (oor_available_bandwidth_percentage.is_set || is_set(oor_available_bandwidth_percentage.yfilter)) leaf_name_data.push_back(oor_available_bandwidth_percentage.get_name_leafdata());
    if (oor_metric_te_penalty.is_set || is_set(oor_metric_te_penalty.yfilter)) leaf_name_data.push_back(oor_metric_te_penalty.get_name_leafdata());
    if (oor_node_protection_disable.is_set || is_set(oor_node_protection_disable.yfilter)) leaf_name_data.push_back(oor_node_protection_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oor-accept-lsp-min-bandwidth")
    {
        oor_accept_lsp_min_bandwidth = value;
        oor_accept_lsp_min_bandwidth.value_namespace = name_space;
        oor_accept_lsp_min_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-accept-reopt-lsp")
    {
        oor_accept_reopt_lsp = value;
        oor_accept_reopt_lsp.value_namespace = name_space;
        oor_accept_reopt_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-available-bandwidth-percentage")
    {
        oor_available_bandwidth_percentage = value;
        oor_available_bandwidth_percentage.value_namespace = name_space;
        oor_available_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-metric-te-penalty")
    {
        oor_metric_te_penalty = value;
        oor_metric_te_penalty.value_namespace = name_space;
        oor_metric_te_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oor-node-protection-disable")
    {
        oor_node_protection_disable = value;
        oor_node_protection_disable.value_namespace = name_space;
        oor_node_protection_disable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oor-accept-lsp-min-bandwidth")
    {
        oor_accept_lsp_min_bandwidth.yfilter = yfilter;
    }
    if(value_path == "oor-accept-reopt-lsp")
    {
        oor_accept_reopt_lsp.yfilter = yfilter;
    }
    if(value_path == "oor-available-bandwidth-percentage")
    {
        oor_available_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "oor-metric-te-penalty")
    {
        oor_metric_te_penalty.yfilter = yfilter;
    }
    if(value_path == "oor-node-protection-disable")
    {
        oor_node_protection_disable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oor-accept-lsp-min-bandwidth" || name == "oor-accept-reopt-lsp" || name == "oor-available-bandwidth-percentage" || name == "oor-metric-te-penalty" || name == "oor-node-protection-disable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::LspOutOfResource::LspOutOfResource()
    :
    lsp_oor_red_state(std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState>())
	,lsp_oor_yellow_state(std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState>())
{
    lsp_oor_red_state->parent = this;
    lsp_oor_yellow_state->parent = this;

    yang_name = "lsp-out-of-resource"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::LspOutOfResource::~LspOutOfResource()
{
}

bool MplsTe::GlobalAttributes::LspOutOfResource::has_data() const
{
    return (lsp_oor_red_state !=  nullptr && lsp_oor_red_state->has_data())
	|| (lsp_oor_yellow_state !=  nullptr && lsp_oor_yellow_state->has_data());
}

bool MplsTe::GlobalAttributes::LspOutOfResource::has_operation() const
{
    return is_set(yfilter)
	|| (lsp_oor_red_state !=  nullptr && lsp_oor_red_state->has_operation())
	|| (lsp_oor_yellow_state !=  nullptr && lsp_oor_yellow_state->has_operation());
}

std::string MplsTe::GlobalAttributes::LspOutOfResource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::LspOutOfResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-out-of-resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::LspOutOfResource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::LspOutOfResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-oor-red-state")
    {
        if(lsp_oor_red_state == nullptr)
        {
            lsp_oor_red_state = std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState>();
        }
        return lsp_oor_red_state;
    }

    if(child_yang_name == "lsp-oor-yellow-state")
    {
        if(lsp_oor_yellow_state == nullptr)
        {
            lsp_oor_yellow_state = std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState>();
        }
        return lsp_oor_yellow_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::LspOutOfResource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_oor_red_state != nullptr)
    {
        children["lsp-oor-red-state"] = lsp_oor_red_state;
    }

    if(lsp_oor_yellow_state != nullptr)
    {
        children["lsp-oor-yellow-state"] = lsp_oor_yellow_state;
    }

    return children;
}

void MplsTe::GlobalAttributes::LspOutOfResource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::LspOutOfResource::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::LspOutOfResource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-oor-red-state" || name == "lsp-oor-yellow-state")
        return true;
    return false;
}

MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::LspOorRedState()
    :
    all_transit_lsp_threshold{YType::int32, "all-transit-lsp-threshold"},
    unprotected_transit_lsp_threshold{YType::int32, "unprotected-transit-lsp-threshold"}
{

    yang_name = "lsp-oor-red-state"; yang_parent_name = "lsp-out-of-resource"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::~LspOorRedState()
{
}

bool MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::has_data() const
{
    return all_transit_lsp_threshold.is_set
	|| unprotected_transit_lsp_threshold.is_set;
}

bool MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_transit_lsp_threshold.yfilter)
	|| ydk::is_set(unprotected_transit_lsp_threshold.yfilter);
}

std::string MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/lsp-out-of-resource/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-oor-red-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_transit_lsp_threshold.is_set || is_set(all_transit_lsp_threshold.yfilter)) leaf_name_data.push_back(all_transit_lsp_threshold.get_name_leafdata());
    if (unprotected_transit_lsp_threshold.is_set || is_set(unprotected_transit_lsp_threshold.yfilter)) leaf_name_data.push_back(unprotected_transit_lsp_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-transit-lsp-threshold")
    {
        all_transit_lsp_threshold = value;
        all_transit_lsp_threshold.value_namespace = name_space;
        all_transit_lsp_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unprotected-transit-lsp-threshold")
    {
        unprotected_transit_lsp_threshold = value;
        unprotected_transit_lsp_threshold.value_namespace = name_space;
        unprotected_transit_lsp_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-transit-lsp-threshold")
    {
        all_transit_lsp_threshold.yfilter = yfilter;
    }
    if(value_path == "unprotected-transit-lsp-threshold")
    {
        unprotected_transit_lsp_threshold.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-transit-lsp-threshold" || name == "unprotected-transit-lsp-threshold")
        return true;
    return false;
}

MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::LspOorYellowState()
    :
    all_transit_lsp_threshold{YType::int32, "all-transit-lsp-threshold"},
    unprotected_transit_lsp_threshold{YType::int32, "unprotected-transit-lsp-threshold"}
{

    yang_name = "lsp-oor-yellow-state"; yang_parent_name = "lsp-out-of-resource"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::~LspOorYellowState()
{
}

bool MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::has_data() const
{
    return all_transit_lsp_threshold.is_set
	|| unprotected_transit_lsp_threshold.is_set;
}

bool MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_transit_lsp_threshold.yfilter)
	|| ydk::is_set(unprotected_transit_lsp_threshold.yfilter);
}

std::string MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/lsp-out-of-resource/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-oor-yellow-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_transit_lsp_threshold.is_set || is_set(all_transit_lsp_threshold.yfilter)) leaf_name_data.push_back(all_transit_lsp_threshold.get_name_leafdata());
    if (unprotected_transit_lsp_threshold.is_set || is_set(unprotected_transit_lsp_threshold.yfilter)) leaf_name_data.push_back(unprotected_transit_lsp_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-transit-lsp-threshold")
    {
        all_transit_lsp_threshold = value;
        all_transit_lsp_threshold.value_namespace = name_space;
        all_transit_lsp_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unprotected-transit-lsp-threshold")
    {
        unprotected_transit_lsp_threshold = value;
        unprotected_transit_lsp_threshold.value_namespace = name_space;
        unprotected_transit_lsp_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-transit-lsp-threshold")
    {
        all_transit_lsp_threshold.yfilter = yfilter;
    }
    if(value_path == "unprotected-transit-lsp-threshold")
    {
        unprotected_transit_lsp_threshold.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-transit-lsp-threshold" || name == "unprotected-transit-lsp-threshold")
        return true;
    return false;
}

MplsTe::GlobalAttributes::Mib::Mib()
    :
    midpoint_lsp_stats_collection_disable{YType::empty, "midpoint-lsp-stats-collection-disable"}
{

    yang_name = "mib"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::Mib::~Mib()
{
}

bool MplsTe::GlobalAttributes::Mib::has_data() const
{
    return midpoint_lsp_stats_collection_disable.is_set;
}

bool MplsTe::GlobalAttributes::Mib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(midpoint_lsp_stats_collection_disable.yfilter);
}

std::string MplsTe::GlobalAttributes::Mib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (midpoint_lsp_stats_collection_disable.is_set || is_set(midpoint_lsp_stats_collection_disable.yfilter)) leaf_name_data.push_back(midpoint_lsp_stats_collection_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "midpoint-lsp-stats-collection-disable")
    {
        midpoint_lsp_stats_collection_disable = value;
        midpoint_lsp_stats_collection_disable.value_namespace = name_space;
        midpoint_lsp_stats_collection_disable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "midpoint-lsp-stats-collection-disable")
    {
        midpoint_lsp_stats_collection_disable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "midpoint-lsp-stats-collection-disable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PathSelection::PathSelection()
    :
    cost_limit{YType::uint32, "cost-limit"},
    loose_domain_match{YType::boolean, "loose-domain-match"},
    metric{YType::enumeration, "metric"},
    tiebreaker{YType::enumeration, "tiebreaker"}
    	,
    ignore_overload_role(std::make_shared<MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole>())
	,invalidation(std::make_shared<MplsTe::GlobalAttributes::PathSelection::Invalidation>())
	,loose_affinities(std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseAffinities>())
	,loose_metrics(std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseMetrics>())
{
    ignore_overload_role->parent = this;
    invalidation->parent = this;
    loose_affinities->parent = this;
    loose_metrics->parent = this;

    yang_name = "path-selection"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::PathSelection::has_data() const
{
    return cost_limit.is_set
	|| loose_domain_match.is_set
	|| metric.is_set
	|| tiebreaker.is_set
	|| (ignore_overload_role !=  nullptr && ignore_overload_role->has_data())
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (loose_affinities !=  nullptr && loose_affinities->has_data())
	|| (loose_metrics !=  nullptr && loose_metrics->has_data());
}

bool MplsTe::GlobalAttributes::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(loose_domain_match.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| (ignore_overload_role !=  nullptr && ignore_overload_role->has_operation())
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (loose_affinities !=  nullptr && loose_affinities->has_operation())
	|| (loose_metrics !=  nullptr && loose_metrics->has_operation());
}

std::string MplsTe::GlobalAttributes::PathSelection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (loose_domain_match.is_set || is_set(loose_domain_match.yfilter)) leaf_name_data.push_back(loose_domain_match.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ignore-overload-role")
    {
        if(ignore_overload_role == nullptr)
        {
            ignore_overload_role = std::make_shared<MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole>();
        }
        return ignore_overload_role;
    }

    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<MplsTe::GlobalAttributes::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "loose-affinities")
    {
        if(loose_affinities == nullptr)
        {
            loose_affinities = std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseAffinities>();
        }
        return loose_affinities;
    }

    if(child_yang_name == "loose-metrics")
    {
        if(loose_metrics == nullptr)
        {
            loose_metrics = std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseMetrics>();
        }
        return loose_metrics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ignore_overload_role != nullptr)
    {
        children["ignore-overload-role"] = ignore_overload_role;
    }

    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    if(loose_affinities != nullptr)
    {
        children["loose-affinities"] = loose_affinities;
    }

    if(loose_metrics != nullptr)
    {
        children["loose-metrics"] = loose_metrics;
    }

    return children;
}

void MplsTe::GlobalAttributes::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loose-domain-match")
    {
        loose_domain_match = value;
        loose_domain_match.value_namespace = name_space;
        loose_domain_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "loose-domain-match")
    {
        loose_domain_match.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-overload-role" || name == "invalidation" || name == "loose-affinities" || name == "loose-metrics" || name == "cost-limit" || name == "loose-domain-match" || name == "metric" || name == "tiebreaker")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::IgnoreOverloadRole()
    :
    head{YType::boolean, "head"},
    mid{YType::boolean, "mid"},
    tail{YType::boolean, "tail"}
{

    yang_name = "ignore-overload-role"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::~IgnoreOverloadRole()
{
}

bool MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::has_data() const
{
    return head.is_set
	|| mid.is_set
	|| tail.is_set;
}

bool MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(head.yfilter)
	|| ydk::is_set(mid.yfilter)
	|| ydk::is_set(tail.yfilter);
}

std::string MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore-overload-role";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head.is_set || is_set(head.yfilter)) leaf_name_data.push_back(head.get_name_leafdata());
    if (mid.is_set || is_set(mid.yfilter)) leaf_name_data.push_back(mid.get_name_leafdata());
    if (tail.is_set || is_set(tail.yfilter)) leaf_name_data.push_back(tail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "head")
    {
        head = value;
        head.value_namespace = name_space;
        head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mid")
    {
        mid = value;
        mid.value_namespace = name_space;
        mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail")
    {
        tail = value;
        tail.value_namespace = name_space;
        tail.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "head")
    {
        head.yfilter = yfilter;
    }
    if(value_path == "mid")
    {
        mid.yfilter = yfilter;
    }
    if(value_path == "tail")
    {
        tail.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "mid" || name == "tail")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PathSelection::Invalidation::Invalidation()
    :
    path_invalidation_action{YType::enumeration, "path-invalidation-action"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"}
{

    yang_name = "invalidation"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PathSelection::Invalidation::~Invalidation()
{
}

bool MplsTe::GlobalAttributes::PathSelection::Invalidation::has_data() const
{
    return path_invalidation_action.is_set
	|| path_invalidation_timeout.is_set;
}

bool MplsTe::GlobalAttributes::PathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter);
}

std::string MplsTe::GlobalAttributes::PathSelection::Invalidation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::PathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-invalidation-action" || name == "path-invalidation-timeout")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinities()
{

    yang_name = "loose-affinities"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PathSelection::LooseAffinities::~LooseAffinities()
{
}

bool MplsTe::GlobalAttributes::PathSelection::LooseAffinities::has_data() const
{
    for (std::size_t index=0; index<loose_affinity.size(); index++)
    {
        if(loose_affinity[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::PathSelection::LooseAffinities::has_operation() const
{
    for (std::size_t index=0; index<loose_affinity.size(); index++)
    {
        if(loose_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseAffinities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseAffinities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loose-affinities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PathSelection::LooseAffinities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::LooseAffinities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loose-affinity")
    {
        for(auto const & c : loose_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity>();
        c->parent = this;
        loose_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PathSelection::LooseAffinities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : loose_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::PathSelection::LooseAffinities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::PathSelection::LooseAffinities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::PathSelection::LooseAffinities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loose-affinity")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::LooseAffinity()
    :
    class_type{YType::uint32, "class-type"},
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "loose-affinity"; yang_parent_name = "loose-affinities"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::~LooseAffinity()
{
}

bool MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::has_data() const
{
    return class_type.is_set
	|| affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/loose-affinities/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loose-affinity" <<"[class-type='" <<class_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type" || name == "affinity" || name == "mask")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetrics()
{

    yang_name = "loose-metrics"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PathSelection::LooseMetrics::~LooseMetrics()
{
}

bool MplsTe::GlobalAttributes::PathSelection::LooseMetrics::has_data() const
{
    for (std::size_t index=0; index<loose_metric.size(); index++)
    {
        if(loose_metric[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::PathSelection::LooseMetrics::has_operation() const
{
    for (std::size_t index=0; index<loose_metric.size(); index++)
    {
        if(loose_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseMetrics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loose-metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PathSelection::LooseMetrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::LooseMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loose-metric")
    {
        for(auto const & c : loose_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric>();
        c->parent = this;
        loose_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PathSelection::LooseMetrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : loose_metric)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::PathSelection::LooseMetrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::PathSelection::LooseMetrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::PathSelection::LooseMetrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loose-metric")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::LooseMetric()
    :
    class_type{YType::uint32, "class-type"},
    metric_type{YType::enumeration, "metric-type"}
{

    yang_name = "loose-metric"; yang_parent_name = "loose-metrics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::~LooseMetric()
{
}

bool MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::has_data() const
{
    return class_type.is_set
	|| metric_type.is_set;
}

bool MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(metric_type.yfilter);
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/loose-metrics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loose-metric" <<"[class-type='" <<class_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type" || name == "metric-type")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PceAttributes::PceAttributes()
    :
    address{YType::str, "address"},
    deadtimer{YType::uint32, "deadtimer"},
    keepalive{YType::uint32, "keepalive"},
    keepalive_tolerance{YType::uint32, "keepalive-tolerance"},
    keychain{YType::str, "keychain"},
    password{YType::str, "password"},
    peer_source_addr{YType::str, "peer-source-addr"},
    precedence{YType::uint32, "precedence"},
    reoptimize_period{YType::uint32, "reoptimize-period"},
    request_timeout{YType::uint32, "request-timeout"},
    segment_routing{YType::empty, "segment-routing"},
    speaker_entity_id{YType::str, "speaker-entity-id"}
    	,
    logging(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Logging>())
	,pce_stateful(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::PceStateful>())
	,peers(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Peers>())
	,timer(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Timer>())
{
    logging->parent = this;
    pce_stateful->parent = this;
    peers->parent = this;
    timer->parent = this;

    yang_name = "pce-attributes"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PceAttributes::~PceAttributes()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::has_data() const
{
    return address.is_set
	|| deadtimer.is_set
	|| keepalive.is_set
	|| keepalive_tolerance.is_set
	|| keychain.is_set
	|| password.is_set
	|| peer_source_addr.is_set
	|| precedence.is_set
	|| reoptimize_period.is_set
	|| request_timeout.is_set
	|| segment_routing.is_set
	|| speaker_entity_id.is_set
	|| (logging !=  nullptr && logging->has_data())
	|| (pce_stateful !=  nullptr && pce_stateful->has_data())
	|| (peers !=  nullptr && peers->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool MplsTe::GlobalAttributes::PceAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(deadtimer.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(keepalive_tolerance.yfilter)
	|| ydk::is_set(keychain.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(peer_source_addr.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(reoptimize_period.yfilter)
	|| ydk::is_set(request_timeout.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(speaker_entity_id.yfilter)
	|| (logging !=  nullptr && logging->has_operation())
	|| (pce_stateful !=  nullptr && pce_stateful->has_operation())
	|| (peers !=  nullptr && peers->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string MplsTe::GlobalAttributes::PceAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PceAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PceAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (deadtimer.is_set || is_set(deadtimer.yfilter)) leaf_name_data.push_back(deadtimer.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (keepalive_tolerance.is_set || is_set(keepalive_tolerance.yfilter)) leaf_name_data.push_back(keepalive_tolerance.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (peer_source_addr.is_set || is_set(peer_source_addr.yfilter)) leaf_name_data.push_back(peer_source_addr.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (reoptimize_period.is_set || is_set(reoptimize_period.yfilter)) leaf_name_data.push_back(reoptimize_period.get_name_leafdata());
    if (request_timeout.is_set || is_set(request_timeout.yfilter)) leaf_name_data.push_back(request_timeout.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (speaker_entity_id.is_set || is_set(speaker_entity_id.yfilter)) leaf_name_data.push_back(speaker_entity_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "pce-stateful")
    {
        if(pce_stateful == nullptr)
        {
            pce_stateful = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::PceStateful>();
        }
        return pce_stateful;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Peers>();
        }
        return peers;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PceAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(pce_stateful != nullptr)
    {
        children["pce-stateful"] = pce_stateful;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadtimer")
    {
        deadtimer = value;
        deadtimer.value_namespace = name_space;
        deadtimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-tolerance")
    {
        keepalive_tolerance = value;
        keepalive_tolerance.value_namespace = name_space;
        keepalive_tolerance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-source-addr")
    {
        peer_source_addr = value;
        peer_source_addr.value_namespace = name_space;
        peer_source_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-period")
    {
        reoptimize_period = value;
        reoptimize_period.value_namespace = name_space;
        reoptimize_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-timeout")
    {
        request_timeout = value;
        request_timeout.value_namespace = name_space;
        request_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speaker-entity-id")
    {
        speaker_entity_id = value;
        speaker_entity_id.value_namespace = name_space;
        speaker_entity_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PceAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "deadtimer")
    {
        deadtimer.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "keepalive-tolerance")
    {
        keepalive_tolerance.yfilter = yfilter;
    }
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "peer-source-addr")
    {
        peer_source_addr.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "reoptimize-period")
    {
        reoptimize_period.yfilter = yfilter;
    }
    if(value_path == "request-timeout")
    {
        request_timeout.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "speaker-entity-id")
    {
        speaker_entity_id.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PceAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "pce-stateful" || name == "peers" || name == "timer" || name == "address" || name == "deadtimer" || name == "keepalive" || name == "keepalive-tolerance" || name == "keychain" || name == "password" || name == "peer-source-addr" || name == "precedence" || name == "reoptimize-period" || name == "request-timeout" || name == "segment-routing" || name == "speaker-entity-id")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PceAttributes::Logging::Logging()
    :
    events(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Logging::Events>())
{
    events->parent = this;

    yang_name = "logging"; yang_parent_name = "pce-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PceAttributes::Logging::~Logging()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Logging::has_data() const
{
    return (events !=  nullptr && events->has_data());
}

bool MplsTe::GlobalAttributes::PceAttributes::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (events !=  nullptr && events->has_operation());
}

std::string MplsTe::GlobalAttributes::PceAttributes::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PceAttributes::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PceAttributes::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events")
    {
        if(events == nullptr)
        {
            events = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Logging::Events>();
        }
        return events;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PceAttributes::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events != nullptr)
    {
        children["events"] = events;
    }

    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::PceAttributes::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PceAttributes::Logging::Events::Events()
    :
    peer_status{YType::empty, "peer-status"}
{

    yang_name = "events"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PceAttributes::Logging::Events::~Events()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Logging::Events::has_data() const
{
    return peer_status.is_set;
}

bool MplsTe::GlobalAttributes::PceAttributes::Logging::Events::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_status.yfilter);
}

std::string MplsTe::GlobalAttributes::PceAttributes::Logging::Events::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PceAttributes::Logging::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PceAttributes::Logging::Events::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_status.is_set || is_set(peer_status.yfilter)) leaf_name_data.push_back(peer_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::Logging::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PceAttributes::Logging::Events::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::Logging::Events::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-status")
    {
        peer_status = value;
        peer_status.value_namespace = name_space;
        peer_status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PceAttributes::Logging::Events::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-status")
    {
        peer_status.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PceAttributes::Logging::Events::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-status")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PceAttributes::PceStateful::PceStateful()
    :
    cisco_extension{YType::empty, "cisco-extension"},
    delegation{YType::empty, "delegation"},
    enable{YType::empty, "enable"},
    fast_repair{YType::empty, "fast-repair"},
    instantiation{YType::empty, "instantiation"},
    report{YType::empty, "report"}
    	,
    stateful_timers(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers>())
{
    stateful_timers->parent = this;

    yang_name = "pce-stateful"; yang_parent_name = "pce-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PceAttributes::PceStateful::~PceStateful()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::PceStateful::has_data() const
{
    return cisco_extension.is_set
	|| delegation.is_set
	|| enable.is_set
	|| fast_repair.is_set
	|| instantiation.is_set
	|| report.is_set
	|| (stateful_timers !=  nullptr && stateful_timers->has_data());
}

bool MplsTe::GlobalAttributes::PceAttributes::PceStateful::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco_extension.yfilter)
	|| ydk::is_set(delegation.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(fast_repair.yfilter)
	|| ydk::is_set(instantiation.yfilter)
	|| ydk::is_set(report.yfilter)
	|| (stateful_timers !=  nullptr && stateful_timers->has_operation());
}

std::string MplsTe::GlobalAttributes::PceAttributes::PceStateful::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PceAttributes::PceStateful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-stateful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PceAttributes::PceStateful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco_extension.is_set || is_set(cisco_extension.yfilter)) leaf_name_data.push_back(cisco_extension.get_name_leafdata());
    if (delegation.is_set || is_set(delegation.yfilter)) leaf_name_data.push_back(delegation.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (fast_repair.is_set || is_set(fast_repair.yfilter)) leaf_name_data.push_back(fast_repair.get_name_leafdata());
    if (instantiation.is_set || is_set(instantiation.yfilter)) leaf_name_data.push_back(instantiation.get_name_leafdata());
    if (report.is_set || is_set(report.yfilter)) leaf_name_data.push_back(report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::PceStateful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stateful-timers")
    {
        if(stateful_timers == nullptr)
        {
            stateful_timers = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers>();
        }
        return stateful_timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PceAttributes::PceStateful::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stateful_timers != nullptr)
    {
        children["stateful-timers"] = stateful_timers;
    }

    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::PceStateful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco-extension")
    {
        cisco_extension = value;
        cisco_extension.value_namespace = name_space;
        cisco_extension.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegation")
    {
        delegation = value;
        delegation.value_namespace = name_space;
        delegation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-repair")
    {
        fast_repair = value;
        fast_repair.value_namespace = name_space;
        fast_repair.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instantiation")
    {
        instantiation = value;
        instantiation.value_namespace = name_space;
        instantiation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report")
    {
        report = value;
        report.value_namespace = name_space;
        report.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PceAttributes::PceStateful::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco-extension")
    {
        cisco_extension.yfilter = yfilter;
    }
    if(value_path == "delegation")
    {
        delegation.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "fast-repair")
    {
        fast_repair.yfilter = yfilter;
    }
    if(value_path == "instantiation")
    {
        instantiation.yfilter = yfilter;
    }
    if(value_path == "report")
    {
        report.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PceAttributes::PceStateful::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stateful-timers" || name == "cisco-extension" || name == "delegation" || name == "enable" || name == "fast-repair" || name == "instantiation" || name == "report")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::StatefulTimers()
    :
    redelegation_timeout{YType::uint32, "redelegation-timeout"},
    state_timeout{YType::uint32, "state-timeout"}
{

    yang_name = "stateful-timers"; yang_parent_name = "pce-stateful"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::~StatefulTimers()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::has_data() const
{
    return redelegation_timeout.is_set
	|| state_timeout.is_set;
}

bool MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redelegation_timeout.yfilter)
	|| ydk::is_set(state_timeout.yfilter);
}

std::string MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/pce-stateful/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stateful-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redelegation_timeout.is_set || is_set(redelegation_timeout.yfilter)) leaf_name_data.push_back(redelegation_timeout.get_name_leafdata());
    if (state_timeout.is_set || is_set(state_timeout.yfilter)) leaf_name_data.push_back(state_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redelegation-timeout")
    {
        redelegation_timeout = value;
        redelegation_timeout.value_namespace = name_space;
        redelegation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-timeout")
    {
        state_timeout = value;
        state_timeout.value_namespace = name_space;
        state_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redelegation-timeout")
    {
        redelegation_timeout.yfilter = yfilter;
    }
    if(value_path == "state-timeout")
    {
        state_timeout.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redelegation-timeout" || name == "state-timeout")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PceAttributes::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "pce-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PceAttributes::Peers::~Peers()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::PceAttributes::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::PceAttributes::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PceAttributes::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PceAttributes::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PceAttributes::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::PceAttributes::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::Peer()
    :
    pce_peer_address{YType::str, "pce-peer-address"},
    enable{YType::empty, "enable"},
    keychain{YType::str, "keychain"},
    password{YType::str, "password"},
    precedence{YType::uint32, "precedence"}
{

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::~Peer()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::has_data() const
{
    return pce_peer_address.is_set
	|| enable.is_set
	|| keychain.is_set
	|| password.is_set
	|| precedence.is_set;
}

bool MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_peer_address.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(keychain.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[pce-peer-address='" <<pce_peer_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_peer_address.is_set || is_set(pce_peer_address.yfilter)) leaf_name_data.push_back(pce_peer_address.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-peer-address")
    {
        pce_peer_address = value;
        pce_peer_address.value_namespace = name_space;
        pce_peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-peer-address")
    {
        pce_peer_address.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-peer-address" || name == "enable" || name == "keychain" || name == "password" || name == "precedence")
        return true;
    return false;
}

MplsTe::GlobalAttributes::PceAttributes::Timer::Timer()
{

    yang_name = "timer"; yang_parent_name = "pce-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::PceAttributes::Timer::~Timer()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Timer::has_data() const
{
    return false;
}

bool MplsTe::GlobalAttributes::PceAttributes::Timer::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::PceAttributes::Timer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::PceAttributes::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::PceAttributes::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::PceAttributes::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::PceAttributes::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsTe::GlobalAttributes::Queues::Queues()
{

    yang_name = "queues"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::Queues::~Queues()
{
}

bool MplsTe::GlobalAttributes::Queues::has_data() const
{
    for (std::size_t index=0; index<queue.size(); index++)
    {
        if(queue[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::Queues::has_operation() const
{
    for (std::size_t index=0; index<queue.size(); index++)
    {
        if(queue[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::Queues::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::Queues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queues";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::Queues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Queues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        for(auto const & c : queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::Queues::Queue>();
        c->parent = this;
        queue.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::Queues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : queue)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::Queues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::Queues::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::Queues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue")
        return true;
    return false;
}

MplsTe::GlobalAttributes::Queues::Queue::Queue()
    :
    role{YType::enumeration, "role"},
    value_{YType::uint32, "value"}
{

    yang_name = "queue"; yang_parent_name = "queues"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::Queues::Queue::~Queue()
{
}

bool MplsTe::GlobalAttributes::Queues::Queue::has_data() const
{
    return role.is_set
	|| value_.is_set;
}

bool MplsTe::GlobalAttributes::Queues::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string MplsTe::GlobalAttributes::Queues::Queue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/queues/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::Queues::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue" <<"[role='" <<role <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::Queues::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Queues::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::Queues::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::Queues::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::Queues::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::Queues::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "role" || name == "value")
        return true;
    return false;
}

MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterIds()
{

    yang_name = "secondary-router-ids"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::SecondaryRouterIds::~SecondaryRouterIds()
{
}

bool MplsTe::GlobalAttributes::SecondaryRouterIds::has_data() const
{
    for (std::size_t index=0; index<secondary_router_id.size(); index++)
    {
        if(secondary_router_id[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::SecondaryRouterIds::has_operation() const
{
    for (std::size_t index=0; index<secondary_router_id.size(); index++)
    {
        if(secondary_router_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::SecondaryRouterIds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::SecondaryRouterIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-router-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::SecondaryRouterIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::SecondaryRouterIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-router-id")
    {
        for(auto const & c : secondary_router_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId>();
        c->parent = this;
        secondary_router_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::SecondaryRouterIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : secondary_router_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::SecondaryRouterIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::SecondaryRouterIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::SecondaryRouterIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-router-id")
        return true;
    return false;
}

MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::SecondaryRouterId()
    :
    secondary_router_id_value{YType::str, "secondary-router-id-value"}
{

    yang_name = "secondary-router-id"; yang_parent_name = "secondary-router-ids"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::~SecondaryRouterId()
{
}

bool MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::has_data() const
{
    return secondary_router_id_value.is_set;
}

bool MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secondary_router_id_value.yfilter);
}

std::string MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/secondary-router-ids/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-router-id" <<"[secondary-router-id-value='" <<secondary_router_id_value <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary_router_id_value.is_set || is_set(secondary_router_id_value.yfilter)) leaf_name_data.push_back(secondary_router_id_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secondary-router-id-value")
    {
        secondary_router_id_value = value;
        secondary_router_id_value.value_namespace = name_space;
        secondary_router_id_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secondary-router-id-value")
    {
        secondary_router_id_value.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-router-id-value")
        return true;
    return false;
}

MplsTe::GlobalAttributes::SoftPreemption::SoftPreemption()
    :
    enable{YType::boolean, "enable"},
    frr_rewrite{YType::empty, "frr-rewrite"},
    timeout{YType::uint32, "timeout"}
{

    yang_name = "soft-preemption"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::SoftPreemption::~SoftPreemption()
{
}

bool MplsTe::GlobalAttributes::SoftPreemption::has_data() const
{
    return enable.is_set
	|| frr_rewrite.is_set
	|| timeout.is_set;
}

bool MplsTe::GlobalAttributes::SoftPreemption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(frr_rewrite.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string MplsTe::GlobalAttributes::SoftPreemption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::SoftPreemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (frr_rewrite.is_set || is_set(frr_rewrite.yfilter)) leaf_name_data.push_back(frr_rewrite.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::SoftPreemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-rewrite")
    {
        frr_rewrite = value;
        frr_rewrite.value_namespace = name_space;
        frr_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::SoftPreemption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "frr-rewrite")
    {
        frr_rewrite.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::SoftPreemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "frr-rewrite" || name == "timeout")
        return true;
    return false;
}

MplsTe::GlobalAttributes::Srlg::Srlg()
    :
    default_admin_weight{YType::int32, "default-admin-weight"},
    enable{YType::empty, "enable"}
    	,
    names(std::make_shared<MplsTe::GlobalAttributes::Srlg::Names>())
{
    names->parent = this;

    yang_name = "srlg"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::Srlg::~Srlg()
{
}

bool MplsTe::GlobalAttributes::Srlg::has_data() const
{
    return default_admin_weight.is_set
	|| enable.is_set
	|| (names !=  nullptr && names->has_data());
}

bool MplsTe::GlobalAttributes::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_admin_weight.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (names !=  nullptr && names->has_operation());
}

std::string MplsTe::GlobalAttributes::Srlg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_admin_weight.is_set || is_set(default_admin_weight.yfilter)) leaf_name_data.push_back(default_admin_weight.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "names")
    {
        if(names == nullptr)
        {
            names = std::make_shared<MplsTe::GlobalAttributes::Srlg::Names>();
        }
        return names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(names != nullptr)
    {
        children["names"] = names;
    }

    return children;
}

void MplsTe::GlobalAttributes::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-admin-weight")
    {
        default_admin_weight = value;
        default_admin_weight.value_namespace = name_space;
        default_admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-admin-weight")
    {
        default_admin_weight.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "names" || name == "default-admin-weight" || name == "enable")
        return true;
    return false;
}

MplsTe::GlobalAttributes::Srlg::Names::Names()
{

    yang_name = "names"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::Srlg::Names::~Names()
{
}

bool MplsTe::GlobalAttributes::Srlg::Names::has_data() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::Srlg::Names::has_operation() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::Srlg::Names::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/srlg/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::Srlg::Names::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::Srlg::Names::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::Names::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::Srlg::Names::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::Srlg::Names::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::Srlg::Names::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::Srlg::Names::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::Srlg::Names::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

MplsTe::GlobalAttributes::Srlg::Names::Name::Name()
    :
    srlg_name{YType::str, "srlg-name"},
    admin_weight{YType::int32, "admin-weight"}
    	,
    static_srlg_members(std::make_shared<MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers>())
{
    static_srlg_members->parent = this;

    yang_name = "name"; yang_parent_name = "names"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GlobalAttributes::Srlg::Names::Name::~Name()
{
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::has_data() const
{
    return srlg_name.is_set
	|| admin_weight.is_set
	|| (static_srlg_members !=  nullptr && static_srlg_members->has_data());
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| (static_srlg_members !=  nullptr && static_srlg_members->has_operation());
}

std::string MplsTe::GlobalAttributes::Srlg::Names::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/srlg/names/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GlobalAttributes::Srlg::Names::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[srlg-name='" <<srlg_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::Srlg::Names::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::Names::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-srlg-members")
    {
        if(static_srlg_members == nullptr)
        {
            static_srlg_members = std::make_shared<MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers>();
        }
        return static_srlg_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::Srlg::Names::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(static_srlg_members != nullptr)
    {
        children["static-srlg-members"] = static_srlg_members;
    }

    return children;
}

void MplsTe::GlobalAttributes::Srlg::Names::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::Srlg::Names::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-srlg-members" || name == "srlg-name" || name == "admin-weight")
        return true;
    return false;
}

MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMembers()
{

    yang_name = "static-srlg-members"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::~StaticSrlgMembers()
{
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::has_data() const
{
    for (std::size_t index=0; index<static_srlg_member.size(); index++)
    {
        if(static_srlg_member[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::has_operation() const
{
    for (std::size_t index=0; index<static_srlg_member.size(); index++)
    {
        if(static_srlg_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-srlg-members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-srlg-member")
    {
        for(auto const & c : static_srlg_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember>();
        c->parent = this;
        static_srlg_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : static_srlg_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-srlg-member")
        return true;
    return false;
}

MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::StaticSrlgMember()
    :
    from_address{YType::str, "from-address"},
    to_address{YType::str, "to-address"}
{

    yang_name = "static-srlg-member"; yang_parent_name = "static-srlg-members"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::~StaticSrlgMember()
{
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::has_data() const
{
    return from_address.is_set
	|| to_address.is_set;
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from_address.yfilter)
	|| ydk::is_set(to_address.yfilter);
}

std::string MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-srlg-member" <<"[from-address='" <<from_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from_address.is_set || is_set(from_address.yfilter)) leaf_name_data.push_back(from_address.get_name_leafdata());
    if (to_address.is_set || is_set(to_address.yfilter)) leaf_name_data.push_back(to_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from-address")
    {
        from_address = value;
        from_address.value_namespace = name_space;
        from_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-address")
    {
        to_address = value;
        to_address.value_namespace = name_space;
        to_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from-address")
    {
        from_address.yfilter = yfilter;
    }
    if(value_path == "to-address")
    {
        to_address.yfilter = yfilter;
    }
}

bool MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from-address" || name == "to-address")
        return true;
    return false;
}

MplsTe::GmplsNni::GmplsNni()
    :
    enable_gmpls_nni{YType::empty, "enable-gmpls-nni"},
    path_selection_metric{YType::enumeration, "path-selection-metric"}
    	,
    topology_instances(std::make_shared<MplsTe::GmplsNni::TopologyInstances>())
	,tunnel_heads(std::make_shared<MplsTe::GmplsNni::TunnelHeads>())
{
    topology_instances->parent = this;
    tunnel_heads->parent = this;

    yang_name = "gmpls-nni"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GmplsNni::~GmplsNni()
{
}

bool MplsTe::GmplsNni::has_data() const
{
    return enable_gmpls_nni.is_set
	|| path_selection_metric.is_set
	|| (topology_instances !=  nullptr && topology_instances->has_data())
	|| (tunnel_heads !=  nullptr && tunnel_heads->has_data());
}

bool MplsTe::GmplsNni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_gmpls_nni.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| (topology_instances !=  nullptr && topology_instances->has_operation())
	|| (tunnel_heads !=  nullptr && tunnel_heads->has_operation());
}

std::string MplsTe::GmplsNni::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsNni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-nni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_gmpls_nni.is_set || is_set(enable_gmpls_nni.yfilter)) leaf_name_data.push_back(enable_gmpls_nni.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-instances")
    {
        if(topology_instances == nullptr)
        {
            topology_instances = std::make_shared<MplsTe::GmplsNni::TopologyInstances>();
        }
        return topology_instances;
    }

    if(child_yang_name == "tunnel-heads")
    {
        if(tunnel_heads == nullptr)
        {
            tunnel_heads = std::make_shared<MplsTe::GmplsNni::TunnelHeads>();
        }
        return tunnel_heads;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(topology_instances != nullptr)
    {
        children["topology-instances"] = topology_instances;
    }

    if(tunnel_heads != nullptr)
    {
        children["tunnel-heads"] = tunnel_heads;
    }

    return children;
}

void MplsTe::GmplsNni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-gmpls-nni")
    {
        enable_gmpls_nni = value;
        enable_gmpls_nni.value_namespace = name_space;
        enable_gmpls_nni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-gmpls-nni")
    {
        enable_gmpls_nni.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-instances" || name == "tunnel-heads" || name == "enable-gmpls-nni" || name == "path-selection-metric")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstances()
{

    yang_name = "topology-instances"; yang_parent_name = "gmpls-nni"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GmplsNni::TopologyInstances::~TopologyInstances()
{
}

bool MplsTe::GmplsNni::TopologyInstances::has_data() const
{
    for (std::size_t index=0; index<topology_instance.size(); index++)
    {
        if(topology_instance[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsNni::TopologyInstances::has_operation() const
{
    for (std::size_t index=0; index<topology_instance.size(); index++)
    {
        if(topology_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GmplsNni::TopologyInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-nni/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsNni::TopologyInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-instance")
    {
        for(auto const & c : topology_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance>();
        c->parent = this;
        topology_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsNni::TopologyInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsNni::TopologyInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-instance")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::TopologyInstance()
    :
    ospf_area_type{YType::enumeration, "ospf-area-type"},
    igp_instance_name{YType::str, "igp-instance-name"},
    igp_type{YType::enumeration, "igp-type"}
{

    yang_name = "topology-instance"; yang_parent_name = "topology-instances"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::~TopologyInstance()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::has_data() const
{
    for (std::size_t index=0; index<ospf_int.size(); index++)
    {
        if(ospf_int[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfip_addr.size(); index++)
    {
        if(ospfip_addr[index]->has_data())
            return true;
    }
    return ospf_area_type.is_set
	|| igp_instance_name.is_set
	|| igp_type.is_set;
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::has_operation() const
{
    for (std::size_t index=0; index<ospf_int.size(); index++)
    {
        if(ospf_int[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfip_addr.size(); index++)
    {
        if(ospfip_addr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ospf_area_type.yfilter)
	|| ydk::is_set(igp_instance_name.yfilter)
	|| ydk::is_set(igp_type.yfilter);
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-nni/topology-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-instance" <<"[ospf-area-type='" <<ospf_area_type <<"']" <<"[igp-instance-name='" <<igp_instance_name <<"']" <<"[igp-type='" <<igp_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospf_area_type.is_set || is_set(ospf_area_type.yfilter)) leaf_name_data.push_back(ospf_area_type.get_name_leafdata());
    if (igp_instance_name.is_set || is_set(igp_instance_name.yfilter)) leaf_name_data.push_back(igp_instance_name.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-int")
    {
        for(auto const & c : ospf_int)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt>();
        c->parent = this;
        ospf_int.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfip-addr")
    {
        for(auto const & c : ospfip_addr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr>();
        c->parent = this;
        ospfip_addr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospf_int)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfip_addr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospf-area-type")
    {
        ospf_area_type = value;
        ospf_area_type.value_namespace = name_space;
        ospf_area_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance-name")
    {
        igp_instance_name = value;
        igp_instance_name.value_namespace = name_space;
        igp_instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospf-area-type")
    {
        ospf_area_type.yfilter = yfilter;
    }
    if(value_path == "igp-instance-name")
    {
        igp_instance_name.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-int" || name == "ospfip-addr" || name == "ospf-area-type" || name == "igp-instance-name" || name == "igp-type")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::OspfInt()
    :
    igp_area{YType::int32, "igp-area"}
    	,
    controllers(std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers>())
{
    controllers->parent = this;

    yang_name = "ospf-int"; yang_parent_name = "topology-instance"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::~OspfInt()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::has_data() const
{
    return igp_area.is_set
	|| (controllers !=  nullptr && controllers->has_data());
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| (controllers !=  nullptr && controllers->has_operation());
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-int" <<"[igp-area='" <<igp_area <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllers")
    {
        if(controllers == nullptr)
        {
            controllers = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers>();
        }
        return controllers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(controllers != nullptr)
    {
        children["controllers"] = controllers;
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllers" || name == "igp-area")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controllers()
{

    yang_name = "controllers"; yang_parent_name = "ospf-int"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::~Controllers()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        for(auto const & c : controller)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller>();
        c->parent = this;
        controller.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : controller)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"},
    admin_weight{YType::uint32, "admin-weight"},
    delay{YType::uint32, "delay"},
    enable{YType::empty, "enable"}
    	,
    tti_mode(std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode>())
{
    tti_mode->parent = this;

    yang_name = "controller"; yang_parent_name = "controllers"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::~Controller()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::has_data() const
{
    return controller_name.is_set
	|| admin_weight.is_set
	|| delay.is_set
	|| enable.is_set
	|| (tti_mode !=  nullptr && tti_mode->has_data());
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (tti_mode !=  nullptr && tti_mode->has_operation());
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[controller-name='" <<controller_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tti-mode")
    {
        if(tti_mode == nullptr)
        {
            tti_mode = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode>();
        }
        return tti_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tti_mode != nullptr)
    {
        children["tti-mode"] = tti_mode;
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tti-mode" || name == "controller-name" || name == "admin-weight" || name == "delay" || name == "enable")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::TtiMode()
    :
    tcmid{YType::uint32, "tcmid"},
    tti_mode_type{YType::enumeration, "tti-mode-type"}
{

    yang_name = "tti-mode"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::~TtiMode()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::has_data() const
{
    return tcmid.is_set
	|| tti_mode_type.is_set;
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcmid.yfilter)
	|| ydk::is_set(tti_mode_type.yfilter);
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tti-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcmid.is_set || is_set(tcmid.yfilter)) leaf_name_data.push_back(tcmid.get_name_leafdata());
    if (tti_mode_type.is_set || is_set(tti_mode_type.yfilter)) leaf_name_data.push_back(tti_mode_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcmid")
    {
        tcmid = value;
        tcmid.value_namespace = name_space;
        tcmid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tti-mode-type")
    {
        tti_mode_type = value;
        tti_mode_type.value_namespace = name_space;
        tti_mode_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcmid")
    {
        tcmid.yfilter = yfilter;
    }
    if(value_path == "tti-mode-type")
    {
        tti_mode_type.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcmid" || name == "tti-mode-type")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::OspfipAddr()
    :
    address{YType::str, "address"}
    	,
    controllers(std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers>())
{
    controllers->parent = this;

    yang_name = "ospfip-addr"; yang_parent_name = "topology-instance"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::~OspfipAddr()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::has_data() const
{
    return address.is_set
	|| (controllers !=  nullptr && controllers->has_data());
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (controllers !=  nullptr && controllers->has_operation());
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfip-addr" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllers")
    {
        if(controllers == nullptr)
        {
            controllers = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers>();
        }
        return controllers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(controllers != nullptr)
    {
        children["controllers"] = controllers;
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllers" || name == "address")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controllers()
{

    yang_name = "controllers"; yang_parent_name = "ospfip-addr"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::~Controllers()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        for(auto const & c : controller)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller>();
        c->parent = this;
        controller.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : controller)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"},
    admin_weight{YType::uint32, "admin-weight"},
    delay{YType::uint32, "delay"},
    enable{YType::empty, "enable"}
    	,
    tti_mode(std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode>())
{
    tti_mode->parent = this;

    yang_name = "controller"; yang_parent_name = "controllers"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::~Controller()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::has_data() const
{
    return controller_name.is_set
	|| admin_weight.is_set
	|| delay.is_set
	|| enable.is_set
	|| (tti_mode !=  nullptr && tti_mode->has_data());
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (tti_mode !=  nullptr && tti_mode->has_operation());
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[controller-name='" <<controller_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tti-mode")
    {
        if(tti_mode == nullptr)
        {
            tti_mode = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode>();
        }
        return tti_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tti_mode != nullptr)
    {
        children["tti-mode"] = tti_mode;
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tti-mode" || name == "controller-name" || name == "admin-weight" || name == "delay" || name == "enable")
        return true;
    return false;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::TtiMode()
    :
    tcmid{YType::uint32, "tcmid"},
    tti_mode_type{YType::enumeration, "tti-mode-type"}
{

    yang_name = "tti-mode"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::~TtiMode()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::has_data() const
{
    return tcmid.is_set
	|| tti_mode_type.is_set;
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcmid.yfilter)
	|| ydk::is_set(tti_mode_type.yfilter);
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tti-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcmid.is_set || is_set(tcmid.yfilter)) leaf_name_data.push_back(tcmid.get_name_leafdata());
    if (tti_mode_type.is_set || is_set(tti_mode_type.yfilter)) leaf_name_data.push_back(tti_mode_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcmid")
    {
        tcmid = value;
        tcmid.value_namespace = name_space;
        tcmid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tti-mode-type")
    {
        tti_mode_type = value;
        tti_mode_type.value_namespace = name_space;
        tti_mode_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcmid")
    {
        tcmid.yfilter = yfilter;
    }
    if(value_path == "tti-mode-type")
    {
        tti_mode_type.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcmid" || name == "tti-mode-type")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHeads()
{

    yang_name = "tunnel-heads"; yang_parent_name = "gmpls-nni"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GmplsNni::TunnelHeads::~TunnelHeads()
{
}

bool MplsTe::GmplsNni::TunnelHeads::has_data() const
{
    for (std::size_t index=0; index<tunnel_head.size(); index++)
    {
        if(tunnel_head[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsNni::TunnelHeads::has_operation() const
{
    for (std::size_t index=0; index<tunnel_head.size(); index++)
    {
        if(tunnel_head[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-nni/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsNni::TunnelHeads::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-heads";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-head")
    {
        for(auto const & c : tunnel_head)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead>();
        c->parent = this;
        tunnel_head.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel_head)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GmplsNni::TunnelHeads::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsNni::TunnelHeads::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsNni::TunnelHeads::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-head")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::TunnelHead()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    current_lsp_shutdown{YType::empty, "current-lsp-shutdown"},
    enable{YType::empty, "enable"},
    path_protection_attribute_set_profile{YType::str, "path-protection-attribute-set-profile"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    payload{YType::enumeration, "payload"},
    record_route{YType::empty, "record-route"},
    restore_lsp_shutdown{YType::empty, "restore-lsp-shutdown"},
    shutdown{YType::empty, "shutdown"},
    signalled_name{YType::str, "signalled-name"},
    standby_lsp_shutdown{YType::empty, "standby-lsp-shutdown"}
    	,
    destination(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination>())
	,logging(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging>())
	,path_options(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions>())
	,protection_switching(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching>())
	,signalled_bandwidth(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth>())
	,static_uni(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni>())
{
    destination->parent = this;
    logging->parent = this;
    path_options->parent = this;
    protection_switching->parent = this;
    signalled_bandwidth->parent = this;
    static_uni->parent = this;

    yang_name = "tunnel-head"; yang_parent_name = "tunnel-heads"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::~TunnelHead()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::has_data() const
{
    return tunnel_id.is_set
	|| current_lsp_shutdown.is_set
	|| enable.is_set
	|| path_protection_attribute_set_profile.is_set
	|| path_selection_metric.is_set
	|| payload.is_set
	|| record_route.is_set
	|| restore_lsp_shutdown.is_set
	|| shutdown.is_set
	|| signalled_name.is_set
	|| standby_lsp_shutdown.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (path_options !=  nullptr && path_options->has_data())
	|| (protection_switching !=  nullptr && protection_switching->has_data())
	|| (signalled_bandwidth !=  nullptr && signalled_bandwidth->has_data())
	|| (static_uni !=  nullptr && static_uni->has_data());
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(current_lsp_shutdown.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(path_protection_attribute_set_profile.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(payload.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(restore_lsp_shutdown.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(signalled_name.yfilter)
	|| ydk::is_set(standby_lsp_shutdown.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (path_options !=  nullptr && path_options->has_operation())
	|| (protection_switching !=  nullptr && protection_switching->has_operation())
	|| (signalled_bandwidth !=  nullptr && signalled_bandwidth->has_operation())
	|| (static_uni !=  nullptr && static_uni->has_operation());
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-nni/tunnel-heads/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-head" <<"[tunnel-id='" <<tunnel_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (current_lsp_shutdown.is_set || is_set(current_lsp_shutdown.yfilter)) leaf_name_data.push_back(current_lsp_shutdown.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (path_protection_attribute_set_profile.is_set || is_set(path_protection_attribute_set_profile.yfilter)) leaf_name_data.push_back(path_protection_attribute_set_profile.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (payload.is_set || is_set(payload.yfilter)) leaf_name_data.push_back(payload.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (restore_lsp_shutdown.is_set || is_set(restore_lsp_shutdown.yfilter)) leaf_name_data.push_back(restore_lsp_shutdown.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (signalled_name.is_set || is_set(signalled_name.yfilter)) leaf_name_data.push_back(signalled_name.get_name_leafdata());
    if (standby_lsp_shutdown.is_set || is_set(standby_lsp_shutdown.yfilter)) leaf_name_data.push_back(standby_lsp_shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "path-options")
    {
        if(path_options == nullptr)
        {
            path_options = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions>();
        }
        return path_options;
    }

    if(child_yang_name == "protection-switching")
    {
        if(protection_switching == nullptr)
        {
            protection_switching = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching>();
        }
        return protection_switching;
    }

    if(child_yang_name == "signalled-bandwidth")
    {
        if(signalled_bandwidth == nullptr)
        {
            signalled_bandwidth = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth>();
        }
        return signalled_bandwidth;
    }

    if(child_yang_name == "static-uni")
    {
        if(static_uni == nullptr)
        {
            static_uni = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni>();
        }
        return static_uni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(path_options != nullptr)
    {
        children["path-options"] = path_options;
    }

    if(protection_switching != nullptr)
    {
        children["protection-switching"] = protection_switching;
    }

    if(signalled_bandwidth != nullptr)
    {
        children["signalled-bandwidth"] = signalled_bandwidth;
    }

    if(static_uni != nullptr)
    {
        children["static-uni"] = static_uni;
    }

    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-lsp-shutdown")
    {
        current_lsp_shutdown = value;
        current_lsp_shutdown.value_namespace = name_space;
        current_lsp_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-attribute-set-profile")
    {
        path_protection_attribute_set_profile = value;
        path_protection_attribute_set_profile.value_namespace = name_space;
        path_protection_attribute_set_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload")
    {
        payload = value;
        payload.value_namespace = name_space;
        payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restore-lsp-shutdown")
    {
        restore_lsp_shutdown = value;
        restore_lsp_shutdown.value_namespace = name_space;
        restore_lsp_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-name")
    {
        signalled_name = value;
        signalled_name.value_namespace = name_space;
        signalled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-lsp-shutdown")
    {
        standby_lsp_shutdown = value;
        standby_lsp_shutdown.value_namespace = name_space;
        standby_lsp_shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "current-lsp-shutdown")
    {
        current_lsp_shutdown.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "path-protection-attribute-set-profile")
    {
        path_protection_attribute_set_profile.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "payload")
    {
        payload.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "restore-lsp-shutdown")
    {
        restore_lsp_shutdown.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "signalled-name")
    {
        signalled_name.yfilter = yfilter;
    }
    if(value_path == "standby-lsp-shutdown")
    {
        standby_lsp_shutdown.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "logging" || name == "path-options" || name == "protection-switching" || name == "signalled-bandwidth" || name == "static-uni" || name == "tunnel-id" || name == "current-lsp-shutdown" || name == "enable" || name == "path-protection-attribute-set-profile" || name == "path-selection-metric" || name == "payload" || name == "record-route" || name == "restore-lsp-shutdown" || name == "shutdown" || name == "signalled-name" || name == "standby-lsp-shutdown")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::Destination()
    :
    destination{YType::str, "destination"},
    destination_type{YType::enumeration, "destination-type"},
    interface_if_index{YType::int32, "interface-if-index"}
{

    yang_name = "destination"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::~Destination()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::has_data() const
{
    return destination.is_set
	|| destination_type.is_set
	|| interface_if_index.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(destination_type.yfilter)
	|| ydk::is_set(interface_if_index.yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (destination_type.is_set || is_set(destination_type.yfilter)) leaf_name_data.push_back(destination_type.get_name_leafdata());
    if (interface_if_index.is_set || is_set(interface_if_index.yfilter)) leaf_name_data.push_back(interface_if_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-type")
    {
        destination_type = value;
        destination_type.value_namespace = name_space;
        destination_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-if-index")
    {
        interface_if_index = value;
        interface_if_index.value_namespace = name_space;
        interface_if_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "destination-type")
    {
        destination_type.yfilter = yfilter;
    }
    if(value_path == "interface-if-index")
    {
        interface_if_index.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "destination-type" || name == "interface-if-index")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::Logging()
    :
    active_lsp_message{YType::empty, "active-lsp-message"},
    homepath_state_message{YType::empty, "homepath-state-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    path_change_message{YType::empty, "path-change-message"},
    signalling_state_message{YType::empty, "signalling-state-message"},
    static_cross_connect_message{YType::empty, "static-cross-connect-message"},
    tunnel_state_message{YType::empty, "tunnel-state-message"}
{

    yang_name = "logging"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::~Logging()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::has_data() const
{
    return active_lsp_message.is_set
	|| homepath_state_message.is_set
	|| insufficient_bw_message.is_set
	|| path_change_message.is_set
	|| signalling_state_message.is_set
	|| static_cross_connect_message.is_set
	|| tunnel_state_message.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_message.yfilter)
	|| ydk::is_set(homepath_state_message.yfilter)
	|| ydk::is_set(insufficient_bw_message.yfilter)
	|| ydk::is_set(path_change_message.yfilter)
	|| ydk::is_set(signalling_state_message.yfilter)
	|| ydk::is_set(static_cross_connect_message.yfilter)
	|| ydk::is_set(tunnel_state_message.yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_message.is_set || is_set(active_lsp_message.yfilter)) leaf_name_data.push_back(active_lsp_message.get_name_leafdata());
    if (homepath_state_message.is_set || is_set(homepath_state_message.yfilter)) leaf_name_data.push_back(homepath_state_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.yfilter)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (path_change_message.is_set || is_set(path_change_message.yfilter)) leaf_name_data.push_back(path_change_message.get_name_leafdata());
    if (signalling_state_message.is_set || is_set(signalling_state_message.yfilter)) leaf_name_data.push_back(signalling_state_message.get_name_leafdata());
    if (static_cross_connect_message.is_set || is_set(static_cross_connect_message.yfilter)) leaf_name_data.push_back(static_cross_connect_message.get_name_leafdata());
    if (tunnel_state_message.is_set || is_set(tunnel_state_message.yfilter)) leaf_name_data.push_back(tunnel_state_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-message")
    {
        active_lsp_message = value;
        active_lsp_message.value_namespace = name_space;
        active_lsp_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "homepath-state-message")
    {
        homepath_state_message = value;
        homepath_state_message.value_namespace = name_space;
        homepath_state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
        insufficient_bw_message.value_namespace = name_space;
        insufficient_bw_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-change-message")
    {
        path_change_message = value;
        path_change_message.value_namespace = name_space;
        path_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-state-message")
    {
        signalling_state_message = value;
        signalling_state_message.value_namespace = name_space;
        signalling_state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-cross-connect-message")
    {
        static_cross_connect_message = value;
        static_cross_connect_message.value_namespace = name_space;
        static_cross_connect_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state-message")
    {
        tunnel_state_message = value;
        tunnel_state_message.value_namespace = name_space;
        tunnel_state_message.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-message")
    {
        active_lsp_message.yfilter = yfilter;
    }
    if(value_path == "homepath-state-message")
    {
        homepath_state_message.yfilter = yfilter;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message.yfilter = yfilter;
    }
    if(value_path == "path-change-message")
    {
        path_change_message.yfilter = yfilter;
    }
    if(value_path == "signalling-state-message")
    {
        signalling_state_message.yfilter = yfilter;
    }
    if(value_path == "static-cross-connect-message")
    {
        static_cross_connect_message.yfilter = yfilter;
    }
    if(value_path == "tunnel-state-message")
    {
        tunnel_state_message.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-message" || name == "homepath-state-message" || name == "insufficient-bw-message" || name == "path-change-message" || name == "signalling-state-message" || name == "static-cross-connect-message" || name == "tunnel-state-message")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOptions()
{

    yang_name = "path-options"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::~PathOptions()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption>();
        c->parent = this;
        path_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::PathOption()
    :
    preference_level{YType::uint32, "preference-level"},
    lockdown{YType::enumeration, "lockdown"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    path_type{YType::enumeration, "path-type"},
    protected_by_preference_level{YType::uint32, "protected-by-preference-level"},
    restore_by_preference_level{YType::uint32, "restore-by-preference-level"},
    xro_attribute_set_name{YType::str, "xro-attribute-set-name"},
    xro_type{YType::empty, "xro-type"}
{

    yang_name = "path-option"; yang_parent_name = "path-options"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::~PathOption()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::has_data() const
{
    return preference_level.is_set
	|| lockdown.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| path_type.is_set
	|| protected_by_preference_level.is_set
	|| restore_by_preference_level.is_set
	|| xro_attribute_set_name.is_set
	|| xro_type.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preference_level.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_name.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(protected_by_preference_level.yfilter)
	|| ydk::is_set(restore_by_preference_level.yfilter)
	|| ydk::is_set(xro_attribute_set_name.yfilter)
	|| ydk::is_set(xro_type.yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[preference-level='" <<preference_level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference_level.is_set || is_set(preference_level.yfilter)) leaf_name_data.push_back(preference_level.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.yfilter)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (protected_by_preference_level.is_set || is_set(protected_by_preference_level.yfilter)) leaf_name_data.push_back(protected_by_preference_level.get_name_leafdata());
    if (restore_by_preference_level.is_set || is_set(restore_by_preference_level.yfilter)) leaf_name_data.push_back(restore_by_preference_level.get_name_leafdata());
    if (xro_attribute_set_name.is_set || is_set(xro_attribute_set_name.yfilter)) leaf_name_data.push_back(xro_attribute_set_name.get_name_leafdata());
    if (xro_type.is_set || is_set(xro_type.yfilter)) leaf_name_data.push_back(xro_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preference-level")
    {
        preference_level = value;
        preference_level.value_namespace = name_space;
        preference_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-name")
    {
        path_name = value;
        path_name.value_namespace = name_space;
        path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-by-preference-level")
    {
        protected_by_preference_level = value;
        protected_by_preference_level.value_namespace = name_space;
        protected_by_preference_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restore-by-preference-level")
    {
        restore_by_preference_level = value;
        restore_by_preference_level.value_namespace = name_space;
        restore_by_preference_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xro-attribute-set-name")
    {
        xro_attribute_set_name = value;
        xro_attribute_set_name.value_namespace = name_space;
        xro_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xro-type")
    {
        xro_type = value;
        xro_type.value_namespace = name_space;
        xro_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preference-level")
    {
        preference_level.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-name")
    {
        path_name.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "protected-by-preference-level")
    {
        protected_by_preference_level.yfilter = yfilter;
    }
    if(value_path == "restore-by-preference-level")
    {
        restore_by_preference_level.yfilter = yfilter;
    }
    if(value_path == "xro-attribute-set-name")
    {
        xro_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "xro-type")
    {
        xro_type.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preference-level" || name == "lockdown" || name == "path-id" || name == "path-name" || name == "path-type" || name == "protected-by-preference-level" || name == "restore-by-preference-level" || name == "xro-attribute-set-name" || name == "xro-type")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::ProtectionSwitching()
    :
    lockout{YType::enumeration, "lockout"}
{

    yang_name = "protection-switching"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::~ProtectionSwitching()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::has_data() const
{
    return lockout.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lockout.yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-switching";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lockout.is_set || is_set(lockout.yfilter)) leaf_name_data.push_back(lockout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lockout")
    {
        lockout = value;
        lockout.value_namespace = name_space;
        lockout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lockout")
    {
        lockout.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lockout")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::SignalledBandwidth()
    :
    bitrate{YType::int32, "bitrate"},
    od_uflex_framing_type{YType::enumeration, "od-uflex-framing-type"},
    signalled_bandwidth_type{YType::enumeration, "signalled-bandwidth-type"}
{

    yang_name = "signalled-bandwidth"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::~SignalledBandwidth()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::has_data() const
{
    return bitrate.is_set
	|| od_uflex_framing_type.is_set
	|| signalled_bandwidth_type.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bitrate.yfilter)
	|| ydk::is_set(od_uflex_framing_type.yfilter)
	|| ydk::is_set(signalled_bandwidth_type.yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bitrate.is_set || is_set(bitrate.yfilter)) leaf_name_data.push_back(bitrate.get_name_leafdata());
    if (od_uflex_framing_type.is_set || is_set(od_uflex_framing_type.yfilter)) leaf_name_data.push_back(od_uflex_framing_type.get_name_leafdata());
    if (signalled_bandwidth_type.is_set || is_set(signalled_bandwidth_type.yfilter)) leaf_name_data.push_back(signalled_bandwidth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bitrate")
    {
        bitrate = value;
        bitrate.value_namespace = name_space;
        bitrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "od-uflex-framing-type")
    {
        od_uflex_framing_type = value;
        od_uflex_framing_type.value_namespace = name_space;
        od_uflex_framing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-bandwidth-type")
    {
        signalled_bandwidth_type = value;
        signalled_bandwidth_type.value_namespace = name_space;
        signalled_bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bitrate")
    {
        bitrate.yfilter = yfilter;
    }
    if(value_path == "od-uflex-framing-type")
    {
        od_uflex_framing_type.yfilter = yfilter;
    }
    if(value_path == "signalled-bandwidth-type")
    {
        signalled_bandwidth_type.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bitrate" || name == "od-uflex-framing-type" || name == "signalled-bandwidth-type")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::StaticUni()
    :
    egress_controller_if_index{YType::int32, "egress-controller-if-index"},
    egress_type{YType::enumeration, "egress-type"},
    ingress_controller_name{YType::str, "ingress-controller-name"},
    ingress_type{YType::enumeration, "ingress-type"}
{

    yang_name = "static-uni"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::~StaticUni()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::has_data() const
{
    return egress_controller_if_index.is_set
	|| egress_type.is_set
	|| ingress_controller_name.is_set
	|| ingress_type.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egress_controller_if_index.yfilter)
	|| ydk::is_set(egress_type.yfilter)
	|| ydk::is_set(ingress_controller_name.yfilter)
	|| ydk::is_set(ingress_type.yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_controller_if_index.is_set || is_set(egress_controller_if_index.yfilter)) leaf_name_data.push_back(egress_controller_if_index.get_name_leafdata());
    if (egress_type.is_set || is_set(egress_type.yfilter)) leaf_name_data.push_back(egress_type.get_name_leafdata());
    if (ingress_controller_name.is_set || is_set(ingress_controller_name.yfilter)) leaf_name_data.push_back(ingress_controller_name.get_name_leafdata());
    if (ingress_type.is_set || is_set(ingress_type.yfilter)) leaf_name_data.push_back(ingress_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress-controller-if-index")
    {
        egress_controller_if_index = value;
        egress_controller_if_index.value_namespace = name_space;
        egress_controller_if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-type")
    {
        egress_type = value;
        egress_type.value_namespace = name_space;
        egress_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-controller-name")
    {
        ingress_controller_name = value;
        ingress_controller_name.value_namespace = name_space;
        ingress_controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-type")
    {
        ingress_type = value;
        ingress_type.value_namespace = name_space;
        ingress_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress-controller-if-index")
    {
        egress_controller_if_index.yfilter = yfilter;
    }
    if(value_path == "egress-type")
    {
        egress_type.yfilter = yfilter;
    }
    if(value_path == "ingress-controller-name")
    {
        ingress_controller_name.yfilter = yfilter;
    }
    if(value_path == "ingress-type")
    {
        ingress_type.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-controller-if-index" || name == "egress-type" || name == "ingress-controller-name" || name == "ingress-type")
        return true;
    return false;
}

MplsTe::GmplsUni::GmplsUni()
    :
    controllers(std::make_shared<MplsTe::GmplsUni::Controllers>())
	,timers(std::make_shared<MplsTe::GmplsUni::Timers>())
{
    controllers->parent = this;
    timers->parent = this;

    yang_name = "gmpls-uni"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GmplsUni::~GmplsUni()
{
}

bool MplsTe::GmplsUni::has_data() const
{
    return (controllers !=  nullptr && controllers->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool MplsTe::GmplsUni::has_operation() const
{
    return is_set(yfilter)
	|| (controllers !=  nullptr && controllers->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string MplsTe::GmplsUni::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllers")
    {
        if(controllers == nullptr)
        {
            controllers = std::make_shared<MplsTe::GmplsUni::Controllers>();
        }
        return controllers;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<MplsTe::GmplsUni::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(controllers != nullptr)
    {
        children["controllers"] = controllers;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void MplsTe::GmplsUni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsUni::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsUni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllers" || name == "timers")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controllers()
{

    yang_name = "controllers"; yang_parent_name = "gmpls-uni"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GmplsUni::Controllers::~Controllers()
{
}

bool MplsTe::GmplsUni::Controllers::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsUni::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GmplsUni::Controllers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-uni/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsUni::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        for(auto const & c : controller)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GmplsUni::Controllers::Controller>();
        c->parent = this;
        controller.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : controller)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GmplsUni::Controllers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsUni::Controllers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsUni::Controllers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"},
    enable{YType::empty, "enable"}
    	,
    announce(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::Announce>())
	,controller_logging(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::ControllerLogging>())
	,gmpls_unitunnel_head(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead>())
{
    announce->parent = this;
    controller_logging->parent = this;
    gmpls_unitunnel_head->parent = this;

    yang_name = "controller"; yang_parent_name = "controllers"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GmplsUni::Controllers::Controller::~Controller()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::has_data() const
{
    return controller_name.is_set
	|| enable.is_set
	|| (announce !=  nullptr && announce->has_data())
	|| (controller_logging !=  nullptr && controller_logging->has_data())
	|| (gmpls_unitunnel_head !=  nullptr && gmpls_unitunnel_head->has_data());
}

bool MplsTe::GmplsUni::Controllers::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (announce !=  nullptr && announce->has_operation())
	|| (controller_logging !=  nullptr && controller_logging->has_operation())
	|| (gmpls_unitunnel_head !=  nullptr && gmpls_unitunnel_head->has_operation());
}

std::string MplsTe::GmplsUni::Controllers::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-uni/controllers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsUni::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[controller-name='" <<controller_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "announce")
    {
        if(announce == nullptr)
        {
            announce = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::Announce>();
        }
        return announce;
    }

    if(child_yang_name == "controller-logging")
    {
        if(controller_logging == nullptr)
        {
            controller_logging = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::ControllerLogging>();
        }
        return controller_logging;
    }

    if(child_yang_name == "gmpls-unitunnel-head")
    {
        if(gmpls_unitunnel_head == nullptr)
        {
            gmpls_unitunnel_head = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead>();
        }
        return gmpls_unitunnel_head;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(announce != nullptr)
    {
        children["announce"] = announce;
    }

    if(controller_logging != nullptr)
    {
        children["controller-logging"] = controller_logging;
    }

    if(gmpls_unitunnel_head != nullptr)
    {
        children["gmpls-unitunnel-head"] = gmpls_unitunnel_head;
    }

    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Controllers::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Controllers::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announce" || name == "controller-logging" || name == "gmpls-unitunnel-head" || name == "controller-name" || name == "enable")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::Announce::Announce()
    :
    srl_gs{YType::empty, "srl-gs"}
{

    yang_name = "announce"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsUni::Controllers::Controller::Announce::~Announce()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::Announce::has_data() const
{
    return srl_gs.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::Announce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srl_gs.yfilter);
}

std::string MplsTe::GmplsUni::Controllers::Controller::Announce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::Announce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srl_gs.is_set || is_set(srl_gs.yfilter)) leaf_name_data.push_back(srl_gs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::Announce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::Announce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::Announce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srl-gs")
    {
        srl_gs = value;
        srl_gs.value_namespace = name_space;
        srl_gs.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Controllers::Controller::Announce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srl-gs")
    {
        srl_gs.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Controllers::Controller::Announce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::ControllerLogging()
    :
    discovered_srlg_change_logging{YType::empty, "discovered-srlg-change-logging"}
{

    yang_name = "controller-logging"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::~ControllerLogging()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::has_data() const
{
    return discovered_srlg_change_logging.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discovered_srlg_change_logging.yfilter);
}

std::string MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discovered_srlg_change_logging.is_set || is_set(discovered_srlg_change_logging.yfilter)) leaf_name_data.push_back(discovered_srlg_change_logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discovered-srlg-change-logging")
    {
        discovered_srlg_change_logging = value;
        discovered_srlg_change_logging.value_namespace = name_space;
        discovered_srlg_change_logging.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discovered-srlg-change-logging")
    {
        discovered_srlg_change_logging.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Controllers::Controller::ControllerLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovered-srlg-change-logging")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::GmplsUnitunnelHead()
    :
    destination{YType::str, "destination"},
    enable{YType::empty, "enable"},
    record_route{YType::empty, "record-route"},
    signalled_name{YType::str, "signalled-name"},
    tunnel_id{YType::uint32, "tunnel-id"}
    	,
    logging(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging>())
	,path_options(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions>())
	,priority(nullptr) // presence node
	,recording(std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording>())
{
    logging->parent = this;
    path_options->parent = this;
    recording->parent = this;

    yang_name = "gmpls-unitunnel-head"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::~GmplsUnitunnelHead()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::has_data() const
{
    return destination.is_set
	|| enable.is_set
	|| record_route.is_set
	|| signalled_name.is_set
	|| tunnel_id.is_set
	|| (logging !=  nullptr && logging->has_data())
	|| (path_options !=  nullptr && path_options->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (recording !=  nullptr && recording->has_data());
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(signalled_name.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| (logging !=  nullptr && logging->has_operation())
	|| (path_options !=  nullptr && path_options->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (recording !=  nullptr && recording->has_operation());
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-unitunnel-head";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (signalled_name.is_set || is_set(signalled_name.yfilter)) leaf_name_data.push_back(signalled_name.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "path-options")
    {
        if(path_options == nullptr)
        {
            path_options = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions>();
        }
        return path_options;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "recording")
    {
        if(recording == nullptr)
        {
            recording = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording>();
        }
        return recording;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(path_options != nullptr)
    {
        children["path-options"] = path_options;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(recording != nullptr)
    {
        children["recording"] = recording;
    }

    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-name")
    {
        signalled_name = value;
        signalled_name.value_namespace = name_space;
        signalled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "signalled-name")
    {
        signalled_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "path-options" || name == "priority" || name == "recording" || name == "destination" || name == "enable" || name == "record-route" || name == "signalled-name" || name == "tunnel-id")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::Logging()
    :
    state_message{YType::empty, "state-message"}
{

    yang_name = "logging"; yang_parent_name = "gmpls-unitunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::~Logging()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::has_data() const
{
    return state_message.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state_message.yfilter);
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-message")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOptions()
{

    yang_name = "path-options"; yang_parent_name = "gmpls-unitunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::~PathOptions()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption>();
        c->parent = this;
        path_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::PathOption()
    :
    preference_level{YType::uint32, "preference-level"},
    dwdm_channel{YType::uint32, "dwdm-channel"},
    lockdown{YType::enumeration, "lockdown"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    path_type{YType::enumeration, "path-type"},
    signaled_label{YType::enumeration, "signaled-label"},
    verbatim{YType::enumeration, "verbatim"},
    xro_attribute_set_name{YType::str, "xro-attribute-set-name"},
    xro_type{YType::empty, "xro-type"}
{

    yang_name = "path-option"; yang_parent_name = "path-options"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::~PathOption()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::has_data() const
{
    return preference_level.is_set
	|| dwdm_channel.is_set
	|| lockdown.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| path_type.is_set
	|| signaled_label.is_set
	|| verbatim.is_set
	|| xro_attribute_set_name.is_set
	|| xro_type.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preference_level.yfilter)
	|| ydk::is_set(dwdm_channel.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_name.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(signaled_label.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| ydk::is_set(xro_attribute_set_name.yfilter)
	|| ydk::is_set(xro_type.yfilter);
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[preference-level='" <<preference_level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference_level.is_set || is_set(preference_level.yfilter)) leaf_name_data.push_back(preference_level.get_name_leafdata());
    if (dwdm_channel.is_set || is_set(dwdm_channel.yfilter)) leaf_name_data.push_back(dwdm_channel.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.yfilter)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (signaled_label.is_set || is_set(signaled_label.yfilter)) leaf_name_data.push_back(signaled_label.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());
    if (xro_attribute_set_name.is_set || is_set(xro_attribute_set_name.yfilter)) leaf_name_data.push_back(xro_attribute_set_name.get_name_leafdata());
    if (xro_type.is_set || is_set(xro_type.yfilter)) leaf_name_data.push_back(xro_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preference-level")
    {
        preference_level = value;
        preference_level.value_namespace = name_space;
        preference_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dwdm-channel")
    {
        dwdm_channel = value;
        dwdm_channel.value_namespace = name_space;
        dwdm_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-name")
    {
        path_name = value;
        path_name.value_namespace = name_space;
        path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-label")
    {
        signaled_label = value;
        signaled_label.value_namespace = name_space;
        signaled_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xro-attribute-set-name")
    {
        xro_attribute_set_name = value;
        xro_attribute_set_name.value_namespace = name_space;
        xro_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xro-type")
    {
        xro_type = value;
        xro_type.value_namespace = name_space;
        xro_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preference-level")
    {
        preference_level.yfilter = yfilter;
    }
    if(value_path == "dwdm-channel")
    {
        dwdm_channel.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-name")
    {
        path_name.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "signaled-label")
    {
        signaled_label.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
    if(value_path == "xro-attribute-set-name")
    {
        xro_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "xro-type")
    {
        xro_type.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preference-level" || name == "dwdm-channel" || name == "lockdown" || name == "path-id" || name == "path-name" || name == "path-type" || name == "signaled-label" || name == "verbatim" || name == "xro-attribute-set-name" || name == "xro-type")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::Priority()
    :
    hold_priority{YType::uint32, "hold-priority"},
    setup_priority{YType::uint32, "setup-priority"}
{

    yang_name = "priority"; yang_parent_name = "gmpls-unitunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::~Priority()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(setup_priority.yfilter);
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "setup-priority")
        return true;
    return false;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::Recording()
    :
    srlg{YType::empty, "srlg"}
{

    yang_name = "recording"; yang_parent_name = "gmpls-unitunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::~Recording()
{
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::has_data() const
{
    return srlg.is_set;
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg.yfilter);
}

std::string MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recording";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg.is_set || is_set(srlg.yfilter)) leaf_name_data.push_back(srlg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg")
    {
        srlg = value;
        srlg.value_namespace = name_space;
        srlg.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg")
    {
        srlg.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg")
        return true;
    return false;
}

MplsTe::GmplsUni::Timers::Timers()
    :
    path_option_timers(std::make_shared<MplsTe::GmplsUni::Timers::PathOptionTimers>())
{
    path_option_timers->parent = this;

    yang_name = "timers"; yang_parent_name = "gmpls-uni"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GmplsUni::Timers::~Timers()
{
}

bool MplsTe::GmplsUni::Timers::has_data() const
{
    return (path_option_timers !=  nullptr && path_option_timers->has_data());
}

bool MplsTe::GmplsUni::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (path_option_timers !=  nullptr && path_option_timers->has_operation());
}

std::string MplsTe::GmplsUni::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-uni/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsUni::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option-timers")
    {
        if(path_option_timers == nullptr)
        {
            path_option_timers = std::make_shared<MplsTe::GmplsUni::Timers::PathOptionTimers>();
        }
        return path_option_timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_option_timers != nullptr)
    {
        children["path-option-timers"] = path_option_timers;
    }

    return children;
}

void MplsTe::GmplsUni::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsUni::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsUni::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option-timers")
        return true;
    return false;
}

MplsTe::GmplsUni::Timers::PathOptionTimers::PathOptionTimers()
    :
    holddown(std::make_shared<MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown>())
{
    holddown->parent = this;

    yang_name = "path-option-timers"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GmplsUni::Timers::PathOptionTimers::~PathOptionTimers()
{
}

bool MplsTe::GmplsUni::Timers::PathOptionTimers::has_data() const
{
    return (holddown !=  nullptr && holddown->has_data());
}

bool MplsTe::GmplsUni::Timers::PathOptionTimers::has_operation() const
{
    return is_set(yfilter)
	|| (holddown !=  nullptr && holddown->has_operation());
}

std::string MplsTe::GmplsUni::Timers::PathOptionTimers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-uni/timers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsUni::Timers::PathOptionTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Timers::PathOptionTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Timers::PathOptionTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "holddown")
    {
        if(holddown == nullptr)
        {
            holddown = std::make_shared<MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown>();
        }
        return holddown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Timers::PathOptionTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(holddown != nullptr)
    {
        children["holddown"] = holddown;
    }

    return children;
}

void MplsTe::GmplsUni::Timers::PathOptionTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsUni::Timers::PathOptionTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsUni::Timers::PathOptionTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holddown")
        return true;
    return false;
}

MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::Holddown()
    :
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"}
{

    yang_name = "holddown"; yang_parent_name = "path-option-timers"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::~Holddown()
{
}

bool MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-uni/timers/path-option-timers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "holddown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

MplsTe::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Interfaces::~Interfaces()
{
}

bool MplsTe::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    global_attributes(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes>())
	,lcac(std::make_shared<MplsTe::Interfaces::Interface::Lcac>())
	,transport_profile_link(std::make_shared<MplsTe::Interfaces::Interface::TransportProfileLink>())
{
    global_attributes->parent = this;
    lcac->parent = this;
    transport_profile_link->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Interfaces::Interface::~Interface()
{
}

bool MplsTe::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| (global_attributes !=  nullptr && global_attributes->has_data())
	|| (lcac !=  nullptr && lcac->has_data())
	|| (transport_profile_link !=  nullptr && transport_profile_link->has_data());
}

bool MplsTe::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (global_attributes !=  nullptr && global_attributes->has_operation())
	|| (lcac !=  nullptr && lcac->has_operation())
	|| (transport_profile_link !=  nullptr && transport_profile_link->has_operation());
}

std::string MplsTe::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-attributes")
    {
        if(global_attributes == nullptr)
        {
            global_attributes = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes>();
        }
        return global_attributes;
    }

    if(child_yang_name == "lcac")
    {
        if(lcac == nullptr)
        {
            lcac = std::make_shared<MplsTe::Interfaces::Interface::Lcac>();
        }
        return lcac;
    }

    if(child_yang_name == "transport-profile-link")
    {
        if(transport_profile_link == nullptr)
        {
            transport_profile_link = std::make_shared<MplsTe::Interfaces::Interface::TransportProfileLink>();
        }
        return transport_profile_link;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global_attributes != nullptr)
    {
        children["global-attributes"] = global_attributes;
    }

    if(lcac != nullptr)
    {
        children["lcac"] = lcac;
    }

    if(transport_profile_link != nullptr)
    {
        children["transport-profile-link"] = transport_profile_link;
    }

    return children;
}

void MplsTe::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-attributes" || name == "lcac" || name == "transport-profile-link" || name == "interface-name")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::GlobalAttributes::GlobalAttributes()
    :
    auto_tunnel(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel>())
	,backup_paths(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths>())
	,backup_tunnels(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels>())
{
    auto_tunnel->parent = this;
    backup_paths->parent = this;
    backup_tunnels->parent = this;

    yang_name = "global-attributes"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::GlobalAttributes::~GlobalAttributes()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::has_data() const
{
    return (auto_tunnel !=  nullptr && auto_tunnel->has_data())
	|| (backup_paths !=  nullptr && backup_paths->has_data())
	|| (backup_tunnels !=  nullptr && backup_tunnels->has_data());
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_operation())
	|| (backup_paths !=  nullptr && backup_paths->has_operation())
	|| (backup_tunnels !=  nullptr && backup_tunnels->has_operation());
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::GlobalAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-tunnel")
    {
        if(auto_tunnel == nullptr)
        {
            auto_tunnel = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel>();
        }
        return auto_tunnel;
    }

    if(child_yang_name == "backup-paths")
    {
        if(backup_paths == nullptr)
        {
            backup_paths = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths>();
        }
        return backup_paths;
    }

    if(child_yang_name == "backup-tunnels")
    {
        if(backup_tunnels == nullptr)
        {
            backup_tunnels = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels>();
        }
        return backup_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::GlobalAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_tunnel != nullptr)
    {
        children["auto-tunnel"] = auto_tunnel;
    }

    if(backup_paths != nullptr)
    {
        children["backup-paths"] = backup_paths;
    }

    if(backup_tunnels != nullptr)
    {
        children["backup-tunnels"] = backup_tunnels;
    }

    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::GlobalAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-tunnel" || name == "backup-paths" || name == "backup-tunnels")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::AutoTunnel()
    :
    backup(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup>())
{
    backup->parent = this;

    yang_name = "auto-tunnel"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::~AutoTunnel()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::has_data() const
{
    return (backup !=  nullptr && backup->has_data());
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::has_operation() const
{
    return is_set(yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Backup()
    :
    attribute_set{YType::str, "attribute-set"},
    enable{YType::empty, "enable"},
    next_hop_only{YType::empty, "next-hop-only"}
    	,
    exclude(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude>())
{
    exclude->parent = this;

    yang_name = "backup"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::~Backup()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::has_data() const
{
    return attribute_set.is_set
	|| enable.is_set
	|| next_hop_only.is_set
	|| (exclude !=  nullptr && exclude->has_data());
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(next_hop_only.yfilter)
	|| (exclude !=  nullptr && exclude->has_operation());
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set.is_set || is_set(attribute_set.yfilter)) leaf_name_data.push_back(attribute_set.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (next_hop_only.is_set || is_set(next_hop_only.yfilter)) leaf_name_data.push_back(next_hop_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude")
    {
        if(exclude == nullptr)
        {
            exclude = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude>();
        }
        return exclude;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exclude != nullptr)
    {
        children["exclude"] = exclude;
    }

    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set")
    {
        attribute_set = value;
        attribute_set.value_namespace = name_space;
        attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-only")
    {
        next_hop_only = value;
        next_hop_only.value_namespace = name_space;
        next_hop_only.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set")
    {
        attribute_set.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "next-hop-only")
    {
        next_hop_only.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude" || name == "attribute-set" || name == "enable" || name == "next-hop-only")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::Exclude()
    :
    srlg_mode{YType::enumeration, "srlg-mode"}
{

    yang_name = "exclude"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::~Exclude()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::has_data() const
{
    return srlg_mode.is_set;
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_mode.yfilter);
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_mode.is_set || is_set(srlg_mode.yfilter)) leaf_name_data.push_back(srlg_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-mode")
    {
        srlg_mode = value;
        srlg_mode.value_namespace = name_space;
        srlg_mode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-mode")
    {
        srlg_mode.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-mode")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPaths()
{

    yang_name = "backup-paths"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::~BackupPaths()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::has_data() const
{
    for (std::size_t index=0; index<backup_path.size(); index++)
    {
        if(backup_path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::has_operation() const
{
    for (std::size_t index=0; index<backup_path.size(); index++)
    {
        if(backup_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-path")
    {
        for(auto const & c : backup_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath>();
        c->parent = this;
        backup_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-path")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::BackupPath()
    :
    tunnel_number{YType::uint32, "tunnel-number"}
{

    yang_name = "backup-path"; yang_parent_name = "backup-paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::~BackupPath()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::has_data() const
{
    return tunnel_number.is_set;
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_number.yfilter);
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-path" <<"[tunnel-number='" <<tunnel_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.yfilter)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
        tunnel_number.value_namespace = name_space;
        tunnel_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-number")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnels()
{

    yang_name = "backup-tunnels"; yang_parent_name = "global-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::~BackupTunnels()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::has_data() const
{
    for (std::size_t index=0; index<backup_tunnel.size(); index++)
    {
        if(backup_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::has_operation() const
{
    for (std::size_t index=0; index<backup_tunnel.size(); index++)
    {
        if(backup_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnel")
    {
        for(auto const & c : backup_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel>();
        c->parent = this;
        backup_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnel")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::BackupTunnel()
    :
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "backup-tunnel"; yang_parent_name = "backup-tunnels"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::~BackupTunnel()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::has_data() const
{
    return tunnel_name.is_set;
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-name")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::Lcac()
    :
    admin_weight{YType::int32, "admin-weight"},
    attribute_flags{YType::str, "attribute-flags"},
    bfd{YType::empty, "bfd"},
    enable{YType::empty, "enable"},
    fault_oam_lockout{YType::empty, "fault-oam-lockout"}
    	,
    attribute_name_xr(std::make_shared<MplsTe::Interfaces::Interface::Lcac::AttributeNameXr>())
	,attribute_names(std::make_shared<MplsTe::Interfaces::Interface::Lcac::AttributeNames>())
	,down_thresholds(std::make_shared<MplsTe::Interfaces::Interface::Lcac::DownThresholds>())
	,flood_area(std::make_shared<MplsTe::Interfaces::Interface::Lcac::FloodArea>())
	,srlgs(std::make_shared<MplsTe::Interfaces::Interface::Lcac::Srlgs>())
	,switchings(std::make_shared<MplsTe::Interfaces::Interface::Lcac::Switchings>())
	,up_thresholds(std::make_shared<MplsTe::Interfaces::Interface::Lcac::UpThresholds>())
{
    attribute_name_xr->parent = this;
    attribute_names->parent = this;
    down_thresholds->parent = this;
    flood_area->parent = this;
    srlgs->parent = this;
    switchings->parent = this;
    up_thresholds->parent = this;

    yang_name = "lcac"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::~Lcac()
{
}

bool MplsTe::Interfaces::Interface::Lcac::has_data() const
{
    return admin_weight.is_set
	|| attribute_flags.is_set
	|| bfd.is_set
	|| enable.is_set
	|| fault_oam_lockout.is_set
	|| (attribute_name_xr !=  nullptr && attribute_name_xr->has_data())
	|| (attribute_names !=  nullptr && attribute_names->has_data())
	|| (down_thresholds !=  nullptr && down_thresholds->has_data())
	|| (flood_area !=  nullptr && flood_area->has_data())
	|| (srlgs !=  nullptr && srlgs->has_data())
	|| (switchings !=  nullptr && switchings->has_data())
	|| (up_thresholds !=  nullptr && up_thresholds->has_data());
}

bool MplsTe::Interfaces::Interface::Lcac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(attribute_flags.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(fault_oam_lockout.yfilter)
	|| (attribute_name_xr !=  nullptr && attribute_name_xr->has_operation())
	|| (attribute_names !=  nullptr && attribute_names->has_operation())
	|| (down_thresholds !=  nullptr && down_thresholds->has_operation())
	|| (flood_area !=  nullptr && flood_area->has_operation())
	|| (srlgs !=  nullptr && srlgs->has_operation())
	|| (switchings !=  nullptr && switchings->has_operation())
	|| (up_thresholds !=  nullptr && up_thresholds->has_operation());
}

std::string MplsTe::Interfaces::Interface::Lcac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (attribute_flags.is_set || is_set(attribute_flags.yfilter)) leaf_name_data.push_back(attribute_flags.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (fault_oam_lockout.is_set || is_set(fault_oam_lockout.yfilter)) leaf_name_data.push_back(fault_oam_lockout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-name-xr")
    {
        if(attribute_name_xr == nullptr)
        {
            attribute_name_xr = std::make_shared<MplsTe::Interfaces::Interface::Lcac::AttributeNameXr>();
        }
        return attribute_name_xr;
    }

    if(child_yang_name == "attribute-names")
    {
        if(attribute_names == nullptr)
        {
            attribute_names = std::make_shared<MplsTe::Interfaces::Interface::Lcac::AttributeNames>();
        }
        return attribute_names;
    }

    if(child_yang_name == "down-thresholds")
    {
        if(down_thresholds == nullptr)
        {
            down_thresholds = std::make_shared<MplsTe::Interfaces::Interface::Lcac::DownThresholds>();
        }
        return down_thresholds;
    }

    if(child_yang_name == "flood-area")
    {
        if(flood_area == nullptr)
        {
            flood_area = std::make_shared<MplsTe::Interfaces::Interface::Lcac::FloodArea>();
        }
        return flood_area;
    }

    if(child_yang_name == "srlgs")
    {
        if(srlgs == nullptr)
        {
            srlgs = std::make_shared<MplsTe::Interfaces::Interface::Lcac::Srlgs>();
        }
        return srlgs;
    }

    if(child_yang_name == "switchings")
    {
        if(switchings == nullptr)
        {
            switchings = std::make_shared<MplsTe::Interfaces::Interface::Lcac::Switchings>();
        }
        return switchings;
    }

    if(child_yang_name == "up-thresholds")
    {
        if(up_thresholds == nullptr)
        {
            up_thresholds = std::make_shared<MplsTe::Interfaces::Interface::Lcac::UpThresholds>();
        }
        return up_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_name_xr != nullptr)
    {
        children["attribute-name-xr"] = attribute_name_xr;
    }

    if(attribute_names != nullptr)
    {
        children["attribute-names"] = attribute_names;
    }

    if(down_thresholds != nullptr)
    {
        children["down-thresholds"] = down_thresholds;
    }

    if(flood_area != nullptr)
    {
        children["flood-area"] = flood_area;
    }

    if(srlgs != nullptr)
    {
        children["srlgs"] = srlgs;
    }

    if(switchings != nullptr)
    {
        children["switchings"] = switchings;
    }

    if(up_thresholds != nullptr)
    {
        children["up-thresholds"] = up_thresholds;
    }

    return children;
}

void MplsTe::Interfaces::Interface::Lcac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-flags")
    {
        attribute_flags = value;
        attribute_flags.value_namespace = name_space;
        attribute_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-oam-lockout")
    {
        fault_oam_lockout = value;
        fault_oam_lockout.value_namespace = name_space;
        fault_oam_lockout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::Lcac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "attribute-flags")
    {
        attribute_flags.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "fault-oam-lockout")
    {
        fault_oam_lockout.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::Lcac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-name-xr" || name == "attribute-names" || name == "down-thresholds" || name == "flood-area" || name == "srlgs" || name == "switchings" || name == "up-thresholds" || name == "admin-weight" || name == "attribute-flags" || name == "bfd" || name == "enable" || name == "fault-oam-lockout")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::AttributeNameXr()
    :
    attribute_name{YType::str, "attribute-name"}
{

    yang_name = "attribute-name-xr"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::~AttributeNameXr()
{
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::has_data() const
{
    for (auto const & leaf : attribute_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::has_operation() const
{
    for (auto const & leaf : attribute_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(attribute_name.yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-name-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto attribute_name_name_datas = attribute_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attribute_name_name_datas.begin(), attribute_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-name")
    {
        attribute_name.append(value);
    }
}

void MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-name")
    {
        attribute_name.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-name")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeNames()
{

    yang_name = "attribute-names"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::AttributeNames::~AttributeNames()
{
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNames::has_data() const
{
    for (std::size_t index=0; index<attribute_name.size(); index++)
    {
        if(attribute_name[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNames::has_operation() const
{
    for (std::size_t index=0; index<attribute_name.size(); index++)
    {
        if(attribute_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::AttributeNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::AttributeNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::AttributeNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-name")
    {
        for(auto const & c : attribute_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName>();
        c->parent = this;
        attribute_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::AttributeNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attribute_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Interfaces::Interface::Lcac::AttributeNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::Lcac::AttributeNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-name")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::AttributeName()
    :
    affinity_index{YType::uint32, "affinity-index"},
    value_{YType::str, "value"}
{

    yang_name = "attribute-name"; yang_parent_name = "attribute-names"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::~AttributeName()
{
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return affinity_index.is_set;
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_index.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-name" <<"[affinity-index='" <<affinity_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_index.is_set || is_set(affinity_index.yfilter)) leaf_name_data.push_back(affinity_index.get_name_leafdata());

    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-index")
    {
        affinity_index = value;
        affinity_index.value_namespace = name_space;
        affinity_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-index")
    {
        affinity_index.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-index" || name == "value")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::DownThresholds::DownThresholds()
    :
    down_threshold{YType::uint32, "down-threshold"}
{

    yang_name = "down-thresholds"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::DownThresholds::~DownThresholds()
{
}

bool MplsTe::Interfaces::Interface::Lcac::DownThresholds::has_data() const
{
    for (auto const & leaf : down_threshold.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::DownThresholds::has_operation() const
{
    for (auto const & leaf : down_threshold.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(down_threshold.yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::DownThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::DownThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto down_threshold_name_datas = down_threshold.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_threshold_name_datas.begin(), down_threshold_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::DownThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::DownThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::DownThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-threshold")
    {
        down_threshold.append(value);
    }
}

void MplsTe::Interfaces::Interface::Lcac::DownThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-threshold")
    {
        down_threshold.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::Lcac::DownThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-threshold")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::FloodArea::FloodArea()
    :
    area_id{YType::int32, "area-id"},
    igp_type{YType::enumeration, "igp-type"},
    process_name{YType::str, "process-name"}
{

    yang_name = "flood-area"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::FloodArea::~FloodArea()
{
}

bool MplsTe::Interfaces::Interface::Lcac::FloodArea::has_data() const
{
    return area_id.is_set
	|| igp_type.is_set
	|| process_name.is_set;
}

bool MplsTe::Interfaces::Interface::Lcac::FloodArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::FloodArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::FloodArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::FloodArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::FloodArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::FloodArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::Lcac::FloodArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::Lcac::FloodArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "igp-type" || name == "process-name")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlgs()
{

    yang_name = "srlgs"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::Srlgs::~Srlgs()
{
}

bool MplsTe::Interfaces::Interface::Lcac::Srlgs::has_data() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::Srlgs::has_operation() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::Srlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg")
    {
        for(auto const & c : srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg>();
        c->parent = this;
        srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::Srlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Interfaces::Interface::Lcac::Srlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::Lcac::Srlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::Lcac::Srlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::Srlg()
    :
    srlg_number{YType::uint32, "srlg-number"}
{

    yang_name = "srlg"; yang_parent_name = "srlgs"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::~Srlg()
{
}

bool MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::has_data() const
{
    return srlg_number.is_set;
}

bool MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_number.yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg" <<"[srlg-number='" <<srlg_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_number.is_set || is_set(srlg_number.yfilter)) leaf_name_data.push_back(srlg_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-number")
    {
        srlg_number = value;
        srlg_number.value_namespace = name_space;
        srlg_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-number")
    {
        srlg_number.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-number")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::Switchings::Switchings()
{

    yang_name = "switchings"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::Switchings::~Switchings()
{
}

bool MplsTe::Interfaces::Interface::Lcac::Switchings::has_data() const
{
    for (std::size_t index=0; index<switching.size(); index++)
    {
        if(switching[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::Switchings::has_operation() const
{
    for (std::size_t index=0; index<switching.size(); index++)
    {
        if(switching[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::Switchings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::Switchings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::Switchings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switching")
    {
        for(auto const & c : switching)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Interfaces::Interface::Lcac::Switchings::Switching>();
        c->parent = this;
        switching.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::Switchings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : switching)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Interfaces::Interface::Lcac::Switchings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::Lcac::Switchings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::Lcac::Switchings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switching")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::Switching()
    :
    switching_id{YType::str, "switching-id"},
    capability{YType::enumeration, "capability"},
    encoding{YType::enumeration, "encoding"}
{

    yang_name = "switching"; yang_parent_name = "switchings"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::~Switching()
{
}

bool MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::has_data() const
{
    return switching_id.is_set
	|| capability.is_set
	|| encoding.is_set;
}

bool MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switching_id.yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(encoding.yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switching" <<"[switching-id='" <<switching_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_id.is_set || is_set(switching_id.yfilter)) leaf_name_data.push_back(switching_id.get_name_leafdata());
    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switching-id")
    {
        switching_id = value;
        switching_id.value_namespace = name_space;
        switching_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switching-id")
    {
        switching_id.yfilter = yfilter;
    }
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switching-id" || name == "capability" || name == "encoding")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::Lcac::UpThresholds::UpThresholds()
    :
    up_threshold{YType::uint32, "up-threshold"}
{

    yang_name = "up-thresholds"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::Lcac::UpThresholds::~UpThresholds()
{
}

bool MplsTe::Interfaces::Interface::Lcac::UpThresholds::has_data() const
{
    for (auto const & leaf : up_threshold.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::UpThresholds::has_operation() const
{
    for (auto const & leaf : up_threshold.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(up_threshold.yfilter);
}

std::string MplsTe::Interfaces::Interface::Lcac::UpThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::Lcac::UpThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto up_threshold_name_datas = up_threshold.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_threshold_name_datas.begin(), up_threshold_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::UpThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::Lcac::UpThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::UpThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-threshold")
    {
        up_threshold.append(value);
    }
}

void MplsTe::Interfaces::Interface::Lcac::UpThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-threshold")
    {
        up_threshold.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::Lcac::UpThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-threshold")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::TransportProfileLink::TransportProfileLink()
    :
    links(std::make_shared<MplsTe::Interfaces::Interface::TransportProfileLink::Links>())
{
    links->parent = this;

    yang_name = "transport-profile-link"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::TransportProfileLink::~TransportProfileLink()
{
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::has_data() const
{
    return (links !=  nullptr && links->has_data());
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::has_operation() const
{
    return is_set(yfilter)
	|| (links !=  nullptr && links->has_operation());
}

std::string MplsTe::Interfaces::Interface::TransportProfileLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-profile-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::TransportProfileLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::TransportProfileLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "links")
    {
        if(links == nullptr)
        {
            links = std::make_shared<MplsTe::Interfaces::Interface::TransportProfileLink::Links>();
        }
        return links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::TransportProfileLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(links != nullptr)
    {
        children["links"] = links;
    }

    return children;
}

void MplsTe::Interfaces::Interface::TransportProfileLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::TransportProfileLink::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "links")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::TransportProfileLink::Links::Links()
{

    yang_name = "links"; yang_parent_name = "transport-profile-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::TransportProfileLink::Links::~Links()
{
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::Links::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::Links::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Interfaces::Interface::TransportProfileLink::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::TransportProfileLink::Links::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::TransportProfileLink::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::TransportProfileLink::Links::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::Interfaces::Interface::TransportProfileLink::Links::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Interfaces::Interface::TransportProfileLink::Links::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::Links::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link")
        return true;
    return false;
}

MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::Link()
    :
    link_id{YType::uint32, "link-id"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_type{YType::enumeration, "next-hop-type"}
{

    yang_name = "link"; yang_parent_name = "links"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::~Link()
{
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::has_data() const
{
    return link_id.is_set
	|| next_hop_address.is_set
	|| next_hop_type.is_set;
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_type.yfilter);
}

std::string MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[link-id='" <<link_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_type.is_set || is_set(next_hop_type.yfilter)) leaf_name_data.push_back(next_hop_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-type")
    {
        next_hop_type = value;
        next_hop_type.value_namespace = name_space;
        next_hop_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-type")
    {
        next_hop_type.yfilter = yfilter;
    }
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-id" || name == "next-hop-address" || name == "next-hop-type")
        return true;
    return false;
}

MplsTe::Lcac::Lcac()
    :
    bandwidth_hold_timer{YType::uint32, "bandwidth-hold-timer"},
    delay_preempt_bundle_capacity_timer{YType::uint32, "delay-preempt-bundle-capacity-timer"},
    periodic_flooding_timer{YType::uint32, "periodic-flooding-timer"}
    	,
    bfd(std::make_shared<MplsTe::Lcac::Bfd>())
	,flooding_threshold(std::make_shared<MplsTe::Lcac::FloodingThreshold>())
{
    bfd->parent = this;
    flooding_threshold->parent = this;

    yang_name = "lcac"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Lcac::~Lcac()
{
}

bool MplsTe::Lcac::has_data() const
{
    return bandwidth_hold_timer.is_set
	|| delay_preempt_bundle_capacity_timer.is_set
	|| periodic_flooding_timer.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (flooding_threshold !=  nullptr && flooding_threshold->has_data());
}

bool MplsTe::Lcac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_hold_timer.yfilter)
	|| ydk::is_set(delay_preempt_bundle_capacity_timer.yfilter)
	|| ydk::is_set(periodic_flooding_timer.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (flooding_threshold !=  nullptr && flooding_threshold->has_operation());
}

std::string MplsTe::Lcac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Lcac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Lcac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_hold_timer.is_set || is_set(bandwidth_hold_timer.yfilter)) leaf_name_data.push_back(bandwidth_hold_timer.get_name_leafdata());
    if (delay_preempt_bundle_capacity_timer.is_set || is_set(delay_preempt_bundle_capacity_timer.yfilter)) leaf_name_data.push_back(delay_preempt_bundle_capacity_timer.get_name_leafdata());
    if (periodic_flooding_timer.is_set || is_set(periodic_flooding_timer.yfilter)) leaf_name_data.push_back(periodic_flooding_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Lcac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<MplsTe::Lcac::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "flooding-threshold")
    {
        if(flooding_threshold == nullptr)
        {
            flooding_threshold = std::make_shared<MplsTe::Lcac::FloodingThreshold>();
        }
        return flooding_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Lcac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(flooding_threshold != nullptr)
    {
        children["flooding-threshold"] = flooding_threshold;
    }

    return children;
}

void MplsTe::Lcac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-hold-timer")
    {
        bandwidth_hold_timer = value;
        bandwidth_hold_timer.value_namespace = name_space;
        bandwidth_hold_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-preempt-bundle-capacity-timer")
    {
        delay_preempt_bundle_capacity_timer = value;
        delay_preempt_bundle_capacity_timer.value_namespace = name_space;
        delay_preempt_bundle_capacity_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-flooding-timer")
    {
        periodic_flooding_timer = value;
        periodic_flooding_timer.value_namespace = name_space;
        periodic_flooding_timer.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Lcac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-hold-timer")
    {
        bandwidth_hold_timer.yfilter = yfilter;
    }
    if(value_path == "delay-preempt-bundle-capacity-timer")
    {
        delay_preempt_bundle_capacity_timer.yfilter = yfilter;
    }
    if(value_path == "periodic-flooding-timer")
    {
        periodic_flooding_timer.yfilter = yfilter;
    }
}

bool MplsTe::Lcac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "flooding-threshold" || name == "bandwidth-hold-timer" || name == "delay-preempt-bundle-capacity-timer" || name == "periodic-flooding-timer")
        return true;
    return false;
}

MplsTe::Lcac::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Lcac::Bfd::~Bfd()
{
}

bool MplsTe::Lcac::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| interval.is_set;
}

bool MplsTe::Lcac::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string MplsTe::Lcac::Bfd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Lcac::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Lcac::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Lcac::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Lcac::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Lcac::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Lcac::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool MplsTe::Lcac::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "interval")
        return true;
    return false;
}

MplsTe::Lcac::FloodingThreshold::FloodingThreshold()
    :
    down_stream{YType::uint32, "down-stream"},
    up_stream{YType::uint32, "up-stream"}
{

    yang_name = "flooding-threshold"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Lcac::FloodingThreshold::~FloodingThreshold()
{
}

bool MplsTe::Lcac::FloodingThreshold::has_data() const
{
    return down_stream.is_set
	|| up_stream.is_set;
}

bool MplsTe::Lcac::FloodingThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down_stream.yfilter)
	|| ydk::is_set(up_stream.yfilter);
}

std::string MplsTe::Lcac::FloodingThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Lcac::FloodingThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Lcac::FloodingThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_stream.is_set || is_set(down_stream.yfilter)) leaf_name_data.push_back(down_stream.get_name_leafdata());
    if (up_stream.is_set || is_set(up_stream.yfilter)) leaf_name_data.push_back(up_stream.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Lcac::FloodingThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Lcac::FloodingThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Lcac::FloodingThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-stream")
    {
        down_stream = value;
        down_stream.value_namespace = name_space;
        down_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-stream")
    {
        up_stream = value;
        up_stream.value_namespace = name_space;
        up_stream.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Lcac::FloodingThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-stream")
    {
        down_stream.yfilter = yfilter;
    }
    if(value_path == "up-stream")
    {
        up_stream.yfilter = yfilter;
    }
}

bool MplsTe::Lcac::FloodingThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-stream" || name == "up-stream")
        return true;
    return false;
}

MplsTe::NamedTunnels::NamedTunnels()
    :
    enable{YType::empty, "enable"}
    	,
    tunnels(std::make_shared<MplsTe::NamedTunnels::Tunnels>())
{
    tunnels->parent = this;

    yang_name = "named-tunnels"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::NamedTunnels::~NamedTunnels()
{
}

bool MplsTe::NamedTunnels::has_data() const
{
    return enable.is_set
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool MplsTe::NamedTunnels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string MplsTe::NamedTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::NamedTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<MplsTe::NamedTunnels::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    return children;
}

void MplsTe::NamedTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnels" || name == "enable")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnels()
{

    yang_name = "tunnels"; yang_parent_name = "named-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::NamedTunnels::Tunnels::~Tunnels()
{
}

bool MplsTe::NamedTunnels::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::NamedTunnels::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/named-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::NamedTunnels::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::NamedTunnels::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::NamedTunnels::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_type{YType::enumeration, "tunnel-type"},
    enable{YType::empty, "enable"}
    	,
    tunnel_attributes(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes>())
	,tunnel_id(nullptr) // presence node
{
    tunnel_attributes->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::~Tunnel()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::has_data() const
{
    return tunnel_name.is_set
	|| tunnel_type.is_set
	|| enable.is_set
	|| (tunnel_attributes !=  nullptr && tunnel_attributes->has_data())
	|| (tunnel_id !=  nullptr && tunnel_id->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (tunnel_attributes !=  nullptr && tunnel_attributes->has_operation())
	|| (tunnel_id !=  nullptr && tunnel_id->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/named-tunnels/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[tunnel-name='" <<tunnel_name <<"']" <<"[tunnel-type='" <<tunnel_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-attributes")
    {
        if(tunnel_attributes == nullptr)
        {
            tunnel_attributes = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes>();
        }
        return tunnel_attributes;
    }

    if(child_yang_name == "tunnel-id")
    {
        if(tunnel_id == nullptr)
        {
            tunnel_id = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId>();
        }
        return tunnel_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnel_attributes != nullptr)
    {
        children["tunnel-attributes"] = tunnel_attributes;
    }

    if(tunnel_id != nullptr)
    {
        children["tunnel-id"] = tunnel_id;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-attributes" || name == "tunnel-id" || name == "tunnel-name" || name == "tunnel-type" || name == "enable")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelAttributes()
    :
    destination{YType::str, "destination"},
    forward_class{YType::uint32, "forward-class"},
    load_share{YType::uint32, "load-share"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    record_route{YType::empty, "record-route"},
    shutdown{YType::empty, "shutdown"},
    soft_preemption{YType::empty, "soft-preemption"}
    	,
    auto_bandwidth(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth>())
	,autoroute(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute>())
	,bandwidth(nullptr) // presence node
	,fast_reroute(nullptr) // presence node
	,logging(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging>())
	,new_style_affinity_affinity_types(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes>())
	,path_setups(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups>())
	,priority(nullptr) // presence node
	,tunnel_path_selection(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection>())
{
    auto_bandwidth->parent = this;
    autoroute->parent = this;
    logging->parent = this;
    new_style_affinity_affinity_types->parent = this;
    path_setups->parent = this;
    tunnel_path_selection->parent = this;

    yang_name = "tunnel-attributes"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::~TunnelAttributes()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::has_data() const
{
    return destination.is_set
	|| forward_class.is_set
	|| load_share.is_set
	|| path_selection_metric.is_set
	|| record_route.is_set
	|| shutdown.is_set
	|| soft_preemption.is_set
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_data())
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (path_setups !=  nullptr && path_setups->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(soft_preemption.yfilter)
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_operation())
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (path_setups !=  nullptr && path_setups->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.yfilter)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-bandwidth")
    {
        if(auto_bandwidth == nullptr)
        {
            auto_bandwidth = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth>();
        }
        return auto_bandwidth;
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    if(child_yang_name == "path-setups")
    {
        if(path_setups == nullptr)
        {
            path_setups = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups>();
        }
        return path_setups;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "tunnel-path-selection")
    {
        if(tunnel_path_selection == nullptr)
        {
            tunnel_path_selection = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection>();
        }
        return tunnel_path_selection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_bandwidth != nullptr)
    {
        children["auto-bandwidth"] = auto_bandwidth;
    }

    if(autoroute != nullptr)
    {
        children["autoroute"] = autoroute;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    if(path_setups != nullptr)
    {
        children["path-setups"] = path_setups;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(tunnel_path_selection != nullptr)
    {
        children["tunnel-path-selection"] = tunnel_path_selection;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
        soft_preemption.value_namespace = name_space;
        soft_preemption.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-bandwidth" || name == "autoroute" || name == "bandwidth" || name == "fast-reroute" || name == "logging" || name == "new-style-affinity-affinity-types" || name == "path-setups" || name == "priority" || name == "tunnel-path-selection" || name == "destination" || name == "forward-class" || name == "load-share" || name == "path-selection-metric" || name == "record-route" || name == "shutdown" || name == "soft-preemption")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AutoBandwidth()
    :
    application_frequency{YType::uint32, "application-frequency"},
    collection_only{YType::empty, "collection-only"},
    enabled{YType::boolean, "enabled"},
    overflow_enable{YType::boolean, "overflow-enable"},
    underflow_enable{YType::boolean, "underflow-enable"}
    	,
    adjustment_threshold(nullptr) // presence node
	,bandwidth_limits(nullptr) // presence node
	,overflow(nullptr) // presence node
	,underflow(nullptr) // presence node
{

    yang_name = "auto-bandwidth"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::~AutoBandwidth()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::has_data() const
{
    return application_frequency.is_set
	|| collection_only.is_set
	|| enabled.is_set
	|| overflow_enable.is_set
	|| underflow_enable.is_set
	|| (adjustment_threshold !=  nullptr && adjustment_threshold->has_data())
	|| (bandwidth_limits !=  nullptr && bandwidth_limits->has_data())
	|| (overflow !=  nullptr && overflow->has_data())
	|| (underflow !=  nullptr && underflow->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_frequency.yfilter)
	|| ydk::is_set(collection_only.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(overflow_enable.yfilter)
	|| ydk::is_set(underflow_enable.yfilter)
	|| (adjustment_threshold !=  nullptr && adjustment_threshold->has_operation())
	|| (bandwidth_limits !=  nullptr && bandwidth_limits->has_operation())
	|| (overflow !=  nullptr && overflow->has_operation())
	|| (underflow !=  nullptr && underflow->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_frequency.is_set || is_set(application_frequency.yfilter)) leaf_name_data.push_back(application_frequency.get_name_leafdata());
    if (collection_only.is_set || is_set(collection_only.yfilter)) leaf_name_data.push_back(collection_only.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (overflow_enable.is_set || is_set(overflow_enable.yfilter)) leaf_name_data.push_back(overflow_enable.get_name_leafdata());
    if (underflow_enable.is_set || is_set(underflow_enable.yfilter)) leaf_name_data.push_back(underflow_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjustment-threshold")
    {
        if(adjustment_threshold == nullptr)
        {
            adjustment_threshold = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold>();
        }
        return adjustment_threshold;
    }

    if(child_yang_name == "bandwidth-limits")
    {
        if(bandwidth_limits == nullptr)
        {
            bandwidth_limits = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits>();
        }
        return bandwidth_limits;
    }

    if(child_yang_name == "overflow")
    {
        if(overflow == nullptr)
        {
            overflow = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow>();
        }
        return overflow;
    }

    if(child_yang_name == "underflow")
    {
        if(underflow == nullptr)
        {
            underflow = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow>();
        }
        return underflow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjustment_threshold != nullptr)
    {
        children["adjustment-threshold"] = adjustment_threshold;
    }

    if(bandwidth_limits != nullptr)
    {
        children["bandwidth-limits"] = bandwidth_limits;
    }

    if(overflow != nullptr)
    {
        children["overflow"] = overflow;
    }

    if(underflow != nullptr)
    {
        children["underflow"] = underflow;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-frequency")
    {
        application_frequency = value;
        application_frequency.value_namespace = name_space;
        application_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-only")
    {
        collection_only = value;
        collection_only.value_namespace = name_space;
        collection_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-enable")
    {
        overflow_enable = value;
        overflow_enable.value_namespace = name_space;
        overflow_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-enable")
    {
        underflow_enable = value;
        underflow_enable.value_namespace = name_space;
        underflow_enable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-frequency")
    {
        application_frequency.yfilter = yfilter;
    }
    if(value_path == "collection-only")
    {
        collection_only.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "overflow-enable")
    {
        overflow_enable.yfilter = yfilter;
    }
    if(value_path == "underflow-enable")
    {
        underflow_enable.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjustment-threshold" || name == "bandwidth-limits" || name == "overflow" || name == "underflow" || name == "application-frequency" || name == "collection-only" || name == "enabled" || name == "overflow-enable" || name == "underflow-enable")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::AdjustmentThreshold()
    :
    adjustment_threshold_percent{YType::uint32, "adjustment-threshold-percent"},
    adjustment_threshold_value{YType::uint32, "adjustment-threshold-value"}
{

    yang_name = "adjustment-threshold"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::~AdjustmentThreshold()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::has_data() const
{
    return adjustment_threshold_percent.is_set
	|| adjustment_threshold_value.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjustment_threshold_percent.yfilter)
	|| ydk::is_set(adjustment_threshold_value.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjustment-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_threshold_percent.is_set || is_set(adjustment_threshold_percent.yfilter)) leaf_name_data.push_back(adjustment_threshold_percent.get_name_leafdata());
    if (adjustment_threshold_value.is_set || is_set(adjustment_threshold_value.yfilter)) leaf_name_data.push_back(adjustment_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent = value;
        adjustment_threshold_percent.value_namespace = name_space;
        adjustment_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value = value;
        adjustment_threshold_value.value_namespace = name_space;
        adjustment_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjustment-threshold-percent" || name == "adjustment-threshold-value")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::BandwidthLimits()
    :
    bandwidth_max_limit{YType::uint32, "bandwidth-max-limit"},
    bandwidth_min_limit{YType::uint32, "bandwidth-min-limit"}
{

    yang_name = "bandwidth-limits"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::~BandwidthLimits()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::has_data() const
{
    return bandwidth_max_limit.is_set
	|| bandwidth_min_limit.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_max_limit.yfilter)
	|| ydk::is_set(bandwidth_min_limit.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_max_limit.is_set || is_set(bandwidth_max_limit.yfilter)) leaf_name_data.push_back(bandwidth_max_limit.get_name_leafdata());
    if (bandwidth_min_limit.is_set || is_set(bandwidth_min_limit.yfilter)) leaf_name_data.push_back(bandwidth_min_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-max-limit")
    {
        bandwidth_max_limit = value;
        bandwidth_max_limit.value_namespace = name_space;
        bandwidth_max_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-min-limit")
    {
        bandwidth_min_limit = value;
        bandwidth_min_limit.value_namespace = name_space;
        bandwidth_min_limit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-max-limit")
    {
        bandwidth_max_limit.yfilter = yfilter;
    }
    if(value_path == "bandwidth-min-limit")
    {
        bandwidth_min_limit.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-max-limit" || name == "bandwidth-min-limit")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::Overflow()
    :
    overflow_threshold_limit{YType::uint32, "overflow-threshold-limit"},
    overflow_threshold_percent{YType::uint32, "overflow-threshold-percent"},
    overflow_threshold_value{YType::uint32, "overflow-threshold-value"}
{

    yang_name = "overflow"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::~Overflow()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::has_data() const
{
    return overflow_threshold_limit.is_set
	|| overflow_threshold_percent.is_set
	|| overflow_threshold_value.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(overflow_threshold_limit.yfilter)
	|| ydk::is_set(overflow_threshold_percent.yfilter)
	|| ydk::is_set(overflow_threshold_value.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overflow_threshold_limit.is_set || is_set(overflow_threshold_limit.yfilter)) leaf_name_data.push_back(overflow_threshold_limit.get_name_leafdata());
    if (overflow_threshold_percent.is_set || is_set(overflow_threshold_percent.yfilter)) leaf_name_data.push_back(overflow_threshold_percent.get_name_leafdata());
    if (overflow_threshold_value.is_set || is_set(overflow_threshold_value.yfilter)) leaf_name_data.push_back(overflow_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit = value;
        overflow_threshold_limit.value_namespace = name_space;
        overflow_threshold_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent = value;
        overflow_threshold_percent.value_namespace = name_space;
        overflow_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value = value;
        overflow_threshold_value.value_namespace = name_space;
        overflow_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overflow-threshold-limit" || name == "overflow-threshold-percent" || name == "overflow-threshold-value")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::Underflow()
    :
    underflow_threshold_limit{YType::uint32, "underflow-threshold-limit"},
    underflow_threshold_percent{YType::uint32, "underflow-threshold-percent"},
    underflow_threshold_value{YType::uint32, "underflow-threshold-value"}
{

    yang_name = "underflow"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::~Underflow()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::has_data() const
{
    return underflow_threshold_limit.is_set
	|| underflow_threshold_percent.is_set
	|| underflow_threshold_value.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(underflow_threshold_limit.yfilter)
	|| ydk::is_set(underflow_threshold_percent.yfilter)
	|| ydk::is_set(underflow_threshold_value.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (underflow_threshold_limit.is_set || is_set(underflow_threshold_limit.yfilter)) leaf_name_data.push_back(underflow_threshold_limit.get_name_leafdata());
    if (underflow_threshold_percent.is_set || is_set(underflow_threshold_percent.yfilter)) leaf_name_data.push_back(underflow_threshold_percent.get_name_leafdata());
    if (underflow_threshold_value.is_set || is_set(underflow_threshold_value.yfilter)) leaf_name_data.push_back(underflow_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit = value;
        underflow_threshold_limit.value_namespace = name_space;
        underflow_threshold_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent = value;
        underflow_threshold_percent.value_namespace = name_space;
        underflow_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value = value;
        underflow_threshold_value.value_namespace = name_space;
        underflow_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "underflow-threshold-limit" || name == "underflow-threshold-percent" || name == "underflow-threshold-value")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Autoroute()
    :
    autoroute_announce(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce>())
	,destinations(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations>())
{
    autoroute_announce->parent = this;
    destinations->parent = this;

    yang_name = "autoroute"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::~Autoroute()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::has_data() const
{
    return (autoroute_announce !=  nullptr && autoroute_announce->has_data())
	|| (destinations !=  nullptr && destinations->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::has_operation() const
{
    return is_set(yfilter)
	|| (autoroute_announce !=  nullptr && autoroute_announce->has_operation())
	|| (destinations !=  nullptr && destinations->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoroute-announce")
    {
        if(autoroute_announce == nullptr)
        {
            autoroute_announce = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce>();
        }
        return autoroute_announce;
    }

    if(child_yang_name == "destinations")
    {
        if(destinations == nullptr)
        {
            destinations = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations>();
        }
        return destinations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoroute_announce != nullptr)
    {
        children["autoroute-announce"] = autoroute_announce;
    }

    if(destinations != nullptr)
    {
        children["destinations"] = destinations;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoroute-announce" || name == "destinations")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::AutorouteAnnounce()
    :
    enable{YType::empty, "enable"},
    include_ipv6{YType::empty, "include-ipv6"}
    	,
    exclude_traffic(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic>())
	,metric(std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric>())
{
    exclude_traffic->parent = this;
    metric->parent = this;

    yang_name = "autoroute-announce"; yang_parent_name = "autoroute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::~AutorouteAnnounce()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::has_data() const
{
    return enable.is_set
	|| include_ipv6.is_set
	|| (exclude_traffic !=  nullptr && exclude_traffic->has_data())
	|| (metric !=  nullptr && metric->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(include_ipv6.yfilter)
	|| (exclude_traffic !=  nullptr && exclude_traffic->has_operation())
	|| (metric !=  nullptr && metric->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute-announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (include_ipv6.is_set || is_set(include_ipv6.yfilter)) leaf_name_data.push_back(include_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-traffic")
    {
        if(exclude_traffic == nullptr)
        {
            exclude_traffic = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic>();
        }
        return exclude_traffic;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exclude_traffic != nullptr)
    {
        children["exclude-traffic"] = exclude_traffic;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6 = value;
        include_ipv6.value_namespace = name_space;
        include_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-traffic" || name == "metric" || name == "enable" || name == "include-ipv6")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::ExcludeTraffic()
    :
    segment_routing{YType::empty, "segment-routing"}
{

    yang_name = "exclude-traffic"; yang_parent_name = "autoroute-announce"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::~ExcludeTraffic()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_data() const
{
    return segment_routing.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_routing.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::Metric()
    :
    absolute_metric{YType::uint32, "absolute-metric"},
    constant_metric{YType::uint32, "constant-metric"},
    metric_type{YType::enumeration, "metric-type"},
    relative_metric{YType::int32, "relative-metric"}
{

    yang_name = "metric"; yang_parent_name = "autoroute-announce"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::~Metric()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::has_data() const
{
    return absolute_metric.is_set
	|| constant_metric.is_set
	|| metric_type.is_set
	|| relative_metric.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolute_metric.yfilter)
	|| ydk::is_set(constant_metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(relative_metric.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_metric.is_set || is_set(absolute_metric.yfilter)) leaf_name_data.push_back(absolute_metric.get_name_leafdata());
    if (constant_metric.is_set || is_set(constant_metric.yfilter)) leaf_name_data.push_back(constant_metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (relative_metric.is_set || is_set(relative_metric.yfilter)) leaf_name_data.push_back(relative_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "absolute-metric")
    {
        absolute_metric = value;
        absolute_metric.value_namespace = name_space;
        absolute_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constant-metric")
    {
        constant_metric = value;
        constant_metric.value_namespace = name_space;
        constant_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative-metric")
    {
        relative_metric = value;
        relative_metric.value_namespace = name_space;
        relative_metric.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "absolute-metric")
    {
        absolute_metric.yfilter = yfilter;
    }
    if(value_path == "constant-metric")
    {
        constant_metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "relative-metric")
    {
        relative_metric.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute-metric" || name == "constant-metric" || name == "metric-type" || name == "relative-metric")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destinations()
{

    yang_name = "destinations"; yang_parent_name = "autoroute"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::~Destinations()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::has_data() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destinations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        for(auto const & c : destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination>();
        c->parent = this;
        destination.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::Destination()
    :
    destination_address{YType::str, "destination-address"}
{

    yang_name = "destination"; yang_parent_name = "destinations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::~Destination()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::has_data() const
{
    return destination_address.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Destinations::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    dste_type{YType::enumeration, "dste-type"}
{

    yang_name = "bandwidth"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::~Bandwidth()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| class_or_pool_type.is_set
	|| dste_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(class_or_pool_type.yfilter)
	|| ydk::is_set(dste_type.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.yfilter)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
        class_or_pool_type.value_namespace = name_space;
        class_or_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type.yfilter = yfilter;
    }
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "class-or-pool-type" || name == "dste-type")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::FastReroute()
    :
    bandwidth_protection{YType::uint32, "bandwidth-protection"},
    node_protection{YType::uint32, "node-protection"}
{

    yang_name = "fast-reroute"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::~FastReroute()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::has_data() const
{
    return bandwidth_protection.is_set
	|| node_protection.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_protection.yfilter)
	|| ydk::is_set(node_protection.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_protection.is_set || is_set(bandwidth_protection.yfilter)) leaf_name_data.push_back(bandwidth_protection.get_name_leafdata());
    if (node_protection.is_set || is_set(node_protection.yfilter)) leaf_name_data.push_back(node_protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection = value;
        bandwidth_protection.value_namespace = name_space;
        bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection")
    {
        node_protection = value;
        node_protection.value_namespace = name_space;
        node_protection.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "node-protection")
    {
        node_protection.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-protection" || name == "node-protection")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::Logging()
    :
    all{YType::empty, "all"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    bfd_state_message{YType::empty, "bfd-state-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    lsp_switch_over_change_message{YType::empty, "lsp-switch-over-change-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"},
    record_route_messsage{YType::empty, "record-route-messsage"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"}
{

    yang_name = "logging"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::~Logging()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::has_data() const
{
    return all.is_set
	|| bandwidth_change_message.is_set
	|| bfd_state_message.is_set
	|| insufficient_bw_message.is_set
	|| lsp_switch_over_change_message.is_set
	|| pcalc_failure_message.is_set
	|| record_route_messsage.is_set
	|| reoptimize_attempts_message.is_set
	|| reoptimized_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(bandwidth_change_message.yfilter)
	|| ydk::is_set(bfd_state_message.yfilter)
	|| ydk::is_set(insufficient_bw_message.yfilter)
	|| ydk::is_set(lsp_switch_over_change_message.yfilter)
	|| ydk::is_set(pcalc_failure_message.yfilter)
	|| ydk::is_set(record_route_messsage.yfilter)
	|| ydk::is_set(reoptimize_attempts_message.yfilter)
	|| ydk::is_set(reoptimized_message.yfilter)
	|| ydk::is_set(reroute_messsage.yfilter)
	|| ydk::is_set(state_message.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.yfilter)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (bfd_state_message.is_set || is_set(bfd_state_message.yfilter)) leaf_name_data.push_back(bfd_state_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.yfilter)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (lsp_switch_over_change_message.is_set || is_set(lsp_switch_over_change_message.yfilter)) leaf_name_data.push_back(lsp_switch_over_change_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.yfilter)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());
    if (record_route_messsage.is_set || is_set(record_route_messsage.yfilter)) leaf_name_data.push_back(record_route_messsage.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.yfilter)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.yfilter)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.yfilter)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
        bandwidth_change_message.value_namespace = name_space;
        bandwidth_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message = value;
        bfd_state_message.value_namespace = name_space;
        bfd_state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
        insufficient_bw_message.value_namespace = name_space;
        insufficient_bw_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message = value;
        lsp_switch_over_change_message.value_namespace = name_space;
        lsp_switch_over_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
        pcalc_failure_message.value_namespace = name_space;
        pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage = value;
        record_route_messsage.value_namespace = name_space;
        record_route_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
        reoptimize_attempts_message.value_namespace = name_space;
        reoptimize_attempts_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
        reoptimized_message.value_namespace = name_space;
        reoptimized_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
        reroute_messsage.value_namespace = name_space;
        reroute_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message.yfilter = yfilter;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message.yfilter = yfilter;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message.yfilter = yfilter;
    }
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message.yfilter = yfilter;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message.yfilter = yfilter;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage.yfilter = yfilter;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message.yfilter = yfilter;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message.yfilter = yfilter;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage.yfilter = yfilter;
    }
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "bandwidth-change-message" || name == "bfd-state-message" || name == "insufficient-bw-message" || name == "lsp-switch-over-change-message" || name == "pcalc-failure-message" || name == "record-route-messsage" || name == "reoptimize-attempts-message" || name == "reoptimized-message" || name == "reroute-messsage" || name == "state-message")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{

    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        for(auto const & c : new_style_affinity_affinity_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(c);
        return c;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : new_style_affinity_affinity_type)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity-affinity-type" || name == "new-style-affinity-affinity-type-affinity1" || name == "new-style-affinity-affinity-type-affinity1-affinity2" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{

    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity10='" <<affinity10 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetups()
{

    yang_name = "path-setups"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::~PathSetups()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::has_data() const
{
    for (std::size_t index=0; index<path_setup.size(); index++)
    {
        if(path_setup[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::has_operation() const
{
    for (std::size_t index=0; index<path_setup.size(); index++)
    {
        if(path_setup[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-setups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-setup")
    {
        for(auto const & c : path_setup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup>();
        c->parent = this;
        path_setup.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_setup)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-setup")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathSetup()
    :
    path_setup_name{YType::str, "path-setup-name"},
    enable{YType::empty, "enable"},
    preference{YType::int32, "preference"}
    	,
    path_computation(nullptr) // presence node
{

    yang_name = "path-setup"; yang_parent_name = "path-setups"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::~PathSetup()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::has_data() const
{
    return path_setup_name.is_set
	|| enable.is_set
	|| preference.is_set
	|| (path_computation !=  nullptr && path_computation->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_setup_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| (path_computation !=  nullptr && path_computation->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-setup" <<"[path-setup-name='" <<path_setup_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_setup_name.is_set || is_set(path_setup_name.yfilter)) leaf_name_data.push_back(path_setup_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-computation")
    {
        if(path_computation == nullptr)
        {
            path_computation = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation>();
        }
        return path_computation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_computation != nullptr)
    {
        children["path-computation"] = path_computation;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-setup-name")
    {
        path_setup_name = value;
        path_setup_name.value_namespace = name_space;
        path_setup_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-setup-name")
    {
        path_setup_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-computation" || name == "path-setup-name" || name == "enable" || name == "preference")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::PathComputation()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    path_computation_method{YType::enumeration, "path-computation-method"},
    path_computation_server{YType::str, "path-computation-server"}
{

    yang_name = "path-computation"; yang_parent_name = "path-setup"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::~PathComputation()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::has_data() const
{
    return explicit_path_name.is_set
	|| path_computation_method.is_set
	|| path_computation_server.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(path_computation_method.yfilter)
	|| ydk::is_set(path_computation_server.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-computation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (path_computation_method.is_set || is_set(path_computation_method.yfilter)) leaf_name_data.push_back(path_computation_method.get_name_leafdata());
    if (path_computation_server.is_set || is_set(path_computation_server.yfilter)) leaf_name_data.push_back(path_computation_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method = value;
        path_computation_method.value_namespace = name_space;
        path_computation_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server = value;
        path_computation_server.value_namespace = name_space;
        path_computation_server.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "path-computation-method")
    {
        path_computation_method.yfilter = yfilter;
    }
    if(value_path == "path-computation-server")
    {
        path_computation_server.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-path-name" || name == "path-computation-method" || name == "path-computation-server")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::Priority()
    :
    hold_priority{YType::uint32, "hold-priority"},
    setup_priority{YType::uint32, "setup-priority"}
{

    yang_name = "priority"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::~Priority()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(setup_priority.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "setup-priority")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::TunnelPathSelection()
    :
    path_selection_cost_limit{YType::uint32, "path-selection-cost-limit"},
    path_selection_hop_limit{YType::uint32, "path-selection-hop-limit"},
    tiebreaker{YType::enumeration, "tiebreaker"}
    	,
    invalidation(nullptr) // presence node
{

    yang_name = "tunnel-path-selection"; yang_parent_name = "tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::~TunnelPathSelection()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::has_data() const
{
    return path_selection_cost_limit.is_set
	|| path_selection_hop_limit.is_set
	|| tiebreaker.is_set
	|| (invalidation !=  nullptr && invalidation->has_data());
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_selection_cost_limit.yfilter)
	|| ydk::is_set(path_selection_hop_limit.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation());
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_selection_cost_limit.is_set || is_set(path_selection_cost_limit.yfilter)) leaf_name_data.push_back(path_selection_cost_limit.get_name_leafdata());
    if (path_selection_hop_limit.is_set || is_set(path_selection_hop_limit.yfilter)) leaf_name_data.push_back(path_selection_hop_limit.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation>();
        }
        return invalidation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit = value;
        path_selection_cost_limit.value_namespace = name_space;
        path_selection_cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-hop-limit")
    {
        path_selection_hop_limit = value;
        path_selection_hop_limit.value_namespace = name_space;
        path_selection_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit.yfilter = yfilter;
    }
    if(value_path == "path-selection-hop-limit")
    {
        path_selection_hop_limit.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "path-selection-cost-limit" || name == "path-selection-hop-limit" || name == "tiebreaker")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::Invalidation()
    :
    path_invalidation_action{YType::enumeration, "path-invalidation-action"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"}
{

    yang_name = "invalidation"; yang_parent_name = "tunnel-path-selection"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::~Invalidation()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::has_data() const
{
    return path_invalidation_action.is_set
	|| path_invalidation_timeout.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-invalidation-action" || name == "path-invalidation-timeout")
        return true;
    return false;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::TunnelId()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_id_type{YType::enumeration, "tunnel-id-type"}
{

    yang_name = "tunnel-id"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::~TunnelId()
{
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::has_data() const
{
    return tunnel_id.is_set
	|| tunnel_id_type.is_set;
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id_type.yfilter);
}

std::string MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_type.is_set || is_set(tunnel_id_type.yfilter)) leaf_name_data.push_back(tunnel_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-type")
    {
        tunnel_id_type = value;
        tunnel_id_type.value_namespace = name_space;
        tunnel_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-type")
    {
        tunnel_id_type.yfilter = yfilter;
    }
}

bool MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id" || name == "tunnel-id-type")
        return true;
    return false;
}

MplsTe::TransportProfile::TransportProfile()
    :
    global_id{YType::uint32, "global-id"},
    node_id{YType::str, "node-id"}
    	,
    alarm(std::make_shared<MplsTe::TransportProfile::Alarm>())
	,bfd(std::make_shared<MplsTe::TransportProfile::Bfd>())
	,fault(std::make_shared<MplsTe::TransportProfile::Fault>())
	,midpoints(std::make_shared<MplsTe::TransportProfile::Midpoints>())
{
    alarm->parent = this;
    bfd->parent = this;
    fault->parent = this;
    midpoints->parent = this;

    yang_name = "transport-profile"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::~TransportProfile()
{
}

bool MplsTe::TransportProfile::has_data() const
{
    return global_id.is_set
	|| node_id.is_set
	|| (alarm !=  nullptr && alarm->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (fault !=  nullptr && fault->has_data())
	|| (midpoints !=  nullptr && midpoints->has_data());
}

bool MplsTe::TransportProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (alarm !=  nullptr && alarm->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (fault !=  nullptr && fault->has_operation())
	|| (midpoints !=  nullptr && midpoints->has_operation());
}

std::string MplsTe::TransportProfile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm")
    {
        if(alarm == nullptr)
        {
            alarm = std::make_shared<MplsTe::TransportProfile::Alarm>();
        }
        return alarm;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<MplsTe::TransportProfile::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "fault")
    {
        if(fault == nullptr)
        {
            fault = std::make_shared<MplsTe::TransportProfile::Fault>();
        }
        return fault;
    }

    if(child_yang_name == "midpoints")
    {
        if(midpoints == nullptr)
        {
            midpoints = std::make_shared<MplsTe::TransportProfile::Midpoints>();
        }
        return midpoints;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alarm != nullptr)
    {
        children["alarm"] = alarm;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(fault != nullptr)
    {
        children["fault"] = fault;
    }

    if(midpoints != nullptr)
    {
        children["midpoints"] = midpoints;
    }

    return children;
}

void MplsTe::TransportProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm" || name == "bfd" || name == "fault" || name == "midpoints" || name == "global-id" || name == "node-id")
        return true;
    return false;
}

MplsTe::TransportProfile::Alarm::Alarm()
    :
    enable_alarm{YType::empty, "enable-alarm"},
    soak_time{YType::uint32, "soak-time"}
    	,
    suppress_event(std::make_shared<MplsTe::TransportProfile::Alarm::SuppressEvent>())
{
    suppress_event->parent = this;

    yang_name = "alarm"; yang_parent_name = "transport-profile"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Alarm::~Alarm()
{
}

bool MplsTe::TransportProfile::Alarm::has_data() const
{
    return enable_alarm.is_set
	|| soak_time.is_set
	|| (suppress_event !=  nullptr && suppress_event->has_data());
}

bool MplsTe::TransportProfile::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_alarm.yfilter)
	|| ydk::is_set(soak_time.yfilter)
	|| (suppress_event !=  nullptr && suppress_event->has_operation());
}

std::string MplsTe::TransportProfile::Alarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Alarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_alarm.is_set || is_set(enable_alarm.yfilter)) leaf_name_data.push_back(enable_alarm.get_name_leafdata());
    if (soak_time.is_set || is_set(soak_time.yfilter)) leaf_name_data.push_back(soak_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress-event")
    {
        if(suppress_event == nullptr)
        {
            suppress_event = std::make_shared<MplsTe::TransportProfile::Alarm::SuppressEvent>();
        }
        return suppress_event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(suppress_event != nullptr)
    {
        children["suppress-event"] = suppress_event;
    }

    return children;
}

void MplsTe::TransportProfile::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-alarm")
    {
        enable_alarm = value;
        enable_alarm.value_namespace = name_space;
        enable_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soak-time")
    {
        soak_time = value;
        soak_time.value_namespace = name_space;
        soak_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-alarm")
    {
        enable_alarm.yfilter = yfilter;
    }
    if(value_path == "soak-time")
    {
        soak_time.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress-event" || name == "enable-alarm" || name == "soak-time")
        return true;
    return false;
}

MplsTe::TransportProfile::Alarm::SuppressEvent::SuppressEvent()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "suppress-event"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Alarm::SuppressEvent::~SuppressEvent()
{
}

bool MplsTe::TransportProfile::Alarm::SuppressEvent::has_data() const
{
    return disable.is_set;
}

bool MplsTe::TransportProfile::Alarm::SuppressEvent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string MplsTe::TransportProfile::Alarm::SuppressEvent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/alarm/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Alarm::SuppressEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress-event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Alarm::SuppressEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Alarm::SuppressEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Alarm::SuppressEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::TransportProfile::Alarm::SuppressEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Alarm::SuppressEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Alarm::SuppressEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

MplsTe::TransportProfile::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_multiplier_standby{YType::uint32, "detection-multiplier-standby"}
    	,
    min_interval(std::make_shared<MplsTe::TransportProfile::Bfd::MinInterval>())
	,min_interval_standby(std::make_shared<MplsTe::TransportProfile::Bfd::MinIntervalStandby>())
{
    min_interval->parent = this;
    min_interval_standby->parent = this;

    yang_name = "bfd"; yang_parent_name = "transport-profile"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Bfd::~Bfd()
{
}

bool MplsTe::TransportProfile::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| detection_multiplier_standby.is_set
	|| (min_interval !=  nullptr && min_interval->has_data())
	|| (min_interval_standby !=  nullptr && min_interval_standby->has_data());
}

bool MplsTe::TransportProfile::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(detection_multiplier_standby.yfilter)
	|| (min_interval !=  nullptr && min_interval->has_operation())
	|| (min_interval_standby !=  nullptr && min_interval_standby->has_operation());
}

std::string MplsTe::TransportProfile::Bfd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_multiplier_standby.is_set || is_set(detection_multiplier_standby.yfilter)) leaf_name_data.push_back(detection_multiplier_standby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min-interval")
    {
        if(min_interval == nullptr)
        {
            min_interval = std::make_shared<MplsTe::TransportProfile::Bfd::MinInterval>();
        }
        return min_interval;
    }

    if(child_yang_name == "min-interval-standby")
    {
        if(min_interval_standby == nullptr)
        {
            min_interval_standby = std::make_shared<MplsTe::TransportProfile::Bfd::MinIntervalStandby>();
        }
        return min_interval_standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min_interval != nullptr)
    {
        children["min-interval"] = min_interval;
    }

    if(min_interval_standby != nullptr)
    {
        children["min-interval-standby"] = min_interval_standby;
    }

    return children;
}

void MplsTe::TransportProfile::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier-standby")
    {
        detection_multiplier_standby = value;
        detection_multiplier_standby.value_namespace = name_space;
        detection_multiplier_standby.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier-standby")
    {
        detection_multiplier_standby.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-interval" || name == "min-interval-standby" || name == "detection-multiplier" || name == "detection-multiplier-standby")
        return true;
    return false;
}

MplsTe::TransportProfile::Bfd::MinInterval::MinInterval()
    :
    interval_ms{YType::uint32, "interval-ms"},
    interval_us{YType::uint32, "interval-us"}
{

    yang_name = "min-interval"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Bfd::MinInterval::~MinInterval()
{
}

bool MplsTe::TransportProfile::Bfd::MinInterval::has_data() const
{
    return interval_ms.is_set
	|| interval_us.is_set;
}

bool MplsTe::TransportProfile::Bfd::MinInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval_ms.yfilter)
	|| ydk::is_set(interval_us.yfilter);
}

std::string MplsTe::TransportProfile::Bfd::MinInterval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Bfd::MinInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Bfd::MinInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval_ms.is_set || is_set(interval_ms.yfilter)) leaf_name_data.push_back(interval_ms.get_name_leafdata());
    if (interval_us.is_set || is_set(interval_us.yfilter)) leaf_name_data.push_back(interval_us.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Bfd::MinInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Bfd::MinInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::TransportProfile::Bfd::MinInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval-ms")
    {
        interval_ms = value;
        interval_ms.value_namespace = name_space;
        interval_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-us")
    {
        interval_us = value;
        interval_us.value_namespace = name_space;
        interval_us.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Bfd::MinInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval-ms")
    {
        interval_ms.yfilter = yfilter;
    }
    if(value_path == "interval-us")
    {
        interval_us.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Bfd::MinInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval-ms" || name == "interval-us")
        return true;
    return false;
}

MplsTe::TransportProfile::Bfd::MinIntervalStandby::MinIntervalStandby()
    :
    interval_standby_ms{YType::uint32, "interval-standby-ms"},
    interval_standby_us{YType::uint32, "interval-standby-us"}
{

    yang_name = "min-interval-standby"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Bfd::MinIntervalStandby::~MinIntervalStandby()
{
}

bool MplsTe::TransportProfile::Bfd::MinIntervalStandby::has_data() const
{
    return interval_standby_ms.is_set
	|| interval_standby_us.is_set;
}

bool MplsTe::TransportProfile::Bfd::MinIntervalStandby::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval_standby_ms.yfilter)
	|| ydk::is_set(interval_standby_us.yfilter);
}

std::string MplsTe::TransportProfile::Bfd::MinIntervalStandby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Bfd::MinIntervalStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-interval-standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Bfd::MinIntervalStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval_standby_ms.is_set || is_set(interval_standby_ms.yfilter)) leaf_name_data.push_back(interval_standby_ms.get_name_leafdata());
    if (interval_standby_us.is_set || is_set(interval_standby_us.yfilter)) leaf_name_data.push_back(interval_standby_us.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Bfd::MinIntervalStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Bfd::MinIntervalStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::TransportProfile::Bfd::MinIntervalStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval-standby-ms")
    {
        interval_standby_ms = value;
        interval_standby_ms.value_namespace = name_space;
        interval_standby_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-standby-us")
    {
        interval_standby_us = value;
        interval_standby_us.value_namespace = name_space;
        interval_standby_us.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Bfd::MinIntervalStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval-standby-ms")
    {
        interval_standby_ms.yfilter = yfilter;
    }
    if(value_path == "interval-standby-us")
    {
        interval_standby_us.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Bfd::MinIntervalStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval-standby-ms" || name == "interval-standby-us")
        return true;
    return false;
}

MplsTe::TransportProfile::Fault::Fault()
    :
    refresh_interval{YType::uint32, "refresh-interval"},
    wait_to_restore_interval{YType::uint32, "wait-to-restore-interval"}
    	,
    protection_trigger(std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger>())
{
    protection_trigger->parent = this;

    yang_name = "fault"; yang_parent_name = "transport-profile"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Fault::~Fault()
{
}

bool MplsTe::TransportProfile::Fault::has_data() const
{
    return refresh_interval.is_set
	|| wait_to_restore_interval.is_set
	|| (protection_trigger !=  nullptr && protection_trigger->has_data());
}

bool MplsTe::TransportProfile::Fault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(refresh_interval.yfilter)
	|| ydk::is_set(wait_to_restore_interval.yfilter)
	|| (protection_trigger !=  nullptr && protection_trigger->has_operation());
}

std::string MplsTe::TransportProfile::Fault::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Fault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Fault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refresh_interval.is_set || is_set(refresh_interval.yfilter)) leaf_name_data.push_back(refresh_interval.get_name_leafdata());
    if (wait_to_restore_interval.is_set || is_set(wait_to_restore_interval.yfilter)) leaf_name_data.push_back(wait_to_restore_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Fault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection-trigger")
    {
        if(protection_trigger == nullptr)
        {
            protection_trigger = std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger>();
        }
        return protection_trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Fault::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protection_trigger != nullptr)
    {
        children["protection-trigger"] = protection_trigger;
    }

    return children;
}

void MplsTe::TransportProfile::Fault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "refresh-interval")
    {
        refresh_interval = value;
        refresh_interval.value_namespace = name_space;
        refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-interval")
    {
        wait_to_restore_interval = value;
        wait_to_restore_interval.value_namespace = name_space;
        wait_to_restore_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Fault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "refresh-interval")
    {
        refresh_interval.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-interval")
    {
        wait_to_restore_interval.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Fault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection-trigger" || name == "refresh-interval" || name == "wait-to-restore-interval")
        return true;
    return false;
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::ProtectionTrigger()
    :
    ais{YType::empty, "ais"}
    	,
    ldi(std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi>())
	,lkr(std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr>())
{
    ldi->parent = this;
    lkr->parent = this;

    yang_name = "protection-trigger"; yang_parent_name = "fault"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::~ProtectionTrigger()
{
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::has_data() const
{
    return ais.is_set
	|| (ldi !=  nullptr && ldi->has_data())
	|| (lkr !=  nullptr && lkr->has_data());
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ais.yfilter)
	|| (ldi !=  nullptr && ldi->has_operation())
	|| (lkr !=  nullptr && lkr->has_operation());
}

std::string MplsTe::TransportProfile::Fault::ProtectionTrigger::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/fault/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Fault::ProtectionTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Fault::ProtectionTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais.is_set || is_set(ais.yfilter)) leaf_name_data.push_back(ais.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Fault::ProtectionTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldi")
    {
        if(ldi == nullptr)
        {
            ldi = std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi>();
        }
        return ldi;
    }

    if(child_yang_name == "lkr")
    {
        if(lkr == nullptr)
        {
            lkr = std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr>();
        }
        return lkr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Fault::ProtectionTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ldi != nullptr)
    {
        children["ldi"] = ldi;
    }

    if(lkr != nullptr)
    {
        children["lkr"] = lkr;
    }

    return children;
}

void MplsTe::TransportProfile::Fault::ProtectionTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ais")
    {
        ais = value;
        ais.value_namespace = name_space;
        ais.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Fault::ProtectionTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ais")
    {
        ais.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldi" || name == "lkr" || name == "ais")
        return true;
    return false;
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::Ldi()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "ldi"; yang_parent_name = "protection-trigger"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::~Ldi()
{
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::has_data() const
{
    return disable.is_set;
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/fault/protection-trigger/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::Lkr()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "lkr"; yang_parent_name = "protection-trigger"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::~Lkr()
{
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::has_data() const
{
    return disable.is_set;
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/fault/protection-trigger/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lkr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

MplsTe::TransportProfile::Midpoints::Midpoints()
{

    yang_name = "midpoints"; yang_parent_name = "transport-profile"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Midpoints::~Midpoints()
{
}

bool MplsTe::TransportProfile::Midpoints::has_data() const
{
    for (std::size_t index=0; index<midpoint.size(); index++)
    {
        if(midpoint[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::TransportProfile::Midpoints::has_operation() const
{
    for (std::size_t index=0; index<midpoint.size(); index++)
    {
        if(midpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::TransportProfile::Midpoints::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Midpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Midpoints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "midpoint")
    {
        for(auto const & c : midpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint>();
        c->parent = this;
        midpoint.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Midpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : midpoint)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::TransportProfile::Midpoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::TransportProfile::Midpoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::TransportProfile::Midpoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "midpoint")
        return true;
    return false;
}


}
}

