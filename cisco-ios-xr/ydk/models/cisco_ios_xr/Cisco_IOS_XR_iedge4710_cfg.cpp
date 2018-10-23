
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_iedge4710_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_iedge4710_cfg {

SubscriberManager::SubscriberManager()
    :
    accounting(std::make_shared<SubscriberManager::Accounting>())
    , srg(std::make_shared<SubscriberManager::Srg>())
{
    accounting->parent = this;
    srg->parent = this;

    yang_name = "subscriber-manager"; yang_parent_name = "Cisco-IOS-XR-iedge4710-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

SubscriberManager::~SubscriberManager()
{
}

bool SubscriberManager::has_data() const
{
    if (is_presence_container) return true;
    return (accounting !=  nullptr && accounting->has_data())
	|| (srg !=  nullptr && srg->has_data());
}

bool SubscriberManager::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (srg !=  nullptr && srg->has_operation());
}

std::string SubscriberManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberManager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<SubscriberManager::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "srg")
    {
        if(srg == nullptr)
        {
            srg = std::make_shared<SubscriberManager::Srg>();
        }
        return srg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberManager::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(srg != nullptr)
    {
        _children["srg"] = srg;
    }

    return _children;
}

void SubscriberManager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberManager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SubscriberManager::clone_ptr() const
{
    return std::make_shared<SubscriberManager>();
}

std::string SubscriberManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubscriberManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubscriberManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SubscriberManager::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SubscriberManager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "srg")
        return true;
    return false;
}

SubscriberManager::Accounting::Accounting()
    :
    send_stop(std::make_shared<SubscriberManager::Accounting::SendStop>())
    , interim(std::make_shared<SubscriberManager::Accounting::Interim>())
{
    send_stop->parent = this;
    interim->parent = this;

    yang_name = "accounting"; yang_parent_name = "subscriber-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberManager::Accounting::~Accounting()
{
}

bool SubscriberManager::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return (send_stop !=  nullptr && send_stop->has_data())
	|| (interim !=  nullptr && interim->has_data());
}

bool SubscriberManager::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| (send_stop !=  nullptr && send_stop->has_operation())
	|| (interim !=  nullptr && interim->has_operation());
}

std::string SubscriberManager::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberManager::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberManager::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberManager::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send-stop")
    {
        if(send_stop == nullptr)
        {
            send_stop = std::make_shared<SubscriberManager::Accounting::SendStop>();
        }
        return send_stop;
    }

    if(child_yang_name == "interim")
    {
        if(interim == nullptr)
        {
            interim = std::make_shared<SubscriberManager::Accounting::Interim>();
        }
        return interim;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberManager::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(send_stop != nullptr)
    {
        _children["send-stop"] = send_stop;
    }

    if(interim != nullptr)
    {
        _children["interim"] = interim;
    }

    return _children;
}

void SubscriberManager::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberManager::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberManager::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-stop" || name == "interim")
        return true;
    return false;
}

SubscriberManager::Accounting::SendStop::SendStop()
    :
    setup_failure(std::make_shared<SubscriberManager::Accounting::SendStop::SetupFailure>())
{
    setup_failure->parent = this;

    yang_name = "send-stop"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberManager::Accounting::SendStop::~SendStop()
{
}

bool SubscriberManager::Accounting::SendStop::has_data() const
{
    if (is_presence_container) return true;
    return (setup_failure !=  nullptr && setup_failure->has_data());
}

bool SubscriberManager::Accounting::SendStop::has_operation() const
{
    return is_set(yfilter)
	|| (setup_failure !=  nullptr && setup_failure->has_operation());
}

std::string SubscriberManager::Accounting::SendStop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-manager/accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberManager::Accounting::SendStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberManager::Accounting::SendStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberManager::Accounting::SendStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "setup-failure")
    {
        if(setup_failure == nullptr)
        {
            setup_failure = std::make_shared<SubscriberManager::Accounting::SendStop::SetupFailure>();
        }
        return setup_failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberManager::Accounting::SendStop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(setup_failure != nullptr)
    {
        _children["setup-failure"] = setup_failure;
    }

    return _children;
}

void SubscriberManager::Accounting::SendStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberManager::Accounting::SendStop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberManager::Accounting::SendStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-failure")
        return true;
    return false;
}

SubscriberManager::Accounting::SendStop::SetupFailure::SetupFailure()
    :
    method_list_name{YType::str, "method-list-name"}
{

    yang_name = "setup-failure"; yang_parent_name = "send-stop"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberManager::Accounting::SendStop::SetupFailure::~SetupFailure()
{
}

bool SubscriberManager::Accounting::SendStop::SetupFailure::has_data() const
{
    if (is_presence_container) return true;
    return method_list_name.is_set;
}

bool SubscriberManager::Accounting::SendStop::SetupFailure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_list_name.yfilter);
}

std::string SubscriberManager::Accounting::SendStop::SetupFailure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-manager/accounting/send-stop/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberManager::Accounting::SendStop::SetupFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setup-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberManager::Accounting::SendStop::SetupFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_list_name.is_set || is_set(method_list_name.yfilter)) leaf_name_data.push_back(method_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberManager::Accounting::SendStop::SetupFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberManager::Accounting::SendStop::SetupFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberManager::Accounting::SendStop::SetupFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-list-name")
    {
        method_list_name = value;
        method_list_name.value_namespace = name_space;
        method_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberManager::Accounting::SendStop::SetupFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-list-name")
    {
        method_list_name.yfilter = yfilter;
    }
}

bool SubscriberManager::Accounting::SendStop::SetupFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list-name")
        return true;
    return false;
}

SubscriberManager::Accounting::Interim::Interim()
    :
    variation(std::make_shared<SubscriberManager::Accounting::Interim::Variation>())
{
    variation->parent = this;

    yang_name = "interim"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberManager::Accounting::Interim::~Interim()
{
}

bool SubscriberManager::Accounting::Interim::has_data() const
{
    if (is_presence_container) return true;
    return (variation !=  nullptr && variation->has_data());
}

bool SubscriberManager::Accounting::Interim::has_operation() const
{
    return is_set(yfilter)
	|| (variation !=  nullptr && variation->has_operation());
}

std::string SubscriberManager::Accounting::Interim::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-manager/accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberManager::Accounting::Interim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberManager::Accounting::Interim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberManager::Accounting::Interim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "variation")
    {
        if(variation == nullptr)
        {
            variation = std::make_shared<SubscriberManager::Accounting::Interim::Variation>();
        }
        return variation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberManager::Accounting::Interim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(variation != nullptr)
    {
        _children["variation"] = variation;
    }

    return _children;
}

void SubscriberManager::Accounting::Interim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberManager::Accounting::Interim::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberManager::Accounting::Interim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "variation")
        return true;
    return false;
}

SubscriberManager::Accounting::Interim::Variation::Variation()
    :
    maximum_percentage_variation{YType::uint32, "maximum-percentage-variation"}
{

    yang_name = "variation"; yang_parent_name = "interim"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberManager::Accounting::Interim::Variation::~Variation()
{
}

bool SubscriberManager::Accounting::Interim::Variation::has_data() const
{
    if (is_presence_container) return true;
    return maximum_percentage_variation.is_set;
}

bool SubscriberManager::Accounting::Interim::Variation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_percentage_variation.yfilter);
}

std::string SubscriberManager::Accounting::Interim::Variation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-manager/accounting/interim/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberManager::Accounting::Interim::Variation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberManager::Accounting::Interim::Variation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_percentage_variation.is_set || is_set(maximum_percentage_variation.yfilter)) leaf_name_data.push_back(maximum_percentage_variation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberManager::Accounting::Interim::Variation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberManager::Accounting::Interim::Variation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberManager::Accounting::Interim::Variation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-percentage-variation")
    {
        maximum_percentage_variation = value;
        maximum_percentage_variation.value_namespace = name_space;
        maximum_percentage_variation.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberManager::Accounting::Interim::Variation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-percentage-variation")
    {
        maximum_percentage_variation.yfilter = yfilter;
    }
}

bool SubscriberManager::Accounting::Interim::Variation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-percentage-variation")
        return true;
    return false;
}

SubscriberManager::Srg::Srg()
    :
    sync_account_session_id{YType::empty, "sync-account-session-id"}
{

    yang_name = "srg"; yang_parent_name = "subscriber-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberManager::Srg::~Srg()
{
}

bool SubscriberManager::Srg::has_data() const
{
    if (is_presence_container) return true;
    return sync_account_session_id.is_set;
}

bool SubscriberManager::Srg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_account_session_id.yfilter);
}

std::string SubscriberManager::Srg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberManager::Srg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberManager::Srg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_account_session_id.is_set || is_set(sync_account_session_id.yfilter)) leaf_name_data.push_back(sync_account_session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberManager::Srg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberManager::Srg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberManager::Srg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-account-session-id")
    {
        sync_account_session_id = value;
        sync_account_session_id.value_namespace = name_space;
        sync_account_session_id.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberManager::Srg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-account-session-id")
    {
        sync_account_session_id.yfilter = yfilter;
    }
}

bool SubscriberManager::Srg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-account-session-id")
        return true;
    return false;
}

SubscriberFeaturette::SubscriberFeaturette()
    :
    featurette_name(this, {"featurette"})
{

    yang_name = "subscriber-featurette"; yang_parent_name = "Cisco-IOS-XR-iedge4710-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

SubscriberFeaturette::~SubscriberFeaturette()
{
}

bool SubscriberFeaturette::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<featurette_name.len(); index++)
    {
        if(featurette_name[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberFeaturette::has_operation() const
{
    for (std::size_t index=0; index<featurette_name.len(); index++)
    {
        if(featurette_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberFeaturette::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-featurette";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberFeaturette::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberFeaturette::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "featurette-name")
    {
        auto ent_ = std::make_shared<SubscriberFeaturette::FeaturetteName>();
        ent_->parent = this;
        featurette_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberFeaturette::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : featurette_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SubscriberFeaturette::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberFeaturette::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SubscriberFeaturette::clone_ptr() const
{
    return std::make_shared<SubscriberFeaturette>();
}

std::string SubscriberFeaturette::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubscriberFeaturette::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubscriberFeaturette::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SubscriberFeaturette::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SubscriberFeaturette::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "featurette-name")
        return true;
    return false;
}

SubscriberFeaturette::FeaturetteName::FeaturetteName()
    :
    featurette{YType::str, "featurette"},
    enable{YType::uint32, "enable"}
{

    yang_name = "featurette-name"; yang_parent_name = "subscriber-featurette"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberFeaturette::FeaturetteName::~FeaturetteName()
{
}

bool SubscriberFeaturette::FeaturetteName::has_data() const
{
    if (is_presence_container) return true;
    return featurette.is_set
	|| enable.is_set;
}

bool SubscriberFeaturette::FeaturetteName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(featurette.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string SubscriberFeaturette::FeaturetteName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-featurette/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberFeaturette::FeaturetteName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "featurette-name";
    ADD_KEY_TOKEN(featurette, "featurette");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberFeaturette::FeaturetteName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (featurette.is_set || is_set(featurette.yfilter)) leaf_name_data.push_back(featurette.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberFeaturette::FeaturetteName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberFeaturette::FeaturetteName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberFeaturette::FeaturetteName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "featurette")
    {
        featurette = value;
        featurette.value_namespace = name_space;
        featurette.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberFeaturette::FeaturetteName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "featurette")
    {
        featurette.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool SubscriberFeaturette::FeaturetteName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "featurette" || name == "enable")
        return true;
    return false;
}

IedgeLicenseManager::IedgeLicenseManager()
    :
    session_limit{YType::uint32, "session-limit"}
{

    yang_name = "iedge-license-manager"; yang_parent_name = "Cisco-IOS-XR-iedge4710-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

IedgeLicenseManager::~IedgeLicenseManager()
{
}

bool IedgeLicenseManager::has_data() const
{
    if (is_presence_container) return true;
    return session_limit.is_set;
}

bool IedgeLicenseManager::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_limit.yfilter);
}

std::string IedgeLicenseManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:iedge-license-manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IedgeLicenseManager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_limit.is_set || is_set(session_limit.yfilter)) leaf_name_data.push_back(session_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IedgeLicenseManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IedgeLicenseManager::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IedgeLicenseManager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-limit")
    {
        session_limit = value;
        session_limit.value_namespace = name_space;
        session_limit.value_namespace_prefix = name_space_prefix;
    }
}

void IedgeLicenseManager::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-limit")
    {
        session_limit.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> IedgeLicenseManager::clone_ptr() const
{
    return std::make_shared<IedgeLicenseManager>();
}

std::string IedgeLicenseManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string IedgeLicenseManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function IedgeLicenseManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IedgeLicenseManager::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool IedgeLicenseManager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-limit")
        return true;
    return false;
}

SubManager::SubManager()
    :
    location(this, {"location1"})
{

    yang_name = "sub-manager"; yang_parent_name = "Cisco-IOS-XR-iedge4710-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

SubManager::~SubManager()
{
}

bool SubManager::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool SubManager::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:sub-manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubManager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<SubManager::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubManager::get_children() const
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

void SubManager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubManager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SubManager::clone_ptr() const
{
    return std::make_shared<SubManager>();
}

std::string SubManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SubManager::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SubManager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

SubManager::Location::Location()
    :
    location1{YType::str, "location1"},
    history{YType::empty, "history"}
        ,
    trace(std::make_shared<SubManager::Location::Trace>())
{
    trace->parent = this;

    yang_name = "location"; yang_parent_name = "sub-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

SubManager::Location::~Location()
{
}

bool SubManager::Location::has_data() const
{
    if (is_presence_container) return true;
    return location1.is_set
	|| history.is_set
	|| (trace !=  nullptr && trace->has_data());
}

bool SubManager::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location1.yfilter)
	|| ydk::is_set(history.yfilter)
	|| (trace !=  nullptr && trace->has_operation());
}

std::string SubManager::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:sub-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string SubManager::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location1, "location1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubManager::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location1.is_set || is_set(location1.yfilter)) leaf_name_data.push_back(location1.get_name_leafdata());
    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubManager::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        if(trace == nullptr)
        {
            trace = std::make_shared<SubManager::Location::Trace>();
        }
        return trace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubManager::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trace != nullptr)
    {
        _children["trace"] = trace;
    }

    return _children;
}

void SubManager::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location1")
    {
        location1 = value;
        location1.value_namespace = name_space;
        location1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
}

void SubManager::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location1")
    {
        location1.yfilter = yfilter;
    }
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
}

bool SubManager::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace" || name == "location1" || name == "history")
        return true;
    return false;
}

SubManager::Location::Trace::Trace()
    :
    trace_level{YType::uint32, "trace-level"}
{

    yang_name = "trace"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

SubManager::Location::Trace::~Trace()
{
}

bool SubManager::Location::Trace::has_data() const
{
    if (is_presence_container) return true;
    return trace_level.is_set;
}

bool SubManager::Location::Trace::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trace_level.yfilter);
}

std::string SubManager::Location::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubManager::Location::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trace_level.is_set || is_set(trace_level.yfilter)) leaf_name_data.push_back(trace_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubManager::Location::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubManager::Location::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubManager::Location::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trace-level")
    {
        trace_level = value;
        trace_level.value_namespace = name_space;
        trace_level.value_namespace_prefix = name_space_prefix;
    }
}

void SubManager::Location::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trace-level")
    {
        trace_level.yfilter = yfilter;
    }
}

bool SubManager::Location::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-level")
        return true;
    return false;
}


}
}

