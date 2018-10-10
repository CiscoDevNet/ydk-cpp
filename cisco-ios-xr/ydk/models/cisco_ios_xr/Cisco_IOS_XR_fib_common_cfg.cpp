
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fib_common_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fib_common_cfg {

Fib::Fib()
    :
    auto_hash_recover{YType::boolean, "auto-hash-recover"},
    prefer_aib_routes{YType::boolean, "prefer-aib-routes"},
    encap_sharing_disable{YType::boolean, "encap-sharing-disable"},
    frr_follow_bgp_pic{YType::boolean, "frr-follow-bgp-pic"}
        ,
    pbts_forward_class_fallbacks(std::make_shared<Fib::PbtsForwardClassFallbacks>())
    , platform(std::make_shared<Fib::Platform>())
{
    pbts_forward_class_fallbacks->parent = this;
    platform->parent = this;

    yang_name = "fib"; yang_parent_name = "Cisco-IOS-XR-fib-common-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Fib::~Fib()
{
}

bool Fib::has_data() const
{
    if (is_presence_container) return true;
    return auto_hash_recover.is_set
	|| prefer_aib_routes.is_set
	|| encap_sharing_disable.is_set
	|| frr_follow_bgp_pic.is_set
	|| (pbts_forward_class_fallbacks !=  nullptr && pbts_forward_class_fallbacks->has_data())
	|| (platform !=  nullptr && platform->has_data());
}

bool Fib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_hash_recover.yfilter)
	|| ydk::is_set(prefer_aib_routes.yfilter)
	|| ydk::is_set(encap_sharing_disable.yfilter)
	|| ydk::is_set(frr_follow_bgp_pic.yfilter)
	|| (pbts_forward_class_fallbacks !=  nullptr && pbts_forward_class_fallbacks->has_operation())
	|| (platform !=  nullptr && platform->has_operation());
}

std::string Fib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-common-cfg:fib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_hash_recover.is_set || is_set(auto_hash_recover.yfilter)) leaf_name_data.push_back(auto_hash_recover.get_name_leafdata());
    if (prefer_aib_routes.is_set || is_set(prefer_aib_routes.yfilter)) leaf_name_data.push_back(prefer_aib_routes.get_name_leafdata());
    if (encap_sharing_disable.is_set || is_set(encap_sharing_disable.yfilter)) leaf_name_data.push_back(encap_sharing_disable.get_name_leafdata());
    if (frr_follow_bgp_pic.is_set || is_set(frr_follow_bgp_pic.yfilter)) leaf_name_data.push_back(frr_follow_bgp_pic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbts-forward-class-fallbacks")
    {
        if(pbts_forward_class_fallbacks == nullptr)
        {
            pbts_forward_class_fallbacks = std::make_shared<Fib::PbtsForwardClassFallbacks>();
        }
        return pbts_forward_class_fallbacks;
    }

    if(child_yang_name == "platform")
    {
        if(platform == nullptr)
        {
            platform = std::make_shared<Fib::Platform>();
        }
        return platform;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pbts_forward_class_fallbacks != nullptr)
    {
        children["pbts-forward-class-fallbacks"] = pbts_forward_class_fallbacks;
    }

    if(platform != nullptr)
    {
        children["platform"] = platform;
    }

    return children;
}

void Fib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-hash-recover")
    {
        auto_hash_recover = value;
        auto_hash_recover.value_namespace = name_space;
        auto_hash_recover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer-aib-routes")
    {
        prefer_aib_routes = value;
        prefer_aib_routes.value_namespace = name_space;
        prefer_aib_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-sharing-disable")
    {
        encap_sharing_disable = value;
        encap_sharing_disable.value_namespace = name_space;
        encap_sharing_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-follow-bgp-pic")
    {
        frr_follow_bgp_pic = value;
        frr_follow_bgp_pic.value_namespace = name_space;
        frr_follow_bgp_pic.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-hash-recover")
    {
        auto_hash_recover.yfilter = yfilter;
    }
    if(value_path == "prefer-aib-routes")
    {
        prefer_aib_routes.yfilter = yfilter;
    }
    if(value_path == "encap-sharing-disable")
    {
        encap_sharing_disable.yfilter = yfilter;
    }
    if(value_path == "frr-follow-bgp-pic")
    {
        frr_follow_bgp_pic.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Fib::clone_ptr() const
{
    return std::make_shared<Fib>();
}

std::string Fib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Fib::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Fib::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Fib::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Fib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbts-forward-class-fallbacks" || name == "platform" || name == "auto-hash-recover" || name == "prefer-aib-routes" || name == "encap-sharing-disable" || name == "frr-follow-bgp-pic")
        return true;
    return false;
}

Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallbacks()
    :
    pbts_forward_class_fallback(this, {"forward_class_number"})
{

    yang_name = "pbts-forward-class-fallbacks"; yang_parent_name = "fib"; is_top_level_class = false; has_list_ancestor = false; 
}

Fib::PbtsForwardClassFallbacks::~PbtsForwardClassFallbacks()
{
}

bool Fib::PbtsForwardClassFallbacks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pbts_forward_class_fallback.len(); index++)
    {
        if(pbts_forward_class_fallback[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::PbtsForwardClassFallbacks::has_operation() const
{
    for (std::size_t index=0; index<pbts_forward_class_fallback.len(); index++)
    {
        if(pbts_forward_class_fallback[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fib::PbtsForwardClassFallbacks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-common-cfg:fib/" << get_segment_path();
    return path_buffer.str();
}

std::string Fib::PbtsForwardClassFallbacks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbts-forward-class-fallbacks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::PbtsForwardClassFallbacks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::PbtsForwardClassFallbacks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbts-forward-class-fallback")
    {
        auto c = std::make_shared<Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback>();
        c->parent = this;
        pbts_forward_class_fallback.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::PbtsForwardClassFallbacks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pbts_forward_class_fallback.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Fib::PbtsForwardClassFallbacks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::PbtsForwardClassFallbacks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::PbtsForwardClassFallbacks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbts-forward-class-fallback")
        return true;
    return false;
}

Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::PbtsForwardClassFallback()
    :
    forward_class_number{YType::str, "forward-class-number"},
    fallback_type{YType::enumeration, "fallback-type"},
    fallback_class_number_array{YType::uint32, "fallback-class-number-array"}
{

    yang_name = "pbts-forward-class-fallback"; yang_parent_name = "pbts-forward-class-fallbacks"; is_top_level_class = false; has_list_ancestor = false; 
}

Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::~PbtsForwardClassFallback()
{
}

bool Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : fallback_class_number_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return forward_class_number.is_set
	|| fallback_type.is_set;
}

bool Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::has_operation() const
{
    for (auto const & leaf : fallback_class_number_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(forward_class_number.yfilter)
	|| ydk::is_set(fallback_type.yfilter)
	|| ydk::is_set(fallback_class_number_array.yfilter);
}

std::string Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-common-cfg:fib/pbts-forward-class-fallbacks/" << get_segment_path();
    return path_buffer.str();
}

std::string Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbts-forward-class-fallback";
    ADD_KEY_TOKEN(forward_class_number, "forward-class-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward_class_number.is_set || is_set(forward_class_number.yfilter)) leaf_name_data.push_back(forward_class_number.get_name_leafdata());
    if (fallback_type.is_set || is_set(fallback_type.yfilter)) leaf_name_data.push_back(fallback_type.get_name_leafdata());

    auto fallback_class_number_array_name_datas = fallback_class_number_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fallback_class_number_array_name_datas.begin(), fallback_class_number_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forward-class-number")
    {
        forward_class_number = value;
        forward_class_number.value_namespace = name_space;
        forward_class_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback-type")
    {
        fallback_type = value;
        fallback_type.value_namespace = name_space;
        fallback_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback-class-number-array")
    {
        fallback_class_number_array.append(value);
    }
}

void Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forward-class-number")
    {
        forward_class_number.yfilter = yfilter;
    }
    if(value_path == "fallback-type")
    {
        fallback_type.yfilter = yfilter;
    }
    if(value_path == "fallback-class-number-array")
    {
        fallback_class_number_array.yfilter = yfilter;
    }
}

bool Fib::PbtsForwardClassFallbacks::PbtsForwardClassFallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-class-number" || name == "fallback-type" || name == "fallback-class-number-array")
        return true;
    return false;
}

Fib::Platform::Platform()
    :
    label_switched_multicast(std::make_shared<Fib::Platform::LabelSwitchedMulticast>())
{
    label_switched_multicast->parent = this;

    yang_name = "platform"; yang_parent_name = "fib"; is_top_level_class = false; has_list_ancestor = false; 
}

Fib::Platform::~Platform()
{
}

bool Fib::Platform::has_data() const
{
    if (is_presence_container) return true;
    return (label_switched_multicast !=  nullptr && label_switched_multicast->has_data());
}

bool Fib::Platform::has_operation() const
{
    return is_set(yfilter)
	|| (label_switched_multicast !=  nullptr && label_switched_multicast->has_operation());
}

std::string Fib::Platform::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-common-cfg:fib/" << get_segment_path();
    return path_buffer.str();
}

std::string Fib::Platform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Platform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Platform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-switched-multicast")
    {
        if(label_switched_multicast == nullptr)
        {
            label_switched_multicast = std::make_shared<Fib::Platform::LabelSwitchedMulticast>();
        }
        return label_switched_multicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Platform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(label_switched_multicast != nullptr)
    {
        children["label-switched-multicast"] = label_switched_multicast;
    }

    return children;
}

void Fib::Platform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fib::Platform::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fib::Platform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-switched-multicast")
        return true;
    return false;
}

Fib::Platform::LabelSwitchedMulticast::LabelSwitchedMulticast()
    :
    frr_holdtime{YType::uint32, "frr-holdtime"}
{

    yang_name = "label-switched-multicast"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Fib::Platform::LabelSwitchedMulticast::~LabelSwitchedMulticast()
{
}

bool Fib::Platform::LabelSwitchedMulticast::has_data() const
{
    if (is_presence_container) return true;
    return frr_holdtime.is_set;
}

bool Fib::Platform::LabelSwitchedMulticast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frr_holdtime.yfilter);
}

std::string Fib::Platform::LabelSwitchedMulticast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-common-cfg:fib/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Fib::Platform::LabelSwitchedMulticast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-switched-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fib::Platform::LabelSwitchedMulticast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_holdtime.is_set || is_set(frr_holdtime.yfilter)) leaf_name_data.push_back(frr_holdtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fib::Platform::LabelSwitchedMulticast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fib::Platform::LabelSwitchedMulticast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fib::Platform::LabelSwitchedMulticast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frr-holdtime")
    {
        frr_holdtime = value;
        frr_holdtime.value_namespace = name_space;
        frr_holdtime.value_namespace_prefix = name_space_prefix;
    }
}

void Fib::Platform::LabelSwitchedMulticast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frr-holdtime")
    {
        frr_holdtime.yfilter = yfilter;
    }
}

bool Fib::Platform::LabelSwitchedMulticast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-holdtime")
        return true;
    return false;
}

const Enum::YLeaf FibPbtsFallback::list {1, "list"};
const Enum::YLeaf FibPbtsFallback::any {2, "any"};
const Enum::YLeaf FibPbtsFallback::drop {3, "drop"};

const Enum::YLeaf FibPbtsForwardClass::any {8, "any"};


}
}

