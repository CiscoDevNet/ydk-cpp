
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_flowspec_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_flowspec_cfg {

FlowSpec::FlowSpec()
    :
    enable{YType::empty, "enable"},
    interface_all{YType::empty, "interface-all"}
        ,
    afs(std::make_shared<FlowSpec::Afs>())
    , vrfs(std::make_shared<FlowSpec::Vrfs>())
{
    afs->parent = this;
    vrfs->parent = this;

    yang_name = "flow-spec"; yang_parent_name = "Cisco-IOS-XR-flowspec-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

FlowSpec::~FlowSpec()
{
}

bool FlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| interface_all.is_set
	|| (afs !=  nullptr && afs->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool FlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(interface_all.yfilter)
	|| (afs !=  nullptr && afs->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flowspec-cfg:flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (interface_all.is_set || is_set(interface_all.yfilter)) leaf_name_data.push_back(interface_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<FlowSpec::Afs>();
        }
        return afs;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<FlowSpec::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(afs != nullptr)
    {
        _children["afs"] = afs;
    }

    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    return _children;
}

void FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-all")
    {
        interface_all = value;
        interface_all.value_namespace = name_space;
        interface_all.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "interface-all")
    {
        interface_all.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> FlowSpec::clone_ptr() const
{
    return std::make_shared<FlowSpec>();
}

std::string FlowSpec::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string FlowSpec::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function FlowSpec::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> FlowSpec::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs" || name == "vrfs" || name == "enable" || name == "interface-all")
        return true;
    return false;
}

FlowSpec::Afs::Afs()
    :
    af(this, {"af_name"})
{

    yang_name = "afs"; yang_parent_name = "flow-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

FlowSpec::Afs::~Afs()
{
}

bool FlowSpec::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool FlowSpec::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FlowSpec::Afs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flowspec-cfg:flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string FlowSpec::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FlowSpec::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<FlowSpec::Afs::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FlowSpec::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void FlowSpec::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FlowSpec::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FlowSpec::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

FlowSpec::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    interface_all{YType::empty, "interface-all"}
        ,
    service_policies(std::make_shared<FlowSpec::Afs::Af::ServicePolicies>())
{
    service_policies->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = false; 
}

FlowSpec::Afs::Af::~Af()
{
}

bool FlowSpec::Afs::Af::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| interface_all.is_set
	|| (service_policies !=  nullptr && service_policies->has_data());
}

bool FlowSpec::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(interface_all.yfilter)
	|| (service_policies !=  nullptr && service_policies->has_operation());
}

std::string FlowSpec::Afs::Af::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flowspec-cfg:flow-spec/afs/" << get_segment_path();
    return path_buffer.str();
}

std::string FlowSpec::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (interface_all.is_set || is_set(interface_all.yfilter)) leaf_name_data.push_back(interface_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FlowSpec::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policies")
    {
        if(service_policies == nullptr)
        {
            service_policies = std::make_shared<FlowSpec::Afs::Af::ServicePolicies>();
        }
        return service_policies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FlowSpec::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_policies != nullptr)
    {
        _children["service-policies"] = service_policies;
    }

    return _children;
}

void FlowSpec::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-all")
    {
        interface_all = value;
        interface_all.value_namespace = name_space;
        interface_all.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "interface-all")
    {
        interface_all.yfilter = yfilter;
    }
}

bool FlowSpec::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policies" || name == "af-name" || name == "interface-all")
        return true;
    return false;
}

FlowSpec::Afs::Af::ServicePolicies::ServicePolicies()
    :
    service_policy(this, {"policy_type", "policy_name"})
{

    yang_name = "service-policies"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Afs::Af::ServicePolicies::~ServicePolicies()
{
}

bool FlowSpec::Afs::Af::ServicePolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool FlowSpec::Afs::Af::ServicePolicies::has_operation() const
{
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FlowSpec::Afs::Af::ServicePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Afs::Af::ServicePolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FlowSpec::Afs::Af::ServicePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto ent_ = std::make_shared<FlowSpec::Afs::Af::ServicePolicies::ServicePolicy>();
        ent_->parent = this;
        service_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FlowSpec::Afs::Af::ServicePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void FlowSpec::Afs::Af::ServicePolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FlowSpec::Afs::Af::ServicePolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FlowSpec::Afs::Af::ServicePolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

FlowSpec::Afs::Af::ServicePolicies::ServicePolicy::ServicePolicy()
    :
    policy_type{YType::enumeration, "policy-type"},
    policy_name{YType::str, "policy-name"},
    local{YType::boolean, "local"}
{

    yang_name = "service-policy"; yang_parent_name = "service-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Afs::Af::ServicePolicies::ServicePolicy::~ServicePolicy()
{
}

bool FlowSpec::Afs::Af::ServicePolicies::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return policy_type.is_set
	|| policy_name.is_set
	|| local.is_set;
}

bool FlowSpec::Afs::Af::ServicePolicies::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_type.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string FlowSpec::Afs::Af::ServicePolicies::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    ADD_KEY_TOKEN(policy_type, "policy-type");
    ADD_KEY_TOKEN(policy_name, "policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Afs::Af::ServicePolicies::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_type.is_set || is_set(policy_type.yfilter)) leaf_name_data.push_back(policy_type.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FlowSpec::Afs::Af::ServicePolicies::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FlowSpec::Afs::Af::ServicePolicies::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FlowSpec::Afs::Af::ServicePolicies::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-type")
    {
        policy_type = value;
        policy_type.value_namespace = name_space;
        policy_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::Afs::Af::ServicePolicies::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-type")
    {
        policy_type.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool FlowSpec::Afs::Af::ServicePolicies::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-type" || name == "policy-name" || name == "local")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "flow-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

FlowSpec::Vrfs::~Vrfs()
{
}

bool FlowSpec::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool FlowSpec::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FlowSpec::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flowspec-cfg:flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string FlowSpec::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FlowSpec::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<FlowSpec::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FlowSpec::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void FlowSpec::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FlowSpec::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FlowSpec::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    afs(std::make_shared<FlowSpec::Vrfs::Vrf::Afs>())
{
    afs->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

FlowSpec::Vrfs::Vrf::~Vrf()
{
}

bool FlowSpec::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (afs !=  nullptr && afs->has_data());
}

bool FlowSpec::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string FlowSpec::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flowspec-cfg:flow-spec/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string FlowSpec::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FlowSpec::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<FlowSpec::Vrfs::Vrf::Afs>();
        }
        return afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FlowSpec::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(afs != nullptr)
    {
        _children["afs"] = afs;
    }

    return _children;
}

void FlowSpec::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool FlowSpec::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs" || name == "vrf-name")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Afs()
    :
    af(this, {"af_name"})
{

    yang_name = "afs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::~Afs()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool FlowSpec::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FlowSpec::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FlowSpec::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FlowSpec::Vrfs::Vrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void FlowSpec::Vrfs::Vrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FlowSpec::Vrfs::Vrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FlowSpec::Vrfs::Vrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    interface_all{YType::empty, "interface-all"}
        ,
    service_policies(std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies>())
{
    service_policies->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| interface_all.is_set
	|| (service_policies !=  nullptr && service_policies->has_data());
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(interface_all.yfilter)
	|| (service_policies !=  nullptr && service_policies->has_operation());
}

std::string FlowSpec::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (interface_all.is_set || is_set(interface_all.yfilter)) leaf_name_data.push_back(interface_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FlowSpec::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policies")
    {
        if(service_policies == nullptr)
        {
            service_policies = std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies>();
        }
        return service_policies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FlowSpec::Vrfs::Vrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_policies != nullptr)
    {
        _children["service-policies"] = service_policies;
    }

    return _children;
}

void FlowSpec::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-all")
    {
        interface_all = value;
        interface_all.value_namespace = name_space;
        interface_all.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::Vrfs::Vrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "interface-all")
    {
        interface_all.yfilter = yfilter;
    }
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policies" || name == "af-name" || name == "interface-all")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::ServicePolicies()
    :
    service_policy(this, {"policy_type", "policy_name"})
{

    yang_name = "service-policies"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::~ServicePolicies()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::has_operation() const
{
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto ent_ = std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::ServicePolicy>();
        ent_->parent = this;
        service_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::ServicePolicy::ServicePolicy()
    :
    policy_type{YType::enumeration, "policy-type"},
    policy_name{YType::str, "policy-name"},
    local{YType::boolean, "local"}
{

    yang_name = "service-policy"; yang_parent_name = "service-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::ServicePolicy::~ServicePolicy()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return policy_type.is_set
	|| policy_name.is_set
	|| local.is_set;
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_type.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    ADD_KEY_TOKEN(policy_type, "policy-type");
    ADD_KEY_TOKEN(policy_name, "policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_type.is_set || is_set(policy_type.yfilter)) leaf_name_data.push_back(policy_type.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-type")
    {
        policy_type = value;
        policy_type.value_namespace = name_space;
        policy_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-type")
    {
        policy_type.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::ServicePolicies::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-type" || name == "policy-name" || name == "local")
        return true;
    return false;
}

const Enum::YLeaf FsAddf::ipv4 {1, "ipv4"};
const Enum::YLeaf FsAddf::ipv6 {2, "ipv6"};

const Enum::YLeaf FsVrfAf::ipv4 {1, "ipv4"};
const Enum::YLeaf FsVrfAf::ipv6 {2, "ipv6"};

const Enum::YLeaf FsVrfAfP::pbr {2, "pbr"};

const Enum::YLeaf FsAfP::pbr {2, "pbr"};


}
}

