
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_217.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::WebFilter()
    :
    url(std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url>())
{
    url->parent = this;

    yang_name = "web-filter"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::~WebFilter()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::has_data() const
{
    return (url !=  nullptr && url->has_data());
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::has_operation() const
{
    return is_set(yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url")
        return true;
    return false;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::Url()
    :
    profile{YType::str, "profile"}
{

    yang_name = "url"; yang_parent_name = "web-filter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::~Url()
{
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::has_data() const
{
    return profile.is_set;
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::UtdMt::Utd::Engine::Standard::MultiTenancy::Policy::WebFilter::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Voice::Voice()
{

    yang_name = "voice"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Voice::~Voice()
{
}

bool Native::Voice::has_data() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Voice::has_operation() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Voice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-voice:voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service")
    {
        auto c = std::make_shared<Native::Voice::Service>();
        c->parent = this;
        service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : service)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service")
        return true;
    return false;
}

Native::Voice::Service::Service()
    :
    type{YType::enumeration, "type"}
    	,
    fax(std::make_shared<Native::Voice::Service::Fax>())
{
    fax->parent = this;

    yang_name = "service"; yang_parent_name = "voice"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Voice::Service::~Service()
{
}

bool Native::Voice::Service::has_data() const
{
    return type.is_set
	|| (fax !=  nullptr && fax->has_data());
}

bool Native::Voice::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (fax !=  nullptr && fax->has_operation());
}

std::string Native::Voice::Service::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-voice:voice/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Voice::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Voice::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Voice::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fax")
    {
        if(fax == nullptr)
        {
            fax = std::make_shared<Native::Voice::Service::Fax>();
        }
        return fax;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Voice::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fax != nullptr)
    {
        children["fax"] = fax;
    }

    return children;
}

void Native::Voice::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Voice::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Voice::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fax" || name == "type")
        return true;
    return false;
}

Native::Voice::Service::Fax::Fax()
    :
    protocol{YType::enumeration, "protocol"},
    fallback{YType::enumeration, "fallback"},
    codec{YType::enumeration, "codec"},
    ls_redundancy{YType::uint8, "ls-redundancy"},
    hs_redundancy{YType::uint8, "hs-redundancy"},
    version{YType::enumeration, "version"}
{

    yang_name = "fax"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Voice::Service::Fax::~Fax()
{
}

bool Native::Voice::Service::Fax::has_data() const
{
    return protocol.is_set
	|| fallback.is_set
	|| codec.is_set
	|| ls_redundancy.is_set
	|| hs_redundancy.is_set
	|| version.is_set;
}

bool Native::Voice::Service::Fax::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(codec.yfilter)
	|| ydk::is_set(ls_redundancy.yfilter)
	|| ydk::is_set(hs_redundancy.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Voice::Service::Fax::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fax";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Voice::Service::Fax::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (codec.is_set || is_set(codec.yfilter)) leaf_name_data.push_back(codec.get_name_leafdata());
    if (ls_redundancy.is_set || is_set(ls_redundancy.yfilter)) leaf_name_data.push_back(ls_redundancy.get_name_leafdata());
    if (hs_redundancy.is_set || is_set(hs_redundancy.yfilter)) leaf_name_data.push_back(hs_redundancy.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Voice::Service::Fax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Voice::Service::Fax::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Voice::Service::Fax::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "codec")
    {
        codec = value;
        codec.value_namespace = name_space;
        codec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-redundancy")
    {
        ls_redundancy = value;
        ls_redundancy.value_namespace = name_space;
        ls_redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hs-redundancy")
    {
        hs_redundancy = value;
        hs_redundancy.value_namespace = name_space;
        hs_redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Voice::Service::Fax::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "codec")
    {
        codec.yfilter = yfilter;
    }
    if(value_path == "ls-redundancy")
    {
        ls_redundancy.yfilter = yfilter;
    }
    if(value_path == "hs-redundancy")
    {
        hs_redundancy.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Voice::Service::Fax::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "fallback" || name == "codec" || name == "ls-redundancy" || name == "hs-redundancy" || name == "version")
        return true;
    return false;
}

Native::VoiceCard::VoiceCard()
    :
    slot{YType::uint8, "slot"}
{

    yang_name = "voice-card"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::VoiceCard::~VoiceCard()
{
}

bool Native::VoiceCard::has_data() const
{
    return slot.is_set;
}

bool Native::VoiceCard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot.yfilter);
}

std::string Native::VoiceCard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::VoiceCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-voice:voice-card" <<"[slot='" <<slot <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VoiceCard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VoiceCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VoiceCard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::VoiceCard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VoiceCard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
}

bool Native::VoiceCard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

Native::Vpdn::Vpdn()
    :
    authen_before_forward{YType::empty, "authen-before-forward"},
    enable{YType::empty, "enable"},
    search_order{YType::enumeration, "search-order"}
{

    yang_name = "vpdn"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vpdn::~Vpdn()
{
}

bool Native::Vpdn::has_data() const
{
    for (auto const & leaf : search_order.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authen_before_forward.is_set
	|| enable.is_set;
}

bool Native::Vpdn::has_operation() const
{
    for (auto const & leaf : search_order.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authen_before_forward.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(search_order.yfilter);
}

std::string Native::Vpdn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vpdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vpdn:vpdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vpdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_before_forward.is_set || is_set(authen_before_forward.yfilter)) leaf_name_data.push_back(authen_before_forward.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    auto search_order_name_datas = search_order.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), search_order_name_datas.begin(), search_order_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vpdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vpdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vpdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authen-before-forward")
    {
        authen_before_forward = value;
        authen_before_forward.value_namespace = name_space;
        authen_before_forward.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "search-order")
    {
        search_order.append(value);
    }
}

void Native::Vpdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authen-before-forward")
    {
        authen_before_forward.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "search-order")
    {
        search_order.yfilter = yfilter;
    }
}

bool Native::Vpdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authen-before-forward" || name == "enable" || name == "search-order")
        return true;
    return false;
}

Native::Vstack::Vstack()
    :
    director{YType::str, "director"}
{

    yang_name = "vstack"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vstack::~Vstack()
{
}

bool Native::Vstack::has_data() const
{
    return director.is_set;
}

bool Native::Vstack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(director.yfilter);
}

std::string Native::Vstack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vstack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vstack:vstack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vstack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (director.is_set || is_set(director.yfilter)) leaf_name_data.push_back(director.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vstack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vstack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vstack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "director")
    {
        director = value;
        director.value_namespace = name_space;
        director.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vstack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "director")
    {
        director.yfilter = yfilter;
    }
}

bool Native::Vstack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "director")
        return true;
    return false;
}

const Enum::YLeaf Native::Voice::Service::Type::pots {0, "pots"};
const Enum::YLeaf Native::Voice::Service::Type::saf {1, "saf"};
const Enum::YLeaf Native::Voice::Service::Type::voatm {2, "voatm"};
const Enum::YLeaf Native::Voice::Service::Type::vofr {3, "vofr"};
const Enum::YLeaf Native::Voice::Service::Type::voip {4, "voip"};

const Enum::YLeaf Native::Voice::Service::Fax::Protocol::cisco {0, "cisco"};
const Enum::YLeaf Native::Voice::Service::Fax::Protocol::none {1, "none"};
const Enum::YLeaf Native::Voice::Service::Fax::Protocol::pass_through {2, "pass-through"};
const Enum::YLeaf Native::Voice::Service::Fax::Protocol::t38 {3, "t38"};

const Enum::YLeaf Native::Voice::Service::Fax::Fallback::cisco {0, "cisco"};
const Enum::YLeaf Native::Voice::Service::Fax::Fallback::none {1, "none"};
const Enum::YLeaf Native::Voice::Service::Fax::Fallback::pass_through {2, "pass-through"};

const Enum::YLeaf Native::Voice::Service::Fax::Codec::g711alaw {0, "g711alaw"};
const Enum::YLeaf Native::Voice::Service::Fax::Codec::g711ulaw {1, "g711ulaw"};

const Enum::YLeaf Native::Voice::Service::Fax::Version::Y_0 {0, "0"};
const Enum::YLeaf Native::Voice::Service::Fax::Version::Y_3 {1, "3"};

const Enum::YLeaf Native::Vpdn::SearchOrder::dnis {0, "dnis"};
const Enum::YLeaf Native::Vpdn::SearchOrder::domain {1, "domain"};
const Enum::YLeaf Native::Vpdn::SearchOrder::multihop_hostname {2, "multihop-hostname"};


}
}

