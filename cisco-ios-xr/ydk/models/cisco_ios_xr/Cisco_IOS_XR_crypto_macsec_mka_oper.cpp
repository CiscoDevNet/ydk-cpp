
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_crypto_macsec_mka_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_macsec_mka_oper {

Macsec::Macsec()
    :
    mka(std::make_shared<Macsec::Mka>())
{
    mka->parent = this;

    yang_name = "macsec"; yang_parent_name = "Cisco-IOS-XR-crypto-macsec-mka-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Macsec::~Macsec()
{
}

bool Macsec::has_data() const
{
    if (is_presence_container) return true;
    return (mka !=  nullptr && mka->has_data());
}

bool Macsec::has_operation() const
{
    return is_set(yfilter)
	|| (mka !=  nullptr && mka->has_operation());
}

std::string Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-oper:macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mka")
    {
        if(mka == nullptr)
        {
            mka = std::make_shared<Macsec::Mka>();
        }
        return mka;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mka != nullptr)
    {
        _children["mka"] = mka;
    }

    return _children;
}

void Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Macsec::clone_ptr() const
{
    return std::make_shared<Macsec>();
}

std::string Macsec::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Macsec::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Macsec::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Macsec::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mka")
        return true;
    return false;
}

Macsec::Mka::Mka()
    :
    interfaces(std::make_shared<Macsec::Mka::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "mka"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = false; 
}

Macsec::Mka::~Mka()
{
}

bool Macsec::Mka::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool Macsec::Mka::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Macsec::Mka::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-oper:macsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Macsec::Mka::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mka";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Macsec::Mka::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Macsec::Mka::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Macsec::Mka::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Macsec::Mka::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interfaces()
    :
    interface(this, {"name"})
{

    yang_name = "interfaces"; yang_parent_name = "mka"; is_top_level_class = false; has_list_ancestor = false; 
}

Macsec::Mka::Interfaces::~Interfaces()
{
}

bool Macsec::Mka::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Macsec::Mka::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Macsec::Mka::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-oper:macsec/mka/" << get_segment_path();
    return path_buffer.str();
}

std::string Macsec::Mka::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Macsec::Mka::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Macsec::Mka::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Macsec::Mka::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Macsec::Mka::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Interface()
    :
    name{YType::str, "name"}
        ,
    session(std::make_shared<Macsec::Mka::Interfaces::Interface::Session>())
    , info(std::make_shared<Macsec::Mka::Interfaces::Interface::Info>())
{
    session->parent = this;
    info->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Macsec::Mka::Interfaces::Interface::~Interface()
{
}

bool Macsec::Mka::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (session !=  nullptr && session->has_data())
	|| (info !=  nullptr && info->has_data());
}

bool Macsec::Mka::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (info !=  nullptr && info->has_operation());
}

std::string Macsec::Mka::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-oper:macsec/mka/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Macsec::Mka::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Macsec::Mka::Interfaces::Interface::Session>();
        }
        return session;
    }

    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Macsec::Mka::Interfaces::Interface::Info>();
        }
        return info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(info != nullptr)
    {
        _children["info"] = info;
    }

    return _children;
}

void Macsec::Mka::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "info" || name == "name")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Session::Session()
    :
    session_summary(std::make_shared<Macsec::Mka::Interfaces::Interface::Session::SessionSummary>())
    , vp(std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Vp>())
    , ca(this, {})
{
    session_summary->parent = this;
    vp->parent = this;

    yang_name = "session"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Session::~Session()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ca.len(); index++)
    {
        if(ca[index]->has_data())
            return true;
    }
    return (session_summary !=  nullptr && session_summary->has_data())
	|| (vp !=  nullptr && vp->has_data());
}

bool Macsec::Mka::Interfaces::Interface::Session::has_operation() const
{
    for (std::size_t index=0; index<ca.len(); index++)
    {
        if(ca[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (session_summary !=  nullptr && session_summary->has_operation())
	|| (vp !=  nullptr && vp->has_operation());
}

std::string Macsec::Mka::Interfaces::Interface::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-summary")
    {
        if(session_summary == nullptr)
        {
            session_summary = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::SessionSummary>();
        }
        return session_summary;
    }

    if(child_yang_name == "vp")
    {
        if(vp == nullptr)
        {
            vp = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Vp>();
        }
        return vp;
    }

    if(child_yang_name == "ca")
    {
        auto ent_ = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Ca>();
        ent_->parent = this;
        ca.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_summary != nullptr)
    {
        _children["session-summary"] = session_summary;
    }

    if(vp != nullptr)
    {
        _children["vp"] = vp;
    }

    count_ = 0;
    for (auto ent_ : ca.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Macsec::Mka::Interfaces::Interface::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Macsec::Mka::Interfaces::Interface::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Macsec::Mka::Interfaces::Interface::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-summary" || name == "vp" || name == "ca")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Session::SessionSummary::SessionSummary()
    :
    interface_name{YType::str, "interface-name"},
    inherited_policy{YType::boolean, "inherited-policy"},
    policy{YType::str, "policy"},
    priority{YType::uint32, "priority"},
    my_mac{YType::str, "my-mac"},
    delay_protection{YType::boolean, "delay-protection"},
    replay_protect{YType::boolean, "replay-protect"},
    window_size{YType::uint32, "window-size"},
    include_icv_indicator{YType::boolean, "include-icv-indicator"},
    confidentiality_offset{YType::uint32, "confidentiality-offset"},
    algo_agility{YType::uint32, "algo-agility"},
    capability{YType::uint32, "capability"},
    mka_cipher_suite{YType::str, "mka-cipher-suite"},
    configured_mac_sec_cipher_suite{YType::str, "configured-mac-sec-cipher-suite"},
    mac_sec_desired{YType::boolean, "mac-sec-desired"}
        ,
    outer_tag(std::make_shared<Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag>())
    , inner_tag(std::make_shared<Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag>())
{
    outer_tag->parent = this;
    inner_tag->parent = this;

    yang_name = "session-summary"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Session::SessionSummary::~SessionSummary()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::SessionSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| inherited_policy.is_set
	|| policy.is_set
	|| priority.is_set
	|| my_mac.is_set
	|| delay_protection.is_set
	|| replay_protect.is_set
	|| window_size.is_set
	|| include_icv_indicator.is_set
	|| confidentiality_offset.is_set
	|| algo_agility.is_set
	|| capability.is_set
	|| mka_cipher_suite.is_set
	|| configured_mac_sec_cipher_suite.is_set
	|| mac_sec_desired.is_set
	|| (outer_tag !=  nullptr && outer_tag->has_data())
	|| (inner_tag !=  nullptr && inner_tag->has_data());
}

bool Macsec::Mka::Interfaces::Interface::Session::SessionSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(inherited_policy.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(my_mac.yfilter)
	|| ydk::is_set(delay_protection.yfilter)
	|| ydk::is_set(replay_protect.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| ydk::is_set(include_icv_indicator.yfilter)
	|| ydk::is_set(confidentiality_offset.yfilter)
	|| ydk::is_set(algo_agility.yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(mka_cipher_suite.yfilter)
	|| ydk::is_set(configured_mac_sec_cipher_suite.yfilter)
	|| ydk::is_set(mac_sec_desired.yfilter)
	|| (outer_tag !=  nullptr && outer_tag->has_operation())
	|| (inner_tag !=  nullptr && inner_tag->has_operation());
}

std::string Macsec::Mka::Interfaces::Interface::Session::SessionSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Session::SessionSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (inherited_policy.is_set || is_set(inherited_policy.yfilter)) leaf_name_data.push_back(inherited_policy.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (my_mac.is_set || is_set(my_mac.yfilter)) leaf_name_data.push_back(my_mac.get_name_leafdata());
    if (delay_protection.is_set || is_set(delay_protection.yfilter)) leaf_name_data.push_back(delay_protection.get_name_leafdata());
    if (replay_protect.is_set || is_set(replay_protect.yfilter)) leaf_name_data.push_back(replay_protect.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());
    if (include_icv_indicator.is_set || is_set(include_icv_indicator.yfilter)) leaf_name_data.push_back(include_icv_indicator.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.yfilter)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());
    if (algo_agility.is_set || is_set(algo_agility.yfilter)) leaf_name_data.push_back(algo_agility.get_name_leafdata());
    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (mka_cipher_suite.is_set || is_set(mka_cipher_suite.yfilter)) leaf_name_data.push_back(mka_cipher_suite.get_name_leafdata());
    if (configured_mac_sec_cipher_suite.is_set || is_set(configured_mac_sec_cipher_suite.yfilter)) leaf_name_data.push_back(configured_mac_sec_cipher_suite.get_name_leafdata());
    if (mac_sec_desired.is_set || is_set(mac_sec_desired.yfilter)) leaf_name_data.push_back(mac_sec_desired.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Session::SessionSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "outer-tag")
    {
        if(outer_tag == nullptr)
        {
            outer_tag = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag>();
        }
        return outer_tag;
    }

    if(child_yang_name == "inner-tag")
    {
        if(inner_tag == nullptr)
        {
            inner_tag = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag>();
        }
        return inner_tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Session::SessionSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(outer_tag != nullptr)
    {
        _children["outer-tag"] = outer_tag;
    }

    if(inner_tag != nullptr)
    {
        _children["inner-tag"] = inner_tag;
    }

    return _children;
}

void Macsec::Mka::Interfaces::Interface::Session::SessionSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inherited-policy")
    {
        inherited_policy = value;
        inherited_policy.value_namespace = name_space;
        inherited_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-mac")
    {
        my_mac = value;
        my_mac.value_namespace = name_space;
        my_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-protection")
    {
        delay_protection = value;
        delay_protection.value_namespace = name_space;
        delay_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replay-protect")
    {
        replay_protect = value;
        replay_protect.value_namespace = name_space;
        replay_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-icv-indicator")
    {
        include_icv_indicator = value;
        include_icv_indicator.value_namespace = name_space;
        include_icv_indicator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
        confidentiality_offset.value_namespace = name_space;
        confidentiality_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algo-agility")
    {
        algo_agility = value;
        algo_agility.value_namespace = name_space;
        algo_agility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mka-cipher-suite")
    {
        mka_cipher_suite = value;
        mka_cipher_suite.value_namespace = name_space;
        mka_cipher_suite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-mac-sec-cipher-suite")
    {
        configured_mac_sec_cipher_suite = value;
        configured_mac_sec_cipher_suite.value_namespace = name_space;
        configured_mac_sec_cipher_suite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-sec-desired")
    {
        mac_sec_desired = value;
        mac_sec_desired.value_namespace = name_space;
        mac_sec_desired.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::Session::SessionSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "inherited-policy")
    {
        inherited_policy.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "my-mac")
    {
        my_mac.yfilter = yfilter;
    }
    if(value_path == "delay-protection")
    {
        delay_protection.yfilter = yfilter;
    }
    if(value_path == "replay-protect")
    {
        replay_protect.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
    if(value_path == "include-icv-indicator")
    {
        include_icv_indicator.yfilter = yfilter;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset.yfilter = yfilter;
    }
    if(value_path == "algo-agility")
    {
        algo_agility.yfilter = yfilter;
    }
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "mka-cipher-suite")
    {
        mka_cipher_suite.yfilter = yfilter;
    }
    if(value_path == "configured-mac-sec-cipher-suite")
    {
        configured_mac_sec_cipher_suite.yfilter = yfilter;
    }
    if(value_path == "mac-sec-desired")
    {
        mac_sec_desired.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::Session::SessionSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outer-tag" || name == "inner-tag" || name == "interface-name" || name == "inherited-policy" || name == "policy" || name == "priority" || name == "my-mac" || name == "delay-protection" || name == "replay-protect" || name == "window-size" || name == "include-icv-indicator" || name == "confidentiality-offset" || name == "algo-agility" || name == "capability" || name == "mka-cipher-suite" || name == "configured-mac-sec-cipher-suite" || name == "mac-sec-desired")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::OuterTag()
    :
    ether_type{YType::uint16, "ether-type"},
    priority{YType::uint8, "priority"},
    cfi{YType::uint8, "cfi"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "outer-tag"; yang_parent_name = "session-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::~OuterTag()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::has_data() const
{
    if (is_presence_container) return true;
    return ether_type.is_set
	|| priority.is_set
	|| cfi.is_set
	|| vlan_id.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(cfi.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outer-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_type.is_set || is_set(ether_type.yfilter)) leaf_name_data.push_back(ether_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (cfi.is_set || is_set(cfi.yfilter)) leaf_name_data.push_back(cfi.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-type")
    {
        ether_type = value;
        ether_type.value_namespace = name_space;
        ether_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfi")
    {
        cfi = value;
        cfi.value_namespace = name_space;
        cfi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-type")
    {
        ether_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "cfi")
    {
        cfi.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-type" || name == "priority" || name == "cfi" || name == "vlan-id")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::InnerTag()
    :
    ether_type{YType::uint16, "ether-type"},
    priority{YType::uint8, "priority"},
    cfi{YType::uint8, "cfi"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "inner-tag"; yang_parent_name = "session-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::~InnerTag()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::has_data() const
{
    if (is_presence_container) return true;
    return ether_type.is_set
	|| priority.is_set
	|| cfi.is_set
	|| vlan_id.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(cfi.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_type.is_set || is_set(ether_type.yfilter)) leaf_name_data.push_back(ether_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (cfi.is_set || is_set(cfi.yfilter)) leaf_name_data.push_back(cfi.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-type")
    {
        ether_type = value;
        ether_type.value_namespace = name_space;
        ether_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfi")
    {
        cfi = value;
        cfi.value_namespace = name_space;
        cfi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-type")
    {
        ether_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "cfi")
    {
        cfi.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-type" || name == "priority" || name == "cfi" || name == "vlan-id")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Session::Vp::Vp()
    :
    my_sci{YType::str, "my-sci"},
    virtual_port_id{YType::uint32, "virtual-port-id"},
    latest_rx{YType::boolean, "latest-rx"},
    latest_tx{YType::boolean, "latest-tx"},
    latest_an{YType::uint32, "latest-an"},
    latest_ki{YType::str, "latest-ki"},
    latest_kn{YType::uint32, "latest-kn"},
    old_rx{YType::boolean, "old-rx"},
    old_tx{YType::boolean, "old-tx"},
    old_an{YType::uint32, "old-an"},
    old_ki{YType::str, "old-ki"},
    old_kn{YType::uint32, "old-kn"},
    wait_time{YType::uint32, "wait-time"},
    retire_time{YType::uint32, "retire-time"},
    macsec_cipher_suite{YType::enumeration, "macsec-cipher-suite"},
    ssci{YType::uint32, "ssci"},
    time_to_sak_rekey{YType::str, "time-to-sak-rekey"}
        ,
    fallback_keepalive(this, {})
{

    yang_name = "vp"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Session::Vp::~Vp()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fallback_keepalive.len(); index++)
    {
        if(fallback_keepalive[index]->has_data())
            return true;
    }
    return my_sci.is_set
	|| virtual_port_id.is_set
	|| latest_rx.is_set
	|| latest_tx.is_set
	|| latest_an.is_set
	|| latest_ki.is_set
	|| latest_kn.is_set
	|| old_rx.is_set
	|| old_tx.is_set
	|| old_an.is_set
	|| old_ki.is_set
	|| old_kn.is_set
	|| wait_time.is_set
	|| retire_time.is_set
	|| macsec_cipher_suite.is_set
	|| ssci.is_set
	|| time_to_sak_rekey.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::has_operation() const
{
    for (std::size_t index=0; index<fallback_keepalive.len(); index++)
    {
        if(fallback_keepalive[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(my_sci.yfilter)
	|| ydk::is_set(virtual_port_id.yfilter)
	|| ydk::is_set(latest_rx.yfilter)
	|| ydk::is_set(latest_tx.yfilter)
	|| ydk::is_set(latest_an.yfilter)
	|| ydk::is_set(latest_ki.yfilter)
	|| ydk::is_set(latest_kn.yfilter)
	|| ydk::is_set(old_rx.yfilter)
	|| ydk::is_set(old_tx.yfilter)
	|| ydk::is_set(old_an.yfilter)
	|| ydk::is_set(old_ki.yfilter)
	|| ydk::is_set(old_kn.yfilter)
	|| ydk::is_set(wait_time.yfilter)
	|| ydk::is_set(retire_time.yfilter)
	|| ydk::is_set(macsec_cipher_suite.yfilter)
	|| ydk::is_set(ssci.yfilter)
	|| ydk::is_set(time_to_sak_rekey.yfilter);
}

std::string Macsec::Mka::Interfaces::Interface::Session::Vp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Session::Vp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (my_sci.is_set || is_set(my_sci.yfilter)) leaf_name_data.push_back(my_sci.get_name_leafdata());
    if (virtual_port_id.is_set || is_set(virtual_port_id.yfilter)) leaf_name_data.push_back(virtual_port_id.get_name_leafdata());
    if (latest_rx.is_set || is_set(latest_rx.yfilter)) leaf_name_data.push_back(latest_rx.get_name_leafdata());
    if (latest_tx.is_set || is_set(latest_tx.yfilter)) leaf_name_data.push_back(latest_tx.get_name_leafdata());
    if (latest_an.is_set || is_set(latest_an.yfilter)) leaf_name_data.push_back(latest_an.get_name_leafdata());
    if (latest_ki.is_set || is_set(latest_ki.yfilter)) leaf_name_data.push_back(latest_ki.get_name_leafdata());
    if (latest_kn.is_set || is_set(latest_kn.yfilter)) leaf_name_data.push_back(latest_kn.get_name_leafdata());
    if (old_rx.is_set || is_set(old_rx.yfilter)) leaf_name_data.push_back(old_rx.get_name_leafdata());
    if (old_tx.is_set || is_set(old_tx.yfilter)) leaf_name_data.push_back(old_tx.get_name_leafdata());
    if (old_an.is_set || is_set(old_an.yfilter)) leaf_name_data.push_back(old_an.get_name_leafdata());
    if (old_ki.is_set || is_set(old_ki.yfilter)) leaf_name_data.push_back(old_ki.get_name_leafdata());
    if (old_kn.is_set || is_set(old_kn.yfilter)) leaf_name_data.push_back(old_kn.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());
    if (retire_time.is_set || is_set(retire_time.yfilter)) leaf_name_data.push_back(retire_time.get_name_leafdata());
    if (macsec_cipher_suite.is_set || is_set(macsec_cipher_suite.yfilter)) leaf_name_data.push_back(macsec_cipher_suite.get_name_leafdata());
    if (ssci.is_set || is_set(ssci.yfilter)) leaf_name_data.push_back(ssci.get_name_leafdata());
    if (time_to_sak_rekey.is_set || is_set(time_to_sak_rekey.yfilter)) leaf_name_data.push_back(time_to_sak_rekey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Session::Vp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback-keepalive")
    {
        auto ent_ = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive>();
        ent_->parent = this;
        fallback_keepalive.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Session::Vp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fallback_keepalive.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Macsec::Mka::Interfaces::Interface::Session::Vp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "my-sci")
    {
        my_sci = value;
        my_sci.value_namespace = name_space;
        my_sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-port-id")
    {
        virtual_port_id = value;
        virtual_port_id.value_namespace = name_space;
        virtual_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latest-rx")
    {
        latest_rx = value;
        latest_rx.value_namespace = name_space;
        latest_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latest-tx")
    {
        latest_tx = value;
        latest_tx.value_namespace = name_space;
        latest_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latest-an")
    {
        latest_an = value;
        latest_an.value_namespace = name_space;
        latest_an.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latest-ki")
    {
        latest_ki = value;
        latest_ki.value_namespace = name_space;
        latest_ki.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latest-kn")
    {
        latest_kn = value;
        latest_kn.value_namespace = name_space;
        latest_kn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-rx")
    {
        old_rx = value;
        old_rx.value_namespace = name_space;
        old_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-tx")
    {
        old_tx = value;
        old_tx.value_namespace = name_space;
        old_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-an")
    {
        old_an = value;
        old_an.value_namespace = name_space;
        old_an.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-ki")
    {
        old_ki = value;
        old_ki.value_namespace = name_space;
        old_ki.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-kn")
    {
        old_kn = value;
        old_kn.value_namespace = name_space;
        old_kn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retire-time")
    {
        retire_time = value;
        retire_time.value_namespace = name_space;
        retire_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsec-cipher-suite")
    {
        macsec_cipher_suite = value;
        macsec_cipher_suite.value_namespace = name_space;
        macsec_cipher_suite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssci")
    {
        ssci = value;
        ssci.value_namespace = name_space;
        ssci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-to-sak-rekey")
    {
        time_to_sak_rekey = value;
        time_to_sak_rekey.value_namespace = name_space;
        time_to_sak_rekey.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::Session::Vp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "my-sci")
    {
        my_sci.yfilter = yfilter;
    }
    if(value_path == "virtual-port-id")
    {
        virtual_port_id.yfilter = yfilter;
    }
    if(value_path == "latest-rx")
    {
        latest_rx.yfilter = yfilter;
    }
    if(value_path == "latest-tx")
    {
        latest_tx.yfilter = yfilter;
    }
    if(value_path == "latest-an")
    {
        latest_an.yfilter = yfilter;
    }
    if(value_path == "latest-ki")
    {
        latest_ki.yfilter = yfilter;
    }
    if(value_path == "latest-kn")
    {
        latest_kn.yfilter = yfilter;
    }
    if(value_path == "old-rx")
    {
        old_rx.yfilter = yfilter;
    }
    if(value_path == "old-tx")
    {
        old_tx.yfilter = yfilter;
    }
    if(value_path == "old-an")
    {
        old_an.yfilter = yfilter;
    }
    if(value_path == "old-ki")
    {
        old_ki.yfilter = yfilter;
    }
    if(value_path == "old-kn")
    {
        old_kn.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
    if(value_path == "retire-time")
    {
        retire_time.yfilter = yfilter;
    }
    if(value_path == "macsec-cipher-suite")
    {
        macsec_cipher_suite.yfilter = yfilter;
    }
    if(value_path == "ssci")
    {
        ssci.yfilter = yfilter;
    }
    if(value_path == "time-to-sak-rekey")
    {
        time_to_sak_rekey.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback-keepalive" || name == "my-sci" || name == "virtual-port-id" || name == "latest-rx" || name == "latest-tx" || name == "latest-an" || name == "latest-ki" || name == "latest-kn" || name == "old-rx" || name == "old-tx" || name == "old-an" || name == "old-ki" || name == "old-kn" || name == "wait-time" || name == "retire-time" || name == "macsec-cipher-suite" || name == "ssci" || name == "time-to-sak-rekey")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::FallbackKeepalive()
    :
    ckn{YType::str, "ckn"},
    mi{YType::str, "mi"},
    mn{YType::uint32, "mn"}
        ,
    peers_status(std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus>())
{
    peers_status->parent = this;

    yang_name = "fallback-keepalive"; yang_parent_name = "vp"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::~FallbackKeepalive()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::has_data() const
{
    if (is_presence_container) return true;
    return ckn.is_set
	|| mi.is_set
	|| mn.is_set
	|| (peers_status !=  nullptr && peers_status->has_data());
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ckn.yfilter)
	|| ydk::is_set(mi.yfilter)
	|| ydk::is_set(mn.yfilter)
	|| (peers_status !=  nullptr && peers_status->has_operation());
}

std::string Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback-keepalive";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ckn.is_set || is_set(ckn.yfilter)) leaf_name_data.push_back(ckn.get_name_leafdata());
    if (mi.is_set || is_set(mi.yfilter)) leaf_name_data.push_back(mi.get_name_leafdata());
    if (mn.is_set || is_set(mn.yfilter)) leaf_name_data.push_back(mn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers-status")
    {
        if(peers_status == nullptr)
        {
            peers_status = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus>();
        }
        return peers_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peers_status != nullptr)
    {
        _children["peers-status"] = peers_status;
    }

    return _children;
}

void Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ckn")
    {
        ckn = value;
        ckn.value_namespace = name_space;
        ckn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mi")
    {
        mi = value;
        mi.value_namespace = name_space;
        mi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mn")
    {
        mn = value;
        mn.value_namespace = name_space;
        mn.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ckn")
    {
        ckn.yfilter = yfilter;
    }
    if(value_path == "mi")
    {
        mi.yfilter = yfilter;
    }
    if(value_path == "mn")
    {
        mn.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers-status" || name == "ckn" || name == "mi" || name == "mn")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::PeersStatus()
    :
    tx_mkpdu_timestamp{YType::str, "tx-mkpdu-timestamp"},
    peer_count{YType::uint32, "peer-count"}
        ,
    peer(this, {})
{

    yang_name = "peers-status"; yang_parent_name = "fallback-keepalive"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::~PeersStatus()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return tx_mkpdu_timestamp.is_set
	|| peer_count.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::has_operation() const
{
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tx_mkpdu_timestamp.yfilter)
	|| ydk::is_set(peer_count.yfilter);
}

std::string Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_mkpdu_timestamp.is_set || is_set(tx_mkpdu_timestamp.yfilter)) leaf_name_data.push_back(tx_mkpdu_timestamp.get_name_leafdata());
    if (peer_count.is_set || is_set(peer_count.yfilter)) leaf_name_data.push_back(peer_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        auto ent_ = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer>();
        ent_->parent = this;
        peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-mkpdu-timestamp")
    {
        tx_mkpdu_timestamp = value;
        tx_mkpdu_timestamp.value_namespace = name_space;
        tx_mkpdu_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-count")
    {
        peer_count = value;
        peer_count.value_namespace = name_space;
        peer_count.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-mkpdu-timestamp")
    {
        tx_mkpdu_timestamp.yfilter = yfilter;
    }
    if(value_path == "peer-count")
    {
        peer_count.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "tx-mkpdu-timestamp" || name == "peer-count")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::Peer()
    :
    sci{YType::str, "sci"}
        ,
    peer_data(std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData>())
{
    peer_data->parent = this;

    yang_name = "peer"; yang_parent_name = "peers-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::~Peer()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::has_data() const
{
    if (is_presence_container) return true;
    return sci.is_set
	|| (peer_data !=  nullptr && peer_data->has_data());
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sci.yfilter)
	|| (peer_data !=  nullptr && peer_data->has_operation());
}

std::string Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sci.is_set || is_set(sci.yfilter)) leaf_name_data.push_back(sci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-data")
    {
        if(peer_data == nullptr)
        {
            peer_data = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData>();
        }
        return peer_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_data != nullptr)
    {
        _children["peer-data"] = peer_data;
    }

    return _children;
}

void Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sci")
    {
        sci = value;
        sci.value_namespace = name_space;
        sci.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sci")
    {
        sci.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-data" || name == "sci")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData::PeerData()
    :
    mi{YType::str, "mi"},
    icv_status{YType::str, "icv-status"},
    icv_check_timestamp{YType::str, "icv-check-timestamp"}
{

    yang_name = "peer-data"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData::~PeerData()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData::has_data() const
{
    if (is_presence_container) return true;
    return mi.is_set
	|| icv_status.is_set
	|| icv_check_timestamp.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi.yfilter)
	|| ydk::is_set(icv_status.yfilter)
	|| ydk::is_set(icv_check_timestamp.yfilter);
}

std::string Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi.is_set || is_set(mi.yfilter)) leaf_name_data.push_back(mi.get_name_leafdata());
    if (icv_status.is_set || is_set(icv_status.yfilter)) leaf_name_data.push_back(icv_status.get_name_leafdata());
    if (icv_check_timestamp.is_set || is_set(icv_check_timestamp.yfilter)) leaf_name_data.push_back(icv_check_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi")
    {
        mi = value;
        mi.value_namespace = name_space;
        mi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icv-status")
    {
        icv_status = value;
        icv_status.value_namespace = name_space;
        icv_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icv-check-timestamp")
    {
        icv_check_timestamp = value;
        icv_check_timestamp.value_namespace = name_space;
        icv_check_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi")
    {
        mi.yfilter = yfilter;
    }
    if(value_path == "icv-status")
    {
        icv_status.yfilter = yfilter;
    }
    if(value_path == "icv-check-timestamp")
    {
        icv_check_timestamp.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::Session::Vp::FallbackKeepalive::PeersStatus::Peer::PeerData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mi" || name == "icv-status" || name == "icv-check-timestamp")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Session::Ca::Ca()
    :
    is_key_server{YType::boolean, "is-key-server"},
    status{YType::uint32, "status"},
    num_live_peers{YType::uint32, "num-live-peers"},
    first_ca{YType::boolean, "first-ca"},
    peer_sci{YType::str, "peer-sci"},
    num_live_peers_responded{YType::uint32, "num-live-peers-responded"},
    ckn{YType::str, "ckn"},
    my_mi{YType::str, "my-mi"},
    my_mn{YType::uint32, "my-mn"},
    authenticator{YType::boolean, "authenticator"},
    status_description{YType::str, "status-description"},
    authentication_mode{YType::str, "authentication-mode"},
    key_chain{YType::str, "key-chain"}
        ,
    peers_status(std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus>())
    , live_peer(this, {})
    , potential_peer(this, {})
    , dormant_peer(this, {})
{
    peers_status->parent = this;

    yang_name = "ca"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Session::Ca::~Ca()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<live_peer.len(); index++)
    {
        if(live_peer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<potential_peer.len(); index++)
    {
        if(potential_peer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dormant_peer.len(); index++)
    {
        if(dormant_peer[index]->has_data())
            return true;
    }
    return is_key_server.is_set
	|| status.is_set
	|| num_live_peers.is_set
	|| first_ca.is_set
	|| peer_sci.is_set
	|| num_live_peers_responded.is_set
	|| ckn.is_set
	|| my_mi.is_set
	|| my_mn.is_set
	|| authenticator.is_set
	|| status_description.is_set
	|| authentication_mode.is_set
	|| key_chain.is_set
	|| (peers_status !=  nullptr && peers_status->has_data());
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::has_operation() const
{
    for (std::size_t index=0; index<live_peer.len(); index++)
    {
        if(live_peer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<potential_peer.len(); index++)
    {
        if(potential_peer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dormant_peer.len(); index++)
    {
        if(dormant_peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_key_server.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(num_live_peers.yfilter)
	|| ydk::is_set(first_ca.yfilter)
	|| ydk::is_set(peer_sci.yfilter)
	|| ydk::is_set(num_live_peers_responded.yfilter)
	|| ydk::is_set(ckn.yfilter)
	|| ydk::is_set(my_mi.yfilter)
	|| ydk::is_set(my_mn.yfilter)
	|| ydk::is_set(authenticator.yfilter)
	|| ydk::is_set(status_description.yfilter)
	|| ydk::is_set(authentication_mode.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (peers_status !=  nullptr && peers_status->has_operation());
}

std::string Macsec::Mka::Interfaces::Interface::Session::Ca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ca";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Session::Ca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_key_server.is_set || is_set(is_key_server.yfilter)) leaf_name_data.push_back(is_key_server.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (num_live_peers.is_set || is_set(num_live_peers.yfilter)) leaf_name_data.push_back(num_live_peers.get_name_leafdata());
    if (first_ca.is_set || is_set(first_ca.yfilter)) leaf_name_data.push_back(first_ca.get_name_leafdata());
    if (peer_sci.is_set || is_set(peer_sci.yfilter)) leaf_name_data.push_back(peer_sci.get_name_leafdata());
    if (num_live_peers_responded.is_set || is_set(num_live_peers_responded.yfilter)) leaf_name_data.push_back(num_live_peers_responded.get_name_leafdata());
    if (ckn.is_set || is_set(ckn.yfilter)) leaf_name_data.push_back(ckn.get_name_leafdata());
    if (my_mi.is_set || is_set(my_mi.yfilter)) leaf_name_data.push_back(my_mi.get_name_leafdata());
    if (my_mn.is_set || is_set(my_mn.yfilter)) leaf_name_data.push_back(my_mn.get_name_leafdata());
    if (authenticator.is_set || is_set(authenticator.yfilter)) leaf_name_data.push_back(authenticator.get_name_leafdata());
    if (status_description.is_set || is_set(status_description.yfilter)) leaf_name_data.push_back(status_description.get_name_leafdata());
    if (authentication_mode.is_set || is_set(authentication_mode.yfilter)) leaf_name_data.push_back(authentication_mode.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Session::Ca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers-status")
    {
        if(peers_status == nullptr)
        {
            peers_status = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus>();
        }
        return peers_status;
    }

    if(child_yang_name == "live-peer")
    {
        auto ent_ = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer>();
        ent_->parent = this;
        live_peer.append(ent_);
        return ent_;
    }

    if(child_yang_name == "potential-peer")
    {
        auto ent_ = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer>();
        ent_->parent = this;
        potential_peer.append(ent_);
        return ent_;
    }

    if(child_yang_name == "dormant-peer")
    {
        auto ent_ = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer>();
        ent_->parent = this;
        dormant_peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Session::Ca::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peers_status != nullptr)
    {
        _children["peers-status"] = peers_status;
    }

    count_ = 0;
    for (auto ent_ : live_peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : potential_peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : dormant_peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-key-server")
    {
        is_key_server = value;
        is_key_server.value_namespace = name_space;
        is_key_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-live-peers")
    {
        num_live_peers = value;
        num_live_peers.value_namespace = name_space;
        num_live_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-ca")
    {
        first_ca = value;
        first_ca.value_namespace = name_space;
        first_ca.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-sci")
    {
        peer_sci = value;
        peer_sci.value_namespace = name_space;
        peer_sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-live-peers-responded")
    {
        num_live_peers_responded = value;
        num_live_peers_responded.value_namespace = name_space;
        num_live_peers_responded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ckn")
    {
        ckn = value;
        ckn.value_namespace = name_space;
        ckn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-mi")
    {
        my_mi = value;
        my_mi.value_namespace = name_space;
        my_mi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-mn")
    {
        my_mn = value;
        my_mn.value_namespace = name_space;
        my_mn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authenticator")
    {
        authenticator = value;
        authenticator.value_namespace = name_space;
        authenticator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-description")
    {
        status_description = value;
        status_description.value_namespace = name_space;
        status_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-mode")
    {
        authentication_mode = value;
        authentication_mode.value_namespace = name_space;
        authentication_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-key-server")
    {
        is_key_server.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "num-live-peers")
    {
        num_live_peers.yfilter = yfilter;
    }
    if(value_path == "first-ca")
    {
        first_ca.yfilter = yfilter;
    }
    if(value_path == "peer-sci")
    {
        peer_sci.yfilter = yfilter;
    }
    if(value_path == "num-live-peers-responded")
    {
        num_live_peers_responded.yfilter = yfilter;
    }
    if(value_path == "ckn")
    {
        ckn.yfilter = yfilter;
    }
    if(value_path == "my-mi")
    {
        my_mi.yfilter = yfilter;
    }
    if(value_path == "my-mn")
    {
        my_mn.yfilter = yfilter;
    }
    if(value_path == "authenticator")
    {
        authenticator.yfilter = yfilter;
    }
    if(value_path == "status-description")
    {
        status_description.yfilter = yfilter;
    }
    if(value_path == "authentication-mode")
    {
        authentication_mode.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers-status" || name == "live-peer" || name == "potential-peer" || name == "dormant-peer" || name == "is-key-server" || name == "status" || name == "num-live-peers" || name == "first-ca" || name == "peer-sci" || name == "num-live-peers-responded" || name == "ckn" || name == "my-mi" || name == "my-mn" || name == "authenticator" || name == "status-description" || name == "authentication-mode" || name == "key-chain")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::PeersStatus()
    :
    tx_mkpdu_timestamp{YType::str, "tx-mkpdu-timestamp"},
    peer_count{YType::uint32, "peer-count"}
        ,
    peer(this, {})
{

    yang_name = "peers-status"; yang_parent_name = "ca"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::~PeersStatus()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return tx_mkpdu_timestamp.is_set
	|| peer_count.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::has_operation() const
{
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tx_mkpdu_timestamp.yfilter)
	|| ydk::is_set(peer_count.yfilter);
}

std::string Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_mkpdu_timestamp.is_set || is_set(tx_mkpdu_timestamp.yfilter)) leaf_name_data.push_back(tx_mkpdu_timestamp.get_name_leafdata());
    if (peer_count.is_set || is_set(peer_count.yfilter)) leaf_name_data.push_back(peer_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        auto ent_ = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer>();
        ent_->parent = this;
        peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-mkpdu-timestamp")
    {
        tx_mkpdu_timestamp = value;
        tx_mkpdu_timestamp.value_namespace = name_space;
        tx_mkpdu_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-count")
    {
        peer_count = value;
        peer_count.value_namespace = name_space;
        peer_count.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-mkpdu-timestamp")
    {
        tx_mkpdu_timestamp.yfilter = yfilter;
    }
    if(value_path == "peer-count")
    {
        peer_count.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "tx-mkpdu-timestamp" || name == "peer-count")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::Peer()
    :
    sci{YType::str, "sci"}
        ,
    peer_data(std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData>())
{
    peer_data->parent = this;

    yang_name = "peer"; yang_parent_name = "peers-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::~Peer()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::has_data() const
{
    if (is_presence_container) return true;
    return sci.is_set
	|| (peer_data !=  nullptr && peer_data->has_data());
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sci.yfilter)
	|| (peer_data !=  nullptr && peer_data->has_operation());
}

std::string Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sci.is_set || is_set(sci.yfilter)) leaf_name_data.push_back(sci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-data")
    {
        if(peer_data == nullptr)
        {
            peer_data = std::make_shared<Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData>();
        }
        return peer_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_data != nullptr)
    {
        _children["peer-data"] = peer_data;
    }

    return _children;
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sci")
    {
        sci = value;
        sci.value_namespace = name_space;
        sci.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sci")
    {
        sci.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-data" || name == "sci")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData::PeerData()
    :
    mi{YType::str, "mi"},
    icv_status{YType::str, "icv-status"},
    icv_check_timestamp{YType::str, "icv-check-timestamp"}
{

    yang_name = "peer-data"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData::~PeerData()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData::has_data() const
{
    if (is_presence_container) return true;
    return mi.is_set
	|| icv_status.is_set
	|| icv_check_timestamp.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi.yfilter)
	|| ydk::is_set(icv_status.yfilter)
	|| ydk::is_set(icv_check_timestamp.yfilter);
}

std::string Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi.is_set || is_set(mi.yfilter)) leaf_name_data.push_back(mi.get_name_leafdata());
    if (icv_status.is_set || is_set(icv_status.yfilter)) leaf_name_data.push_back(icv_status.get_name_leafdata());
    if (icv_check_timestamp.is_set || is_set(icv_check_timestamp.yfilter)) leaf_name_data.push_back(icv_check_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi")
    {
        mi = value;
        mi.value_namespace = name_space;
        mi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icv-status")
    {
        icv_status = value;
        icv_status.value_namespace = name_space;
        icv_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icv-check-timestamp")
    {
        icv_check_timestamp = value;
        icv_check_timestamp.value_namespace = name_space;
        icv_check_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi")
    {
        mi.yfilter = yfilter;
    }
    if(value_path == "icv-status")
    {
        icv_status.yfilter = yfilter;
    }
    if(value_path == "icv-check-timestamp")
    {
        icv_check_timestamp.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::PeersStatus::Peer::PeerData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mi" || name == "icv-status" || name == "icv-check-timestamp")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::LivePeer()
    :
    mi{YType::str, "mi"},
    sci{YType::str, "sci"},
    mn{YType::uint32, "mn"},
    priority{YType::uint32, "priority"},
    ssci{YType::uint32, "ssci"}
{

    yang_name = "live-peer"; yang_parent_name = "ca"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::~LivePeer()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::has_data() const
{
    if (is_presence_container) return true;
    return mi.is_set
	|| sci.is_set
	|| mn.is_set
	|| priority.is_set
	|| ssci.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi.yfilter)
	|| ydk::is_set(sci.yfilter)
	|| ydk::is_set(mn.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(ssci.yfilter);
}

std::string Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "live-peer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi.is_set || is_set(mi.yfilter)) leaf_name_data.push_back(mi.get_name_leafdata());
    if (sci.is_set || is_set(sci.yfilter)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (mn.is_set || is_set(mn.yfilter)) leaf_name_data.push_back(mn.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (ssci.is_set || is_set(ssci.yfilter)) leaf_name_data.push_back(ssci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi")
    {
        mi = value;
        mi.value_namespace = name_space;
        mi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sci")
    {
        sci = value;
        sci.value_namespace = name_space;
        sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mn")
    {
        mn = value;
        mn.value_namespace = name_space;
        mn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssci")
    {
        ssci = value;
        ssci.value_namespace = name_space;
        ssci.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi")
    {
        mi.yfilter = yfilter;
    }
    if(value_path == "sci")
    {
        sci.yfilter = yfilter;
    }
    if(value_path == "mn")
    {
        mn.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "ssci")
    {
        ssci.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mi" || name == "sci" || name == "mn" || name == "priority" || name == "ssci")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::PotentialPeer()
    :
    mi{YType::str, "mi"},
    sci{YType::str, "sci"},
    mn{YType::uint32, "mn"},
    priority{YType::uint32, "priority"},
    ssci{YType::uint32, "ssci"}
{

    yang_name = "potential-peer"; yang_parent_name = "ca"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::~PotentialPeer()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::has_data() const
{
    if (is_presence_container) return true;
    return mi.is_set
	|| sci.is_set
	|| mn.is_set
	|| priority.is_set
	|| ssci.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi.yfilter)
	|| ydk::is_set(sci.yfilter)
	|| ydk::is_set(mn.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(ssci.yfilter);
}

std::string Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "potential-peer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi.is_set || is_set(mi.yfilter)) leaf_name_data.push_back(mi.get_name_leafdata());
    if (sci.is_set || is_set(sci.yfilter)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (mn.is_set || is_set(mn.yfilter)) leaf_name_data.push_back(mn.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (ssci.is_set || is_set(ssci.yfilter)) leaf_name_data.push_back(ssci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi")
    {
        mi = value;
        mi.value_namespace = name_space;
        mi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sci")
    {
        sci = value;
        sci.value_namespace = name_space;
        sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mn")
    {
        mn = value;
        mn.value_namespace = name_space;
        mn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssci")
    {
        ssci = value;
        ssci.value_namespace = name_space;
        ssci.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi")
    {
        mi.yfilter = yfilter;
    }
    if(value_path == "sci")
    {
        sci.yfilter = yfilter;
    }
    if(value_path == "mn")
    {
        mn.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "ssci")
    {
        ssci.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mi" || name == "sci" || name == "mn" || name == "priority" || name == "ssci")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::DormantPeer()
    :
    mi{YType::str, "mi"},
    sci{YType::str, "sci"},
    mn{YType::uint32, "mn"},
    priority{YType::uint32, "priority"},
    ssci{YType::uint32, "ssci"}
{

    yang_name = "dormant-peer"; yang_parent_name = "ca"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::~DormantPeer()
{
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::has_data() const
{
    if (is_presence_container) return true;
    return mi.is_set
	|| sci.is_set
	|| mn.is_set
	|| priority.is_set
	|| ssci.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi.yfilter)
	|| ydk::is_set(sci.yfilter)
	|| ydk::is_set(mn.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(ssci.yfilter);
}

std::string Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dormant-peer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi.is_set || is_set(mi.yfilter)) leaf_name_data.push_back(mi.get_name_leafdata());
    if (sci.is_set || is_set(sci.yfilter)) leaf_name_data.push_back(sci.get_name_leafdata());
    if (mn.is_set || is_set(mn.yfilter)) leaf_name_data.push_back(mn.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (ssci.is_set || is_set(ssci.yfilter)) leaf_name_data.push_back(ssci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi")
    {
        mi = value;
        mi.value_namespace = name_space;
        mi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sci")
    {
        sci = value;
        sci.value_namespace = name_space;
        sci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mn")
    {
        mn = value;
        mn.value_namespace = name_space;
        mn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssci")
    {
        ssci = value;
        ssci.value_namespace = name_space;
        ssci.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi")
    {
        mi.yfilter = yfilter;
    }
    if(value_path == "sci")
    {
        sci.yfilter = yfilter;
    }
    if(value_path == "mn")
    {
        mn.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "ssci")
    {
        ssci.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mi" || name == "sci" || name == "mn" || name == "priority" || name == "ssci")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Info::Info()
    :
    interface_summary(std::make_shared<Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary>())
{
    interface_summary->parent = this;

    yang_name = "info"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Info::~Info()
{
}

bool Macsec::Mka::Interfaces::Interface::Info::has_data() const
{
    if (is_presence_container) return true;
    return (interface_summary !=  nullptr && interface_summary->has_data());
}

bool Macsec::Mka::Interfaces::Interface::Info::has_operation() const
{
    return is_set(yfilter)
	|| (interface_summary !=  nullptr && interface_summary->has_operation());
}

std::string Macsec::Mka::Interfaces::Interface::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-summary")
    {
        if(interface_summary == nullptr)
        {
            interface_summary = std::make_shared<Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary>();
        }
        return interface_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_summary != nullptr)
    {
        _children["interface-summary"] = interface_summary;
    }

    return _children;
}

void Macsec::Mka::Interfaces::Interface::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Macsec::Mka::Interfaces::Interface::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Macsec::Mka::Interfaces::Interface::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-summary")
        return true;
    return false;
}

Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary::InterfaceSummary()
    :
    interface_name{YType::str, "interface-name"},
    short_name{YType::str, "short-name"},
    key_chain{YType::str, "key-chain"},
    policy{YType::str, "policy"},
    macsec_svc_port{YType::boolean, "macsec-svc-port"},
    macsec_svc_port_type{YType::enumeration, "macsec-svc-port-type"},
    svcport_short_name{YType::str, "svcport-short-name"},
    mka_mode{YType::enumeration, "mka-mode"},
    fallback_keychain{YType::str, "fallback-keychain"},
    macsec_shutdown{YType::boolean, "macsec-shutdown"}
{

    yang_name = "interface-summary"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = true; 
}

Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary::~InterfaceSummary()
{
}

bool Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| short_name.is_set
	|| key_chain.is_set
	|| policy.is_set
	|| macsec_svc_port.is_set
	|| macsec_svc_port_type.is_set
	|| svcport_short_name.is_set
	|| mka_mode.is_set
	|| fallback_keychain.is_set
	|| macsec_shutdown.is_set;
}

bool Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(short_name.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(macsec_svc_port.yfilter)
	|| ydk::is_set(macsec_svc_port_type.yfilter)
	|| ydk::is_set(svcport_short_name.yfilter)
	|| ydk::is_set(mka_mode.yfilter)
	|| ydk::is_set(fallback_keychain.yfilter)
	|| ydk::is_set(macsec_shutdown.yfilter);
}

std::string Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (short_name.is_set || is_set(short_name.yfilter)) leaf_name_data.push_back(short_name.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (macsec_svc_port.is_set || is_set(macsec_svc_port.yfilter)) leaf_name_data.push_back(macsec_svc_port.get_name_leafdata());
    if (macsec_svc_port_type.is_set || is_set(macsec_svc_port_type.yfilter)) leaf_name_data.push_back(macsec_svc_port_type.get_name_leafdata());
    if (svcport_short_name.is_set || is_set(svcport_short_name.yfilter)) leaf_name_data.push_back(svcport_short_name.get_name_leafdata());
    if (mka_mode.is_set || is_set(mka_mode.yfilter)) leaf_name_data.push_back(mka_mode.get_name_leafdata());
    if (fallback_keychain.is_set || is_set(fallback_keychain.yfilter)) leaf_name_data.push_back(fallback_keychain.get_name_leafdata());
    if (macsec_shutdown.is_set || is_set(macsec_shutdown.yfilter)) leaf_name_data.push_back(macsec_shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-name")
    {
        short_name = value;
        short_name.value_namespace = name_space;
        short_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsec-svc-port")
    {
        macsec_svc_port = value;
        macsec_svc_port.value_namespace = name_space;
        macsec_svc_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsec-svc-port-type")
    {
        macsec_svc_port_type = value;
        macsec_svc_port_type.value_namespace = name_space;
        macsec_svc_port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svcport-short-name")
    {
        svcport_short_name = value;
        svcport_short_name.value_namespace = name_space;
        svcport_short_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mka-mode")
    {
        mka_mode = value;
        mka_mode.value_namespace = name_space;
        mka_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback-keychain")
    {
        fallback_keychain = value;
        fallback_keychain.value_namespace = name_space;
        fallback_keychain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsec-shutdown")
    {
        macsec_shutdown = value;
        macsec_shutdown.value_namespace = name_space;
        macsec_shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "short-name")
    {
        short_name.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "macsec-svc-port")
    {
        macsec_svc_port.yfilter = yfilter;
    }
    if(value_path == "macsec-svc-port-type")
    {
        macsec_svc_port_type.yfilter = yfilter;
    }
    if(value_path == "svcport-short-name")
    {
        svcport_short_name.yfilter = yfilter;
    }
    if(value_path == "mka-mode")
    {
        mka_mode.yfilter = yfilter;
    }
    if(value_path == "fallback-keychain")
    {
        fallback_keychain.yfilter = yfilter;
    }
    if(value_path == "macsec-shutdown")
    {
        macsec_shutdown.yfilter = yfilter;
    }
}

bool Macsec::Mka::Interfaces::Interface::Info::InterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "short-name" || name == "key-chain" || name == "policy" || name == "macsec-svc-port" || name == "macsec-svc-port-type" || name == "svcport-short-name" || name == "mka-mode" || name == "fallback-keychain" || name == "macsec-shutdown")
        return true;
    return false;
}

const Enum::YLeaf MkaAuthenticationMode::auth_mode_invalid {0, "auth-mode-invalid"};
const Enum::YLeaf MkaAuthenticationMode::auth_mode_psk {1, "auth-mode-psk"};
const Enum::YLeaf MkaAuthenticationMode::auth_mode_eap {2, "auth-mode-eap"};

const Enum::YLeaf MacsecServicePort::macsec_service_port_none {0, "macsec-service-port-none"};
const Enum::YLeaf MacsecServicePort::macsec_service_port_encryption {1, "macsec-service-port-encryption"};
const Enum::YLeaf MacsecServicePort::macsec_service_port_decryption {2, "macsec-service-port-decryption"};

const Enum::YLeaf MacsecCipherSuite::cipher_suite_none {0, "cipher-suite-none"};
const Enum::YLeaf MacsecCipherSuite::cipher_suite_gcm_aes_128 {1, "cipher-suite-gcm-aes-128"};
const Enum::YLeaf MacsecCipherSuite::cipher_suite_gcm_aes_256 {2, "cipher-suite-gcm-aes-256"};
const Enum::YLeaf MacsecCipherSuite::cipher_suite_gcm_aes_128_xpn {3, "cipher-suite-gcm-aes-128-xpn"};
const Enum::YLeaf MacsecCipherSuite::cipher_suite_gcm_aes_256_xpn {4, "cipher-suite-gcm-aes-256-xpn"};


}
}

